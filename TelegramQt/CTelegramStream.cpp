/*
   Copyright (C) 2014-2017 Alexandr Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#include "CTelegramStream_p.hpp"

#include <QIODevice>
#include <QDebug>

template CTelegramStream &CTelegramStream::operator>>(TLVector<qint32> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<quint32> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<qint64> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<quint64> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<QString> &v);

template CTelegramStream &CTelegramStream::operator<<(const TLVector<qint32> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<quint32> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<qint64> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<quint64> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<QString> &v);

template CTelegramStream &CTelegramStream::operator>>(TLNumber128 &v);
template CTelegramStream &CTelegramStream::operator>>(TLNumber256 &v);

template CTelegramStream &CTelegramStream::operator<<(const TLNumber128 &v);
template CTelegramStream &CTelegramStream::operator<<(const TLNumber256 &v);

// Generated vector read templates instancing
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLAuthorization> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPrivacyRule> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLUser> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLWallPaper> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLContactBlocked> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLContact> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLContactStatus> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLImportedContact> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLChat> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPeer> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLDcOption> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLDisabledFeature> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLMessageEntity> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLUpdate> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLStickerSet> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLDialog> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLMessage> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLDocumentAttribute> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLBotInlineResult> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLDocument> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLStickerPack> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLReceivedNotifyMessage> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLFoundGif> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLEncryptedMessage> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLBotCommand> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLChatParticipant> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLKeyboardButton> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPhotoSize> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLMessageRange> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputUser> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLKeyboardButtonRow> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLChannelParticipant> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLBotInfo> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPhoto> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputPrivacyRule> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputChannel> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputContact> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputAppEvent> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputBotInlineResult> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputPhoto> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLChannelAdminLogEvent> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLTopPeerCategoryPeers> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPopularContact> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLCdnPublicKey> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLRecentMeUrl> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLStickerSetCovered> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLHighScore> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLCdnFileHash> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLFutureSalt> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLRichText> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLLabeledPrice> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLTopPeer> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLIpPort> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLLangPackString> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLShippingOption> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputDocument> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPageBlock> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLPhoneConnection> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputPeer> &v);
template CTelegramStream &CTelegramStream::operator>>(TLVector<TLInputStickerSetItem> &v);
// End of generated vector read templates instancing

// Generated vector write templates instancing
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputPrivacyRule> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputChannel> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputUser> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputContact> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputAppEvent> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLMessageEntity> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputBotInlineResult> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputPhoto> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLDocumentAttribute> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLKeyboardButtonRow> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLMessageRange> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLKeyboardButton> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputPeer> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLShippingOption> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputStickerSetItem> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLInputDocument> &v);
template CTelegramStream &CTelegramStream::operator<<(const TLVector<TLLabeledPrice> &v);
// End of generated vector write templates instancing

template <int Size>
CTelegramStream &CTelegramStream::operator>>(TLNumber<Size> &n)
{
    read(n.data, Size / 8);
    return *this;
}

template <int Size>
CTelegramStream &CTelegramStream::operator<<(const TLNumber<Size> &n)
{
    write(n.data, Size / 8);
    return *this;
}

// Generated read operators implementation
CTelegramStream &CTelegramStream::operator>>(TLAccountDaysTTL &accountDaysTTLValue)
{
    TLAccountDaysTTL result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountDaysTTL:
        *this >> result.days;
        break;
    default:
        break;
    }

    accountDaysTTLValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountPassword &accountPasswordValue)
{
    TLAccountPassword result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountNoPassword:
        *this >> result.newSalt;
        *this >> result.emailUnconfirmedPattern;
        break;
    case TLValue::AccountPassword:
        *this >> result.currentSalt;
        *this >> result.newSalt;
        *this >> result.hint;
        *this >> result.hasRecovery;
        *this >> result.emailUnconfirmedPattern;
        break;
    default:
        break;
    }

    accountPasswordValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountPasswordInputSettings &accountPasswordInputSettingsValue)
{
    TLAccountPasswordInputSettings result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountPasswordInputSettings:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.newSalt;
        }
        if (result.flags & 1 << 0) {
            *this >> result.newPasswordHash;
        }
        if (result.flags & 1 << 0) {
            *this >> result.hint;
        }
        if (result.flags & 1 << 1) {
            *this >> result.email;
        }
        break;
    default:
        break;
    }

    accountPasswordInputSettingsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountPasswordSettings &accountPasswordSettingsValue)
{
    TLAccountPasswordSettings result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountPasswordSettings:
        *this >> result.email;
        break;
    default:
        break;
    }

    accountPasswordSettingsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountTmpPassword &accountTmpPasswordValue)
{
    TLAccountTmpPassword result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountTmpPassword:
        *this >> result.tmpPassword;
        *this >> result.validUntil;
        break;
    default:
        break;
    }

    accountTmpPasswordValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthCheckedPhone &authCheckedPhoneValue)
{
    TLAuthCheckedPhone result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthCheckedPhone:
        *this >> result.phoneRegistered;
        break;
    default:
        break;
    }

    authCheckedPhoneValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthCodeType &authCodeTypeValue)
{
    TLAuthCodeType result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthCodeTypeSms:
    case TLValue::AuthCodeTypeCall:
    case TLValue::AuthCodeTypeFlashCall:
        break;
    default:
        break;
    }

    authCodeTypeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthExportedAuthorization &authExportedAuthorizationValue)
{
    TLAuthExportedAuthorization result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthExportedAuthorization:
        *this >> result.id;
        *this >> result.bytes;
        break;
    default:
        break;
    }

    authExportedAuthorizationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthPasswordRecovery &authPasswordRecoveryValue)
{
    TLAuthPasswordRecovery result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthPasswordRecovery:
        *this >> result.emailPattern;
        break;
    default:
        break;
    }

    authPasswordRecoveryValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthSentCodeType &authSentCodeTypeValue)
{
    TLAuthSentCodeType result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthSentCodeTypeApp:
    case TLValue::AuthSentCodeTypeSms:
    case TLValue::AuthSentCodeTypeCall:
        *this >> result.length;
        break;
    case TLValue::AuthSentCodeTypeFlashCall:
        *this >> result.pattern;
        break;
    default:
        break;
    }

    authSentCodeTypeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthorization &authorizationValue)
{
    TLAuthorization result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Authorization:
        *this >> result.hash;
        *this >> result.flags;
        *this >> result.deviceModel;
        *this >> result.platform;
        *this >> result.systemVersion;
        *this >> result.apiId;
        *this >> result.appName;
        *this >> result.appVersion;
        *this >> result.dateCreated;
        *this >> result.dateActive;
        *this >> result.ip;
        *this >> result.country;
        *this >> result.region;
        break;
    default:
        break;
    }

    authorizationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLBadMsgNotification &badMsgNotificationValue)
{
    TLBadMsgNotification result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::BadMsgNotification:
        *this >> result.badMsgId;
        *this >> result.badMsgSeqno;
        *this >> result.errorCode;
        break;
    case TLValue::BadServerSalt:
        *this >> result.badMsgId;
        *this >> result.badMsgSeqno;
        *this >> result.errorCode;
        *this >> result.newServerSalt;
        break;
    default:
        break;
    }

    badMsgNotificationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLBotCommand &botCommandValue)
{
    TLBotCommand result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::BotCommand:
        *this >> result.command;
        *this >> result.description;
        break;
    default:
        break;
    }

    botCommandValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLBotInfo &botInfoValue)
{
    TLBotInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::BotInfo:
        *this >> result.userId;
        *this >> result.description;
        *this >> result.commands;
        break;
    default:
        break;
    }

    botInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLCdnFileHash &cdnFileHashValue)
{
    TLCdnFileHash result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::CdnFileHash:
        *this >> result.offset;
        *this >> result.limit;
        *this >> result.hash;
        break;
    default:
        break;
    }

    cdnFileHashValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLCdnPublicKey &cdnPublicKeyValue)
{
    TLCdnPublicKey result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::CdnPublicKey:
        *this >> result.dcId;
        *this >> result.publicKey;
        break;
    default:
        break;
    }

    cdnPublicKeyValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelParticipantsFilter &channelParticipantsFilterValue)
{
    TLChannelParticipantsFilter result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelParticipantsRecent:
    case TLValue::ChannelParticipantsAdmins:
    case TLValue::ChannelParticipantsBots:
        break;
    case TLValue::ChannelParticipantsKicked:
    case TLValue::ChannelParticipantsBanned:
    case TLValue::ChannelParticipantsSearch:
        *this >> result.q;
        break;
    default:
        break;
    }

    channelParticipantsFilterValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChatParticipant &chatParticipantValue)
{
    TLChatParticipant result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatParticipant:
    case TLValue::ChatParticipantAdmin:
        *this >> result.userId;
        *this >> result.inviterId;
        *this >> result.date;
        break;
    case TLValue::ChatParticipantCreator:
        *this >> result.userId;
        break;
    default:
        break;
    }

    chatParticipantValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChatParticipants &chatParticipantsValue)
{
    TLChatParticipants result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatParticipantsForbidden:
        *this >> result.flags;
        *this >> result.chatId;
        if (result.flags & 1 << 0) {
            *this >> result.selfParticipant;
        }
        break;
    case TLValue::ChatParticipants:
        *this >> result.chatId;
        *this >> result.participants;
        *this >> result.version;
        break;
    default:
        break;
    }

    chatParticipantsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLClientDHInnerData &clientDHInnerDataValue)
{
    TLClientDHInnerData result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ClientDHInnerData:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.retryId;
        *this >> result.gB;
        break;
    default:
        break;
    }

    clientDHInnerDataValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContact &contactValue)
{
    TLContact result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Contact:
        *this >> result.userId;
        *this >> result.mutual;
        break;
    default:
        break;
    }

    contactValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactBlocked &contactBlockedValue)
{
    TLContactBlocked result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactBlocked:
        *this >> result.userId;
        *this >> result.date;
        break;
    default:
        break;
    }

    contactBlockedValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactLink &contactLinkValue)
{
    TLContactLink result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactLinkUnknown:
    case TLValue::ContactLinkNone:
    case TLValue::ContactLinkHasPhone:
    case TLValue::ContactLinkContact:
        break;
    default:
        break;
    }

    contactLinkValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDataJSON &dataJSONValue)
{
    TLDataJSON result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DataJSON:
        *this >> result.data;
        break;
    default:
        break;
    }

    dataJSONValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDestroyAuthKeyRes &destroyAuthKeyResValue)
{
    TLDestroyAuthKeyRes result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DestroyAuthKeyOk:
    case TLValue::DestroyAuthKeyNone:
    case TLValue::DestroyAuthKeyFail:
        break;
    default:
        break;
    }

    destroyAuthKeyResValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDestroySessionRes &destroySessionResValue)
{
    TLDestroySessionRes result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DestroySessionOk:
    case TLValue::DestroySessionNone:
        *this >> result.sessionId;
        break;
    default:
        break;
    }

    destroySessionResValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDisabledFeature &disabledFeatureValue)
{
    TLDisabledFeature result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DisabledFeature:
        *this >> result.feature;
        *this >> result.description;
        break;
    default:
        break;
    }

    disabledFeatureValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLEncryptedChat &encryptedChatValue)
{
    TLEncryptedChat result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::EncryptedChatEmpty:
    case TLValue::EncryptedChatDiscarded:
        *this >> result.id;
        break;
    case TLValue::EncryptedChatWaiting:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        break;
    case TLValue::EncryptedChatRequested:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.gA;
        break;
    case TLValue::EncryptedChat:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.gAOrB;
        *this >> result.keyFingerprint;
        break;
    default:
        break;
    }

    encryptedChatValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLEncryptedFile &encryptedFileValue)
{
    TLEncryptedFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::EncryptedFileEmpty:
        break;
    case TLValue::EncryptedFile:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.size;
        *this >> result.dcId;
        *this >> result.keyFingerprint;
        break;
    default:
        break;
    }

    encryptedFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLEncryptedMessage &encryptedMessageValue)
{
    TLEncryptedMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::EncryptedMessage:
        *this >> result.randomId;
        *this >> result.chatId;
        *this >> result.date;
        *this >> result.bytes;
        *this >> result.file;
        break;
    case TLValue::EncryptedMessageService:
        *this >> result.randomId;
        *this >> result.chatId;
        *this >> result.date;
        *this >> result.bytes;
        break;
    default:
        break;
    }

    encryptedMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLError &errorValue)
{
    TLError result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Error:
        *this >> result.code;
        *this >> result.text;
        break;
    default:
        break;
    }

    errorValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLExportedChatInvite &exportedChatInviteValue)
{
    TLExportedChatInvite result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatInviteEmpty:
        break;
    case TLValue::ChatInviteExported:
        *this >> result.link;
        break;
    default:
        break;
    }

    exportedChatInviteValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLExportedMessageLink &exportedMessageLinkValue)
{
    TLExportedMessageLink result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ExportedMessageLink:
        *this >> result.link;
        break;
    default:
        break;
    }

    exportedMessageLinkValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLFileLocation &fileLocationValue)
{
    TLFileLocation result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::FileLocationUnavailable:
        *this >> result.volumeId;
        *this >> result.localId;
        *this >> result.secret;
        break;
    case TLValue::FileLocation:
        *this >> result.dcId;
        *this >> result.volumeId;
        *this >> result.localId;
        *this >> result.secret;
        break;
    default:
        break;
    }

    fileLocationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLFutureSalt &futureSaltValue)
{
    TLFutureSalt result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::FutureSalt:
        *this >> result.validSince;
        *this >> result.validUntil;
        *this >> result.salt;
        break;
    default:
        break;
    }

    futureSaltValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLFutureSalts &futureSaltsValue)
{
    TLFutureSalts result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::FutureSalts:
        *this >> result.reqMsgId;
        *this >> result.now;
        *this >> result.salts;
        break;
    default:
        break;
    }

    futureSaltsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLGeoPoint &geoPointValue)
{
    TLGeoPoint result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::GeoPointEmpty:
        break;
    case TLValue::GeoPoint:
        *this >> result.longitude;
        *this >> result.latitude;
        break;
    default:
        break;
    }

    geoPointValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpAppUpdate &helpAppUpdateValue)
{
    TLHelpAppUpdate result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpAppUpdate:
        *this >> result.id;
        *this >> result.critical;
        *this >> result.url;
        *this >> result.text;
        break;
    case TLValue::HelpNoAppUpdate:
        break;
    default:
        break;
    }

    helpAppUpdateValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpInviteText &helpInviteTextValue)
{
    TLHelpInviteText result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpInviteText:
        *this >> result.message;
        break;
    default:
        break;
    }

    helpInviteTextValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpTermsOfService &helpTermsOfServiceValue)
{
    TLHelpTermsOfService result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpTermsOfService:
        *this >> result.text;
        break;
    default:
        break;
    }

    helpTermsOfServiceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHighScore &highScoreValue)
{
    TLHighScore result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HighScore:
        *this >> result.pos;
        *this >> result.userId;
        *this >> result.score;
        break;
    default:
        break;
    }

    highScoreValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHttpWait &httpWaitValue)
{
    TLHttpWait result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HttpWait:
        *this >> result.maxDelay;
        *this >> result.waitAfter;
        *this >> result.maxWait;
        break;
    default:
        break;
    }

    httpWaitValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLImportedContact &importedContactValue)
{
    TLImportedContact result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ImportedContact:
        *this >> result.userId;
        *this >> result.clientId;
        break;
    default:
        break;
    }

    importedContactValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInlineBotSwitchPM &inlineBotSwitchPMValue)
{
    TLInlineBotSwitchPM result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InlineBotSwitchPM:
        *this >> result.text;
        *this >> result.startParam;
        break;
    default:
        break;
    }

    inlineBotSwitchPMValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputAppEvent &inputAppEventValue)
{
    TLInputAppEvent result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputAppEvent:
        *this >> result.time;
        *this >> result.type;
        *this >> result.peer;
        *this >> result.data;
        break;
    default:
        break;
    }

    inputAppEventValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputBotInlineMessageID &inputBotInlineMessageIDValue)
{
    TLInputBotInlineMessageID result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputBotInlineMessageID:
        *this >> result.dcId;
        *this >> result.id;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputBotInlineMessageIDValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputChannel &inputChannelValue)
{
    TLInputChannel result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputChannelEmpty:
        break;
    case TLValue::InputChannel:
        *this >> result.channelId;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputChannelValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputContact &inputContactValue)
{
    TLInputContact result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPhoneContact:
        *this >> result.clientId;
        *this >> result.phone;
        *this >> result.firstName;
        *this >> result.lastName;
        break;
    default:
        break;
    }

    inputContactValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputDocument &inputDocumentValue)
{
    TLInputDocument result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputDocumentEmpty:
        break;
    case TLValue::InputDocument:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputDocumentValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputEncryptedChat &inputEncryptedChatValue)
{
    TLInputEncryptedChat result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputEncryptedChat:
        *this >> result.chatId;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputEncryptedChatValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputEncryptedFile &inputEncryptedFileValue)
{
    TLInputEncryptedFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputEncryptedFileEmpty:
        break;
    case TLValue::InputEncryptedFileUploaded:
        *this >> result.id;
        *this >> result.parts;
        *this >> result.md5Checksum;
        *this >> result.keyFingerprint;
        break;
    case TLValue::InputEncryptedFile:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    case TLValue::InputEncryptedFileBigUploaded:
        *this >> result.id;
        *this >> result.parts;
        *this >> result.keyFingerprint;
        break;
    default:
        break;
    }

    inputEncryptedFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputFile &inputFileValue)
{
    TLInputFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputFile:
        *this >> result.id;
        *this >> result.parts;
        *this >> result.name;
        *this >> result.md5Checksum;
        break;
    case TLValue::InputFileBig:
        *this >> result.id;
        *this >> result.parts;
        *this >> result.name;
        break;
    default:
        break;
    }

    inputFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputFileLocation &inputFileLocationValue)
{
    TLInputFileLocation result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputFileLocation:
        *this >> result.volumeId;
        *this >> result.localId;
        *this >> result.secret;
        break;
    case TLValue::InputEncryptedFileLocation:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    case TLValue::InputDocumentFileLocation:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.version;
        break;
    default:
        break;
    }

    inputFileLocationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputGeoPoint &inputGeoPointValue)
{
    TLInputGeoPoint result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputGeoPointEmpty:
        break;
    case TLValue::InputGeoPoint:
        *this >> result.latitude;
        *this >> result.longitude;
        break;
    default:
        break;
    }

    inputGeoPointValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPeer &inputPeerValue)
{
    TLInputPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPeerEmpty:
    case TLValue::InputPeerSelf:
        break;
    case TLValue::InputPeerChat:
        *this >> result.chatId;
        break;
    case TLValue::InputPeerUser:
        *this >> result.userId;
        *this >> result.accessHash;
        break;
    case TLValue::InputPeerChannel:
        *this >> result.channelId;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputPeerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPeerNotifyEvents &inputPeerNotifyEventsValue)
{
    TLInputPeerNotifyEvents result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPeerNotifyEventsEmpty:
    case TLValue::InputPeerNotifyEventsAll:
        break;
    default:
        break;
    }

    inputPeerNotifyEventsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPhoneCall &inputPhoneCallValue)
{
    TLInputPhoneCall result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPhoneCall:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputPhoneCallValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPhoto &inputPhotoValue)
{
    TLInputPhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPhotoEmpty:
        break;
    case TLValue::InputPhoto:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputPhotoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPrivacyKey &inputPrivacyKeyValue)
{
    TLInputPrivacyKey result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPrivacyKeyStatusTimestamp:
    case TLValue::InputPrivacyKeyChatInvite:
    case TLValue::InputPrivacyKeyPhoneCall:
        break;
    default:
        break;
    }

    inputPrivacyKeyValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputStickerSet &inputStickerSetValue)
{
    TLInputStickerSet result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputStickerSetEmpty:
        break;
    case TLValue::InputStickerSetID:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    case TLValue::InputStickerSetShortName:
        *this >> result.shortName;
        break;
    default:
        break;
    }

    inputStickerSetValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputStickeredMedia &inputStickeredMediaValue)
{
    TLInputStickeredMedia result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputStickeredMediaPhoto:
        *this >> result.inputPhotoId;
        break;
    case TLValue::InputStickeredMediaDocument:
        *this >> result.inputDocumentId;
        break;
    default:
        break;
    }

    inputStickeredMediaValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputUser &inputUserValue)
{
    TLInputUser result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputUserEmpty:
    case TLValue::InputUserSelf:
        break;
    case TLValue::InputUser:
        *this >> result.userId;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputUserValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputWebFileLocation &inputWebFileLocationValue)
{
    TLInputWebFileLocation result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputWebFileLocation:
        *this >> result.url;
        *this >> result.accessHash;
        break;
    default:
        break;
    }

    inputWebFileLocationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLIpPort &ipPortValue)
{
    TLIpPort result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::IpPort:
        *this >> result.ipv4;
        *this >> result.port;
        break;
    default:
        break;
    }

    ipPortValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLLabeledPrice &labeledPriceValue)
{
    TLLabeledPrice result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::LabeledPrice:
        *this >> result.label;
        *this >> result.amount;
        break;
    default:
        break;
    }

    labeledPriceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLLangPackLanguage &langPackLanguageValue)
{
    TLLangPackLanguage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::LangPackLanguage:
        *this >> result.name;
        *this >> result.nativeName;
        *this >> result.langCode;
        break;
    default:
        break;
    }

    langPackLanguageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLLangPackString &langPackStringValue)
{
    TLLangPackString result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::LangPackString:
        *this >> result.key;
        *this >> result.value;
        break;
    case TLValue::LangPackStringPluralized:
        *this >> result.flags;
        *this >> result.key;
        if (result.flags & 1 << 0) {
            *this >> result.zeroValue;
        }
        if (result.flags & 1 << 1) {
            *this >> result.oneValue;
        }
        if (result.flags & 1 << 2) {
            *this >> result.twoValue;
        }
        if (result.flags & 1 << 3) {
            *this >> result.fewValue;
        }
        if (result.flags & 1 << 4) {
            *this >> result.manyValue;
        }
        *this >> result.otherValue;
        break;
    case TLValue::LangPackStringDeleted:
        *this >> result.key;
        break;
    default:
        break;
    }

    langPackStringValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMaskCoords &maskCoordsValue)
{
    TLMaskCoords result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MaskCoords:
        *this >> result.n;
        *this >> result.x;
        *this >> result.y;
        *this >> result.zoom;
        break;
    default:
        break;
    }

    maskCoordsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessageEntity &messageEntityValue)
{
    TLMessageEntity result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageEntityUnknown:
    case TLValue::MessageEntityMention:
    case TLValue::MessageEntityHashtag:
    case TLValue::MessageEntityBotCommand:
    case TLValue::MessageEntityUrl:
    case TLValue::MessageEntityEmail:
    case TLValue::MessageEntityBold:
    case TLValue::MessageEntityItalic:
    case TLValue::MessageEntityCode:
        *this >> result.offset;
        *this >> result.length;
        break;
    case TLValue::MessageEntityPre:
        *this >> result.offset;
        *this >> result.length;
        *this >> result.language;
        break;
    case TLValue::MessageEntityTextUrl:
        *this >> result.offset;
        *this >> result.length;
        *this >> result.url;
        break;
    case TLValue::MessageEntityMentionName:
        *this >> result.offset;
        *this >> result.length;
        *this >> result.quint32UserId;
        break;
    case TLValue::InputMessageEntityMentionName:
        *this >> result.offset;
        *this >> result.length;
        *this >> result.inputUserUserId;
        break;
    default:
        break;
    }

    messageEntityValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessageFwdHeader &messageFwdHeaderValue)
{
    TLMessageFwdHeader result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageFwdHeader:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.fromId;
        }
        *this >> result.date;
        if (result.flags & 1 << 1) {
            *this >> result.channelId;
        }
        if (result.flags & 1 << 2) {
            *this >> result.channelPost;
        }
        if (result.flags & 1 << 3) {
            *this >> result.postAuthor;
        }
        break;
    default:
        break;
    }

    messageFwdHeaderValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessageRange &messageRangeValue)
{
    TLMessageRange result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageRange:
        *this >> result.minId;
        *this >> result.maxId;
        break;
    default:
        break;
    }

    messageRangeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesAffectedHistory &messagesAffectedHistoryValue)
{
    TLMessagesAffectedHistory result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesAffectedHistory:
        *this >> result.pts;
        *this >> result.ptsCount;
        *this >> result.offset;
        break;
    default:
        break;
    }

    messagesAffectedHistoryValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesAffectedMessages &messagesAffectedMessagesValue)
{
    TLMessagesAffectedMessages result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesAffectedMessages:
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    default:
        break;
    }

    messagesAffectedMessagesValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesDhConfig &messagesDhConfigValue)
{
    TLMessagesDhConfig result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesDhConfigNotModified:
        *this >> result.random;
        break;
    case TLValue::MessagesDhConfig:
        *this >> result.g;
        *this >> result.p;
        *this >> result.version;
        *this >> result.random;
        break;
    default:
        break;
    }

    messagesDhConfigValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesSentEncryptedMessage &messagesSentEncryptedMessageValue)
{
    TLMessagesSentEncryptedMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesSentEncryptedMessage:
        *this >> result.date;
        break;
    case TLValue::MessagesSentEncryptedFile:
        *this >> result.date;
        *this >> result.file;
        break;
    default:
        break;
    }

    messagesSentEncryptedMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgDetailedInfo &msgDetailedInfoValue)
{
    TLMsgDetailedInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgDetailedInfo:
        *this >> result.msgId;
        *this >> result.answerMsgId;
        *this >> result.bytes;
        *this >> result.status;
        break;
    case TLValue::MsgNewDetailedInfo:
        *this >> result.answerMsgId;
        *this >> result.bytes;
        *this >> result.status;
        break;
    default:
        break;
    }

    msgDetailedInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgResendReq &msgResendReqValue)
{
    TLMsgResendReq result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgResendReq:
        *this >> result.msgIds;
        break;
    default:
        break;
    }

    msgResendReqValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgsAck &msgsAckValue)
{
    TLMsgsAck result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgsAck:
        *this >> result.msgIds;
        break;
    default:
        break;
    }

    msgsAckValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgsAllInfo &msgsAllInfoValue)
{
    TLMsgsAllInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgsAllInfo:
        *this >> result.msgIds;
        *this >> result.info;
        break;
    default:
        break;
    }

    msgsAllInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgsStateInfo &msgsStateInfoValue)
{
    TLMsgsStateInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgsStateInfo:
        *this >> result.reqMsgId;
        *this >> result.info;
        break;
    default:
        break;
    }

    msgsStateInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMsgsStateReq &msgsStateReqValue)
{
    TLMsgsStateReq result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MsgsStateReq:
        *this >> result.msgIds;
        break;
    default:
        break;
    }

    msgsStateReqValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLNearestDc &nearestDcValue)
{
    TLNearestDc result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::NearestDc:
        *this >> result.country;
        *this >> result.thisDc;
        *this >> result.nearestDc;
        break;
    default:
        break;
    }

    nearestDcValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLNewSession &newSessionValue)
{
    TLNewSession result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::NewSessionCreated:
        *this >> result.firstMsgId;
        *this >> result.uniqueId;
        *this >> result.serverSalt;
        break;
    default:
        break;
    }

    newSessionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPQInnerData &pQInnerDataValue)
{
    TLPQInnerData result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PQInnerData:
        *this >> result.pq;
        *this >> result.p;
        *this >> result.q;
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.newNonce;
        break;
    default:
        break;
    }

    pQInnerDataValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentCharge &paymentChargeValue)
{
    TLPaymentCharge result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentCharge:
        *this >> result.id;
        *this >> result.providerChargeId;
        break;
    default:
        break;
    }

    paymentChargeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentSavedCredentials &paymentSavedCredentialsValue)
{
    TLPaymentSavedCredentials result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentSavedCredentialsCard:
        *this >> result.id;
        *this >> result.title;
        break;
    default:
        break;
    }

    paymentSavedCredentialsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPeer &peerValue)
{
    TLPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PeerUser:
        *this >> result.userId;
        break;
    case TLValue::PeerChat:
        *this >> result.chatId;
        break;
    case TLValue::PeerChannel:
        *this >> result.channelId;
        break;
    default:
        break;
    }

    peerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPeerNotifyEvents &peerNotifyEventsValue)
{
    TLPeerNotifyEvents result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PeerNotifyEventsEmpty:
    case TLValue::PeerNotifyEventsAll:
        break;
    default:
        break;
    }

    peerNotifyEventsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhoneCallDiscardReason &phoneCallDiscardReasonValue)
{
    TLPhoneCallDiscardReason result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhoneCallDiscardReasonMissed:
    case TLValue::PhoneCallDiscardReasonDisconnect:
    case TLValue::PhoneCallDiscardReasonHangup:
    case TLValue::PhoneCallDiscardReasonBusy:
        break;
    default:
        break;
    }

    phoneCallDiscardReasonValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhoneConnection &phoneConnectionValue)
{
    TLPhoneConnection result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhoneConnection:
        *this >> result.id;
        *this >> result.ip;
        *this >> result.ipv6;
        *this >> result.port;
        *this >> result.peerTag;
        break;
    default:
        break;
    }

    phoneConnectionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhotoSize &photoSizeValue)
{
    TLPhotoSize result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhotoSizeEmpty:
        *this >> result.type;
        break;
    case TLValue::PhotoSize:
        *this >> result.type;
        *this >> result.location;
        *this >> result.w;
        *this >> result.h;
        *this >> result.size;
        break;
    case TLValue::PhotoCachedSize:
        *this >> result.type;
        *this >> result.location;
        *this >> result.w;
        *this >> result.h;
        *this >> result.bytes;
        break;
    default:
        break;
    }

    photoSizeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPong &pongValue)
{
    TLPong result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Pong:
        *this >> result.msgId;
        *this >> result.pingId;
        break;
    default:
        break;
    }

    pongValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPopularContact &popularContactValue)
{
    TLPopularContact result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PopularContact:
        *this >> result.clientId;
        *this >> result.importers;
        break;
    default:
        break;
    }

    popularContactValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPostAddress &postAddressValue)
{
    TLPostAddress result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PostAddress:
        *this >> result.streetLine1;
        *this >> result.streetLine2;
        *this >> result.city;
        *this >> result.state;
        *this >> result.countryIso2;
        *this >> result.postCode;
        break;
    default:
        break;
    }

    postAddressValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPrivacyKey &privacyKeyValue)
{
    TLPrivacyKey result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PrivacyKeyStatusTimestamp:
    case TLValue::PrivacyKeyChatInvite:
    case TLValue::PrivacyKeyPhoneCall:
        break;
    default:
        break;
    }

    privacyKeyValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPrivacyRule &privacyRuleValue)
{
    TLPrivacyRule result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PrivacyValueAllowContacts:
    case TLValue::PrivacyValueAllowAll:
    case TLValue::PrivacyValueDisallowContacts:
    case TLValue::PrivacyValueDisallowAll:
        break;
    case TLValue::PrivacyValueAllowUsers:
    case TLValue::PrivacyValueDisallowUsers:
        *this >> result.users;
        break;
    default:
        break;
    }

    privacyRuleValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLReceivedNotifyMessage &receivedNotifyMessageValue)
{
    TLReceivedNotifyMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ReceivedNotifyMessage:
        *this >> result.id;
        *this >> result.flags;
        break;
    default:
        break;
    }

    receivedNotifyMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLReportReason &reportReasonValue)
{
    TLReportReason result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputReportReasonSpam:
    case TLValue::InputReportReasonViolence:
    case TLValue::InputReportReasonPornography:
        break;
    case TLValue::InputReportReasonOther:
        *this >> result.text;
        break;
    default:
        break;
    }

    reportReasonValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLResPQ &resPQValue)
{
    TLResPQ result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ResPQ:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.pq;
        *this >> result.serverPublicKeyFingerprints;
        break;
    default:
        break;
    }

    resPQValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLRichText &richTextValue)
{
    TLRichText result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::TextEmpty:
        break;
    case TLValue::TextPlain:
        *this >> result.stringText;
        break;
    case TLValue::TextBold:
    case TLValue::TextItalic:
    case TLValue::TextUnderline:
    case TLValue::TextStrike:
    case TLValue::TextFixed:
        *this >> *result.richText;
        break;
    case TLValue::TextUrl:
        *this >> *result.richText;
        *this >> result.url;
        *this >> result.webpageId;
        break;
    case TLValue::TextEmail:
        *this >> *result.richText;
        *this >> result.email;
        break;
    case TLValue::TextConcat:
        *this >> result.texts;
        break;
    default:
        break;
    }

    richTextValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLRpcDropAnswer &rpcDropAnswerValue)
{
    TLRpcDropAnswer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::RpcAnswerUnknown:
    case TLValue::RpcAnswerDroppedRunning:
        break;
    case TLValue::RpcAnswerDropped:
        *this >> result.msgId;
        *this >> result.seqNo;
        *this >> result.bytes;
        break;
    default:
        break;
    }

    rpcDropAnswerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLRpcError &rpcErrorValue)
{
    TLRpcError result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::RpcError:
        *this >> result.errorCode;
        *this >> result.errorMessage;
        break;
    default:
        break;
    }

    rpcErrorValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLSendMessageAction &sendMessageActionValue)
{
    TLSendMessageAction result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::SendMessageTypingAction:
    case TLValue::SendMessageCancelAction:
    case TLValue::SendMessageRecordVideoAction:
    case TLValue::SendMessageRecordAudioAction:
    case TLValue::SendMessageGeoLocationAction:
    case TLValue::SendMessageChooseContactAction:
    case TLValue::SendMessageGamePlayAction:
    case TLValue::SendMessageRecordRoundAction:
        break;
    case TLValue::SendMessageUploadVideoAction:
    case TLValue::SendMessageUploadAudioAction:
    case TLValue::SendMessageUploadPhotoAction:
    case TLValue::SendMessageUploadDocumentAction:
    case TLValue::SendMessageUploadRoundAction:
        *this >> result.progress;
        break;
    default:
        break;
    }

    sendMessageActionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLServerDHInnerData &serverDHInnerDataValue)
{
    TLServerDHInnerData result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ServerDHInnerData:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.g;
        *this >> result.dhPrime;
        *this >> result.gA;
        *this >> result.serverTime;
        break;
    default:
        break;
    }

    serverDHInnerDataValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLServerDHParams &serverDHParamsValue)
{
    TLServerDHParams result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ServerDHParamsFail:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.newNonceHash;
        break;
    case TLValue::ServerDHParamsOk:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.encryptedAnswer;
        break;
    default:
        break;
    }

    serverDHParamsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLSetClientDHParamsAnswer &setClientDHParamsAnswerValue)
{
    TLSetClientDHParamsAnswer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DhGenOk:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.newNonceHash1;
        break;
    case TLValue::DhGenRetry:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.newNonceHash2;
        break;
    case TLValue::DhGenFail:
        *this >> result.nonce;
        *this >> result.serverNonce;
        *this >> result.newNonceHash3;
        break;
    default:
        break;
    }

    setClientDHParamsAnswerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLShippingOption &shippingOptionValue)
{
    TLShippingOption result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ShippingOption:
        *this >> result.id;
        *this >> result.title;
        *this >> result.prices;
        break;
    default:
        break;
    }

    shippingOptionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLStickerPack &stickerPackValue)
{
    TLStickerPack result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::StickerPack:
        *this >> result.emoticon;
        *this >> result.documents;
        break;
    default:
        break;
    }

    stickerPackValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLStorageFileType &storageFileTypeValue)
{
    TLStorageFileType result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::StorageFileUnknown:
    case TLValue::StorageFilePartial:
    case TLValue::StorageFileJpeg:
    case TLValue::StorageFileGif:
    case TLValue::StorageFilePng:
    case TLValue::StorageFilePdf:
    case TLValue::StorageFileMp3:
    case TLValue::StorageFileMov:
    case TLValue::StorageFileMp4:
    case TLValue::StorageFileWebp:
        break;
    default:
        break;
    }

    storageFileTypeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLTopPeer &topPeerValue)
{
    TLTopPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::TopPeer:
        *this >> result.peer;
        *this >> result.rating;
        break;
    default:
        break;
    }

    topPeerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLTopPeerCategory &topPeerCategoryValue)
{
    TLTopPeerCategory result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::TopPeerCategoryBotsPM:
    case TLValue::TopPeerCategoryBotsInline:
    case TLValue::TopPeerCategoryCorrespondents:
    case TLValue::TopPeerCategoryGroups:
    case TLValue::TopPeerCategoryChannels:
    case TLValue::TopPeerCategoryPhoneCalls:
        break;
    default:
        break;
    }

    topPeerCategoryValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLTopPeerCategoryPeers &topPeerCategoryPeersValue)
{
    TLTopPeerCategoryPeers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::TopPeerCategoryPeers:
        *this >> result.category;
        *this >> result.count;
        *this >> result.peers;
        break;
    default:
        break;
    }

    topPeerCategoryPeersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUpdatesState &updatesStateValue)
{
    TLUpdatesState result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UpdatesState:
        *this >> result.pts;
        *this >> result.qts;
        *this >> result.date;
        *this >> result.seq;
        *this >> result.unreadCount;
        break;
    default:
        break;
    }

    updatesStateValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUploadCdnFile &uploadCdnFileValue)
{
    TLUploadCdnFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UploadCdnFileReuploadNeeded:
        *this >> result.requestToken;
        break;
    case TLValue::UploadCdnFile:
        *this >> result.bytes;
        break;
    default:
        break;
    }

    uploadCdnFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUploadFile &uploadFileValue)
{
    TLUploadFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UploadFile:
        *this >> result.type;
        *this >> result.mtime;
        *this >> result.bytes;
        break;
    case TLValue::UploadFileCdnRedirect:
        *this >> result.dcId;
        *this >> result.fileToken;
        *this >> result.encryptionKey;
        *this >> result.encryptionIv;
        *this >> result.cdnFileHashes;
        break;
    default:
        break;
    }

    uploadFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUploadWebFile &uploadWebFileValue)
{
    TLUploadWebFile result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UploadWebFile:
        *this >> result.size;
        *this >> result.mimeType;
        *this >> result.fileType;
        *this >> result.mtime;
        *this >> result.bytes;
        break;
    default:
        break;
    }

    uploadWebFileValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUserProfilePhoto &userProfilePhotoValue)
{
    TLUserProfilePhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UserProfilePhotoEmpty:
        break;
    case TLValue::UserProfilePhoto:
        *this >> result.photoId;
        *this >> result.photoSmall;
        *this >> result.photoBig;
        break;
    default:
        break;
    }

    userProfilePhotoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUserStatus &userStatusValue)
{
    TLUserStatus result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UserStatusEmpty:
    case TLValue::UserStatusRecently:
    case TLValue::UserStatusLastWeek:
    case TLValue::UserStatusLastMonth:
        break;
    case TLValue::UserStatusOnline:
        *this >> result.expires;
        break;
    case TLValue::UserStatusOffline:
        *this >> result.wasOnline;
        break;
    default:
        break;
    }

    userStatusValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLWallPaper &wallPaperValue)
{
    TLWallPaper result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::WallPaper:
        *this >> result.id;
        *this >> result.title;
        *this >> result.sizes;
        *this >> result.color;
        break;
    case TLValue::WallPaperSolid:
        *this >> result.id;
        *this >> result.title;
        *this >> result.bgColor;
        *this >> result.color;
        break;
    default:
        break;
    }

    wallPaperValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountAuthorizations &accountAuthorizationsValue)
{
    TLAccountAuthorizations result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountAuthorizations:
        *this >> result.authorizations;
        break;
    default:
        break;
    }

    accountAuthorizationsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthSentCode &authSentCodeValue)
{
    TLAuthSentCode result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthSentCode:
        *this >> result.flags;
        *this >> result.type;
        *this >> result.phoneCodeHash;
        if (result.flags & 1 << 1) {
            *this >> result.nextType;
        }
        if (result.flags & 1 << 2) {
            *this >> result.timeout;
        }
        break;
    default:
        break;
    }

    authSentCodeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLCdnConfig &cdnConfigValue)
{
    TLCdnConfig result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::CdnConfig:
        *this >> result.publicKeys;
        break;
    default:
        break;
    }

    cdnConfigValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelAdminLogEventsFilter &channelAdminLogEventsFilterValue)
{
    TLChannelAdminLogEventsFilter result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelAdminLogEventsFilter:
        *this >> result.flags;
        break;
    default:
        break;
    }

    channelAdminLogEventsFilterValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelAdminRights &channelAdminRightsValue)
{
    TLChannelAdminRights result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelAdminRights:
        *this >> result.flags;
        break;
    default:
        break;
    }

    channelAdminRightsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelBannedRights &channelBannedRightsValue)
{
    TLChannelBannedRights result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelBannedRights:
        *this >> result.flags;
        *this >> result.untilDate;
        break;
    default:
        break;
    }

    channelBannedRightsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelMessagesFilter &channelMessagesFilterValue)
{
    TLChannelMessagesFilter result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelMessagesFilterEmpty:
        break;
    case TLValue::ChannelMessagesFilter:
        *this >> result.flags;
        *this >> result.ranges;
        break;
    default:
        break;
    }

    channelMessagesFilterValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelParticipant &channelParticipantValue)
{
    TLChannelParticipant result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelParticipant:
        *this >> result.userId;
        *this >> result.date;
        break;
    case TLValue::ChannelParticipantSelf:
        *this >> result.userId;
        *this >> result.inviterId;
        *this >> result.date;
        break;
    case TLValue::ChannelParticipantCreator:
        *this >> result.userId;
        break;
    case TLValue::ChannelParticipantAdmin:
        *this >> result.flags;
        *this >> result.userId;
        *this >> result.inviterId;
        *this >> result.promotedBy;
        *this >> result.date;
        *this >> result.adminRights;
        break;
    case TLValue::ChannelParticipantBanned:
        *this >> result.flags;
        *this >> result.userId;
        *this >> result.kickedBy;
        *this >> result.date;
        *this >> result.bannedRights;
        break;
    default:
        break;
    }

    channelParticipantValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChatPhoto &chatPhotoValue)
{
    TLChatPhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatPhotoEmpty:
        break;
    case TLValue::ChatPhoto:
        *this >> result.photoSmall;
        *this >> result.photoBig;
        break;
    default:
        break;
    }

    chatPhotoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactStatus &contactStatusValue)
{
    TLContactStatus result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactStatus:
        *this >> result.userId;
        *this >> result.status;
        break;
    default:
        break;
    }

    contactStatusValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDcOption &dcOptionValue)
{
    TLDcOption result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DcOption:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.ipAddress;
        *this >> result.port;
        break;
    default:
        break;
    }

    dcOptionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDocumentAttribute &documentAttributeValue)
{
    TLDocumentAttribute result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DocumentAttributeImageSize:
        *this >> result.w;
        *this >> result.h;
        break;
    case TLValue::DocumentAttributeAnimated:
    case TLValue::DocumentAttributeHasStickers:
        break;
    case TLValue::DocumentAttributeSticker:
        *this >> result.flags;
        *this >> result.alt;
        *this >> result.stickerset;
        if (result.flags & 1 << 0) {
            *this >> result.maskCoords;
        }
        break;
    case TLValue::DocumentAttributeVideo:
        *this >> result.flags;
        *this >> result.duration;
        *this >> result.w;
        *this >> result.h;
        break;
    case TLValue::DocumentAttributeAudio:
        *this >> result.flags;
        *this >> result.duration;
        if (result.flags & 1 << 0) {
            *this >> result.title;
        }
        if (result.flags & 1 << 1) {
            *this >> result.performer;
        }
        if (result.flags & 1 << 2) {
            *this >> result.waveform;
        }
        break;
    case TLValue::DocumentAttributeFilename:
        *this >> result.fileName;
        break;
    default:
        break;
    }

    documentAttributeValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDraftMessage &draftMessageValue)
{
    TLDraftMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DraftMessageEmpty:
        break;
    case TLValue::DraftMessage:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.replyToMsgId;
        }
        *this >> result.message;
        if (result.flags & 1 << 3) {
            *this >> result.entities;
        }
        *this >> result.date;
        break;
    default:
        break;
    }

    draftMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpConfigSimple &helpConfigSimpleValue)
{
    TLHelpConfigSimple result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpConfigSimple:
        *this >> result.date;
        *this >> result.expires;
        *this >> result.dcId;
        *this >> result.ipPortList;
        break;
    default:
        break;
    }

    helpConfigSimpleValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputChatPhoto &inputChatPhotoValue)
{
    TLInputChatPhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputChatPhotoEmpty:
        break;
    case TLValue::InputChatUploadedPhoto:
        *this >> result.file;
        break;
    case TLValue::InputChatPhoto:
        *this >> result.id;
        break;
    default:
        break;
    }

    inputChatPhotoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputGame &inputGameValue)
{
    TLInputGame result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputGameID:
        *this >> result.id;
        *this >> result.accessHash;
        break;
    case TLValue::InputGameShortName:
        *this >> result.botId;
        *this >> result.shortName;
        break;
    default:
        break;
    }

    inputGameValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputNotifyPeer &inputNotifyPeerValue)
{
    TLInputNotifyPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputNotifyPeer:
        *this >> result.peer;
        break;
    case TLValue::InputNotifyUsers:
    case TLValue::InputNotifyChats:
    case TLValue::InputNotifyAll:
        break;
    default:
        break;
    }

    inputNotifyPeerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPaymentCredentials &inputPaymentCredentialsValue)
{
    TLInputPaymentCredentials result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPaymentCredentialsSaved:
        *this >> result.id;
        *this >> result.tmpPassword;
        break;
    case TLValue::InputPaymentCredentials:
        *this >> result.flags;
        *this >> result.data;
        break;
    case TLValue::InputPaymentCredentialsApplePay:
        *this >> result.paymentData;
        break;
    case TLValue::InputPaymentCredentialsAndroidPay:
        *this >> result.paymentToken;
        break;
    default:
        break;
    }

    inputPaymentCredentialsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPeerNotifySettings &inputPeerNotifySettingsValue)
{
    TLInputPeerNotifySettings result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPeerNotifySettings:
        *this >> result.flags;
        *this >> result.muteUntil;
        *this >> result.sound;
        break;
    default:
        break;
    }

    inputPeerNotifySettingsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputPrivacyRule &inputPrivacyRuleValue)
{
    TLInputPrivacyRule result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputPrivacyValueAllowContacts:
    case TLValue::InputPrivacyValueAllowAll:
    case TLValue::InputPrivacyValueDisallowContacts:
    case TLValue::InputPrivacyValueDisallowAll:
        break;
    case TLValue::InputPrivacyValueAllowUsers:
    case TLValue::InputPrivacyValueDisallowUsers:
        *this >> result.users;
        break;
    default:
        break;
    }

    inputPrivacyRuleValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputStickerSetItem &inputStickerSetItemValue)
{
    TLInputStickerSetItem result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputStickerSetItem:
        *this >> result.flags;
        *this >> result.document;
        *this >> result.emoji;
        if (result.flags & 1 << 0) {
            *this >> result.maskCoords;
        }
        break;
    default:
        break;
    }

    inputStickerSetItemValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputWebDocument &inputWebDocumentValue)
{
    TLInputWebDocument result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputWebDocument:
        *this >> result.url;
        *this >> result.size;
        *this >> result.mimeType;
        *this >> result.attributes;
        break;
    default:
        break;
    }

    inputWebDocumentValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInvoice &invoiceValue)
{
    TLInvoice result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Invoice:
        *this >> result.flags;
        *this >> result.currency;
        *this >> result.prices;
        break;
    default:
        break;
    }

    invoiceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLKeyboardButton &keyboardButtonValue)
{
    TLKeyboardButton result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::KeyboardButton:
    case TLValue::KeyboardButtonRequestPhone:
    case TLValue::KeyboardButtonRequestGeoLocation:
    case TLValue::KeyboardButtonGame:
    case TLValue::KeyboardButtonBuy:
        *this >> result.text;
        break;
    case TLValue::KeyboardButtonUrl:
        *this >> result.text;
        *this >> result.url;
        break;
    case TLValue::KeyboardButtonCallback:
        *this >> result.text;
        *this >> result.data;
        break;
    case TLValue::KeyboardButtonSwitchInline:
        *this >> result.flags;
        *this >> result.text;
        *this >> result.query;
        break;
    default:
        break;
    }

    keyboardButtonValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLKeyboardButtonRow &keyboardButtonRowValue)
{
    TLKeyboardButtonRow result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::KeyboardButtonRow:
        *this >> result.buttons;
        break;
    default:
        break;
    }

    keyboardButtonRowValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLLangPackDifference &langPackDifferenceValue)
{
    TLLangPackDifference result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::LangPackDifference:
        *this >> result.langCode;
        *this >> result.fromVersion;
        *this >> result.version;
        *this >> result.strings;
        break;
    default:
        break;
    }

    langPackDifferenceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesBotCallbackAnswer &messagesBotCallbackAnswerValue)
{
    TLMessagesBotCallbackAnswer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesBotCallbackAnswer:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.message;
        }
        if (result.flags & 1 << 2) {
            *this >> result.url;
        }
        *this >> result.cacheTime;
        break;
    default:
        break;
    }

    messagesBotCallbackAnswerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesFilter &messagesFilterValue)
{
    TLMessagesFilter result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputMessagesFilterEmpty:
    case TLValue::InputMessagesFilterPhotos:
    case TLValue::InputMessagesFilterVideo:
    case TLValue::InputMessagesFilterPhotoVideo:
    case TLValue::InputMessagesFilterDocument:
    case TLValue::InputMessagesFilterUrl:
    case TLValue::InputMessagesFilterGif:
    case TLValue::InputMessagesFilterVoice:
    case TLValue::InputMessagesFilterMusic:
    case TLValue::InputMessagesFilterChatPhotos:
    case TLValue::InputMessagesFilterRoundVoice:
    case TLValue::InputMessagesFilterRoundVideo:
    case TLValue::InputMessagesFilterMyMentions:
    case TLValue::InputMessagesFilterGeo:
    case TLValue::InputMessagesFilterContacts:
        break;
    case TLValue::InputMessagesFilterPhoneCalls:
        *this >> result.flags;
        break;
    default:
        break;
    }

    messagesFilterValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesMessageEditData &messagesMessageEditDataValue)
{
    TLMessagesMessageEditData result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesMessageEditData:
        *this >> result.flags;
        break;
    default:
        break;
    }

    messagesMessageEditDataValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLNotifyPeer &notifyPeerValue)
{
    TLNotifyPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::NotifyPeer:
        *this >> result.peer;
        break;
    case TLValue::NotifyUsers:
    case TLValue::NotifyChats:
    case TLValue::NotifyAll:
        break;
    default:
        break;
    }

    notifyPeerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentRequestedInfo &paymentRequestedInfoValue)
{
    TLPaymentRequestedInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentRequestedInfo:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.name;
        }
        if (result.flags & 1 << 1) {
            *this >> result.phone;
        }
        if (result.flags & 1 << 2) {
            *this >> result.email;
        }
        if (result.flags & 1 << 3) {
            *this >> result.shippingAddress;
        }
        break;
    default:
        break;
    }

    paymentRequestedInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentsSavedInfo &paymentsSavedInfoValue)
{
    TLPaymentsSavedInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentsSavedInfo:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.savedInfo;
        }
        break;
    default:
        break;
    }

    paymentsSavedInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentsValidatedRequestedInfo &paymentsValidatedRequestedInfoValue)
{
    TLPaymentsValidatedRequestedInfo result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentsValidatedRequestedInfo:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.id;
        }
        if (result.flags & 1 << 1) {
            *this >> result.shippingOptions;
        }
        break;
    default:
        break;
    }

    paymentsValidatedRequestedInfoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPeerNotifySettings &peerNotifySettingsValue)
{
    TLPeerNotifySettings result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PeerNotifySettingsEmpty:
        break;
    case TLValue::PeerNotifySettings:
        *this >> result.flags;
        *this >> result.muteUntil;
        *this >> result.sound;
        break;
    default:
        break;
    }

    peerNotifySettingsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPeerSettings &peerSettingsValue)
{
    TLPeerSettings result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PeerSettings:
        *this >> result.flags;
        break;
    default:
        break;
    }

    peerSettingsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhoneCallProtocol &phoneCallProtocolValue)
{
    TLPhoneCallProtocol result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhoneCallProtocol:
        *this >> result.flags;
        *this >> result.minLayer;
        *this >> result.maxLayer;
        break;
    default:
        break;
    }

    phoneCallProtocolValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhoto &photoValue)
{
    TLPhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhotoEmpty:
        *this >> result.id;
        break;
    case TLValue::Photo:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.sizes;
        break;
    default:
        break;
    }

    photoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLReplyMarkup &replyMarkupValue)
{
    TLReplyMarkup result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ReplyKeyboardHide:
    case TLValue::ReplyKeyboardForceReply:
        *this >> result.flags;
        break;
    case TLValue::ReplyKeyboardMarkup:
        *this >> result.flags;
        *this >> result.rows;
        break;
    case TLValue::ReplyInlineMarkup:
        *this >> result.rows;
        break;
    default:
        break;
    }

    replyMarkupValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLStickerSet &stickerSetValue)
{
    TLStickerSet result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::StickerSet:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.title;
        *this >> result.shortName;
        *this >> result.count;
        *this >> result.hash;
        break;
    default:
        break;
    }

    stickerSetValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUser &userValue)
{
    TLUser result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UserEmpty:
        *this >> result.id;
        break;
    case TLValue::User:
        *this >> result.flags;
        *this >> result.id;
        if (result.flags & 1 << 0) {
            *this >> result.accessHash;
        }
        if (result.flags & 1 << 1) {
            *this >> result.firstName;
        }
        if (result.flags & 1 << 2) {
            *this >> result.lastName;
        }
        if (result.flags & 1 << 3) {
            *this >> result.username;
        }
        if (result.flags & 1 << 4) {
            *this >> result.phone;
        }
        if (result.flags & 1 << 5) {
            *this >> result.photo;
        }
        if (result.flags & 1 << 6) {
            *this >> result.status;
        }
        if (result.flags & 1 << 14) {
            *this >> result.botInfoVersion;
        }
        if (result.flags & 1 << 18) {
            *this >> result.restrictionReason;
        }
        if (result.flags & 1 << 19) {
            *this >> result.botInlinePlaceholder;
        }
        if (result.flags & 1 << 22) {
            *this >> result.langCode;
        }
        break;
    default:
        break;
    }

    userValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLWebDocument &webDocumentValue)
{
    TLWebDocument result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::WebDocument:
        *this >> result.url;
        *this >> result.accessHash;
        *this >> result.size;
        *this >> result.mimeType;
        *this >> result.attributes;
        *this >> result.dcId;
        break;
    default:
        break;
    }

    webDocumentValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAccountPrivacyRules &accountPrivacyRulesValue)
{
    TLAccountPrivacyRules result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AccountPrivacyRules:
        *this >> result.rules;
        *this >> result.users;
        break;
    default:
        break;
    }

    accountPrivacyRulesValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLAuthAuthorization &authAuthorizationValue)
{
    TLAuthAuthorization result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::AuthAuthorization:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.tmpSessions;
        }
        *this >> result.user;
        break;
    default:
        break;
    }

    authAuthorizationValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLBotInlineMessage &botInlineMessageValue)
{
    TLBotInlineMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::BotInlineMessageMediaAuto:
        *this >> result.flags;
        *this >> result.caption;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::BotInlineMessageText:
        *this >> result.flags;
        *this >> result.message;
        if (result.flags & 1 << 1) {
            *this >> result.entities;
        }
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::BotInlineMessageMediaGeo:
        *this >> result.flags;
        *this >> result.geo;
        *this >> result.period;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::BotInlineMessageMediaVenue:
        *this >> result.flags;
        *this >> result.geo;
        *this >> result.title;
        *this >> result.address;
        *this >> result.provider;
        *this >> result.venueId;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::BotInlineMessageMediaContact:
        *this >> result.flags;
        *this >> result.phoneNumber;
        *this >> result.firstName;
        *this >> result.lastName;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    default:
        break;
    }

    botInlineMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelsChannelParticipant &channelsChannelParticipantValue)
{
    TLChannelsChannelParticipant result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelsChannelParticipant:
        *this >> result.participant;
        *this >> result.users;
        break;
    default:
        break;
    }

    channelsChannelParticipantValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelsChannelParticipants &channelsChannelParticipantsValue)
{
    TLChannelsChannelParticipants result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelsChannelParticipants:
        *this >> result.count;
        *this >> result.participants;
        *this >> result.users;
        break;
    case TLValue::ChannelsChannelParticipantsNotModified:
        break;
    default:
        break;
    }

    channelsChannelParticipantsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChat &chatValue)
{
    TLChat result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatEmpty:
        *this >> result.id;
        break;
    case TLValue::Chat:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.title;
        *this >> result.photo;
        *this >> result.participantsCount;
        *this >> result.date;
        *this >> result.version;
        if (result.flags & 1 << 6) {
            *this >> result.migratedTo;
        }
        break;
    case TLValue::ChatForbidden:
        *this >> result.id;
        *this >> result.title;
        break;
    case TLValue::Channel:
        *this >> result.flags;
        *this >> result.id;
        if (result.flags & 1 << 13) {
            *this >> result.accessHash;
        }
        *this >> result.title;
        if (result.flags & 1 << 6) {
            *this >> result.username;
        }
        *this >> result.photo;
        *this >> result.date;
        *this >> result.version;
        if (result.flags & 1 << 9) {
            *this >> result.restrictionReason;
        }
        if (result.flags & 1 << 14) {
            *this >> result.adminRights;
        }
        if (result.flags & 1 << 15) {
            *this >> result.bannedRights;
        }
        break;
    case TLValue::ChannelForbidden:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.title;
        if (result.flags & 1 << 16) {
            *this >> result.untilDate;
        }
        break;
    default:
        break;
    }

    chatValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChatFull &chatFullValue)
{
    TLChatFull result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatFull:
        *this >> result.id;
        *this >> result.participants;
        *this >> result.chatPhoto;
        *this >> result.notifySettings;
        *this >> result.exportedInvite;
        *this >> result.botInfo;
        break;
    case TLValue::ChannelFull:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.about;
        if (result.flags & 1 << 0) {
            *this >> result.participantsCount;
        }
        if (result.flags & 1 << 1) {
            *this >> result.adminsCount;
        }
        if (result.flags & 1 << 2) {
            *this >> result.kickedCount;
        }
        if (result.flags & 1 << 2) {
            *this >> result.bannedCount;
        }
        *this >> result.readInboxMaxId;
        *this >> result.readOutboxMaxId;
        *this >> result.unreadCount;
        *this >> result.chatPhoto;
        *this >> result.notifySettings;
        *this >> result.exportedInvite;
        *this >> result.botInfo;
        if (result.flags & 1 << 4) {
            *this >> result.migratedFromChatId;
        }
        if (result.flags & 1 << 4) {
            *this >> result.migratedFromMaxId;
        }
        if (result.flags & 1 << 5) {
            *this >> result.pinnedMsgId;
        }
        if (result.flags & 1 << 8) {
            *this >> result.stickerset;
        }
        if (result.flags & 1 << 9) {
            *this >> result.availableMinId;
        }
        break;
    default:
        break;
    }

    chatFullValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChatInvite &chatInviteValue)
{
    TLChatInvite result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChatInviteAlready:
        *this >> result.chat;
        break;
    case TLValue::ChatInvite:
        *this >> result.flags;
        *this >> result.title;
        *this >> result.photo;
        *this >> result.participantsCount;
        if (result.flags & 1 << 4) {
            *this >> result.participants;
        }
        break;
    default:
        break;
    }

    chatInviteValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLConfig &configValue)
{
    TLConfig result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Config:
        *this >> result.flags;
        *this >> result.date;
        *this >> result.expires;
        *this >> result.testMode;
        *this >> result.thisDc;
        *this >> result.dcOptions;
        *this >> result.chatSizeMax;
        *this >> result.megagroupSizeMax;
        *this >> result.forwardedCountMax;
        *this >> result.onlineUpdatePeriodMs;
        *this >> result.offlineBlurTimeoutMs;
        *this >> result.offlineIdleTimeoutMs;
        *this >> result.onlineCloudTimeoutMs;
        *this >> result.notifyCloudDelayMs;
        *this >> result.notifyDefaultDelayMs;
        *this >> result.chatBigSize;
        *this >> result.pushChatPeriodMs;
        *this >> result.pushChatLimit;
        *this >> result.savedGifsLimit;
        *this >> result.editTimeLimit;
        *this >> result.ratingEDecay;
        *this >> result.stickersRecentLimit;
        *this >> result.stickersFavedLimit;
        *this >> result.channelsReadMediaPeriod;
        if (result.flags & 1 << 0) {
            *this >> result.tmpSessions;
        }
        *this >> result.pinnedDialogsCountMax;
        *this >> result.callReceiveTimeoutMs;
        *this >> result.callRingTimeoutMs;
        *this >> result.callConnectTimeoutMs;
        *this >> result.callPacketTimeoutMs;
        *this >> result.meUrlPrefix;
        if (result.flags & 1 << 2) {
            *this >> result.suggestedLangCode;
        }
        if (result.flags & 1 << 2) {
            *this >> result.langPackVersion;
        }
        *this >> result.disabledFeatures;
        break;
    default:
        break;
    }

    configValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsBlocked &contactsBlockedValue)
{
    TLContactsBlocked result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsBlocked:
        *this >> result.blocked;
        *this >> result.users;
        break;
    case TLValue::ContactsBlockedSlice:
        *this >> result.count;
        *this >> result.blocked;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsBlockedValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsContacts &contactsContactsValue)
{
    TLContactsContacts result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsContactsNotModified:
        break;
    case TLValue::ContactsContacts:
        *this >> result.contacts;
        *this >> result.savedCount;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsContactsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsFound &contactsFoundValue)
{
    TLContactsFound result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsFound:
        *this >> result.results;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsFoundValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsImportedContacts &contactsImportedContactsValue)
{
    TLContactsImportedContacts result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsImportedContacts:
        *this >> result.imported;
        *this >> result.popularInvites;
        *this >> result.retryContacts;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsImportedContactsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsLink &contactsLinkValue)
{
    TLContactsLink result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsLink:
        *this >> result.myLink;
        *this >> result.foreignLink;
        *this >> result.user;
        break;
    default:
        break;
    }

    contactsLinkValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsResolvedPeer &contactsResolvedPeerValue)
{
    TLContactsResolvedPeer result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsResolvedPeer:
        *this >> result.peer;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsResolvedPeerValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLContactsTopPeers &contactsTopPeersValue)
{
    TLContactsTopPeers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ContactsTopPeersNotModified:
        break;
    case TLValue::ContactsTopPeers:
        *this >> result.categories;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    contactsTopPeersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDialog &dialogValue)
{
    TLDialog result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Dialog:
        *this >> result.flags;
        *this >> result.peer;
        *this >> result.topMessage;
        *this >> result.readInboxMaxId;
        *this >> result.readOutboxMaxId;
        *this >> result.unreadCount;
        *this >> result.unreadMentionsCount;
        *this >> result.notifySettings;
        if (result.flags & 1 << 0) {
            *this >> result.pts;
        }
        if (result.flags & 1 << 1) {
            *this >> result.draft;
        }
        break;
    default:
        break;
    }

    dialogValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLDocument &documentValue)
{
    TLDocument result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::DocumentEmpty:
        *this >> result.id;
        break;
    case TLValue::Document:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.mimeType;
        *this >> result.size;
        *this >> result.thumb;
        *this >> result.dcId;
        *this >> result.version;
        *this >> result.attributes;
        break;
    default:
        break;
    }

    documentValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLFoundGif &foundGifValue)
{
    TLFoundGif result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::FoundGif:
        *this >> result.url;
        *this >> result.thumbUrl;
        *this >> result.contentUrl;
        *this >> result.contentType;
        *this >> result.w;
        *this >> result.h;
        break;
    case TLValue::FoundGifCached:
        *this >> result.url;
        *this >> result.photo;
        *this >> result.document;
        break;
    default:
        break;
    }

    foundGifValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLGame &gameValue)
{
    TLGame result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::Game:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.shortName;
        *this >> result.title;
        *this >> result.description;
        *this >> result.photo;
        if (result.flags & 1 << 0) {
            *this >> result.document;
        }
        break;
    default:
        break;
    }

    gameValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpSupport &helpSupportValue)
{
    TLHelpSupport result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpSupport:
        *this >> result.phoneNumber;
        *this >> result.user;
        break;
    default:
        break;
    }

    helpSupportValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputBotInlineMessage &inputBotInlineMessageValue)
{
    TLInputBotInlineMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputBotInlineMessageMediaAuto:
        *this >> result.flags;
        *this >> result.caption;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageText:
        *this >> result.flags;
        *this >> result.message;
        if (result.flags & 1 << 1) {
            *this >> result.entities;
        }
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaGeo:
        *this >> result.flags;
        *this >> result.geoPoint;
        *this >> result.period;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaVenue:
        *this >> result.flags;
        *this >> result.geoPoint;
        *this >> result.title;
        *this >> result.address;
        *this >> result.provider;
        *this >> result.venueId;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaContact:
        *this >> result.flags;
        *this >> result.phoneNumber;
        *this >> result.firstName;
        *this >> result.lastName;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageGame:
        *this >> result.flags;
        if (result.flags & 1 << 2) {
            *this >> result.replyMarkup;
        }
        break;
    default:
        break;
    }

    inputBotInlineMessageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputBotInlineResult &inputBotInlineResultValue)
{
    TLInputBotInlineResult result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputBotInlineResult:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.type;
        if (result.flags & 1 << 1) {
            *this >> result.title;
        }
        if (result.flags & 1 << 2) {
            *this >> result.description;
        }
        if (result.flags & 1 << 3) {
            *this >> result.url;
        }
        if (result.flags & 1 << 4) {
            *this >> result.thumbUrl;
        }
        if (result.flags & 1 << 5) {
            *this >> result.contentUrl;
        }
        if (result.flags & 1 << 5) {
            *this >> result.contentType;
        }
        if (result.flags & 1 << 6) {
            *this >> result.w;
        }
        if (result.flags & 1 << 6) {
            *this >> result.h;
        }
        if (result.flags & 1 << 7) {
            *this >> result.duration;
        }
        *this >> result.sendMessage;
        break;
    case TLValue::InputBotInlineResultPhoto:
        *this >> result.id;
        *this >> result.type;
        *this >> result.photo;
        *this >> result.sendMessage;
        break;
    case TLValue::InputBotInlineResultDocument:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.type;
        if (result.flags & 1 << 1) {
            *this >> result.title;
        }
        if (result.flags & 1 << 2) {
            *this >> result.description;
        }
        *this >> result.document;
        *this >> result.sendMessage;
        break;
    case TLValue::InputBotInlineResultGame:
        *this >> result.id;
        *this >> result.shortName;
        *this >> result.sendMessage;
        break;
    default:
        break;
    }

    inputBotInlineResultValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLInputMedia &inputMediaValue)
{
    TLInputMedia result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::InputMediaEmpty:
        break;
    case TLValue::InputMediaUploadedPhoto:
        *this >> result.flags;
        *this >> result.file;
        *this >> result.caption;
        if (result.flags & 1 << 0) {
            *this >> result.stickers;
        }
        if (result.flags & 1 << 1) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::InputMediaPhoto:
        *this >> result.flags;
        *this >> result.inputPhotoId;
        *this >> result.caption;
        if (result.flags & 1 << 0) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::InputMediaGeoPoint:
        *this >> result.geoPoint;
        break;
    case TLValue::InputMediaContact:
        *this >> result.phoneNumber;
        *this >> result.firstName;
        *this >> result.lastName;
        break;
    case TLValue::InputMediaUploadedDocument:
        *this >> result.flags;
        *this >> result.file;
        if (result.flags & 1 << 2) {
            *this >> result.thumb;
        }
        *this >> result.mimeType;
        *this >> result.attributes;
        *this >> result.caption;
        if (result.flags & 1 << 0) {
            *this >> result.stickers;
        }
        if (result.flags & 1 << 1) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::InputMediaDocument:
        *this >> result.flags;
        *this >> result.inputDocumentId;
        *this >> result.caption;
        if (result.flags & 1 << 0) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::InputMediaVenue:
        *this >> result.geoPoint;
        *this >> result.title;
        *this >> result.address;
        *this >> result.provider;
        *this >> result.venueId;
        *this >> result.venueType;
        break;
    case TLValue::InputMediaGifExternal:
        *this >> result.url;
        *this >> result.q;
        break;
    case TLValue::InputMediaPhotoExternal:
    case TLValue::InputMediaDocumentExternal:
        *this >> result.flags;
        *this >> result.url;
        *this >> result.caption;
        if (result.flags & 1 << 0) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::InputMediaGame:
        *this >> result.inputGameId;
        break;
    case TLValue::InputMediaInvoice:
        *this >> result.flags;
        *this >> result.title;
        *this >> result.description;
        if (result.flags & 1 << 0) {
            *this >> result.photo;
        }
        *this >> result.invoice;
        *this >> result.payload;
        *this >> result.provider;
        *this >> result.startParam;
        break;
    case TLValue::InputMediaGeoLive:
        *this >> result.geoPoint;
        *this >> result.period;
        break;
    default:
        break;
    }

    inputMediaValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessageAction &messageActionValue)
{
    TLMessageAction result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageActionEmpty:
    case TLValue::MessageActionChatDeletePhoto:
    case TLValue::MessageActionPinMessage:
    case TLValue::MessageActionHistoryClear:
    case TLValue::MessageActionScreenshotTaken:
        break;
    case TLValue::MessageActionChatCreate:
        *this >> result.title;
        *this >> result.users;
        break;
    case TLValue::MessageActionChatEditTitle:
    case TLValue::MessageActionChannelCreate:
        *this >> result.title;
        break;
    case TLValue::MessageActionChatEditPhoto:
        *this >> result.photo;
        break;
    case TLValue::MessageActionChatAddUser:
        *this >> result.users;
        break;
    case TLValue::MessageActionChatDeleteUser:
        *this >> result.userId;
        break;
    case TLValue::MessageActionChatJoinedByLink:
        *this >> result.inviterId;
        break;
    case TLValue::MessageActionChatMigrateTo:
        *this >> result.channelId;
        break;
    case TLValue::MessageActionChannelMigrateFrom:
        *this >> result.title;
        *this >> result.chatId;
        break;
    case TLValue::MessageActionGameScore:
        *this >> result.gameId;
        *this >> result.score;
        break;
    case TLValue::MessageActionPaymentSentMe:
        *this >> result.flags;
        *this >> result.currency;
        *this >> result.totalAmount;
        *this >> result.payload;
        if (result.flags & 1 << 0) {
            *this >> result.info;
        }
        if (result.flags & 1 << 1) {
            *this >> result.shippingOptionId;
        }
        *this >> result.charge;
        break;
    case TLValue::MessageActionPaymentSent:
        *this >> result.currency;
        *this >> result.totalAmount;
        break;
    case TLValue::MessageActionPhoneCall:
        *this >> result.flags;
        *this >> result.callId;
        if (result.flags & 1 << 0) {
            *this >> result.reason;
        }
        if (result.flags & 1 << 1) {
            *this >> result.duration;
        }
        break;
    case TLValue::MessageActionCustomAction:
        *this >> result.message;
        break;
    default:
        break;
    }

    messageActionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesAllStickers &messagesAllStickersValue)
{
    TLMessagesAllStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesAllStickersNotModified:
        break;
    case TLValue::MessagesAllStickers:
        *this >> result.hash;
        *this >> result.sets;
        break;
    default:
        break;
    }

    messagesAllStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesChatFull &messagesChatFullValue)
{
    TLMessagesChatFull result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesChatFull:
        *this >> result.fullChat;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    messagesChatFullValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesChats &messagesChatsValue)
{
    TLMessagesChats result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesChats:
        *this >> result.chats;
        break;
    case TLValue::MessagesChatsSlice:
        *this >> result.count;
        *this >> result.chats;
        break;
    default:
        break;
    }

    messagesChatsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesFavedStickers &messagesFavedStickersValue)
{
    TLMessagesFavedStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesFavedStickersNotModified:
        break;
    case TLValue::MessagesFavedStickers:
        *this >> result.hash;
        *this >> result.packs;
        *this >> result.stickers;
        break;
    default:
        break;
    }

    messagesFavedStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesFoundGifs &messagesFoundGifsValue)
{
    TLMessagesFoundGifs result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesFoundGifs:
        *this >> result.nextOffset;
        *this >> result.results;
        break;
    default:
        break;
    }

    messagesFoundGifsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesHighScores &messagesHighScoresValue)
{
    TLMessagesHighScores result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesHighScores:
        *this >> result.scores;
        *this >> result.users;
        break;
    default:
        break;
    }

    messagesHighScoresValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesRecentStickers &messagesRecentStickersValue)
{
    TLMessagesRecentStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesRecentStickersNotModified:
        break;
    case TLValue::MessagesRecentStickers:
        *this >> result.hash;
        *this >> result.stickers;
        break;
    default:
        break;
    }

    messagesRecentStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesSavedGifs &messagesSavedGifsValue)
{
    TLMessagesSavedGifs result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesSavedGifsNotModified:
        break;
    case TLValue::MessagesSavedGifs:
        *this >> result.hash;
        *this >> result.gifs;
        break;
    default:
        break;
    }

    messagesSavedGifsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesStickerSet &messagesStickerSetValue)
{
    TLMessagesStickerSet result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesStickerSet:
        *this >> result.set;
        *this >> result.packs;
        *this >> result.documents;
        break;
    default:
        break;
    }

    messagesStickerSetValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesStickers &messagesStickersValue)
{
    TLMessagesStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesStickersNotModified:
        break;
    case TLValue::MessagesStickers:
        *this >> result.hash;
        *this >> result.stickers;
        break;
    default:
        break;
    }

    messagesStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPageBlock &pageBlockValue)
{
    TLPageBlock result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PageBlockUnsupported:
    case TLValue::PageBlockDivider:
        break;
    case TLValue::PageBlockTitle:
    case TLValue::PageBlockSubtitle:
    case TLValue::PageBlockHeader:
    case TLValue::PageBlockSubheader:
    case TLValue::PageBlockParagraph:
    case TLValue::PageBlockFooter:
        *this >> *result.text;
        break;
    case TLValue::PageBlockAuthorDate:
        *this >> *result.richTextAuthor;
        *this >> result.publishedDate;
        break;
    case TLValue::PageBlockPreformatted:
        *this >> *result.text;
        *this >> result.language;
        break;
    case TLValue::PageBlockAnchor:
        *this >> result.name;
        break;
    case TLValue::PageBlockList:
        *this >> result.ordered;
        *this >> result.richTextItemsVector;
        break;
    case TLValue::PageBlockBlockquote:
    case TLValue::PageBlockPullquote:
        *this >> *result.text;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockPhoto:
        *this >> result.photoId;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockVideo:
        *this >> result.flags;
        *this >> result.videoId;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockCover:
        *this >> *result.cover;
        break;
    case TLValue::PageBlockEmbed:
        *this >> result.flags;
        if (result.flags & 1 << 1) {
            *this >> result.url;
        }
        if (result.flags & 1 << 2) {
            *this >> result.html;
        }
        if (result.flags & 1 << 4) {
            *this >> result.posterPhotoId;
        }
        *this >> result.w;
        *this >> result.h;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockEmbedPost:
        *this >> result.url;
        *this >> result.webpageId;
        *this >> result.authorPhotoId;
        *this >> result.stringAuthor;
        *this >> result.date;
        *this >> result.blocks;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockCollage:
    case TLValue::PageBlockSlideshow:
        *this >> result.pageBlockItemsVector;
        *this >> *result.caption;
        break;
    case TLValue::PageBlockChannel:
        *this >> result.channel;
        break;
    case TLValue::PageBlockAudio:
        *this >> result.audioId;
        *this >> *result.caption;
        break;
    default:
        break;
    }

    pageBlockValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentsPaymentForm &paymentsPaymentFormValue)
{
    TLPaymentsPaymentForm result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentsPaymentForm:
        *this >> result.flags;
        *this >> result.botId;
        *this >> result.invoice;
        *this >> result.providerId;
        *this >> result.url;
        if (result.flags & 1 << 4) {
            *this >> result.nativeProvider;
        }
        if (result.flags & 1 << 4) {
            *this >> result.nativeParams;
        }
        if (result.flags & 1 << 0) {
            *this >> result.savedInfo;
        }
        if (result.flags & 1 << 1) {
            *this >> result.savedCredentials;
        }
        *this >> result.users;
        break;
    default:
        break;
    }

    paymentsPaymentFormValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentsPaymentReceipt &paymentsPaymentReceiptValue)
{
    TLPaymentsPaymentReceipt result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentsPaymentReceipt:
        *this >> result.flags;
        *this >> result.date;
        *this >> result.botId;
        *this >> result.invoice;
        *this >> result.providerId;
        if (result.flags & 1 << 0) {
            *this >> result.info;
        }
        if (result.flags & 1 << 1) {
            *this >> result.shipping;
        }
        *this >> result.currency;
        *this >> result.totalAmount;
        *this >> result.credentialsTitle;
        *this >> result.users;
        break;
    default:
        break;
    }

    paymentsPaymentReceiptValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhoneCall &phoneCallValue)
{
    TLPhoneCall result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhoneCallEmpty:
        *this >> result.id;
        break;
    case TLValue::PhoneCallWaiting:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.protocol;
        if (result.flags & 1 << 0) {
            *this >> result.receiveDate;
        }
        break;
    case TLValue::PhoneCallRequested:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.gAHash;
        *this >> result.protocol;
        break;
    case TLValue::PhoneCallAccepted:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.gB;
        *this >> result.protocol;
        break;
    case TLValue::PhoneCall:
        *this >> result.id;
        *this >> result.accessHash;
        *this >> result.date;
        *this >> result.adminId;
        *this >> result.participantId;
        *this >> result.gAOrB;
        *this >> result.keyFingerprint;
        *this >> result.protocol;
        *this >> result.connection;
        *this >> result.alternativeConnections;
        *this >> result.startDate;
        break;
    case TLValue::PhoneCallDiscarded:
        *this >> result.flags;
        *this >> result.id;
        if (result.flags & 1 << 0) {
            *this >> result.reason;
        }
        if (result.flags & 1 << 1) {
            *this >> result.duration;
        }
        break;
    default:
        break;
    }

    phoneCallValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhonePhoneCall &phonePhoneCallValue)
{
    TLPhonePhoneCall result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhonePhoneCall:
        *this >> result.phoneCall;
        *this >> result.users;
        break;
    default:
        break;
    }

    phonePhoneCallValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhotosPhoto &photosPhotoValue)
{
    TLPhotosPhoto result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhotosPhoto:
        *this >> result.photo;
        *this >> result.users;
        break;
    default:
        break;
    }

    photosPhotoValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPhotosPhotos &photosPhotosValue)
{
    TLPhotosPhotos result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PhotosPhotos:
        *this >> result.photos;
        *this >> result.users;
        break;
    case TLValue::PhotosPhotosSlice:
        *this >> result.count;
        *this >> result.photos;
        *this >> result.users;
        break;
    default:
        break;
    }

    photosPhotosValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLStickerSetCovered &stickerSetCoveredValue)
{
    TLStickerSetCovered result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::StickerSetCovered:
        *this >> result.set;
        *this >> result.cover;
        break;
    case TLValue::StickerSetMultiCovered:
        *this >> result.set;
        *this >> result.covers;
        break;
    default:
        break;
    }

    stickerSetCoveredValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUserFull &userFullValue)
{
    TLUserFull result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UserFull:
        *this >> result.flags;
        *this >> result.user;
        if (result.flags & 1 << 1) {
            *this >> result.about;
        }
        *this >> result.link;
        if (result.flags & 1 << 2) {
            *this >> result.profilePhoto;
        }
        *this >> result.notifySettings;
        if (result.flags & 1 << 3) {
            *this >> result.botInfo;
        }
        *this >> result.commonChatsCount;
        break;
    default:
        break;
    }

    userFullValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLBotInlineResult &botInlineResultValue)
{
    TLBotInlineResult result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::BotInlineResult:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.type;
        if (result.flags & 1 << 1) {
            *this >> result.title;
        }
        if (result.flags & 1 << 2) {
            *this >> result.description;
        }
        if (result.flags & 1 << 3) {
            *this >> result.url;
        }
        if (result.flags & 1 << 4) {
            *this >> result.thumbUrl;
        }
        if (result.flags & 1 << 5) {
            *this >> result.contentUrl;
        }
        if (result.flags & 1 << 5) {
            *this >> result.contentType;
        }
        if (result.flags & 1 << 6) {
            *this >> result.w;
        }
        if (result.flags & 1 << 6) {
            *this >> result.h;
        }
        if (result.flags & 1 << 7) {
            *this >> result.duration;
        }
        *this >> result.sendMessage;
        break;
    case TLValue::BotInlineMediaResult:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.type;
        if (result.flags & 1 << 0) {
            *this >> result.photo;
        }
        if (result.flags & 1 << 1) {
            *this >> result.document;
        }
        if (result.flags & 1 << 2) {
            *this >> result.title;
        }
        if (result.flags & 1 << 3) {
            *this >> result.description;
        }
        *this >> result.sendMessage;
        break;
    default:
        break;
    }

    botInlineResultValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesArchivedStickers &messagesArchivedStickersValue)
{
    TLMessagesArchivedStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesArchivedStickers:
        *this >> result.count;
        *this >> result.sets;
        break;
    default:
        break;
    }

    messagesArchivedStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesBotResults &messagesBotResultsValue)
{
    TLMessagesBotResults result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesBotResults:
        *this >> result.flags;
        *this >> result.queryId;
        if (result.flags & 1 << 1) {
            *this >> result.nextOffset;
        }
        if (result.flags & 1 << 2) {
            *this >> result.switchPm;
        }
        *this >> result.results;
        *this >> result.cacheTime;
        *this >> result.users;
        break;
    default:
        break;
    }

    messagesBotResultsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesFeaturedStickers &messagesFeaturedStickersValue)
{
    TLMessagesFeaturedStickers result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesFeaturedStickersNotModified:
        break;
    case TLValue::MessagesFeaturedStickers:
        *this >> result.hash;
        *this >> result.sets;
        *this >> result.unread;
        break;
    default:
        break;
    }

    messagesFeaturedStickersValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesStickerSetInstallResult &messagesStickerSetInstallResultValue)
{
    TLMessagesStickerSetInstallResult result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesStickerSetInstallResultSuccess:
        break;
    case TLValue::MessagesStickerSetInstallResultArchive:
        *this >> result.sets;
        break;
    default:
        break;
    }

    messagesStickerSetInstallResultValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPage &pageValue)
{
    TLPage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PagePart:
    case TLValue::PageFull:
        *this >> result.blocks;
        *this >> result.photos;
        *this >> result.documents;
        break;
    default:
        break;
    }

    pageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLRecentMeUrl &recentMeUrlValue)
{
    TLRecentMeUrl result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::RecentMeUrlUnknown:
        *this >> result.url;
        break;
    case TLValue::RecentMeUrlUser:
        *this >> result.url;
        *this >> result.userId;
        break;
    case TLValue::RecentMeUrlChat:
        *this >> result.url;
        *this >> result.chatId;
        break;
    case TLValue::RecentMeUrlChatInvite:
        *this >> result.url;
        *this >> result.chatInvite;
        break;
    case TLValue::RecentMeUrlStickerSet:
        *this >> result.url;
        *this >> result.set;
        break;
    default:
        break;
    }

    recentMeUrlValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLWebPage &webPageValue)
{
    TLWebPage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::WebPageEmpty:
        *this >> result.id;
        break;
    case TLValue::WebPagePending:
        *this >> result.id;
        *this >> result.date;
        break;
    case TLValue::WebPage:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.url;
        *this >> result.displayUrl;
        *this >> result.hash;
        if (result.flags & 1 << 0) {
            *this >> result.type;
        }
        if (result.flags & 1 << 1) {
            *this >> result.siteName;
        }
        if (result.flags & 1 << 2) {
            *this >> result.title;
        }
        if (result.flags & 1 << 3) {
            *this >> result.description;
        }
        if (result.flags & 1 << 4) {
            *this >> result.photo;
        }
        if (result.flags & 1 << 5) {
            *this >> result.embedUrl;
        }
        if (result.flags & 1 << 5) {
            *this >> result.embedType;
        }
        if (result.flags & 1 << 6) {
            *this >> result.embedWidth;
        }
        if (result.flags & 1 << 6) {
            *this >> result.embedHeight;
        }
        if (result.flags & 1 << 7) {
            *this >> result.duration;
        }
        if (result.flags & 1 << 8) {
            *this >> result.author;
        }
        if (result.flags & 1 << 9) {
            *this >> result.document;
        }
        if (result.flags & 1 << 10) {
            *this >> result.cachedPage;
        }
        break;
    case TLValue::WebPageNotModified:
        break;
    default:
        break;
    }

    webPageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLHelpRecentMeUrls &helpRecentMeUrlsValue)
{
    TLHelpRecentMeUrls result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::HelpRecentMeUrls:
        *this >> result.urls;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    helpRecentMeUrlsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessageMedia &messageMediaValue)
{
    TLMessageMedia result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageMediaEmpty:
    case TLValue::MessageMediaUnsupported:
        break;
    case TLValue::MessageMediaPhoto:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.photo;
        }
        if (result.flags & 1 << 1) {
            *this >> result.caption;
        }
        if (result.flags & 1 << 2) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::MessageMediaGeo:
        *this >> result.geo;
        break;
    case TLValue::MessageMediaContact:
        *this >> result.phoneNumber;
        *this >> result.firstName;
        *this >> result.lastName;
        *this >> result.userId;
        break;
    case TLValue::MessageMediaDocument:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.document;
        }
        if (result.flags & 1 << 1) {
            *this >> result.caption;
        }
        if (result.flags & 1 << 2) {
            *this >> result.ttlSeconds;
        }
        break;
    case TLValue::MessageMediaWebPage:
        *this >> result.webpage;
        break;
    case TLValue::MessageMediaVenue:
        *this >> result.geo;
        *this >> result.title;
        *this >> result.address;
        *this >> result.provider;
        *this >> result.venueId;
        *this >> result.venueType;
        break;
    case TLValue::MessageMediaGame:
        *this >> result.game;
        break;
    case TLValue::MessageMediaInvoice:
        *this >> result.flags;
        *this >> result.title;
        *this >> result.description;
        if (result.flags & 1 << 0) {
            *this >> result.webDocumentPhoto;
        }
        if (result.flags & 1 << 2) {
            *this >> result.receiptMsgId;
        }
        *this >> result.currency;
        *this >> result.totalAmount;
        *this >> result.startParam;
        break;
    case TLValue::MessageMediaGeoLive:
        *this >> result.geo;
        *this >> result.period;
        break;
    default:
        break;
    }

    messageMediaValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessage &messageValue)
{
    TLMessage result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessageEmpty:
        *this >> result.id;
        break;
    case TLValue::Message:
        *this >> result.flags;
        *this >> result.id;
        if (result.flags & 1 << 8) {
            *this >> result.fromId;
        }
        *this >> result.toId;
        if (result.flags & 1 << 2) {
            *this >> result.fwdFrom;
        }
        if (result.flags & 1 << 11) {
            *this >> result.viaBotId;
        }
        if (result.flags & 1 << 3) {
            *this >> result.replyToMsgId;
        }
        *this >> result.date;
        *this >> result.message;
        if (result.flags & 1 << 9) {
            *this >> result.media;
        }
        if (result.flags & 1 << 6) {
            *this >> result.replyMarkup;
        }
        if (result.flags & 1 << 7) {
            *this >> result.entities;
        }
        if (result.flags & 1 << 10) {
            *this >> result.views;
        }
        if (result.flags & 1 << 15) {
            *this >> result.editDate;
        }
        if (result.flags & 1 << 16) {
            *this >> result.postAuthor;
        }
        break;
    case TLValue::MessageService:
        *this >> result.flags;
        *this >> result.id;
        if (result.flags & 1 << 8) {
            *this >> result.fromId;
        }
        *this >> result.toId;
        if (result.flags & 1 << 3) {
            *this >> result.replyToMsgId;
        }
        *this >> result.date;
        *this >> result.action;
        break;
    default:
        break;
    }

    messageValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesDialogs &messagesDialogsValue)
{
    TLMessagesDialogs result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesDialogs:
        *this >> result.dialogs;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    case TLValue::MessagesDialogsSlice:
        *this >> result.count;
        *this >> result.dialogs;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    messagesDialogsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesMessages &messagesMessagesValue)
{
    TLMessagesMessages result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesMessages:
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    case TLValue::MessagesMessagesSlice:
        *this >> result.count;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    case TLValue::MessagesChannelMessages:
        *this >> result.flags;
        *this >> result.pts;
        *this >> result.count;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    case TLValue::MessagesMessagesNotModified:
        *this >> result.count;
        break;
    default:
        break;
    }

    messagesMessagesValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLMessagesPeerDialogs &messagesPeerDialogsValue)
{
    TLMessagesPeerDialogs result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::MessagesPeerDialogs:
        *this >> result.dialogs;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        *this >> result.state;
        break;
    default:
        break;
    }

    messagesPeerDialogsValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUpdate &updateValue)
{
    TLUpdate result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UpdateNewMessage:
    case TLValue::UpdateNewChannelMessage:
    case TLValue::UpdateEditChannelMessage:
    case TLValue::UpdateEditMessage:
        *this >> result.message;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateMessageID:
        *this >> result.quint32Id;
        *this >> result.randomId;
        break;
    case TLValue::UpdateDeleteMessages:
    case TLValue::UpdateReadMessagesContents:
        *this >> result.messages;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateUserTyping:
        *this >> result.userId;
        *this >> result.action;
        break;
    case TLValue::UpdateChatUserTyping:
        *this >> result.chatId;
        *this >> result.userId;
        *this >> result.action;
        break;
    case TLValue::UpdateChatParticipants:
        *this >> result.participants;
        break;
    case TLValue::UpdateUserStatus:
        *this >> result.userId;
        *this >> result.status;
        break;
    case TLValue::UpdateUserName:
        *this >> result.userId;
        *this >> result.firstName;
        *this >> result.lastName;
        *this >> result.username;
        break;
    case TLValue::UpdateUserPhoto:
        *this >> result.userId;
        *this >> result.date;
        *this >> result.photo;
        *this >> result.previous;
        break;
    case TLValue::UpdateContactRegistered:
        *this >> result.userId;
        *this >> result.date;
        break;
    case TLValue::UpdateContactLink:
        *this >> result.userId;
        *this >> result.myLink;
        *this >> result.foreignLink;
        break;
    case TLValue::UpdateNewEncryptedMessage:
        *this >> result.encryptedMessage;
        *this >> result.qts;
        break;
    case TLValue::UpdateEncryptedChatTyping:
        *this >> result.chatId;
        break;
    case TLValue::UpdateEncryption:
        *this >> result.chat;
        *this >> result.date;
        break;
    case TLValue::UpdateEncryptedMessagesRead:
        *this >> result.chatId;
        *this >> result.maxDate;
        *this >> result.date;
        break;
    case TLValue::UpdateChatParticipantAdd:
        *this >> result.chatId;
        *this >> result.userId;
        *this >> result.inviterId;
        *this >> result.date;
        *this >> result.version;
        break;
    case TLValue::UpdateChatParticipantDelete:
        *this >> result.chatId;
        *this >> result.userId;
        *this >> result.version;
        break;
    case TLValue::UpdateDcOptions:
        *this >> result.dcOptions;
        break;
    case TLValue::UpdateUserBlocked:
        *this >> result.userId;
        *this >> result.blocked;
        break;
    case TLValue::UpdateNotifySettings:
        *this >> result.notifyPeer;
        *this >> result.notifySettings;
        break;
    case TLValue::UpdateServiceNotification:
        *this >> result.flags;
        if (result.flags & 1 << 1) {
            *this >> result.inboxDate;
        }
        *this >> result.type;
        *this >> result.stringMessage;
        *this >> result.media;
        *this >> result.entities;
        break;
    case TLValue::UpdatePrivacy:
        *this >> result.key;
        *this >> result.rules;
        break;
    case TLValue::UpdateUserPhone:
        *this >> result.userId;
        *this >> result.phone;
        break;
    case TLValue::UpdateReadHistoryInbox:
    case TLValue::UpdateReadHistoryOutbox:
        *this >> result.peer;
        *this >> result.maxId;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateWebPage:
        *this >> result.webpage;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateChannelTooLong:
        *this >> result.flags;
        *this >> result.channelId;
        if (result.flags & 1 << 0) {
            *this >> result.pts;
        }
        break;
    case TLValue::UpdateChannel:
        *this >> result.channelId;
        break;
    case TLValue::UpdateReadChannelInbox:
    case TLValue::UpdateReadChannelOutbox:
        *this >> result.channelId;
        *this >> result.maxId;
        break;
    case TLValue::UpdateDeleteChannelMessages:
        *this >> result.channelId;
        *this >> result.messages;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateChannelMessageViews:
        *this >> result.channelId;
        *this >> result.quint32Id;
        *this >> result.views;
        break;
    case TLValue::UpdateChatAdmins:
        *this >> result.chatId;
        *this >> result.enabled;
        *this >> result.version;
        break;
    case TLValue::UpdateChatParticipantAdmin:
        *this >> result.chatId;
        *this >> result.userId;
        *this >> result.isAdmin;
        *this >> result.version;
        break;
    case TLValue::UpdateNewStickerSet:
        *this >> result.stickerset;
        break;
    case TLValue::UpdateStickerSetsOrder:
        *this >> result.flags;
        *this >> result.quint64OrderVector;
        break;
    case TLValue::UpdateStickerSets:
    case TLValue::UpdateSavedGifs:
    case TLValue::UpdateReadFeaturedStickers:
    case TLValue::UpdateRecentStickers:
    case TLValue::UpdateConfig:
    case TLValue::UpdatePtsChanged:
    case TLValue::UpdateLangPackTooLong:
    case TLValue::UpdateFavedStickers:
    case TLValue::UpdateContactsReset:
        break;
    case TLValue::UpdateBotInlineQuery:
        *this >> result.flags;
        *this >> result.queryId;
        *this >> result.userId;
        *this >> result.query;
        if (result.flags & 1 << 0) {
            *this >> result.geo;
        }
        *this >> result.offset;
        break;
    case TLValue::UpdateBotInlineSend:
        *this >> result.flags;
        *this >> result.userId;
        *this >> result.query;
        if (result.flags & 1 << 0) {
            *this >> result.geo;
        }
        *this >> result.stringId;
        if (result.flags & 1 << 1) {
            *this >> result.inputBotInlineMessageIDMsgId;
        }
        break;
    case TLValue::UpdateChannelPinnedMessage:
        *this >> result.channelId;
        *this >> result.quint32Id;
        break;
    case TLValue::UpdateBotCallbackQuery:
        *this >> result.flags;
        *this >> result.queryId;
        *this >> result.userId;
        *this >> result.peer;
        *this >> result.quint32MsgId;
        *this >> result.chatInstance;
        if (result.flags & 1 << 0) {
            *this >> result.byteArrayData;
        }
        if (result.flags & 1 << 1) {
            *this >> result.gameShortName;
        }
        break;
    case TLValue::UpdateInlineBotCallbackQuery:
        *this >> result.flags;
        *this >> result.queryId;
        *this >> result.userId;
        *this >> result.inputBotInlineMessageIDMsgId;
        *this >> result.chatInstance;
        if (result.flags & 1 << 0) {
            *this >> result.byteArrayData;
        }
        if (result.flags & 1 << 1) {
            *this >> result.gameShortName;
        }
        break;
    case TLValue::UpdateDraftMessage:
        *this >> result.peer;
        *this >> result.draft;
        break;
    case TLValue::UpdateChannelWebPage:
        *this >> result.channelId;
        *this >> result.webpage;
        *this >> result.pts;
        *this >> result.ptsCount;
        break;
    case TLValue::UpdateDialogPinned:
        *this >> result.flags;
        *this >> result.peer;
        break;
    case TLValue::UpdatePinnedDialogs:
        *this >> result.flags;
        if (result.flags & 1 << 0) {
            *this >> result.peerOrderVector;
        }
        break;
    case TLValue::UpdateBotWebhookJSON:
        *this >> result.jSONData;
        break;
    case TLValue::UpdateBotWebhookJSONQuery:
        *this >> result.queryId;
        *this >> result.jSONData;
        *this >> result.timeout;
        break;
    case TLValue::UpdateBotShippingQuery:
        *this >> result.queryId;
        *this >> result.userId;
        *this >> result.payload;
        *this >> result.shippingAddress;
        break;
    case TLValue::UpdateBotPrecheckoutQuery:
        *this >> result.flags;
        *this >> result.queryId;
        *this >> result.userId;
        *this >> result.payload;
        if (result.flags & 1 << 0) {
            *this >> result.info;
        }
        if (result.flags & 1 << 1) {
            *this >> result.shippingOptionId;
        }
        *this >> result.currency;
        *this >> result.totalAmount;
        break;
    case TLValue::UpdatePhoneCall:
        *this >> result.phoneCall;
        break;
    case TLValue::UpdateLangPack:
        *this >> result.difference;
        break;
    case TLValue::UpdateChannelReadMessagesContents:
        *this >> result.channelId;
        *this >> result.messages;
        break;
    case TLValue::UpdateChannelAvailableMessages:
        *this >> result.channelId;
        *this >> result.availableMinId;
        break;
    default:
        break;
    }

    updateValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUpdates &updatesValue)
{
    TLUpdates result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UpdatesTooLong:
        break;
    case TLValue::UpdateShortMessage:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.userId;
        *this >> result.message;
        *this >> result.pts;
        *this >> result.ptsCount;
        *this >> result.date;
        if (result.flags & 1 << 2) {
            *this >> result.fwdFrom;
        }
        if (result.flags & 1 << 11) {
            *this >> result.viaBotId;
        }
        if (result.flags & 1 << 3) {
            *this >> result.replyToMsgId;
        }
        if (result.flags & 1 << 7) {
            *this >> result.entities;
        }
        break;
    case TLValue::UpdateShortChatMessage:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.fromId;
        *this >> result.chatId;
        *this >> result.message;
        *this >> result.pts;
        *this >> result.ptsCount;
        *this >> result.date;
        if (result.flags & 1 << 2) {
            *this >> result.fwdFrom;
        }
        if (result.flags & 1 << 11) {
            *this >> result.viaBotId;
        }
        if (result.flags & 1 << 3) {
            *this >> result.replyToMsgId;
        }
        if (result.flags & 1 << 7) {
            *this >> result.entities;
        }
        break;
    case TLValue::UpdateShort:
        *this >> result.update;
        *this >> result.date;
        break;
    case TLValue::UpdatesCombined:
        *this >> result.updates;
        *this >> result.users;
        *this >> result.chats;
        *this >> result.date;
        *this >> result.seqStart;
        *this >> result.seq;
        break;
    case TLValue::Updates:
        *this >> result.updates;
        *this >> result.users;
        *this >> result.chats;
        *this >> result.date;
        *this >> result.seq;
        break;
    case TLValue::UpdateShortSentMessage:
        *this >> result.flags;
        *this >> result.id;
        *this >> result.pts;
        *this >> result.ptsCount;
        *this >> result.date;
        if (result.flags & 1 << 9) {
            *this >> result.media;
        }
        if (result.flags & 1 << 7) {
            *this >> result.entities;
        }
        break;
    default:
        break;
    }

    updatesValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUpdatesChannelDifference &updatesChannelDifferenceValue)
{
    TLUpdatesChannelDifference result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UpdatesChannelDifferenceEmpty:
        *this >> result.flags;
        *this >> result.pts;
        if (result.flags & 1 << 1) {
            *this >> result.timeout;
        }
        break;
    case TLValue::UpdatesChannelDifferenceTooLong:
        *this >> result.flags;
        *this >> result.pts;
        if (result.flags & 1 << 1) {
            *this >> result.timeout;
        }
        *this >> result.topMessage;
        *this >> result.readInboxMaxId;
        *this >> result.readOutboxMaxId;
        *this >> result.unreadCount;
        *this >> result.unreadMentionsCount;
        *this >> result.messages;
        *this >> result.chats;
        *this >> result.users;
        break;
    case TLValue::UpdatesChannelDifference:
        *this >> result.flags;
        *this >> result.pts;
        if (result.flags & 1 << 1) {
            *this >> result.timeout;
        }
        *this >> result.newMessages;
        *this >> result.otherUpdates;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    updatesChannelDifferenceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLUpdatesDifference &updatesDifferenceValue)
{
    TLUpdatesDifference result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::UpdatesDifferenceEmpty:
        *this >> result.date;
        *this >> result.seq;
        break;
    case TLValue::UpdatesDifference:
        *this >> result.newMessages;
        *this >> result.newEncryptedMessages;
        *this >> result.otherUpdates;
        *this >> result.chats;
        *this >> result.users;
        *this >> result.state;
        break;
    case TLValue::UpdatesDifferenceSlice:
        *this >> result.newMessages;
        *this >> result.newEncryptedMessages;
        *this >> result.otherUpdates;
        *this >> result.chats;
        *this >> result.users;
        *this >> result.intermediateState;
        break;
    case TLValue::UpdatesDifferenceTooLong:
        *this >> result.pts;
        break;
    default:
        break;
    }

    updatesDifferenceValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelAdminLogEventAction &channelAdminLogEventActionValue)
{
    TLChannelAdminLogEventAction result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelAdminLogEventActionChangeTitle:
    case TLValue::ChannelAdminLogEventActionChangeAbout:
    case TLValue::ChannelAdminLogEventActionChangeUsername:
        *this >> result.prevValue;
        *this >> result.stringNewValue;
        break;
    case TLValue::ChannelAdminLogEventActionChangePhoto:
        *this >> result.prevPhoto;
        *this >> result.newPhoto;
        break;
    case TLValue::ChannelAdminLogEventActionToggleInvites:
    case TLValue::ChannelAdminLogEventActionToggleSignatures:
    case TLValue::ChannelAdminLogEventActionTogglePreHistoryHidden:
        *this >> result.boolNewValue;
        break;
    case TLValue::ChannelAdminLogEventActionUpdatePinned:
    case TLValue::ChannelAdminLogEventActionDeleteMessage:
        *this >> result.message;
        break;
    case TLValue::ChannelAdminLogEventActionEditMessage:
        *this >> result.prevMessage;
        *this >> result.newMessage;
        break;
    case TLValue::ChannelAdminLogEventActionParticipantJoin:
    case TLValue::ChannelAdminLogEventActionParticipantLeave:
        break;
    case TLValue::ChannelAdminLogEventActionParticipantInvite:
        *this >> result.participant;
        break;
    case TLValue::ChannelAdminLogEventActionParticipantToggleBan:
    case TLValue::ChannelAdminLogEventActionParticipantToggleAdmin:
        *this >> result.prevParticipant;
        *this >> result.newParticipant;
        break;
    case TLValue::ChannelAdminLogEventActionChangeStickerSet:
        *this >> result.prevStickerset;
        *this >> result.newStickerset;
        break;
    default:
        break;
    }

    channelAdminLogEventActionValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLPaymentsPaymentResult &paymentsPaymentResultValue)
{
    TLPaymentsPaymentResult result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::PaymentsPaymentResult:
        *this >> result.updates;
        break;
    case TLValue::PaymentsPaymentVerficationNeeded:
        *this >> result.url;
        break;
    default:
        break;
    }

    paymentsPaymentResultValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelAdminLogEvent &channelAdminLogEventValue)
{
    TLChannelAdminLogEvent result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelAdminLogEvent:
        *this >> result.id;
        *this >> result.date;
        *this >> result.userId;
        *this >> result.action;
        break;
    default:
        break;
    }

    channelAdminLogEventValue = result;

    return *this;
}

CTelegramStream &CTelegramStream::operator>>(TLChannelsAdminLogResults &channelsAdminLogResultsValue)
{
    TLChannelsAdminLogResults result;

    *this >> result.tlType;

    switch (result.tlType) {
    case TLValue::ChannelsAdminLogResults:
        *this >> result.events;
        *this >> result.chats;
        *this >> result.users;
        break;
    default:
        break;
    }

    channelsAdminLogResultsValue = result;

    return *this;
}
// End of generated read operators implementation

// Generated write operators implementation
CTelegramStream &CTelegramStream::operator<<(const TLAccountDaysTTL &accountDaysTTLValue)
{
    *this << accountDaysTTLValue.tlType;

    switch (accountDaysTTLValue.tlType) {
    case TLValue::AccountDaysTTL:
        *this << accountDaysTTLValue.days;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLAccountPasswordInputSettings &accountPasswordInputSettingsValue)
{
    *this << accountPasswordInputSettingsValue.tlType;

    switch (accountPasswordInputSettingsValue.tlType) {
    case TLValue::AccountPasswordInputSettings:
        *this << accountPasswordInputSettingsValue.flags;
        if (accountPasswordInputSettingsValue.flags & 1 << 0) {
            *this << accountPasswordInputSettingsValue.newSalt;
        }
        if (accountPasswordInputSettingsValue.flags & 1 << 0) {
            *this << accountPasswordInputSettingsValue.newPasswordHash;
        }
        if (accountPasswordInputSettingsValue.flags & 1 << 0) {
            *this << accountPasswordInputSettingsValue.hint;
        }
        if (accountPasswordInputSettingsValue.flags & 1 << 1) {
            *this << accountPasswordInputSettingsValue.email;
        }
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLChannelParticipantsFilter &channelParticipantsFilterValue)
{
    *this << channelParticipantsFilterValue.tlType;

    switch (channelParticipantsFilterValue.tlType) {
    case TLValue::ChannelParticipantsRecent:
    case TLValue::ChannelParticipantsAdmins:
    case TLValue::ChannelParticipantsBots:
        break;
    case TLValue::ChannelParticipantsKicked:
    case TLValue::ChannelParticipantsBanned:
    case TLValue::ChannelParticipantsSearch:
        *this << channelParticipantsFilterValue.q;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLDataJSON &dataJSONValue)
{
    *this << dataJSONValue.tlType;

    switch (dataJSONValue.tlType) {
    case TLValue::DataJSON:
        *this << dataJSONValue.data;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInlineBotSwitchPM &inlineBotSwitchPMValue)
{
    *this << inlineBotSwitchPMValue.tlType;

    switch (inlineBotSwitchPMValue.tlType) {
    case TLValue::InlineBotSwitchPM:
        *this << inlineBotSwitchPMValue.text;
        *this << inlineBotSwitchPMValue.startParam;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputAppEvent &inputAppEventValue)
{
    *this << inputAppEventValue.tlType;

    switch (inputAppEventValue.tlType) {
    case TLValue::InputAppEvent:
        *this << inputAppEventValue.time;
        *this << inputAppEventValue.type;
        *this << inputAppEventValue.peer;
        *this << inputAppEventValue.data;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputBotInlineMessageID &inputBotInlineMessageIDValue)
{
    *this << inputBotInlineMessageIDValue.tlType;

    switch (inputBotInlineMessageIDValue.tlType) {
    case TLValue::InputBotInlineMessageID:
        *this << inputBotInlineMessageIDValue.dcId;
        *this << inputBotInlineMessageIDValue.id;
        *this << inputBotInlineMessageIDValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputChannel &inputChannelValue)
{
    *this << inputChannelValue.tlType;

    switch (inputChannelValue.tlType) {
    case TLValue::InputChannelEmpty:
        break;
    case TLValue::InputChannel:
        *this << inputChannelValue.channelId;
        *this << inputChannelValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputContact &inputContactValue)
{
    *this << inputContactValue.tlType;

    switch (inputContactValue.tlType) {
    case TLValue::InputPhoneContact:
        *this << inputContactValue.clientId;
        *this << inputContactValue.phone;
        *this << inputContactValue.firstName;
        *this << inputContactValue.lastName;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputDocument &inputDocumentValue)
{
    *this << inputDocumentValue.tlType;

    switch (inputDocumentValue.tlType) {
    case TLValue::InputDocumentEmpty:
        break;
    case TLValue::InputDocument:
        *this << inputDocumentValue.id;
        *this << inputDocumentValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputEncryptedChat &inputEncryptedChatValue)
{
    *this << inputEncryptedChatValue.tlType;

    switch (inputEncryptedChatValue.tlType) {
    case TLValue::InputEncryptedChat:
        *this << inputEncryptedChatValue.chatId;
        *this << inputEncryptedChatValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputEncryptedFile &inputEncryptedFileValue)
{
    *this << inputEncryptedFileValue.tlType;

    switch (inputEncryptedFileValue.tlType) {
    case TLValue::InputEncryptedFileEmpty:
        break;
    case TLValue::InputEncryptedFileUploaded:
        *this << inputEncryptedFileValue.id;
        *this << inputEncryptedFileValue.parts;
        *this << inputEncryptedFileValue.md5Checksum;
        *this << inputEncryptedFileValue.keyFingerprint;
        break;
    case TLValue::InputEncryptedFile:
        *this << inputEncryptedFileValue.id;
        *this << inputEncryptedFileValue.accessHash;
        break;
    case TLValue::InputEncryptedFileBigUploaded:
        *this << inputEncryptedFileValue.id;
        *this << inputEncryptedFileValue.parts;
        *this << inputEncryptedFileValue.keyFingerprint;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputFile &inputFileValue)
{
    *this << inputFileValue.tlType;

    switch (inputFileValue.tlType) {
    case TLValue::InputFile:
        *this << inputFileValue.id;
        *this << inputFileValue.parts;
        *this << inputFileValue.name;
        *this << inputFileValue.md5Checksum;
        break;
    case TLValue::InputFileBig:
        *this << inputFileValue.id;
        *this << inputFileValue.parts;
        *this << inputFileValue.name;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputFileLocation &inputFileLocationValue)
{
    *this << inputFileLocationValue.tlType;

    switch (inputFileLocationValue.tlType) {
    case TLValue::InputFileLocation:
        *this << inputFileLocationValue.volumeId;
        *this << inputFileLocationValue.localId;
        *this << inputFileLocationValue.secret;
        break;
    case TLValue::InputEncryptedFileLocation:
        *this << inputFileLocationValue.id;
        *this << inputFileLocationValue.accessHash;
        break;
    case TLValue::InputDocumentFileLocation:
        *this << inputFileLocationValue.id;
        *this << inputFileLocationValue.accessHash;
        *this << inputFileLocationValue.version;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputGeoPoint &inputGeoPointValue)
{
    *this << inputGeoPointValue.tlType;

    switch (inputGeoPointValue.tlType) {
    case TLValue::InputGeoPointEmpty:
        break;
    case TLValue::InputGeoPoint:
        *this << inputGeoPointValue.latitude;
        *this << inputGeoPointValue.longitude;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPeer &inputPeerValue)
{
    *this << inputPeerValue.tlType;

    switch (inputPeerValue.tlType) {
    case TLValue::InputPeerEmpty:
    case TLValue::InputPeerSelf:
        break;
    case TLValue::InputPeerChat:
        *this << inputPeerValue.chatId;
        break;
    case TLValue::InputPeerUser:
        *this << inputPeerValue.userId;
        *this << inputPeerValue.accessHash;
        break;
    case TLValue::InputPeerChannel:
        *this << inputPeerValue.channelId;
        *this << inputPeerValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPhoneCall &inputPhoneCallValue)
{
    *this << inputPhoneCallValue.tlType;

    switch (inputPhoneCallValue.tlType) {
    case TLValue::InputPhoneCall:
        *this << inputPhoneCallValue.id;
        *this << inputPhoneCallValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPhoto &inputPhotoValue)
{
    *this << inputPhotoValue.tlType;

    switch (inputPhotoValue.tlType) {
    case TLValue::InputPhotoEmpty:
        break;
    case TLValue::InputPhoto:
        *this << inputPhotoValue.id;
        *this << inputPhotoValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPrivacyKey &inputPrivacyKeyValue)
{
    *this << inputPrivacyKeyValue.tlType;

    switch (inputPrivacyKeyValue.tlType) {
    case TLValue::InputPrivacyKeyStatusTimestamp:
    case TLValue::InputPrivacyKeyChatInvite:
    case TLValue::InputPrivacyKeyPhoneCall:
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputStickerSet &inputStickerSetValue)
{
    *this << inputStickerSetValue.tlType;

    switch (inputStickerSetValue.tlType) {
    case TLValue::InputStickerSetEmpty:
        break;
    case TLValue::InputStickerSetID:
        *this << inputStickerSetValue.id;
        *this << inputStickerSetValue.accessHash;
        break;
    case TLValue::InputStickerSetShortName:
        *this << inputStickerSetValue.shortName;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputStickeredMedia &inputStickeredMediaValue)
{
    *this << inputStickeredMediaValue.tlType;

    switch (inputStickeredMediaValue.tlType) {
    case TLValue::InputStickeredMediaPhoto:
        *this << inputStickeredMediaValue.inputPhotoId;
        break;
    case TLValue::InputStickeredMediaDocument:
        *this << inputStickeredMediaValue.inputDocumentId;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputUser &inputUserValue)
{
    *this << inputUserValue.tlType;

    switch (inputUserValue.tlType) {
    case TLValue::InputUserEmpty:
    case TLValue::InputUserSelf:
        break;
    case TLValue::InputUser:
        *this << inputUserValue.userId;
        *this << inputUserValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputWebFileLocation &inputWebFileLocationValue)
{
    *this << inputWebFileLocationValue.tlType;

    switch (inputWebFileLocationValue.tlType) {
    case TLValue::InputWebFileLocation:
        *this << inputWebFileLocationValue.url;
        *this << inputWebFileLocationValue.accessHash;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLLabeledPrice &labeledPriceValue)
{
    *this << labeledPriceValue.tlType;

    switch (labeledPriceValue.tlType) {
    case TLValue::LabeledPrice:
        *this << labeledPriceValue.label;
        *this << labeledPriceValue.amount;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLMaskCoords &maskCoordsValue)
{
    *this << maskCoordsValue.tlType;

    switch (maskCoordsValue.tlType) {
    case TLValue::MaskCoords:
        *this << maskCoordsValue.n;
        *this << maskCoordsValue.x;
        *this << maskCoordsValue.y;
        *this << maskCoordsValue.zoom;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLMessageEntity &messageEntityValue)
{
    *this << messageEntityValue.tlType;

    switch (messageEntityValue.tlType) {
    case TLValue::MessageEntityUnknown:
    case TLValue::MessageEntityMention:
    case TLValue::MessageEntityHashtag:
    case TLValue::MessageEntityBotCommand:
    case TLValue::MessageEntityUrl:
    case TLValue::MessageEntityEmail:
    case TLValue::MessageEntityBold:
    case TLValue::MessageEntityItalic:
    case TLValue::MessageEntityCode:
        *this << messageEntityValue.offset;
        *this << messageEntityValue.length;
        break;
    case TLValue::MessageEntityPre:
        *this << messageEntityValue.offset;
        *this << messageEntityValue.length;
        *this << messageEntityValue.language;
        break;
    case TLValue::MessageEntityTextUrl:
        *this << messageEntityValue.offset;
        *this << messageEntityValue.length;
        *this << messageEntityValue.url;
        break;
    case TLValue::MessageEntityMentionName:
        *this << messageEntityValue.offset;
        *this << messageEntityValue.length;
        *this << messageEntityValue.quint32UserId;
        break;
    case TLValue::InputMessageEntityMentionName:
        *this << messageEntityValue.offset;
        *this << messageEntityValue.length;
        *this << messageEntityValue.inputUserUserId;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLMessageRange &messageRangeValue)
{
    *this << messageRangeValue.tlType;

    switch (messageRangeValue.tlType) {
    case TLValue::MessageRange:
        *this << messageRangeValue.minId;
        *this << messageRangeValue.maxId;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLPhoneCallDiscardReason &phoneCallDiscardReasonValue)
{
    *this << phoneCallDiscardReasonValue.tlType;

    switch (phoneCallDiscardReasonValue.tlType) {
    case TLValue::PhoneCallDiscardReasonMissed:
    case TLValue::PhoneCallDiscardReasonDisconnect:
    case TLValue::PhoneCallDiscardReasonHangup:
    case TLValue::PhoneCallDiscardReasonBusy:
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLPostAddress &postAddressValue)
{
    *this << postAddressValue.tlType;

    switch (postAddressValue.tlType) {
    case TLValue::PostAddress:
        *this << postAddressValue.streetLine1;
        *this << postAddressValue.streetLine2;
        *this << postAddressValue.city;
        *this << postAddressValue.state;
        *this << postAddressValue.countryIso2;
        *this << postAddressValue.postCode;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLReportReason &reportReasonValue)
{
    *this << reportReasonValue.tlType;

    switch (reportReasonValue.tlType) {
    case TLValue::InputReportReasonSpam:
    case TLValue::InputReportReasonViolence:
    case TLValue::InputReportReasonPornography:
        break;
    case TLValue::InputReportReasonOther:
        *this << reportReasonValue.text;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLSendMessageAction &sendMessageActionValue)
{
    *this << sendMessageActionValue.tlType;

    switch (sendMessageActionValue.tlType) {
    case TLValue::SendMessageTypingAction:
    case TLValue::SendMessageCancelAction:
    case TLValue::SendMessageRecordVideoAction:
    case TLValue::SendMessageRecordAudioAction:
    case TLValue::SendMessageGeoLocationAction:
    case TLValue::SendMessageChooseContactAction:
    case TLValue::SendMessageGamePlayAction:
    case TLValue::SendMessageRecordRoundAction:
        break;
    case TLValue::SendMessageUploadVideoAction:
    case TLValue::SendMessageUploadAudioAction:
    case TLValue::SendMessageUploadPhotoAction:
    case TLValue::SendMessageUploadDocumentAction:
    case TLValue::SendMessageUploadRoundAction:
        *this << sendMessageActionValue.progress;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLShippingOption &shippingOptionValue)
{
    *this << shippingOptionValue.tlType;

    switch (shippingOptionValue.tlType) {
    case TLValue::ShippingOption:
        *this << shippingOptionValue.id;
        *this << shippingOptionValue.title;
        *this << shippingOptionValue.prices;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLTopPeerCategory &topPeerCategoryValue)
{
    *this << topPeerCategoryValue.tlType;

    switch (topPeerCategoryValue.tlType) {
    case TLValue::TopPeerCategoryBotsPM:
    case TLValue::TopPeerCategoryBotsInline:
    case TLValue::TopPeerCategoryCorrespondents:
    case TLValue::TopPeerCategoryGroups:
    case TLValue::TopPeerCategoryChannels:
    case TLValue::TopPeerCategoryPhoneCalls:
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLChannelAdminLogEventsFilter &channelAdminLogEventsFilterValue)
{
    *this << channelAdminLogEventsFilterValue.tlType;

    switch (channelAdminLogEventsFilterValue.tlType) {
    case TLValue::ChannelAdminLogEventsFilter:
        *this << channelAdminLogEventsFilterValue.flags;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLChannelAdminRights &channelAdminRightsValue)
{
    *this << channelAdminRightsValue.tlType;

    switch (channelAdminRightsValue.tlType) {
    case TLValue::ChannelAdminRights:
        *this << channelAdminRightsValue.flags;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLChannelBannedRights &channelBannedRightsValue)
{
    *this << channelBannedRightsValue.tlType;

    switch (channelBannedRightsValue.tlType) {
    case TLValue::ChannelBannedRights:
        *this << channelBannedRightsValue.flags;
        *this << channelBannedRightsValue.untilDate;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLChannelMessagesFilter &channelMessagesFilterValue)
{
    *this << channelMessagesFilterValue.tlType;

    switch (channelMessagesFilterValue.tlType) {
    case TLValue::ChannelMessagesFilterEmpty:
        break;
    case TLValue::ChannelMessagesFilter:
        *this << channelMessagesFilterValue.flags;
        *this << channelMessagesFilterValue.ranges;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLDocumentAttribute &documentAttributeValue)
{
    *this << documentAttributeValue.tlType;

    switch (documentAttributeValue.tlType) {
    case TLValue::DocumentAttributeImageSize:
        *this << documentAttributeValue.w;
        *this << documentAttributeValue.h;
        break;
    case TLValue::DocumentAttributeAnimated:
    case TLValue::DocumentAttributeHasStickers:
        break;
    case TLValue::DocumentAttributeSticker:
        *this << documentAttributeValue.flags;
        *this << documentAttributeValue.alt;
        *this << documentAttributeValue.stickerset;
        if (documentAttributeValue.flags & 1 << 0) {
            *this << documentAttributeValue.maskCoords;
        }
        break;
    case TLValue::DocumentAttributeVideo:
        *this << documentAttributeValue.flags;
        *this << documentAttributeValue.duration;
        *this << documentAttributeValue.w;
        *this << documentAttributeValue.h;
        break;
    case TLValue::DocumentAttributeAudio:
        *this << documentAttributeValue.flags;
        *this << documentAttributeValue.duration;
        if (documentAttributeValue.flags & 1 << 0) {
            *this << documentAttributeValue.title;
        }
        if (documentAttributeValue.flags & 1 << 1) {
            *this << documentAttributeValue.performer;
        }
        if (documentAttributeValue.flags & 1 << 2) {
            *this << documentAttributeValue.waveform;
        }
        break;
    case TLValue::DocumentAttributeFilename:
        *this << documentAttributeValue.fileName;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputChatPhoto &inputChatPhotoValue)
{
    *this << inputChatPhotoValue.tlType;

    switch (inputChatPhotoValue.tlType) {
    case TLValue::InputChatPhotoEmpty:
        break;
    case TLValue::InputChatUploadedPhoto:
        *this << inputChatPhotoValue.file;
        break;
    case TLValue::InputChatPhoto:
        *this << inputChatPhotoValue.id;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputGame &inputGameValue)
{
    *this << inputGameValue.tlType;

    switch (inputGameValue.tlType) {
    case TLValue::InputGameID:
        *this << inputGameValue.id;
        *this << inputGameValue.accessHash;
        break;
    case TLValue::InputGameShortName:
        *this << inputGameValue.botId;
        *this << inputGameValue.shortName;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputNotifyPeer &inputNotifyPeerValue)
{
    *this << inputNotifyPeerValue.tlType;

    switch (inputNotifyPeerValue.tlType) {
    case TLValue::InputNotifyPeer:
        *this << inputNotifyPeerValue.peer;
        break;
    case TLValue::InputNotifyUsers:
    case TLValue::InputNotifyChats:
    case TLValue::InputNotifyAll:
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPaymentCredentials &inputPaymentCredentialsValue)
{
    *this << inputPaymentCredentialsValue.tlType;

    switch (inputPaymentCredentialsValue.tlType) {
    case TLValue::InputPaymentCredentialsSaved:
        *this << inputPaymentCredentialsValue.id;
        *this << inputPaymentCredentialsValue.tmpPassword;
        break;
    case TLValue::InputPaymentCredentials:
        *this << inputPaymentCredentialsValue.flags;
        *this << inputPaymentCredentialsValue.data;
        break;
    case TLValue::InputPaymentCredentialsApplePay:
        *this << inputPaymentCredentialsValue.paymentData;
        break;
    case TLValue::InputPaymentCredentialsAndroidPay:
        *this << inputPaymentCredentialsValue.paymentToken;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPeerNotifySettings &inputPeerNotifySettingsValue)
{
    *this << inputPeerNotifySettingsValue.tlType;

    switch (inputPeerNotifySettingsValue.tlType) {
    case TLValue::InputPeerNotifySettings:
        *this << inputPeerNotifySettingsValue.flags;
        *this << inputPeerNotifySettingsValue.muteUntil;
        *this << inputPeerNotifySettingsValue.sound;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputPrivacyRule &inputPrivacyRuleValue)
{
    *this << inputPrivacyRuleValue.tlType;

    switch (inputPrivacyRuleValue.tlType) {
    case TLValue::InputPrivacyValueAllowContacts:
    case TLValue::InputPrivacyValueAllowAll:
    case TLValue::InputPrivacyValueDisallowContacts:
    case TLValue::InputPrivacyValueDisallowAll:
        break;
    case TLValue::InputPrivacyValueAllowUsers:
    case TLValue::InputPrivacyValueDisallowUsers:
        *this << inputPrivacyRuleValue.users;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputStickerSetItem &inputStickerSetItemValue)
{
    *this << inputStickerSetItemValue.tlType;

    switch (inputStickerSetItemValue.tlType) {
    case TLValue::InputStickerSetItem:
        *this << inputStickerSetItemValue.flags;
        *this << inputStickerSetItemValue.document;
        *this << inputStickerSetItemValue.emoji;
        if (inputStickerSetItemValue.flags & 1 << 0) {
            *this << inputStickerSetItemValue.maskCoords;
        }
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputWebDocument &inputWebDocumentValue)
{
    *this << inputWebDocumentValue.tlType;

    switch (inputWebDocumentValue.tlType) {
    case TLValue::InputWebDocument:
        *this << inputWebDocumentValue.url;
        *this << inputWebDocumentValue.size;
        *this << inputWebDocumentValue.mimeType;
        *this << inputWebDocumentValue.attributes;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInvoice &invoiceValue)
{
    *this << invoiceValue.tlType;

    switch (invoiceValue.tlType) {
    case TLValue::Invoice:
        *this << invoiceValue.flags;
        *this << invoiceValue.currency;
        *this << invoiceValue.prices;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLKeyboardButton &keyboardButtonValue)
{
    *this << keyboardButtonValue.tlType;

    switch (keyboardButtonValue.tlType) {
    case TLValue::KeyboardButton:
    case TLValue::KeyboardButtonRequestPhone:
    case TLValue::KeyboardButtonRequestGeoLocation:
    case TLValue::KeyboardButtonGame:
    case TLValue::KeyboardButtonBuy:
        *this << keyboardButtonValue.text;
        break;
    case TLValue::KeyboardButtonUrl:
        *this << keyboardButtonValue.text;
        *this << keyboardButtonValue.url;
        break;
    case TLValue::KeyboardButtonCallback:
        *this << keyboardButtonValue.text;
        *this << keyboardButtonValue.data;
        break;
    case TLValue::KeyboardButtonSwitchInline:
        *this << keyboardButtonValue.flags;
        *this << keyboardButtonValue.text;
        *this << keyboardButtonValue.query;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLKeyboardButtonRow &keyboardButtonRowValue)
{
    *this << keyboardButtonRowValue.tlType;

    switch (keyboardButtonRowValue.tlType) {
    case TLValue::KeyboardButtonRow:
        *this << keyboardButtonRowValue.buttons;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLMessagesFilter &messagesFilterValue)
{
    *this << messagesFilterValue.tlType;

    switch (messagesFilterValue.tlType) {
    case TLValue::InputMessagesFilterEmpty:
    case TLValue::InputMessagesFilterPhotos:
    case TLValue::InputMessagesFilterVideo:
    case TLValue::InputMessagesFilterPhotoVideo:
    case TLValue::InputMessagesFilterDocument:
    case TLValue::InputMessagesFilterUrl:
    case TLValue::InputMessagesFilterGif:
    case TLValue::InputMessagesFilterVoice:
    case TLValue::InputMessagesFilterMusic:
    case TLValue::InputMessagesFilterChatPhotos:
    case TLValue::InputMessagesFilterRoundVoice:
    case TLValue::InputMessagesFilterRoundVideo:
    case TLValue::InputMessagesFilterMyMentions:
    case TLValue::InputMessagesFilterGeo:
    case TLValue::InputMessagesFilterContacts:
        break;
    case TLValue::InputMessagesFilterPhoneCalls:
        *this << messagesFilterValue.flags;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLPaymentRequestedInfo &paymentRequestedInfoValue)
{
    *this << paymentRequestedInfoValue.tlType;

    switch (paymentRequestedInfoValue.tlType) {
    case TLValue::PaymentRequestedInfo:
        *this << paymentRequestedInfoValue.flags;
        if (paymentRequestedInfoValue.flags & 1 << 0) {
            *this << paymentRequestedInfoValue.name;
        }
        if (paymentRequestedInfoValue.flags & 1 << 1) {
            *this << paymentRequestedInfoValue.phone;
        }
        if (paymentRequestedInfoValue.flags & 1 << 2) {
            *this << paymentRequestedInfoValue.email;
        }
        if (paymentRequestedInfoValue.flags & 1 << 3) {
            *this << paymentRequestedInfoValue.shippingAddress;
        }
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLPhoneCallProtocol &phoneCallProtocolValue)
{
    *this << phoneCallProtocolValue.tlType;

    switch (phoneCallProtocolValue.tlType) {
    case TLValue::PhoneCallProtocol:
        *this << phoneCallProtocolValue.flags;
        *this << phoneCallProtocolValue.minLayer;
        *this << phoneCallProtocolValue.maxLayer;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLReplyMarkup &replyMarkupValue)
{
    *this << replyMarkupValue.tlType;

    switch (replyMarkupValue.tlType) {
    case TLValue::ReplyKeyboardHide:
    case TLValue::ReplyKeyboardForceReply:
        *this << replyMarkupValue.flags;
        break;
    case TLValue::ReplyKeyboardMarkup:
        *this << replyMarkupValue.flags;
        *this << replyMarkupValue.rows;
        break;
    case TLValue::ReplyInlineMarkup:
        *this << replyMarkupValue.rows;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputBotInlineMessage &inputBotInlineMessageValue)
{
    *this << inputBotInlineMessageValue.tlType;

    switch (inputBotInlineMessageValue.tlType) {
    case TLValue::InputBotInlineMessageMediaAuto:
        *this << inputBotInlineMessageValue.flags;
        *this << inputBotInlineMessageValue.caption;
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageText:
        *this << inputBotInlineMessageValue.flags;
        *this << inputBotInlineMessageValue.message;
        if (inputBotInlineMessageValue.flags & 1 << 1) {
            *this << inputBotInlineMessageValue.entities;
        }
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaGeo:
        *this << inputBotInlineMessageValue.flags;
        *this << inputBotInlineMessageValue.geoPoint;
        *this << inputBotInlineMessageValue.period;
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaVenue:
        *this << inputBotInlineMessageValue.flags;
        *this << inputBotInlineMessageValue.geoPoint;
        *this << inputBotInlineMessageValue.title;
        *this << inputBotInlineMessageValue.address;
        *this << inputBotInlineMessageValue.provider;
        *this << inputBotInlineMessageValue.venueId;
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageMediaContact:
        *this << inputBotInlineMessageValue.flags;
        *this << inputBotInlineMessageValue.phoneNumber;
        *this << inputBotInlineMessageValue.firstName;
        *this << inputBotInlineMessageValue.lastName;
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    case TLValue::InputBotInlineMessageGame:
        *this << inputBotInlineMessageValue.flags;
        if (inputBotInlineMessageValue.flags & 1 << 2) {
            *this << inputBotInlineMessageValue.replyMarkup;
        }
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputBotInlineResult &inputBotInlineResultValue)
{
    *this << inputBotInlineResultValue.tlType;

    switch (inputBotInlineResultValue.tlType) {
    case TLValue::InputBotInlineResult:
        *this << inputBotInlineResultValue.flags;
        *this << inputBotInlineResultValue.id;
        *this << inputBotInlineResultValue.type;
        if (inputBotInlineResultValue.flags & 1 << 1) {
            *this << inputBotInlineResultValue.title;
        }
        if (inputBotInlineResultValue.flags & 1 << 2) {
            *this << inputBotInlineResultValue.description;
        }
        if (inputBotInlineResultValue.flags & 1 << 3) {
            *this << inputBotInlineResultValue.url;
        }
        if (inputBotInlineResultValue.flags & 1 << 4) {
            *this << inputBotInlineResultValue.thumbUrl;
        }
        if (inputBotInlineResultValue.flags & 1 << 5) {
            *this << inputBotInlineResultValue.contentUrl;
        }
        if (inputBotInlineResultValue.flags & 1 << 5) {
            *this << inputBotInlineResultValue.contentType;
        }
        if (inputBotInlineResultValue.flags & 1 << 6) {
            *this << inputBotInlineResultValue.w;
        }
        if (inputBotInlineResultValue.flags & 1 << 6) {
            *this << inputBotInlineResultValue.h;
        }
        if (inputBotInlineResultValue.flags & 1 << 7) {
            *this << inputBotInlineResultValue.duration;
        }
        *this << inputBotInlineResultValue.sendMessage;
        break;
    case TLValue::InputBotInlineResultPhoto:
        *this << inputBotInlineResultValue.id;
        *this << inputBotInlineResultValue.type;
        *this << inputBotInlineResultValue.photo;
        *this << inputBotInlineResultValue.sendMessage;
        break;
    case TLValue::InputBotInlineResultDocument:
        *this << inputBotInlineResultValue.flags;
        *this << inputBotInlineResultValue.id;
        *this << inputBotInlineResultValue.type;
        if (inputBotInlineResultValue.flags & 1 << 1) {
            *this << inputBotInlineResultValue.title;
        }
        if (inputBotInlineResultValue.flags & 1 << 2) {
            *this << inputBotInlineResultValue.description;
        }
        *this << inputBotInlineResultValue.document;
        *this << inputBotInlineResultValue.sendMessage;
        break;
    case TLValue::InputBotInlineResultGame:
        *this << inputBotInlineResultValue.id;
        *this << inputBotInlineResultValue.shortName;
        *this << inputBotInlineResultValue.sendMessage;
        break;
    default:
        break;
    }

    return *this;
}

CTelegramStream &CTelegramStream::operator<<(const TLInputMedia &inputMediaValue)
{
    *this << inputMediaValue.tlType;

    switch (inputMediaValue.tlType) {
    case TLValue::InputMediaEmpty:
        break;
    case TLValue::InputMediaUploadedPhoto:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.file;
        *this << inputMediaValue.caption;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.stickers;
        }
        if (inputMediaValue.flags & 1 << 1) {
            *this << inputMediaValue.ttlSeconds;
        }
        break;
    case TLValue::InputMediaPhoto:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.inputPhotoId;
        *this << inputMediaValue.caption;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.ttlSeconds;
        }
        break;
    case TLValue::InputMediaGeoPoint:
        *this << inputMediaValue.geoPoint;
        break;
    case TLValue::InputMediaContact:
        *this << inputMediaValue.phoneNumber;
        *this << inputMediaValue.firstName;
        *this << inputMediaValue.lastName;
        break;
    case TLValue::InputMediaUploadedDocument:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.file;
        if (inputMediaValue.flags & 1 << 2) {
            *this << inputMediaValue.thumb;
        }
        *this << inputMediaValue.mimeType;
        *this << inputMediaValue.attributes;
        *this << inputMediaValue.caption;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.stickers;
        }
        if (inputMediaValue.flags & 1 << 1) {
            *this << inputMediaValue.ttlSeconds;
        }
        break;
    case TLValue::InputMediaDocument:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.inputDocumentId;
        *this << inputMediaValue.caption;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.ttlSeconds;
        }
        break;
    case TLValue::InputMediaVenue:
        *this << inputMediaValue.geoPoint;
        *this << inputMediaValue.title;
        *this << inputMediaValue.address;
        *this << inputMediaValue.provider;
        *this << inputMediaValue.venueId;
        *this << inputMediaValue.venueType;
        break;
    case TLValue::InputMediaGifExternal:
        *this << inputMediaValue.url;
        *this << inputMediaValue.q;
        break;
    case TLValue::InputMediaPhotoExternal:
    case TLValue::InputMediaDocumentExternal:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.url;
        *this << inputMediaValue.caption;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.ttlSeconds;
        }
        break;
    case TLValue::InputMediaGame:
        *this << inputMediaValue.inputGameId;
        break;
    case TLValue::InputMediaInvoice:
        *this << inputMediaValue.flags;
        *this << inputMediaValue.title;
        *this << inputMediaValue.description;
        if (inputMediaValue.flags & 1 << 0) {
            *this << inputMediaValue.photo;
        }
        *this << inputMediaValue.invoice;
        *this << inputMediaValue.payload;
        *this << inputMediaValue.provider;
        *this << inputMediaValue.startParam;
        break;
    case TLValue::InputMediaGeoLive:
        *this << inputMediaValue.geoPoint;
        *this << inputMediaValue.period;
        break;
    default:
        break;
    }

    return *this;
}
// End of generated write operators implementation
