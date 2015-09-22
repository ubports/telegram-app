import QtQuick 2.4
import Ubuntu.Components 1.2

import TelegramQML 1.0

Page {
    id: page

    property Telegram telegram

    property alias firstName: first_name_text_field.text
    property alias lastName: last_name_text_field.text
    property alias error: error_text_field.text

    property list<Action> actions: [
        Action {
            iconName: "ok"
            text: i18n.tr("Save")
            onTriggered: updateProfile();
        }
    ]

    title: i18n.tr("Edit name");
    head.actions: actions

    function updateProfile() {
        Qt.inputMethod.commit();
        error = "";
        if (firstName.length > 0) {
            telegram.accountUpdateProfile(firstName, lastName);
            pageStack.pop();
        } else {
            // TRANSLATORS: Error message when first name was not provided.
            error = i18n.tr("First name is required.");
        }
    }

    TextField {
        id: first_name_text_field
        anchors {
            top: parent.top
            topMargin: units.gu(4)
            left: parent.left
            leftMargin: units.gu(2)
            right: parent.right
            rightMargin: units.gu(2)
        }
        validator: RegExpValidator {
            regExp: /[\w\s]+/
        }
        // TRANSLATORS: This is a placeholder in the 'first name' text field.
        placeholderText: i18n.tr("First name (required)")
        inputMethodHints: Qt.ImhNoPredictiveText
        Keys.onReturnPressed: last_name_text_field.forceActiveFocus()
    }

    TextField {
        id: last_name_text_field
        anchors {
            top: first_name_text_field.bottom
            topMargin: units.gu(2)
            left: parent.left
            leftMargin: units.gu(2)
            right: parent.right
            rightMargin: units.gu(2)
        }
        validator: RegExpValidator {
            regExp: /[\w\s]+/
        }
        // TRANSLATORS: This is a placeholder in the 'last name' text field.
        placeholderText: i18n.tr("Last name (optional)")
        inputMethodHints: Qt.ImhNoPredictiveText
        Keys.onReturnPressed: addContact()
    }

    Text {
        id: error_text_field
        anchors {
            top: last_name_text_field.bottom
            topMargin: units.gu(2)
            left: parent.left
            right: parent.right
        }
        horizontalAlignment: Text.AlignHCenter
        color: "red"
    }
}