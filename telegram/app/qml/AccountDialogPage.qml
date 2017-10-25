import QtQuick 2.4
import Ubuntu.Content 1.3
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import QtQuick.Window 2.2

import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "components"


Page {
    id: dialog_page

    property Telegram telegramObject
    property Dialog currentDialog: telegramObject.nullDialog

    property bool isChat: currentDialog ? currentDialog.peer.chatId != 0 : false
    property bool isChannel: currentDialog ? currentDialog.peer.channelId != 0 : false
    property User user: telegramObject.user(currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)
    property Chat chat: telegramObject.chat(isChannel ? currentDialog.peer.channelId : currentDialog.peer.chatId)
    property int dialogId: isChannel ? currentDialog.peer.channelId : isChat ? currentDialog.peer.chatId : (currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)

    property EncryptedChat enchat: telegramObject.encryptedChat(currentDialog.peer.userId)
    property int enChatUid: enchat.adminId==telegramObject.me ? enchat.participantId : enchat.adminId

    property list<Action> defaultActions: [
        Action {
            objectName: "groupInfo"
            iconName: "stock_contact"
            text: isChannel ? i18n.tr("Channel Info") : isChat ? i18n.tr("Group Info") : i18n.tr("Profile Info")
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
            onTriggered: message_list.copySelected()
        },
        Action {
            id: forwardSelectedAction
            iconName: "next"
            text: i18n.tr("Forward")
            visible: enchat == telegramObject.nullEncryptedChat
            onTriggered: {
                message_list.forwardSelected()
                pageStack.removePages(dialog_page)
            }
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

    header: TelegramHeader {
        StyleHints {
            backgroundColor: currentDialog.encrypted ? Colors.secret_green : "white"
            dividerColor: Qt.darker(backgroundColor, 1.1)
        }
        id: dialog_page_header
        trailingActionBar.actions: message_list.inSelectionMode ? selectionActions : defaultActions
        leadingActionBar.actions: Action {
            id: back_action
            objectName: "dialogBack"
            iconName: message_list.inSelectionMode ? "close" : "back"
            onTriggered: {
                if (message_list.inSelectionMode) {
                    message_list.cancelSelection()
                } else {
                    backToChatList();
                }
            }
        }
        telegram: telegramObject
        dialog: currentDialog
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

    function backToChatList() {
        if(mainView.width > units.gu(80)) {
            dialogDidGoBack = true;
        }
        pageStack.removePages(dialog_page);
    }

    Connections {
        target: ContentHub
        onShareRequested: backToChatList()
    }

    Component.onCompleted: {
        // This is needed to have the username list ready for @ completion
        // CuteGram upstream calls this implicitly because of the items in the top bar.
        if (isChat)
        {
            telegram.messagesGetFullChat(chat.id)
        } else if (isChannel)
        {
            telegram.channelsGetFullChannel(chat.id)
        }

    }

    Component.onDestruction: {
        dialogClosed();
    }

    Item {
        id: message_box
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
            top: dialog_page_header.bottom
        }

        DelegateUtils {
            id: delegate_utils
        }

        AccountSendMessage {
            id: send_msg
            objectName: "accountSendMessageArea"
            anchors {
                right: parent.right
                bottom: parent.bottom
                left: parent.left
            }
            currentDialog: dialog_page.currentDialog
            onAccepted: message_list.sendMessage(text, inReplyTo)
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
            objectName: "accountMessageList"
            anchors {
                top: add_contact_header.visible ? add_contact_header.bottom : parent.top
                right: parent.right
                bottom: send_msg.top
                left: parent.left
            }
            clip: true
            telegramObject: dialog_page.telegramObject
            currentDialog: dialog_page.currentDialog

            onFocusRequest: send_msg.focusOut();
            onForwardRequest: {
                dialog_page.forwardRequest(messageIds);
                pageStack.removePages(dialog_page);
            }
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
