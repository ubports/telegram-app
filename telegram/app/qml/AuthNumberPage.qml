import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.0
import AsemanTools 1.0

import "components"

TelegramPage {
    id: auth_phone_page
    objectName: "authPhonePage"

    property string countryCode
    property string fullPhoneNumber: "+" + countryCode + phoneNumber
    property bool accountAlreadyExists: false

    property alias phoneNumber: phone_number.text

    signal phoneEntered(string number)
    signal error(int id, string errorCode, string errorText)

    focus: true
    flickable: null
    title: i18n.tr("Phone Number")

    onError: {
        auth_phone_page.isBusy = false;
        if (errorText === "PHONE_NUMBER_INVALID") {
            profiles.remove(fullPhoneNumber);
        } else {
            error_label.visible = true;
            error_label.text = errorText;
        }
    }

    Component.onCompleted: phone_number.forceActiveFocus()

    Label {
        id: country_code
        objectName: "countryCode"
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
            objectName: "phoneNumberEntry"
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
                            error_label.visible = false;
                            auth_number_page.isBusy = true;

                            //Check current profiles
                            for (var i = 0; i < profiles.count; i++) {
                                var key = profiles.keys[i];
                                entry_delay.restart();

                                //Stop checking profiles if a dupe is found
                                if (accountAlreadyExists != true) {
                                    if (auth_number_page.fullPhoneNumber != key) {
                                        //Not found dupe
                                        accountAlreadyExists = false;
                                    } else {
                                        //Found dupe
                                        accountAlreadyExists = true;
                                    }
                                }
                            }
                        }
                    }
                );
            }
        }

        TelegramButton {
            objectName: "doneButton"
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
        onTriggered:{
            if(accountAlreadyExists == true) {
                //If entered number does exist, show error message
                auth_number_page.isBusy = false;
                error_label.visible = true;
                error_label.text = i18n.tr("Number already exists");
            } else {
                //If entered number doesn't exist, send auth code
                auth_phone_page.phoneEntered("+" + countryCode + phoneNumber)}
            }
    }
}
