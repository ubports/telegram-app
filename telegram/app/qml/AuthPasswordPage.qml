import QtQuick 2.4
import Ubuntu.Components 1.3

import "components"

TelegramPage {
    id: authPassword

    property alias errorText: error_txt.text

    focus: true

    signal passwordAccepted(string password)

    header: PageHeader {
        title: i18n.tr("Enter Password")
    }

    Column {
        id: column
        anchors {
            top: authPassword.header.bottom
            left: parent.left
            right: parent.right
            margins: units.gu(4)
        }
        spacing: units.gu(2)

        TextField {
            id: code_txt
            width: column.width
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: TextInput.AlignHCenter
            verticalAlignment: TextInput.AlignVCenter
            placeholderText: i18n.tr("Password")
            selectByMouse: true
            echoMode: TextInput.Password
            onAccepted: {
                errorText = ""
                passwordAccepted(code_txt.text)
            }
        }

        TelegramButton {
            id: accept_button
            objectName: "signInButton"
            width: column.width
            height: code_txt.height
            anchors.horizontalCenter: parent.horizontalCenter
            text: i18n.tr("Sign In")
            onClicked: {
                errorText = ""
                passwordAccepted(code_txt.text)
            }
            focus: true
        }

        Label {
            id: error_txt
            width: column.width
            visible: text != ""
            color: "red"
        }
    }

    function forceActiveFocus() {
        code_txt.forceActiveFocus()
    }
}
