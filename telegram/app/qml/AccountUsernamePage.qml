import QtQuick 2.4
import Ubuntu.Components 1.2

import TelegramQML 1.0

Page {
    id: page

    property Telegram telegram
    property User user: telegram.user(telegram.me)
    property bool available: false
    property alias username: username_text_field.text
    property alias checking: result_text_field.checking
    property alias error: result_text_field.error
    property alias success: result_text_field.success

    property list<Action> actions: [
        Action {
            id: wtf
            iconName: "ok"
            text: i18n.tr("Save")
            visible: page.available
            onTriggered: updateUsername();
        }
    ]

    signal accountUsernameChecked(bool ok)
    signal errorSignal(var id, int ecode, string etext, string fname)

    onAccountUsernameChecked: {
        checking = false;
        available = ok;
        if (ok) {
            // TRANSLATORS: %1 is the the newly chosen username, one that is availalbe
            success = i18n.tr("%1 is available.").arg(username);
        } else {
            // TRANSLATORS: Error message when choosing new username.
            error = i18n.tr("Sorry, this username is already taken.");
        }
    }

    onErrorSignal: {
        if (etext = "USERNAME_INVALID") {
            checking = false;
            // TRANSLATORS: Error message when choosing new username.
            error = i18n.tr("Sorry, this username is invalid.");
        }
    }

    Component.onCompleted: {
        username = user.username;
        telegram.accountUsernameChecked.connect(page.accountUsernameChecked);
        telegram.errorSignal.connect(page.errorSignal);
    }

    Component.onDestruction: {
        telegram.errorSignal.disconnect(page.errorSignal);
        telegram.accountUsernameChecked.disconnect(page.accountUsernameChecked);
    }

    title: i18n.tr("Username");
    head.actions: actions

    function checkUsername() {
        checking = true;
        telegram.accountCheckUsername(username);
    }

    function updateUsername() {
        telegram.accountUpdateUsername(username);
        pageStack.pop();
    }

    function updateProfile() {
        if (!available) return;

        error = "";
        updateUsername();
    }

    Column {
        spacing: units.gu(2)
        anchors {
            top: parent.top
            topMargin: units.gu(4)
            left: parent.left
            leftMargin: units.gu(2)
            right: parent.right
            rightMargin: units.gu(2)
            bottom: parent.bottom
        }

        TextField {
            id: username_text_field
            width: parent.width
            validator: RegExpValidator {
                regExp: /[a-zA-Z0-9_]+/
            }
            // TRANSLATORS: Placeholder of the username text field.
            placeholderText: i18n.tr("Your Username")
            inputMethodHints: Qt.ImhNoPredictiveText
            Keys.onReturnPressed: checkUsername()
            onTextChanged: {
                if (username.length == 0) {
                    success = "";
                    error = "";
                } else if (username.length < 5) {
                    error = i18n.tr("A username must have at least 5 characters.")
                } else {
                    error = "";
                    checkUsername();
                }
            }
        }

        Text {
            id: result_text_field

            property bool checking: false
            property string error: ""
            property string success: ""

            onSuccessChanged: {
                error = "";
            }

            width: parent.width
            visible: text != ""
            // horizontalAlignment: Text.AlignLeft
            color: checking ? "grey" : (error.length > 0 ? "red" : "green")
            text: checking ? i18n.tr("Checking username...") : (error.length > 0 ? error : success)
        }

        Text {
            id: desc_text_field

            width: parent.width
            wrapMode: Text.WordWrap
            text: i18n.tr("You can choose a username on <b>Telegram</b>. If you do, other people will be able to find you by this username and contact you without knowing your phone number.<br /><br />You can use <b>a-z</b>, <b>0-9</b> and underscores. <br />Minimum length is <b>5</b> characters.")
        }
    }

}
