#include "DialogsModel.hpp"

#include "Client.hpp"
#include "DataStorage.hpp"
#include "Debug.hpp"
#include "MessagingApi.hpp"
#include "DialogList.hpp"
#include "PendingOperation.hpp"

#include "DeclarativeClient.hpp"

#include "ContactsApi.hpp"
#include "ContactList.hpp"

#include <QDateTime>

#include <QDebug>

#define CONTACTLIST_AS_DIALOGS

namespace Telegram {

namespace Client {

static const int UserRoleOffset = Qt::UserRole + 1;

DialogsModel::DialogsModel(QObject *parent) :
    QAbstractTableModel(parent)
{
}

QHash<int, QByteArray> DialogsModel::roleNames() const
{
    static const QHash<int, QByteArray> extraRoles {
        { UserRoleOffset + static_cast<int>(Role::Peer), "peer" },
        { UserRoleOffset + static_cast<int>(Role::DisplayName), "displayName" },
        { UserRoleOffset + static_cast<int>(Role::UnreadMessageCount), "unreadMessageCount" },
        { UserRoleOffset + static_cast<int>(Role::LastMessage), "lastMessage" },
        { UserRoleOffset + static_cast<int>(Role::FormattedLastMessage), "formattedLastMessage" },
    };

    return extraRoles;
}

bool DialogsModel::hasPeer(const Peer peer) const
{
    return true;
}

QString DialogsModel::getName(const Peer peer) const
{
    return QString();
}

int DialogsModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid()) {
        return 0;
    }
    return static_cast<int>(Column::Count);
}

int DialogsModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) {
        return 0;
    }
    return m_dialogs.count();
}

QVariant DialogsModel::data(const QModelIndex &index, int role) const
{
    const Role r = indexToRole(index, role);
    return getData(index.row(), r);
}

QVariant DialogsModel::getData(int index, DialogsModel::Role role) const
{
    if (index < 0 || index >= m_dialogs.count()) {
        return QVariant();
    }
    const DialogEntry dialog = m_dialogs.at(index);

    switch (role) {
    case Role::Peer:
        return QVariant::fromValue(dialog.peer);
    case Role::PeerTypeIcon:
        return QVariant::fromValue(dialog.typeIcon);
    case Role::DisplayName:
        return dialog.name;
    case Role::UnreadMessageCount:
        return dialog.unreadCount;
    case Role::FormattedLastMessage:
        return dialog.formattedLastMessage;
    case Role::LastMessage:
        return getDialogLastMessageData(dialog);
    case Role::Picture:
    case Role::MuteUntil:
    case Role::MuteUntilDate:
        // invalid roles
    case Role::Count:
    case Role::Invalid:
        return QVariant();
    }
    Q_UNREACHABLE();
    return QVariant();
}

QVariantMap DialogsModel::getDialogLastMessageData(const DialogEntry &dialog) const
{
    if (dialog.lastChatMessage.id == 0) {
        return {};
    }
    QString text;
    if (dialog.lastChatMessage.type == TelegramNamespace::MessageTypeText) {
        text = dialog.lastChatMessage.text;
    } else {
        Telegram::MessageMediaInfo info;
        client()->dataStorage()->getMessageMediaInfo(&info, dialog.peer, dialog.lastChatMessage.id);
        switch (dialog.lastChatMessage.type) {
        case TelegramNamespace::MessageTypeWebPage:
            text = dialog.lastChatMessage.text;
            //text = info.url();
            break;
        case TelegramNamespace::MessageTypeSticker:
            text = info.alt();
            break;
        case TelegramNamespace::MessageTypeDocument:
            text = info.documentFileName();
            break;
        default:
            text = info.caption();
            break;
        }
    }

    return {
        { "type", static_cast<int>(dialog.lastChatMessage.type) },
        { "text", text },
        { "flags", static_cast<int>(dialog.lastChatMessage.flags / 2) },
    };
}

void DialogsModel::setQmlClient(DeclarativeClient *target)
{
    m_qmlClient = target;
    emit clientChanged();
}

