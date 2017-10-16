import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3

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
    property int dialogId: isChannel ? dialog.peer.channelId : isChat ? dialog.peer.chatId : dialog.peer.userId
    property bool isChat: dialog.peer.chatId !== 0
    property bool isChannel: dialog.peer.channelId !== 0
    property bool isMuted: telegram.userData.isMuted(dialogId)
    property bool isEncrypted: dialog.encrypted
    property User user: telegram.user(dialog.encrypted ? encryptedChatUid : dialog.peer.userId)
    property Chat chat: telegram.chat(isChannel ? dialog.peer.channelId : dialog.peer.chatId)

    property EncryptedChat encryptedChat: telegramObject.encryptedChat(dialog.peer.userId)
    property int encryptedChatUid: encryptedChat.adminId === telegram.me
            ? encryptedChat.participantId : encryptedChat.adminId

    property bool showMessage: true
    property Message message: telegram.message(dialog.topMessage)
    property variant messageDate: CalendarConv.fromTime_t(message ? message.date : 0)
    property bool isAudioMessage: file_handler.targetType == FileHandler.TypeTargetMediaAudio
    property alias isSticker: file_handler.isSticker

    property bool online: isChat || isChannel ? false : (user.status.classType == image.typeUserStatusOnline)

    property string title: isChat || isChannel ? chat.title : user.firstName + " " + user.lastName

    // in delegate -- selected: currentDialog == dialog
    property bool selected: false

    property real typeMessageActionEmpty:               0xb6aef7b0
    property real typeMessageActionChatCreate:          0xa6638b9a
    property real typeMessageActionChatAddUser:         0x5e3cfc4b
    property real typeMessageActionChatDeleteUser:      0xb2ae9b0c
    property real typeMessageActionChatJoinedByLink:    0xf89cf5e8
    property real typeMessageActionChatSentImage:       0xB6AEF7B0
    property real typeMessageActionChatChangeTitle:     0xB5A1CE5A

    signal currentIndexChanged(int index);
    signal currentDialogChanged(Dialog dialog);

    FileHandler {
        id: file_handler
        telegram: telegramObject
        target: message
    }

    leadingActions: ListItemActions {
        actions: [
            Action {
                iconName: "system-log-out"
                text: i18n.tr("Leave chat")
                visible: connected

                onTriggered: {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        null, {
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
                        null, {
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

    Rectangle {
        anchors {
            fill: parent;
            margins: units.dp(4)
        }
        color: Colors.secret_green
        visible: dialog.encrypted
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

    Row {
        anchors {
            top: parent.top
            left: image.right
            leftMargin: units.dp(8)
            bottom: showMessage ? parent.verticalCenter : parent.bottom
            right: time_text.left
            margins: units.dp(4)
        }
        spacing: units.dp(4)

        Icon {
            id: secret_chat_icon
            visible: dialog.encrypted
            name: "network-secure"
            anchors {
                top: parent.top
                bottom: parent.bottom
                topMargin: units.dp(4)
                bottomMargin: units.dp(4)
            }
            width: height
        }

        Icon {
            id: contact_group_icon
            visible: isChat || isChannel
            name: "contact-group"
            anchors {
                top: parent.top
                bottom: parent.bottom
                topMargin: units.dp(4)
                bottomMargin: units.dp(4)
            }
            width: height
        }

        Icon {
            id: audio_volume_muted_icon
            visible: isMuted
            name: "audio-volume-muted"
            anchors {
                top: parent.top
                bottom: parent.bottom
                topMargin: units.dp(4)
                bottomMargin: units.dp(4)
            }
            width: height
        }

        Text {
            id: title_text
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
            wrapMode: Text.WrapAnywhere
            maximumLineCount: 1
            font.weight: Font.DemiBold
            font.pixelSize: units.dp(17)
            text: list_item.title
            width: parent.width - (secret_chat_icon.visible? secret_chat_icon.width : 0.0) - (contact_group_icon.visible? contact_group_icon.width : 0.0) - (audio_volume_muted_icon.visible? audio_volume_muted_icon.width : 0.0)
        }
    }

    Row {
        anchors {
            top: parent.verticalCenter
            bottom: parent.bottom
            left: image.right
            leftMargin: units.dp(8)
            right: parent.right
            margins: units.dp(4)
            topMargin: 0
        }

        Text {
            id: message_author
            visible: showMessage && message && (message.out || isChat || isChannel) && dialog.typingUsers.length === 0 && (message.message != "" || message.action.classType == typeMessageActionChatSentImage)
            maximumLineCount: 1
            font.pixelSize: units.dp(15)//FontUtils.sizeToPixels("smaller")
            color: Colors.telegram_blue
            text: {
                if (!message || dialog.typingUsers.length > 0) return '';
                if (message.out) return i18n.tr("You: ");
                if (isChat || isChannel) return telegramObject.user(message.fromId).firstName + ': ';
                return '';
            }
        }

        Text {
            id: message_text
            visible: showMessage
            elide: Text.ElideRight
            wrapMode: Text.WrapAnywhere
            maximumLineCount: 1
            font.pixelSize: units.dp(15)
            color: Colors.grey
            width: parent.width - (message_author.visible? message_author.width : 0.0) - (unread_rect.visible ? unread_rect.width : 0.0)
            text: {
                if (!visible) return "";

                var list = dialog.typingUsers;
                if (list.length > 0) {
                    // TRANSLATORS: Indicates in a subtitle of a dialog list item that someone is typing.
                    return i18n.tr("typing...")
                } else {
                    if (!message) return "";

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
                                        res = i18n.tr("You changed the group title to %1").arg(message.action.title)
                                    else
                                        res = i18n.tr("%1 changed the group title to %2").arg(fromUserName).arg(message.action.title)
                                }
                                break

                            case typeMessageActionChatSentImage:
                                if (fromUserName != "") {
                                    if (isAudioMessage)
                                        res = i18n.tr("Voice message")
                                    else if (isSticker)
                                        res = i18n.tr("Sticker")
                                    else {
                                        res = file_handler.fileName
                                        if (res == "")
                                            res = i18n.tr("Photo")
                                    }
                                }
                                break

                            case typeMessageActionChatCreate:
                                if (message.action.title == "Secret Chat") {
                                    if (user.id == telegramObject.me)
                                        res = i18n.tr("%1 joined your secret chat.").arg(fromUserName)
                                    else
                                        res = i18n.tr("You joined the secret chat.")
                                } else {
                                    if (fromUser.id == telegramObject.me)
                                        res = i18n.tr("You created the group")
                                    else
                                        res = i18n.tr("%1 created the group").arg(fromUserName)
                                }
                                break

                            case typeMessageActionChatAddUser:
                                if (fromUser.id == telegramObject.me)
                                    res = i18n.tr("You added %1").arg(userName)
                                else if (user.id == telegramObject.me)
                                    res = i18n.tr("%1 added you").arg(fromUserName)
                                else
                                    res = i18n.tr("%1 added %2").arg(fromUserName).arg(userName)
                                break

                            case typeMessageActionChatDeleteUser:
                                if(user.id == fromUser.id) {
                                    res = i18n.tr("%1 left the group").arg(userName)
                                } else {
                                    if (fromUser.id == telegramObject.me)
                                        res = i18n.tr("You removed %1").arg(userName)
                                    else if (user.id == telegramObject.me)
                                        res = i18n.tr("%1 removed you").arg(fromUserName)
                                    else
                                        res = i18n.tr("%1 removed %2").arg(fromUserName).arg(userName)
                                }
                                break

                            case typeMessageActionChatJoinedByLink:
                                if(fromUser.id == telegramObject.me)
                                    res = i18n.tr("You joined the group via invite link")
                                else
                                    res = i18n.tr("%1 joined the group via invite link").arg(fromUserName)
                                break

                            case typeMessageActionEmpty:
                                res = i18n.tr("%1 is currently offline").arg(title);
                                break;

                            default:
                                break
                        }
                        return "<font color=\"" + Colors.telegram_blue + "\">" + res + "</font>"
                    }
                    return message.message
                }
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
        color: isMuted ? Colors.grey : "#5ec245"
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
            text: dialog.unreadCount < 999 ? dialog.unreadCount : ":D"; // no-i18n
        }
    }

    onSelectedChanged: if (selected) currentIndexChanged(index)

    function onMuteChanged(id) {
        if (id == list_item.dialogId)
            list_item.isMuted = list_item.telegram.userData.isMuted(list_item.dialogId);
    }

    Component.onCompleted: {
        telegram.userData.muteChanged.connect(list_item.onMuteChanged)
    }

    Component.onDestruction: {
        telegram.userData.muteChanged.disconnect(list_item.onMuteChanged);
    }
}
