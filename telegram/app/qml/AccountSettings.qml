import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3 as Popup
import Ubuntu.Content 1.0

import TelegramQML 1.0

import "components"
import "js/time.js" as Time
import "js/version.js" as Version

Page {
    id: page

    property Telegram telegram
    property User user: telegram.user(telegram.me)

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
        }
    ]

    objectName: "settingsPage"
    header: PageHeader {
        title: i18n.tr("Settings")
        trailingActionBar.actions: actions
    }

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
            if (urls.length > 0) {
                var path = String(urls[0]).replace('file://', '')
                if (path.length == 0) return
                edit_photo_timer.upload(path)
            } else {
                console.log("no photo selected")
            }
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

        ListItem {
            height: units.gu(4)
            ListItemLayout {
                // TRANSLATORS: Settings section header, visible above phone and username fields.
                title.text: i18n.tr("Info")
                title.font.weight: Font.DemiBold
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
        }

        ListItem {
            divider.visible: false
            height: units.gu(6)
            ListItemLayout {
                id: phoneNumberLayout
                title.text: telegram.phoneNumber
                // TRANSLATORS: Visible right under phone number in settings page.
                subtitle.text: i18n.tr("Phone")
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
        }

        ListItem {
            divider.visible: false
            height: units.gu(6)
            ListItemLayout {
                id: usernameLayout
                title.text: user.username
                // TRANSLATORS: Visible right under username in settings page.
                subtitle.text: i18n.tr("Username")
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
            onClicked: changeUsername()
        }

        ListItem {
            height: units.gu(4)
            ListItemLayout {
                // TRANSLATORS: Settings section header.
                title.text: i18n.tr("Messages")
                title.font.weight: Font.DemiBold
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
        }

        ListItem {
            divider.visible: false
            height: visible ? units.gu(6) : 0
            visible: (Cutegram.pushNumber === telegram.phoneNumber)

            ListItemLayout {
                id: notificationLayout
                // TRANSLATORS: Text of notifications switch in settings.
                title.text: i18n.tr("Notifications")

                Switch {
                    checked: Cutegram.pushNotifications
                    SlotsLayout.position: SlotsLayout.Last

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
        }

        ListItem {
            divider.visible: false
            height: units.gu(6)
            ListItemLayout {
                title.text: i18n.tr("Send by Enter")

                Switch {
                    checked: Cutegram.sendWithEnter
                    SlotsLayout.position: SlotsLayout.Last
                    onCheckedChanged: Cutegram.sendWithEnter = checked
                }
            }
        }

        // TODO Terminate all sessions

        ListItem {
            height: units.gu(4)
            ListItemLayout {
                // TRANSLATORS: Settings section header.
                title.text: i18n.tr("Support")
                title.font.weight: Font.DemiBold
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
        }

        ListItem {
            height: units.gu(6)
            divider.visible: false
            ListItemLayout {
                // TRANSLATORS: Text of settings item visible in the Support section.
                title.text: i18n.tr("Ask a Question")
            }
            onClicked: Qt.openUrlExternally("http://askubuntu.com/search?q=telegram")
        }

        ListItem {
            height: units.gu(6)
            divider.visible: false
            ListItemLayout {
                // TRANSLATORS: Text of settings item visible in the Support section
                title.text: i18n.tr("Telegram FAQ")
            }
            onClicked: Qt.openUrlExternally("https://telegram.org/faq")
        }

        ListItem {
            height: units.gu(4)
            ListItemLayout {
                // TRANSLATORS: Settings section header.
                title.text: i18n.tr("Account")
                title.font.weight: Font.DemiBold
                padding.bottom: units.gu(1)
                padding.top: units.gu(1)
            }
        }

        ListItem {
            height: units.gu(6)
            ListItemLayout {
                title.text: i18n.tr("Log out") + " | " + telegram.phoneNumber
            }
            onClicked: PopupUtils.open(logout_dialog_component)
        }

        ListItem {
            divider.visible: false
            Label {
                width: parent.width
                height: units.gu(6)
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                // TRANSLATORS: Visible at bottom of settings screen. The argument is application version.
                text: i18n.tr("Telegram for Ubuntu %1").arg(getVersionString())

                function getVersionString() {
                    var v = Version.version.split(".");
                    var major = v[0];
                    var minor = v[1];
                    var patch = v[2];
                    var revision = v.slice(3, v.length).join(".");
                    return "v" + major + "." + minor + "." + patch + " (" + revision + ")";
                }
            }
        }
    }

    ClickableContactImage {
        id: profile_image
        anchors {
            top: page.header.bottom
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
            case userStatusType.typeUserStatusOnline:
                // TRANSLATORS: Indicates when the contact was last seen.
                return i18n.tr("online");
            case userStatusType.typeUserStatusOffline:
                // TRANSLATORS: %1 is the time when the person was last seen.
                return i18n.tr("last seen %1").arg(Time.formatLastSeen(i18n, user.status.wasOnline * 1000));
            case userStatusType.typeUserStatusRecently:
                // TRANSLATORS: Indicates when the contact was last seen.
                return i18n.tr("last seen recently");
            case userStatusType.typeUserStatusLastWeek:
                // TRANSLATORS: Indicates when the contact was last seen.
                return i18n.tr("last seen within a week");
            case userStatusType.typeUserStatusLastMonth:
                // TRANSLATORS: Indicates when the contact was last seen.
                return i18n.tr("last seen within a month");
            default:
                // TRANSLATORS: Indicates when the contact was last seen.
                return i18n.tr("last seen a long time ago");
            }
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
