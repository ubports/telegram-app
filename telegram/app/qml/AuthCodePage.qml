import QtQuick 2.4
import Ubuntu.Components 1.3
import AsemanTools 1.0

import "components"

TelegramPage {
    id: auth_code_page

    property bool phoneRegistered: true
    property bool allowCall: true
    property int timeOut: 0

    property alias errorText: error_label.text

    signal error(string errorText)
    signal signInRequest(string code)
    signal signUpRequest(string code, string fname, string lname)
    signal codeRequest()
    signal callRequest()

    title: phoneRegistered ? i18n.tr("Sign In") : i18n.tr("Sign Up")

    onError: {
        console.log("ui: " + errorText + " error");
        if (errorText === "PHONE_CODE_INVALID") {
            isBusy = false;
            // TRANSLATORS: Error text for an invalid phone code.
            auth_code_page.errorText = i18n.tr("Invalid phone code");
        }
    }

    onTimeOutChanged: {
        time_out_timer.countDown = timeOut;
        time_out_timer.restart();
    }

    Component.onCompleted: code_text.forceActiveFocus()

    function accept() {
        if (code_text.text.length < 5) return;
        if (!phoneRegistered && fname_text.text.length === 0) {
            // TRANSLATORS: Error text for missing first name.
            fname_text.placeholderText = i18n.tr("First name is required")
            return;
        }

        isBusy = true;
        if (phoneRegistered) {
            signInRequest(code_text.text);
        } else {
            signUpRequest(code_text.text, fname_text.text, lname_text.text);
        }
    }

    Timer {
        id: time_out_timer

        property int countDown: 0

        interval: 1000
        repeat: true
        onTriggered: {
            if (countDown === 0) {
                isBusy = false;
                allowCall = true;
                stop();
            } else {
                countDown--;
            }
        }
    }

    Label {
        id: timer
        anchors {
            top: parent.top
            topMargin: units.gu(2)
            left: parent.left
            leftMargin: units.gu(4)
        }
        horizontalAlignment: Text.AlignHCenter
        fontSize: "large"
        visible: time_out_timer.running
        text: {
            var second = time_out_timer.countDown % 60;
            var minute = Math.floor(time_out_timer.countDown/60);
            return (minute < 10 ? "0" + minute : minute)
                    + ":" + (second < 10 ? "0" + second : second)
        }
    }

    Column {
        id: column
        anchors {
            top: timer.bottom
            left: parent.left
            right: parent.right
            margins: units.gu(4)
        }
        spacing: units.gu(2)

        TextField {
            id: code_text
            width: column.width
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: TextInput.AlignHCenter
            verticalAlignment: TextInput.AlignVCenter
            // TRANSLATORS: One time code entered during sign in process.
            placeholderText: i18n.tr("Code")
            inputMethodHints: Qt.ImhDigitsOnly
            validator: RegExpValidator { regExp: /\d*/ }
            onAccepted: {
                if (phoneRegistered) {
                    accept();
                } else {
                    fname_text.focus = true;
                }
            }
        }

        TextField {
            id: fname_text
            width: column.width
            anchors.horizontalCenter: parent.horizontalCenter
            placeholderText: i18n.tr("First Name")
            visible: !phoneRegistered
            onAccepted: lname_text.focus = true;
        }

        TextField {
            id: lname_text
            width: column.width
            anchors.horizontalCenter: parent.horizontalCenter
            placeholderText: i18n.tr("Last Name")
            visible: !phoneRegistered
            onAccepted: auth_code_page.accept()
        }

        TelegramButton {
            id: accept_button
            width: column.width
            height: code_text.height
            anchors.horizontalCenter: parent.horizontalCenter
            visible: time_out_timer.running
            text: phoneRegistered ? i18n.tr("Sign In") : i18n.tr("Sign Up")
            onClicked: auth_code_page.accept()
        }

        TelegramButton {
            id: resend_button
            width: column.width
            height: code_text.height
            anchors.horizontalCenter: parent.horizontalCenter
            visible: !time_out_timer.running
            // TRANSLATORS: Request to re-send the one time code used in sign in process.
            text: i18n.tr("Resend Code")
            onClicked: {
                errorText = "";
                auth_code_page.codeRequest();
            }
        }

        TelegramButton {
            id: call_button
            width: column.width
            height: code_text.height
            anchors.horizontalCenter: parent.horizontalCenter
            visible: !time_out_timer.running
            text: {
                if (allowCall) {
                    // TRANSLATE: Request phone call, if one time code has not arrived.
                    return i18n.tr("Request Call");
                } else {
                    i18n.tr("Calling, please wait...");
                }
            }
            onClicked: {
                errorText = "";
                if (allowCall) {
                    console.log("requesting auth call");
                    auth_code_page.callRequest();
                }
            }
        }

        Label {
            id: error_label
            width: column.width
            visible: text != ""
            color: "red"
        }
    }
}
