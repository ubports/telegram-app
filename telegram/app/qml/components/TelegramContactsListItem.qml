import QtQuick 2.4
import Ubuntu.Components 1.2
import Ubuntu.Components.ListItems 1.0 as ListItems

import TelegramQML 1.0

import "qrc:/qml" // ContactImage
import "../js/avatar.js" as Avatar
import "../js/time.js" as Time
import "../js/colors.js" as Colors

ListItem {
    id: contact_item
    height: units.gu(8)
    color: selected ? Colors.list_pressed : Colors.white
    divider.visible: false

    property Telegram telegram
    property Contact contact
    property User user: contact ? telegram.user(contact.userId) : telegram.nullUser

    property string userId: user.id
    property string fullName: user.firstName + " " + user.lastName
    property UserStatus status: user.status

    property bool isOnline: status.classType == typeUserStatusOnline
    property string title: fullName
    property string subtitle: {
        // TODO check classType vs typeUserEmpty, typeUserDeleted
        if (user.classType == userType.typeUserEmpty) {
            return "";
        } else if (user.classType == userType.typeUserDeleted) {
            // TRANSLATORS: User status: deleted
            return i18n.tr("Deleted");
        }

        switch(status.classType)
        {
        case userStatusType.typeUserStatusOnline:
            // TRANSLATORS: Indicates when the contact was last seen.
            return i18n.tr("online");
        case userStatusType.typeUserStatusOffline:
            // TRANSLATORS: %1 is the time when the person was last seen.
            return i18n.tr("last seen %1").arg(Time.formatLastSeen(i18n, status.wasOnline * 1000));
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

    property bool showDivider: true

    trailingActions: ListItemActions {
        actions: [
            Action {
                iconName: "info"
                text: i18n.tr("Info")
                onTriggered: {
                    pageStack.push(profile_page_component, {
                            telegram: contact_item.telegram,
                            dialog: contact_item.telegram.fakeDialogObject(user.id, false)
                    });
                }
            }
        ]
    }

    Avatar {
        id: contact_image
        anchors {
            top: parent.top
            topMargin: units.gu(1.5)
            left: parent.left
            leftMargin: units.gu(2)
            bottom: parent.bottom
            bottomMargin: units.gu(1.5)
            rightMargin: units.gu(1)
        }
        width: height

        telegram: contact_item.telegram
        user: contact_item.user
        isChat: false
    }

    Text {
        id: title_text
        width: implicitWidth
        anchors {
            top: parent.top
            topMargin: units.gu(1.5)
            left: contact_image.right
            leftMargin: units.gu(1.5)
            right: parent.right
            rightMargin: units.gu(1.5)
            bottom: status_text.visible ? parent.verticalCenter : parent.bottom
        }
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
        clip: true
        elide: Text.ElideRight
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        maximumLineCount: 1
        font.pixelSize: FontUtils.sizeToPixels("large")
        text: title
    }

    Text {
        id: status_text
        width: implicitWidth
        anchors {
            top: parent.verticalCenter
            topMargin: 0
            left: contact_image.right
            leftMargin: units.gu(1.5)
            bottom: contact_image.bottom
            right: parent.right
            rightMargin: units.gu(1.5)
        }
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
        clip: true
        elide: Text.ElideRight
        wrapMode: Text.WrapAnywhere
        maximumLineCount: 1
        font.pixelSize: FontUtils.sizeToPixels("medium")
        color: isOnline ? Colors.dark_blue : Colors.grey
        visible: text !== ""
        text: subtitle
    }

    ListItems.ThinDivider {
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        visible: showDivider
    }

    // property real typeUserStatusEmpty: 0x9d05049
    // property real typeUserStatusOnline: 0xedb93949
    // property real typeUserStatusOffline: 0x8c703f
    // property real typeUserStatusRecently: 0xe26f42f1
    // property real typeUserStatusLastWeek: 0x7bf09fc
    // property real typeUserStatusLastMonth: 0x77ebc742

    // property real typeUserEmpty: 0x200250ba
    // property real typeUserDeleted: 0xd6016d7a
}
