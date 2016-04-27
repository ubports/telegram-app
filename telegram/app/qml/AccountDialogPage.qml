import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import QtQuick.Window 2.2

import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "components"

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
            visible: enchat == telegramObject.nullEncryptedChat
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
    head.backAction: Action {
        id: back_action
        iconName: message_list.inSelectionMode ? "close" : "back"
        onTriggered: {
            if (message_list.inSelectionMode) {
                message_list.cancelSelection()
            } else {
                pageStack.removePages(pageStack.primaryPage);
            }
        }
    }

    flickable: null

    head.contents: Rectangle { //Adds components to the header
        anchors {
            top: parent.top
            topMargin: units.dp(8)
            left: parent.left
            verticalCenter: parent
            right: parent.right
            rightMargin: units.gu(5)
            bottom: parent.bottom
        }

        Text { //Text adjusts to the parent
            anchors {
                top: parent.top
                topMargin: units.gu(0.2)
                left: imgAvatar.right
                leftMargin: units.gu(1)
            }
            width: parent.width

            text: {
                if (!currentDialog) return "";
                if (isChat) {
                    return chat ? chat.title : ""; //Shown if a group chat
                } else {
                    return user ? user.firstName + " " + user.lastName : ""; //Shown if a scret chat
                }
            }
            font.pointSize: 11
            wrapMode: Text.WordWrap //Word wraps text when text is too long for wdith
            elide: Text.ElideRight //Enables the elipse to the end of the text
            maximumLineCount: 1 //Wraps text to 1 line
        }

        Avatar { //Avatar component gets avatar for user as specified from 'dialog' parameter
        id: imgAvatar
        width: height

        telegram: dialog_page.telegramObject
        dialog: dialog_page.currentDialog
        }

        Image { //'Lock' image that is overlayed ontop of the Avatar conponent
            anchors {
                left: imgAvatar.right
                leftMargin: -width-5
                top: imgAvatar.top
                topMargin: units.dp(2)
            }
            width: units.gu(1)
            height: units.gu(1.5)
            source: "qrc:/qml/files/lock.png"
            sourceSize: Qt.size(width, height)
            visible: currentDialog.encrypted
        }
    }

    signal forwardRequest(var messageIds);
    signal tagSearchRequest(string tag);
    signal dialogClosed();
    signal headerClicked();

    onHeaderClicked: {
        Qt.inputMethod.hide();
        pageStack.addPageToNextColumn(dialog_page, profile_page_component, {
                telegram: dialog_page.telegramObject,
                dialog: dialog_page.currentDialog
        });
    }

    Component.onCompleted: {
        // This is needed to have the username list ready for @ completion
        // CuteGram upstream calls this implicitly because of the items in the top bar.
        if (isChat) {
            telegram.messagesGetFullChat(chat.id)
        }
    }

    Component.onDestruction: {
        dialogClosed();
    }

    Item {
        id: message_box
        anchors {
            fill: parent
        }

        DelegateUtils {
            id: delegate_utils
        }

        AccountSendMessage {
            id: send_msg
            anchors {
                right: parent.right
                bottom: parent.bottom
                left: parent.left
            }
            currentDialog: dialog_page.currentDialog
            onAccepted: message_list.sendMessage(text, inReplyTo)
//            onCopyRequest: message_list.copy()
        }

        AccountAddContactHeader {
            id: add_contact_header
            anchors {
                top: parent.top
                right: parent.right
                left: parent.left
            }
            telegramObject: dialog_page.telegramObject
            currentDialog: dialog_page.currentDialog
        }

        AccountMessageList {
            id: message_list
            anchors {
                top: add_contact_header.visible ? add_contact_header.bottom : parent.top
                right: parent.right
                bottom: send_msg.top
                left: parent.left
            }
            clip: true
            telegramObject: dialog_page.telegramObject
            currentDialog: dialog_page.currentDialog

//            onFocusRequest: send_msg.setFocus()
            onForwardRequest: dialog_page.forwardRequest(messageIds);
            onDialogRequest: account_page.currentDialog = dialogObject
            onTagSearchRequest: msg_box.tagSearchRequest(tag)
            onReplyToRequest: send_msg.replyTo(msgId)
            onRejectSecretRequest: dialog_page.closeChat()
        }
    }

    function focusOn(msgId) {
        message_list.focusOn(msgId);
    }

    function closeChat() {
        pageStack.clear();
    }
}