void DialogsModel::populate()
{
    m_list = client()->messagingApi()->getDialogList();
#ifdef CONTACTLIST_AS_DIALOGS
    m_list2 = client()->contactsApi()->getContactList();
    m_list->becomeReady();
    connect(m_list2->becomeReady(), &Telegram::PendingOperation::finished, this, &DialogsModel::onListReady);
    if (m_list2->isReady()) {
        onListReady();
    }
#else
    connect(m_list->becomeReady(), &Telegram::PendingOperation::finished, this, &DialogsModel::onListReady);
    if (m_list->isReady()) {
        onListReady();
    }
#endif
}

QString getPeerAlias(const Telegram::Peer &peer, const Telegram::Client::Client *client)
{
    if (peer.type == Telegram::Peer::Type::User) {
        Telegram::UserInfo info;
        if (client->dataStorage()->getUserInfo(&info, peer.id)) {
            if (!info.phone().isEmpty()) {
                return info.phone();
            }
            QString name;
            if (!info.firstName().isEmpty()) {
                name = info.firstName();
            }
            if (!info.lastName().isEmpty()) {
                if (!name.isEmpty()) {
                    name += QLatin1Char(' ') + info.lastName();
                } else {
                    name = info.lastName();
                }
            }

            if (!name.simplified().isEmpty()) {
                return name;
            }

            if (!info.userName().isEmpty()) {
                return info.userName();
            }
        }
    } else {
        Telegram::ChatInfo info;
        if (client->dataStorage()->getChatInfo(&info, peer.id)) {
            return info.title();
        }
    }
    return peer.toString();
}

void DialogsModel::onListReady()
{
    qWarning() << Q_FUNC_INFO;
#ifdef CONTACTLIST_AS_DIALOGS
    connect(m_list2, &ContactList::listChanged, this, &DialogsModel::onListChanged);
#else
    connect(m_list, &DialogList::listChanged, this, &DialogsModel::onListChanged);
#endif // CONTACTLIST_AS_DIALOGS
    beginResetModel();
    m_dialogs.clear();
#ifdef CONTACTLIST_AS_DIALOGS
    const QVector<Telegram::Peer> peers = m_list2->peers();
#else
    const QVector<Telegram::Peer> peers = m_list->peers();
#endif // CONTACTLIST_AS_DIALOGS
    for (const Telegram::Peer &peer : peers) {
        addPeer(peer);
    }
#ifdef CONTACTLIST_AS_DIALOGS
    addPeer(Peer::fromUserId(client()->dataStorage()->selfUserId()));
#endif // CONTACTLIST_AS_DIALOGS
    endResetModel();
}

void DialogsModel::onListChanged(const PeerList &added, const PeerList &removed)
{
    if (!removed.isEmpty()) {
        qWarning() << Q_FUNC_INFO << "Unimplemented argument";
    }
    if (!added.isEmpty()) {
        beginInsertRows(QModelIndex(), m_dialogs.count(), m_dialogs.count() + added.count() - 1);
        for (const Peer &p : added) {
            addPeer(p);
        }
        endInsertRows();
    }
}

void DialogsModel::addPeer(const Peer &peer)
{
    Client *c = client();
    DialogEntry d;
    d.name = getPeerAlias(peer, c);
    d.peer = peer;

    Telegram::DialogInfo apiInfo;
    if (c->dataStorage()->getDialogInfo(&apiInfo, peer)) {
        d.unreadCount = apiInfo.unreadCount();

        quint32 messageId = apiInfo.lastMessageId();
        Message message;
        c->dataStorage()->getMessage(&message, peer, messageId);
        d.lastChatMessage = message;
    } else {
        qDebug() << Q_FUNC_INFO << "Peer" << peer << "has no dialog info in storage";
    }

    m_dialogs << d;
}

DialogsModel::Role DialogsModel::intToRole(int value)
{
    if (value < 0 || value > static_cast<int>(Role::Count)) {
        return Role::Invalid;
    }
    return static_cast<Role>(value);
}

DialogsModel::Column DialogsModel::intToColumn(int value)
{
    if (value < 0 || value > static_cast<int>(Column::Count)) {
        return Column::Invalid;
    }
    return static_cast<Column>(value);
}

DialogsModel::Role DialogsModel::indexToRole(const QModelIndex &index, int role)
{
    if (role >= UserRoleOffset) {
        return intToRole(role - UserRoleOffset);
    }
    //const Column section = intToColumn(index.column());
    return Role::Invalid;
}

} // Client namespace

} // Telegram namespace
