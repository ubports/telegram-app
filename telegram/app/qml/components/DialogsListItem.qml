import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.0
//import AsemanTools.Controls 1.0

import AsemanTools 1.0
import TelegramQML 1.0

import "qrc:/qml"
import "qrc:/qml/components"
import "qrc:/qml/js/colors.js" as Colors

ListItem {
    id: list_item
    height: units.gu(7)
    color: selected ? Colors.list_pressed : Colors.white

    property Telegram telegram
    property bool connected: true

    property var dialogPage
    property Dialog dialog
    property int dialogId: isChat ? dialog.peer.chatId : dialog.peer.userId
    property bool isChat: dialog.peer.chatId !== 0
    property bool isEncrypted: dialog.encrypted
    property User user: telegram.user(dialog.encrypted ? encryptedChatUid : dialog.peer.userId)
    property Chat chat: telegram.chat(dialog.peer.chatId)

    property EncryptedChat encryptedChat: telegramObject.encryptedChat(dialog.peer.userId)
    property int encryptedChatUid: encryptedChat.adminId === telegram.me
            ? encryptedChat.participantId : encryptedChat.adminId

    property bool showMessage: true
    property Message message: telegram.message(dialog.topMessage)
    property variant messageDate: CalendarConv.fromTime_t(message.date)

    property bool online: isChat ? false : (user.status.classType == image.typeUserStatusOnline)

    property string title: isChat ? chat.title : user.firstName + " " + user.lastName

    // in delegate -- selected: currentDialog == dialog
    property bool selected: false

    property real typeMessageActionChatCreate:          0xa6638b9a
    property real typeMessageActionChatAddUser:         0x5e3cfc4b
    property real typeMessageActionChatDeleteUser:      0xb2ae9b0c
    property real typeMessageActionChatJoinedByLink:    0xf89cf5e8
    property real typeMessageActionChatSentImage:       3064919984
    property real typeMessageActionChatChangeTitle:     3047280218

    signal currentIndexChanged(int index);
    signal currentDialogChanged(Dialog dialog);

    leadingActions: ListItemActions {
        actions: [
            Action {
                iconName: "system-log-out"
                text: i18n.tr("Leave chat")
                visible: connected

                onTriggered: {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        list_item, {
                            text: i18n.tr("Are you sure you want to leave this chat?"),
                            onAccept: function() {
                                pageStack.clear()
                                telegram.messagesDeleteHistory(dialogId, true)
                            }
                        }
                    );
                }
            },
            Action {
                iconName: "edit-clear"
                text: i18n.tr("Clear history")
                visible: connected && !isEncrypted

                onTriggered: {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        list_item, {
                            text: i18n.tr("Are you sure you want to clear history?"),
                            onAccept: function() {
                                telegram.messagesDeleteHistory(dialogId, false)
                            }
                        }
                    );
                }
            }
        ]
    }

    trailingActions: ListItemActions {
        actions: [
            Action {
                iconName: "info"
                text: i18n.tr("Info")
                onTriggered: {
                    pageStack.addPageToNextColumn(account_page, profile_page_component, {
                            telegram: list_item.telegram,
                            dialog: list_item.dialog
                    });
                }
            }
        ]
    }

    Avatar {
        id: image
        anchors {
            top: parent.top
            topMargin: units.dp(4)
            left: parent.left
            leftMargin: units.gu(1)
            bottom: parent.bottom
            bottomMargin: units.dp(4)
            rightMargin: units.gu(2)
        }
        width: height

        telegram: list_item.telegram
        dialog: list_item.dialog
    }

    Image {
        anchors {
            bottom: image.bottom
            bottomMargin: -height
            right: image.right
            rightMargin: -width
        }
        source: "qrc:/qml/files/online.png"
        sourceSize: Qt.size(width, height)
        width: height
        height: units.gu(2)
        visible: online
    }

    Image {
        anchors {
            left: image.right
            leftMargin: -width
            top: image.top
            topMargin: units.dp(2)
        }
        width: units.gu(1.4)
        height: units.gu(2)
        source: "qrc:/qml/files/lock.png"
        sourceSize: Qt.size(width, height)
        visible: dialog.encrypted
    }

    Text {
        id: title_text
        anchors {
            top: parent.top
            left: image.right
            leftMargin: units.dp(8)
            bottom: showMessage ? parent.verticalCenter : parent.bottom
            right: time_text.left
            margins: units.dp(4)
        }
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
        clip: true
        elide: Text.ElideRight
        wrapMode: Text.WrapAnywhere
        maximumLineCount: 1
        font.weight: Font.DemiBold
        font.pixelSize: units.dp(17)//FontUtils.sizeToPixels("large")
        text: list_item.title
    }

    Text {
        id: message_text
        anchors {
            top: parent.verticalCenter
            bottom: parent.bottom
            left: image.right
            leftMargin: units.dp(8)
            right: unread_rect.left
            margins: units.dp(4)
            topMargin: 0
        }
        visible: showMessage
        clip: true
        elide: Text.ElideRight
        wrapMode: Text.WrapAnywhere
        maximumLineCount: 1
        font.pixelSize: units.dp(15)//FontUtils.sizeToPixels("smaller")
        color: Colors.grey
        text: {
            if (!visible) return "";

            var list = dialog.typingUsers;
            if (list.length > 0) {
                // TRANSLATORS: Indicates in a subtitle of a dialog list item that someone is typing.
                return i18n.tr("typing...")
            } else {
                // We use emojis in our font currently, so no need to replace them here for now
                //return emojis.bodyTextToEmojiText(message.message, 16, true);

                if (message.message == "") {
                    var res = ""
                    var user = telegramObject.user(message.action.userId) 
                    var fromUser = telegramObject.user(message.fromId)
                    var userName = user.firstName + " " + user.lastName
                    var fromUserName = fromUser.firstName + " " + fromUser.lastName
                    userName = userName.trim()
                    fromUserName = fromUserName.trim()

                    switch(message.action.classType) {
                        case typeMessageActionChatChangeTitle:
                            if (fromUserName != "") {
                                if(fromUser.id == telegramObject.me)
                                    res = i18n.tr("<font color=\"DarkBlue\">You changed the group title to %1</font>").arg(message.action.title)
                                else
                                    res = i18n.tr("<font color=\"DarkBlue\">%1 changed the group title to %2</font>").arg(fromUserName).arg(message.action.title)
                            }
                            break

                        case typeMessageActionChatSentImage:
                            res = i18n.tr("Photo/Sticker")
                            break

                        case typeMessageActionChatCreate:
                            if (message.action.title == "Secret Chat") {
                                if (user.id == telegramObject.me)
                                    res = i18n.tr("<font color=\"DarkBlue\">%1 joined your secret chat.</font>").arg(fromUserName)
                                else
                                    res = i18n.tr("<font color=\"DarkBlue\">You joined the secret chat.</font>")
                            } else {
                                if (fromUser.id == telegramObject.me)
                                    res = i18n.tr("<font color=\"DarkBlue\">You created the group</font>")
                                else
                                    res = i18n.tr("<font color=\"DarkBlue\">%1 created the group</font>").arg(fromUserName)
                            }
                            break

                        case typeMessageActionChatAddUser:
                            if (fromUser.id == telegramObject.me)
                                res = i18n.tr("<font color=\"DarkBlue\">You added %1</font>").arg(userName)
                            else if (user.id == telegramObject.me)
                                res = i18n.tr("<font color=\"DarkBlue\">%1 added you</font>").arg(fromUserName)
                            else
                                res = i18n.tr("<font color=\"DarkBlue\">%1 added %2</font>").arg(fromUserName).arg(userName)
                            break

                        case typeMessageActionChatDeleteUser:
                            if(user.id == fromUser.id) {
                                res = i18n.tr("<font color=\"DarkBlue\">%1 left the group</font>").arg(userName)
                            } else {
                                if (fromUser.id == telegramObject.me)
                                    res = i18n.tr("<font color=\"DarkBlue\">You removed %1</font>").arg(userName)
                                else if (user.id == telegramObject.me)
                                    res = i18n.tr("<font color=\"DarkBlue\">%1 removed you</font>").arg(fromUserName)
                                else
                                    res = i18n.tr("<font color=\"DarkBlue\">%1 removed %2</font>").arg(fromUserName).arg(userName)
                            }
                            break

                        case typeMessageActionChatJoinedByLink:
                            if(fromUser.id == telegramObject.me)
                                res = i18n.tr("<font color=\"DarkBlue\">You joined the group via invite link</font>")
                            else
                                res = i18n.tr("<font color=\"DarkBlue\">%1 joined the group via invite link</font>").arg(fromUserName)
                            break

                        default:
                            break
                    }
                    return res
                }
                return message.message
            }
        }
    }

    Text {
        id: time_text
        anchors {
            top: parent.top
            bottom: parent.verticalCenter
            right: parent.right
            rightMargin: units.gu(1)
        }
        verticalAlignment: Text.AlignVCenter
        visible: showMessage
        font.pixelSize: units.dp(12)
        color: Colors.grey
        text: messageDate > 0 ? Cutegram.getTimeString(messageDate) : ""
    }

    Rectangle {
        id: unread_rect
        anchors {
            top: parent.verticalCenter
            topMargin: 0
            right: time_text.right
        }
        width: Math.min(height, units.gu(4))
        height: units.gu(2.8)
        radius: width*0.5
        color: "#5ec245"
        visible: dialog.unreadCount !== 0

        Text {
            id: unread_text
            anchors {
                centerIn: parent
                margins: 0
            }
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.weight: Font.DemiBold
            font.pixelSize: FontUtils.sizeToPixels("small")
            color: "white"
            text: dialog.unreadCount < 300 ? dialog.unreadCount : ":D"; // no-i18n
        }
    }

    onSelectedChanged: if (selected) currentIndexChanged(index)
}
