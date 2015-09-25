import QtQuick 2.4
import Ubuntu.Components 1.2
import Ubuntu.Components.Popups 1.0
import AsemanTools 1.0

import "components"

TelegramPage {
    id: auth_phone_page

    property string countryCode
    property string fullPhoneNumber: "+" + countryCode + phoneNumber

    property alias phoneNumber: phone_number.text

    signal phoneEntered(string number)
    signal error(int id, string errorCode, string errorText)

    focus: true
    flickable: null
    title: i18n.tr("Phone Number")

    onError: {
        auth_phone_page.isBusy = false;
        error_label.visible = true;
        error_label.text = errorText;
    }

    Component.onCompleted: phone_number.forceActiveFocus()

    Label {
        id: country_code
        anchors {
            top: parent.top
            topMargin: units.gu(4)
            left: parent.left
            leftMargin: units.gu(4)
            right: parent.right
            rightMargin: units.gu(4)
        }
        fontSize: "large"
        text: "+" + countryCode
    }

    Column {
        id: column
        anchors {
            top: country_code.bottom
            left: parent.left
            right: parent.right
            margins: units.gu(4)
        }
        spacing: units.gu(2)

        TextField {
            id: phone_number
            width: column.width
            inputMethodHints: Qt.ImhDialableCharactersOnly
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: TextInput.AlignHCenter
            verticalAlignment: TextInput.AlignVCenter
            placeholderText: i18n.tr("Phone Number")
            validator: RegExpValidator { regExp: /(?!0)\d*/ }
            onAccepted: {
                Qt.inputMethod.hide();
                PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                    auth_phone_page, {
                        // TRANSLATORS: Dialog prompt to ensure provided number is correct.
                        title: i18n.tr("Number correct?"),
                        text: i18n.tr(auth_number_page.fullPhoneNumber),
                        onAccept: function() {
                            auth_number_page.isBusy = true;
                            entry_delay.restart();
                        }
                    }
                );
            }
        }

        TelegramButton {
            width: phone_number.width
            height: phone_number.height
            anchors.horizontalCenter: parent.horizontalCenter
            text: i18n.tr("Done")
            enabled: isOnline && phoneNumber.length > 0
            focus: true
            onClicked: phone_number.accepted()
        }

        Label {
            id: error_label
            width: phone_number.width
            visible: false
            color: "red"
        }
    }

    Timer {
        id: entry_delay
        interval: 500
        repeat: false
        onTriggered: auth_phone_page.phoneEntered("+" + countryCode + phoneNumber)
    }
}
