import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3
import AsemanTools 1.0

import "components"

TelegramPage {
    id: auth_phone_page
    objectName: "authPhonePage"

    property string countryCode
    property string fullPhoneNumber: "+" + countryCode + phoneNumber
    property bool accountAlreadyExists: true

    property alias phoneNumber: phone_number.text

    signal phoneEntered(string number)
    signal error(int id, string errorCode, string errorText)

    focus: true
    flickable: null

    header: PageHeader {
        title: i18n.tr("Phone Number")
    }

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
            top: auth_phone_page.header.bottom
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
                checkForDupe();
            }
        }

        TelegramButton {
            id:doneButton
            objectName: "doneButton"
            width: phone_number.width
            height: phone_number.height
            anchors.horizontalCenter: parent.horizontalCenter
            text: i18n.tr("Done")

            // To work on desktop change the following line to:
            // enabled: phoneNumber.length > 0
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

    onPhoneNumberChanged:{
        if (phoneNumber.length > 0) {
            //PhoneNumber contains 1 or more letter
            error_label.visible = false;
            doneButton.enabled = true;
        } else {
            //PhoneNumber doesn't contain any letters
            doneButton.enabled = false;
        }
    }

    function showConfirmationMessage() {
        Qt.inputMethod.hide();
        PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
            null, {
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

    function checkForDupe () {
        accountAlreadyExists = false;

        //Check available profiles
        if (!profiles.count < 1) {
            for (var i = 0; i < profiles.count; i++) {
                var key = profiles.keys[i];
                checkForDupeTimer.restart();

                //Stop checking profiles if a dupe is found
                if (accountAlreadyExists != true) {
                    if (auth_number_page.fullPhoneNumber != key) {
                        //Dupe Not found
                        accountAlreadyExists = false;
                    } else {
                        //Dupe found
                        accountAlreadyExists = true;
                    }
                }
            }
        } else {
            doneButton.enabled = true;
            showConfirmationMessage();
        }
    }

    Timer {
        id:checkForDupeTimer
        interval: 50
        repeat: false
        onTriggered:{
            if (accountAlreadyExists == true) {
                //Dupe found
                doneButton.enabled = false;
                accountAlreadyExists = true;
                error_label.visible = true;
                error_label.text = i18n.tr("Phone number already exists.");
            } else {
                //Dupe not found
                doneButton.enabled = true;
                showConfirmationMessage();
            }
        }
    }

    Timer {
        id: entry_delay
        interval: 500
        repeat: false
        onTriggered: auth_phone_page.phoneEntered("+" + countryCode + phoneNumber)
    }
}
