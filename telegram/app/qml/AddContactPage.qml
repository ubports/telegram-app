import QtQuick 2.4
import Ubuntu.Components 1.3

import TelegramQML 1.0

import "js/colors.js" as Colors
import "js/time.js" as Time

Page {
    property Telegram telegram
    property bool addManually: false
    property int userId: 0
    property User user: userId != 0 ? telegram.user(userId) : telegram.nullUser
    property var contact: undefined
    //property real checkPhoneRequestId: 0

    property alias enteredPhone: phone_number_text_field.text
    property alias phone: phone_number_text.text
    property alias lastSeen: last_seen_text.text
    property alias firstName: first_name_text_field.text
    property alias lastName: last_name_text_field.text
    property alias errorText: error_text.text

    signal phoneChecked(string phone, bool registered)
    signal contactsImportedContacts(int importedCount, int retryCount)
    signal helpGetInviteTextAnswer(var id, string message)
    signal error(var id, int ecode, string etext, string fname)

    id: page
    header: PageHeader {
        title: i18n.tr("Add Contact")
        trailingActionBar.actions: [
            Action {
                iconName: "ok"
                text: i18n.tr("Done")
                enabled: (phone.length > 0 || enteredPhone.length > 0) && firstName.length > 0
                onTriggered: addContact()
            }
        ]
        leadingActionBar.actions: Action {
            id: back_action
            objectName: "backAction"
            iconName: "back"
            onTriggered: pageStack.removePages(page);
        }
    }

    Item {
        anchors {
            top: page.header.bottom
            left: parent.left
            right: parent.right
            bottom: parent.bottom
            margins: units.gu(2)
        }

        Item {
            id: contact_header
            anchors {
                top: parent.top
                left: parent.left
                right: parent.right
            }
            height: childrenRect.height
            visible: !addManually

            Image {
                id: photo_image
                anchors {
                    top: parent.top
                    left: parent.left
                }
                width: source == "" || source === undefined ? 0 : units.gu(8)
                height: width
                asynchronous: true
                fillMode: Image.PreserveAspectCrop
                source: "qrc:/qml/files/user_blue.png"
            }

            Text {
                id: phone_number_text
                anchors {
                    top: photo_image.top
                    left: photo_image.right
                    leftMargin: units.gu(2)
                }
                height: photo_image.height / 2.0
                verticalAlignment: TextInput.AlignVCenter
                horizontalAlignment: TextInput.AlignLeft

                font {
                    pixelSize: FontUtils.sizeToPixels("large")
                    bold: true
                }
                color: theme.palette.normal.backgroundText
            }

            Text {
                id: last_seen_text
                anchors {
                    left: photo_image.right
                    leftMargin: units.gu(2)
                    bottom: photo_image.bottom
                }
                height: photo_image.height / 2.0
                verticalAlignment: TextInput.AlignVCenter
                horizontalAlignment: TextInput.AlignLeft

                font {
                    pixelSize: FontUtils.sizeToPixels("medium")
                }
                color: theme.palette.normal.backgroundTertiaryText
            }
        }

        TextField {
            id: phone_number_text_field
            anchors {
                top: parent.top
                topMargin: units.gu(4)
                left: parent.left
                right: parent.right
            }
            visible: addManually

            inputMethodHints: Qt.ImhDialableCharactersOnly
            placeholderText: i18n.tr("Phone number (required)")

            Keys.onEnterPressed: first_name_text.forceActiveFocus()
            Keys.onReturnPressed: first_name_text.forceActiveFocus()
        }

        TextField {
            id: first_name_text_field
            anchors {
                top: addManually ? phone_number_text_field.bottom : contact_header.bottom
                topMargin: addManually ? units.gu(2) : units.gu(4)
                left: parent.left
                right: parent.right
            }
            validator: RegExpValidator {
                regExp: /[\w\s]+/
            }
            placeholderText: i18n.tr("First name (required)")
            inputMethodHints: Qt.ImhNoPredictiveText
            Keys.onReturnPressed: last_name_text.forceActiveFocus()
        }

        TextField {
            id: last_name_text_field
            anchors {
                top: first_name_text_field.bottom
                topMargin: units.gu(2)
                left: parent.left
                right: parent.right
            }
            validator: RegExpValidator {
                regExp: /[\w\s]+/
            }
            placeholderText: i18n.tr("Last name (optional)")
            inputMethodHints: Qt.ImhNoPredictiveText
            Keys.onReturnPressed: addContact()
        }

        Text {
            id: error_text
            anchors {
                top: last_name_text_field.bottom
                topMargin: units.gu(2)
                left: parent.left
                right: parent.right
            }
            horizontalAlignment: Text.AlignHCenter
            color: UbuntuColors.red
            visible: text != ""
        }

        Column {
            id: invite
            clip: true
            spacing: units.gu(1)
            anchors {
                top: error_text.bottom
                topMargin: units.gu(4)
                left: parent.left
                right: parent.right
            }
            width: parent.width
            visible: false

            property string name: ""

            Label {
                anchors.horizontalCenter: parent.horizontalCenter
                // TRANSLATORS: %1 is the contact's name, who was being imported from the addressbook.
                text: i18n.tr("%1 is not yet on Telegram").arg(invite.name)
            }
            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width - units.gu(6)
                height: units.gu(5)
                text: i18n.tr("Invite to Telegram")
                onClicked: {
                    telegram.helpGetInviteText(i18n.language);
                }
            }
        }
    }

    Component.onCompleted: {
        telegram.errorSignal.connect(page.error);
        telegram.helpGetInviteTextAnswer.connect(page.helpGetInviteTextAnswer);
        telegram.phoneChecked.connect(page.phoneChecked);
        telegram.contactsImportedContacts.connect(page.contactsImportedContacts);

        if (user != telegram.nullUser) {
            updateFromUser();
        } else if (contact != undefined) {
            updateFromContact(contact);
        }
    }

    Component.onDestruction: {
        telegram.contactsImportedContacts.disconnect(page.contactsImportedContacts);
        telegram.phoneChecked.disconnect(page.phoneChecked);
        telegram.helpGetInviteTextAnswer.disconnect(page.helpGetInviteTextAnswer);
        telegram.errorSignal.disconnect(page.error);
    }

    onPhoneChecked: {
        if (page.phone != phone) return;

        if (registered) {
            console.log("contacts: on Telegram, adding")
            telegram.addContact(firstName, lastName, phone);
        } else {
            console.log("contacts: not on Telegram")
            // Telegram no longer returns 'invited' bool value.
            invite.name = firstName;
            page.header.trailingActionBar.actions = [];
            invite.visible = true;
        }
    }

    onContactsImportedContacts: {
        if (importedCount === 0) {
            console.log("contacts: imported 0")
            errorText = i18n.tr("Could not add contact");
        } else if (importedCount === 1) {
            console.log("contacts: imported 1")
            errorText = "";
            pageStack.removePages(page);
        }
    }

    onHelpGetInviteTextAnswer: {
        telegram.authSendInvites([phone], message);

        // Workaround for bug lp:1479076
        message = message.replace("\u000A", " ");

        Qt.openUrlExternally("message:///" + phone + "?text=" + message);
        pageStack.clear();
    }

    onError: {
        if (etext == "PHONE_NUMBER_INVALID" && phone.indexOf('+') === -1) {
            page.errorText = i18n.tr("Please include the country code.");
        } else if (etext == "PHONE_NUMBER_INVALID") {
            page.errorText = i18n.tr("Number is not a valid phone number");
        }
    }

    function updateFromUser() {
        var phone = user.phone.indexOf("+") == -1 ? "+" + user.phone : user.phone
        page.phone = phone
        if (user.status.wasOnline != 0) {
            lastSeen = Time.formatLastSeen(i18n, user.status.wasOnline * 1000)
        } else {
            lastSeen = "";
        }
        page.firstName = user.firstName;
        page.lastName = user.lastName;
    }

    function updateFromContact() {
        page.enteredPhone = contact.phone;
        page.firstName = contact.firstName;
        page.lastName = contact.lastName;
    }

    function addContact() {
        Qt.inputMethod.commit();
        page.errorText = "";
        var phoneToAdd = addManually ? phone_number_text_field.text : phone_number_text.text
        if (firstName.length > 0) {
            if (phoneToAdd.length > 0) {
                Qt.inputMethod.hide();
                phone = phoneToAdd;
                console.log("contacts: checking phone to add...");
                telegram.authCheckPhone(phoneToAdd);
            } else {
                console.warn("contacts: phone number is required");
            }
        } else {
            console.warn("contacts: first name is required");
        }
    }
}
