import QtQuick 2.6
import QtQuick.Controls.Material 2.0

Item {
    id: root
    height: picture.height
    width: height

    property string displayName
    property var peer

    Rectangle {
        id: picture
        readonly property var colors: [
            Material.Purple,
            Material.DeepPurple,
            Material.Blue,
            Material.LightBlue,
            Material.Cyan,
            Material.Teal,
            Material.LightGreen,
            Material.Lime,
            Material.Amber,
            Material.Orange,
            Material.DeepOrange,
            Material.Brown,
            Material.Grey,
            Material.BlueGrey,
        ]
        function getColor(username) {
            return colors[Qt.md5(username).charCodeAt(0) % colors.length]
        }

        color: Material.color(getColor(root.displayName))
        anchors.fill: parent
        border.color: "black"
        border.width: 1

        Text {
            anchors.centerIn: parent
            font.pixelSize: parent.width * 0.8
            text: root.displayName[0]
            font.capitalization: Font.AllUppercase
        }
    }
}
