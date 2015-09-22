import QtQuick 2.4
import Ubuntu.Components 1.2

Item {
    id: root
    width: parent.width
    height: units.gu(visible ? 4 : 0)

    property string textColor: "white"
    property string textSize: "medium"
    property string text: ""

    property string iconColor: "#F3BEAC"
    property string iconName: "close"

    property color color: UbuntuColors.orange

    signal clicked()

    Rectangle {
        anchors.fill: parent
        color: root.color
    }

    Icon {
        id: hint_button
        anchors {
            top: parent.top
            topMargin: units.dp(4)
            right: parent.right
            rightMargin: units.gu(2)
            bottom: parent.bottom
            bottomMargin: units.dp(4)
        }
        width: height
        color: root.iconColor
        name: root.iconName

        MouseArea {
            anchors.fill: parent
            onClicked: root.clicked()
        }
    }

    Label {
        id: hint_label
        anchors {
            top: parent.top
            left: parent.left
            bottom: parent.bottom
            right: hint_button.left
        }
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        fontSize: root.textSize
        color: root.textColor
        text: root.text
    }
}
