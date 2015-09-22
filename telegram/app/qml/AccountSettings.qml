import QtQuick 2.4
import Ubuntu.Components 1.2
import Ubuntu.Components.ListItems 0.1 as ListItem
import Ubuntu.Components.Popups 1.0 as Popup
import Ubuntu.Content 1.0

import TelegramQML 1.0

import "qrc:/qml/components/"

Page {
    id: page

    property Telegram telegram
    property User user: telegram.user(telegram.me)

    property real typeUserStatusOffline: 0x8c703f
    property real typeUserStatusEmpty: 0x9d05049
    property real typeUserStatusOnline: 0xedb93949
    property real typeUserStatusRecently: 0xe26f42f1
    property real typeUserStatusLastWeek: 0x7bf09fc
    property real typeUserStatusLastMonth: 0x77ebc742

    property list<Action> actions: [
        Action {
            iconName: "stock_image"
            // TRANSLATORS: Action text to change profile photo.
            text: i18n.tr("Change photo")
            onTriggered: changeUserPhoto()
                
        },
        Action {
            iconName: "edit"
            // TRANSLATORS: Edit your profile first and last name.
            text: i18n.tr("Edit name")
            onTriggered: changeFullName()
        },
        Action {
            iconName: "close"
            text: i18n.tr("Log out")
            onTriggered: PopupUtils.open(logout_dialog_component)
        }
    ]

    objectName: "settingsPage"
    title: i18n.tr("Settings")
    head.actions: actions

    function changeFullName() {
        var properties = { "telegram": telegram, "firstName": user.firstName, "lastName": user.lastName };
        pageStack.push(name_page_component, properties);
    }

    function changeUsername() {
        var properties = { "telegram": telegram };
        pageStack.push(username_page_component, properties);
    }

    function changeUserPhoto() {
        Qt.inputMethod.hide();
        photo_importer.requestMedia();
    }

    MediaImport {
        id: photo_importer
        contentType: ContentType.Pictures

        onMediaReceived: {
            var path = String(mediaUrl).replace('file://', '')
            if (path.length == 0) return;
            edit_photo_timer.upload(path);
        }
    }
 
    Timer {
        id: edit_photo_timer

        property string photo: ""

        interval: 500

        function upload(photoPath) {
            stop();
            photo = photoPath;
            restart();
        }

        onTriggered: {
            if (telegram.connected) {
                telegram.setProfilePhoto(photo);
            }
        }
    }

    VisualItemModel {
        id: model

        ListItem.Header {
            // TRANSLATORS: Settings section header, visible above phone and username fields.
            text: i18n.tr("Info")
        }

        ListItem.Subtitled {
            text: telegram.phoneNumber
            // TRANSLATORS: Visible right under phone number in settings page.
            subText: i18n.tr("Phone")
            showDivider: false
            highlightWhenPressed: false
        }

        ListItem.Subtitled {
            text: user.username
            // TRANSLATORS: Visible right under username in settings page.
            subText: i18n.tr("Username")
            showDivider: false
            onClicked: changeUsername()
        }

        ListItem.Header {
            // TRANSLATORS: Settings section header.
            text: i18n.tr("Messages")
        }

        ListItem.Standard {
            // TRANSLATORS: Text of notifications switch in settings.
            text: i18n.tr("Notifications")
            height: visible ? implicitHeight : 0
            visible: (Cutegram.pushNumber == telegram.phoneNumber)
            showDivider: false

            Switch {
                checked: Cutegram.pushNotifications
                anchors {
                    right: parent.right
                    rightMargin: units.gu(2)
                    verticalCenter: parent.verticalCenter
                }

                onCheckedChanged: {
                    Cutegram.pushNotifications = checked;

                    if (pushClient.token == "") {
                        if (checked) {
                            Cutegram.pushNotifications = false;
                            mainView.openPushDialog();
                        }
                    } else {
                        if (checked) {
                            pushClient.registerForPush();
                        } else {
                            pushClient.unregisterFromPush();
                        }
                    }
                }
            }
        }

        ListItem.Standard {
            text: i18n.tr("Send by Enter")
            showDivider: false

            Switch {
                checked: Cutegram.sendWithEnter
                anchors {
                    right: parent.right
                    rightMargin: units.gu(2)
                    verticalCenter: parent.verticalCenter
                }

                onCheckedChanged: Cutegram.sendWithEnter = checked
            }
        }

        // TODO Terminate all sessions

        ListItem.Header {
            // TRANSLATORS: Settings section header.
            text: i18n.tr("Support")
        }

        ListItem.Standard {
            showDivider: false
            // TRANSLATORS: Text of settings item visible in the Support section.
            text: i18n.tr("Ask a Question")
            onClicked: Qt.openUrlExternally("http://askubuntu.com/search?q=telegram");
        }

        // TODO app version
    }

    ClickableContactImage {
        id: profile_image
        anchors {
            top: parent.top
            topMargin: units.gu(2)
            left: parent.left
            leftMargin: units.gu(2)
        }
        width: units.gu(9)
        height: width
        telegram: page.telegram
        user: page.user

        onClicked: {
            pageStack.push(preview_page_component, {
                "title": details_item.title,
                "photoPreviewSource": path
            });
        }
    }

    SubtitledListItem {
        id: details_item
        anchors {
            left: profile_image.right
            right: parent.right
            verticalCenter: profile_image.verticalCenter
        }
        highlightWhenPressed: false
        divider.visible: false

        title: user.firstName + " " + user.lastName
        titleIsBold: true
        titleMaxLineCount: 2
        subtitle: {
            var result = "";
            switch(user.status.classType)
            {
            case typeUserStatusRecently:
                // TRANSLATORS: Refers to when the user was seen.
                result = i18n.tr("Recently")
                break;
            case typeUserStatusLastMonth:
                // TRANSLATORS: Refers to when the user was seen.
                result = i18n.tr("Last Month")
                break;
            case typeUserStatusLastWeek:
                // TRANSLATORS: Refers to when the user was seen.
                result = i18n.tr("Last Week")
                break;
            case typeUserStatusOnline:
                // TRANSLATORS: Refers to when the user was seen - currently is online.
                result = i18n.tr("Online")
                break;
            case typeUserStatusOffline:
                // TRANSLATORS: %1 is formatted date/time when the user was last seen.
                result = i18n.tr("last seen %1").arg(Cutegram.getTimeString(CalendarConv.fromTime_t(user.status.wasOnline)))
                break;
            }
            return result;
        }
    }

    ListView {
        anchors {
            topMargin: units.gu(2)
            top: profile_image.bottom
            left: parent.left
            bottom: parent.bottom
            right: parent.right
        }
        clip: true
        model: model
    }

    Component {
        id: logout_dialog_component
        Popup.Dialog {
            id: logout_dialog
            title: i18n.tr("Telegram")
            text: i18n.tr("Are you sure you want to log out?\nAny secret chats will be lost.")
            Button {
                text: i18n.tr("OK")
                color: UbuntuColors.orange
                onClicked: {
                    console.log("Logging out.");
                    // Calling authLogOut here doesn't work.
                    // This seems to be an SDK bug.
                    logout_timer.start();
                    PopupUtils.close(logout_dialog);
                }
            }
            Button {
                text: i18n.tr("Cancel")
                onClicked: PopupUtils.close(logout_dialog)
            }
        }
    }

    Timer {
        id: logout_timer
        interval: 300
        repeat: false

        onTriggered: {
            telegram.logoutRequest = true;
            telegram.authLogout();
        }
    }
}
