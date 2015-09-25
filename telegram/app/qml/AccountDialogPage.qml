import QtQuick 2.4
import Ubuntu.Components 1.2
import Ubuntu.Components.ListItems 1.0 as ListItem

import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "qrc:/qml"

// Cutegram: AccountMessageBox.qml

Page {
    id: dialog_page

    property Telegram telegramObject
    property Dialog currentDialog: telegramObject.nullDialog

    property bool isChat: currentDialog ? currentDialog.peer.chatId != 0 : false
    property User user: telegramObject.user(currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)
    property Chat chat: telegramObject.chat(currentDialog.peer.chatId)
    property int dialogId: isChat ? currentDialog.peer.chatId : (currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)

    property EncryptedChat enchat: telegramObject.encryptedChat(currentDialog.peer.userId)
    property int enChatUid: enchat.adminId==telegramObject.me ? enchat.participantId : enchat.adminId

    property list<Action> defaultActions: [
        Action {
            iconName: "stock_contact"
            text: isChat ? i18n.tr("Group Info") : i18n.tr("Profile Info")
            onTriggered: {
                Qt.inputMethod.hide();
                headerClicked();
            }
        }
    ]

    property list<Action> selectionActions: [
        Action {
            iconName: "select"
            text: i18n.tr("Select all")
            onTriggered: {
                if (message_list.selectedItemCount === message_list.totalItemCount) {
                    message_list.clearSelection();
                } else {
                    message_list.selectAll();
                }
            }
        },
        Action {
            id: copySelectedAction
            iconName: "edit-copy"
            text: i18n.tr("Copy")
            //visible: !pageIsSecret
            onTriggered: message_list.copySelected()
        },
        Action {
            id: forwardSelectedAction
            iconName: "next"
            text: i18n.tr("Forward")
            //visible: !pageIsSecret
            onTriggered: message_list.forwardSelected()
        },
        Action {
            id: multiDeleteAction
            iconName: "delete"
            text: i18n.tr("Delete")
            onTriggered: message_list.deleteSelected()
        }
    ]

    property bool actionsEnabled: true /* TODO pageIsSecret ? secretChatState === 2 : true */

    property alias maxId: message_list.maxId
    
    objectName: "dialogPage"
    head.actions: message_list.inSelectionMode ? selectionActions : defaultActions
    flickable: null
    title: {
        if (!currentDialog) return "";

        if (isChat) {
            return chat ? chat.title : "";
        } else {
            return user ? user.firstName + " " + user.lastName : "";
        }
    }

    signal forwardRequest(var messageIds);
    signal tagSearchRequest(string tag);
    signal dialogClosed();
    signal headerClicked();

    onHeaderClicked: {
        Qt.inputMethod.hide();
        pageStack.push(profile_page_component, {
                telegram: dialog_page.telegramObject,
                dialog: dialog_page.currentDialog
        });
    }

    Component.onDestruction: {
        dialogClosed();
    }

    Item {
        id: message_box
        anchors {
            topMargin: units.gu(8)
            fill: parent
        }
        clip: true

        AccountMessageList {
            id: message_list
            anchors {
                top: parent.top
                left: parent.left
                bottom: send_msg.top
                right: parent.right
            }
            clip: true
            telegramObject: dialog_page.telegramObject
            currentDialog: dialog_page.currentDialog

//            onFocusRequest: send_msg.setFocus()
            onForwardRequest: dialog_page.forwardRequest(messageIds);
            onDialogRequest: account_page.currentDialog = dialogObject
            onTagSearchRequest: msg_box.tagSearchRequest(tag)
            onReplyToRequest: send_msg.replyTo(msgId)
        }

        AccountSendMessage {
            id: send_msg
            anchors {
                left: parent.left
                bottom: parent.bottom
                right: parent.right
            }
            currentDialog: dialog_page.currentDialog
            onAccepted: message_list.sendMessage(text, inReplyTo)
//            onCopyRequest: message_list.copy()
            //onEmojiRequest:
        }
    }

    function focusOn(msgId) {
        message_list.focusOn(msgId);
    }
}

