import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import Ubuntu.Connectivity 1.0

import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "components"

// Cutegram: AccountView.qml

Page {
    id: account_page

    property int profileCount: 0

    property alias telegramObject: dialogs.telegramObject
    property alias currentDialog: dialogs.currentDialog

    signal openDialog(var dialogId)
    signal addParticipantRequest()

    onOpenDialog: {
        pageStack.clear();
        account_page.currentDialog = telegramObject.fakeDialogObject(dialogId, false);
    }

    // TODO dialogs search header

    function showDialog(dialog) {

        var dId = dialog.peer.chatId
        if(dId == 0)
            dId = dialog.peer.channelId
        if(dId == 0)
            dId = dialog.peer.userId

        currentDialog = dialog

        pageStack.addPageToNextColumn(account_page, account_dialog_page, {
                "telegramObject": telegramObject,
                "currentDialog": currentDialog
        });

        telegramObject.messagesReadHistory(dId)
    }

    function clearForwardedMessages() {
        dialogs.messageIdsToForward = []
    }

    function clearSharedContent() {
        transfer_helper.reset()
    }

    function cancelSharedContent() {
        transfer_helper.cancel()
    }

    objectName: "accountPage"
    flickable: null

    Component.onCompleted: {
        open_chat_timer.start();
    }

    Connections {
        target: mainView
        onChatToOpenChanged: {
            open_chat_timer.start();
        }
    }

    AccountPanel {
        id: account_panel
        objectName:"accountPanel"
        anchors {
            left: parent.left
            top: parent.top
            topMargin: account_page.header.height
        }
        maxHeight: parent.height - units.gu(7)
        z: 10

        onNewSecretChatClicked: {
            pageStack.addPageToCurrentColumn(account_page, contacts_page_component, {
                    "telegram": telegramObject,
                    "state": "new-secret-chat"
            });
        }

        onNewGroupClicked: {
            pageStack.addPageToCurrentColumn(account_page, contacts_page_component, {
                    "telegram": telegramObject,
                    "state": "new-group-chat"
            });
        }

        onContactsClicked: {
            pageStack.addPageToCurrentColumn(account_page, contacts_page_component, {
                    "telegram": telegramObject
            });
        }

        onSettingsClicked: {
            pageStack.addPageToNextColumn(account_page, settings_page_component, {
                    "telegram": telegramObject
            });
        }

        onFaqClicked: {
            Qt.openUrlExternally("https://telegram.org/faq");
        }

        onAddAccountClicked: {
            pageStack.addPageToCurrentColumn(account_page, auth_countries_page_component);
        }

        onAccountClicked: {
            mainView.accountList.accountSelected(number);
        }
    }

    Timer {
        id: open_chat_timer
        interval: 500
        repeat: true
        triggeredOnStart: true
        onTriggered: {
            if (mainView.chatToOpen == 0) {
                stop();
                return;
            }
            var dialog = telegramObject.dialog(mainView.chatToOpen);
            if (dialog != telegramObject.nullDialog) {
                dialogs.currentDialog = dialog;
                mainView.chatToOpen = 0;
            }
        }
    }

    AccountDialogList {
        id: dialogs
        objectName: "accountDialogList"
        anchors{
            fill: parent
            topMargin: account_page.header.height
        }
        clip: true
        //visible: search_frame.text.length == 0

        onCurrentDialogChanged: {
            if (currentDialog && currentDialog != telegramObject.nullDialog) {
                pageStack.clear();
                pageStack.addPageToNextColumn(account_page, account_dialog_page, {"maxId": 0});

                var tag = currentDialog.peer.channelId ? currentDialog.peer.channelId : currentDialog.peer.chatId ? currentDialog.peer.chatId : currentDialog.peer.userId;
                pushClient.clearPersistent([tag]);
            }
        }
    }
/*
    AccountSearchList {
        id: search_list
        anchors.fill: dialogs
        clip: true
        //keyword: search_frame.text
        telegramObject: dialogs.telegramObject
        onCurrentMessageChanged: {
            if(currentMessage == telegramObject.nullMessage)
                return

            var dialogId = telegramObject.messageDialogId(currentMessage.id)
            currentDialog = telegramObject.dialog(dialogId)
            msg_box.maxId = currentMessage.id + 40
            msg_box.focusOn(currentMessage.id)
        }
    }
*/

    Component {
        id: settings_page_component

        AccountSettings {}
    }

    Component {
        id: name_page_component

        AccountNamePage {}
    }

    Component {
        id: username_page_component

        AccountUsernamePage {}
    }

    Component {
        id: account_dialog_page

        AccountDialogPage {
            id: msg_box
            visible: false
            anchors.fill: parent
            currentDialog: dialogs.currentDialog
            telegramObject: dialogs.telegramObject
            onTagSearchRequest: search_frame.text = "#" + tag

            onDialogClosed: {
                dialogs.dialogClosed();
            }

            onForwardRequest: {
                dialogs.messageIdsToForward = messageIds;
            }
        }
    }

    Component {
        id: contacts_page_component

        AccountContactsPage {
            onSelected: {
                pageStack.clear();
                account_page.currentDialog = telegramObject.fakeDialogObject(cid, false);
            }

            onAddContactManually: {
                pageStack.addPageToNextColumn(account_page, add_contact_page_component, {
                        "telegram": telegramObject,
                        "addManually": true
                });
            }
        }
    }

    Component {
        id: profile_page_component

        ProfilePage {
            onOpenDialog: account_page.openDialog(dialogId)
        }
    }

    Sections {
        id: sections
        model: profiles.count > 1 ? [ telegramObject.phoneNumber ] : []
        visible: profiles.count > 1
    }

    header: default_header
    PageHeader {
        id: default_header
        objectName: "defaultHeader"
        visible: account_page.header === default_header
        title:
            // TRANSLATORS: Default app header title. Application name.
            i18n.tr("Telegram")
        leadingActionBar.actions: Action {
            objectName: "navigationMenu"
            iconName: "navigation-menu"
            onTriggered: {
                account_panel.opened ? account_panel.close() : account_panel.open()
            }
        }
        extension: profiles.count > 1 ? sections : null
        trailingActionBar.actions: Action {
            visible: !telegram.connected || !Connectivity.online
            iconName: !Connectivity.online? "sync-paused" : !telegram.connected? "sync-updating" : "ok"
        }
    }

    PageHeader {
        id: forward_header
        visible: account_page.header === forward_header
        title:
            // TRANSLATORS: Page title when forwarding messages.
            i18n.tr("Select Chat")

        leadingActionBar.actions: Action {
            iconName: "go-previous"
            onTriggered: clearForwardedMessages()
        }
        extension: profiles.count > 1 ? sections : null
    }

    PageHeader {
        id: share_header
        visible: account_page.header === share_header
        title:
            // TRANSLATORS: Page title when sharing files.
            i18n.tr("Select Chat")

        leadingActionBar.actions: Action {
            iconName: "go-previous"
            onTriggered: cancelSharedContent()
        }
        extension: profiles.count > 1 ? sections : null
    }

    state: "default"
    states: [
        State {
            name: "default"
            when: dialogs.messageIdsToForward.length == 0 && !transfer_helper.hasContent
            PropertyChanges {
                target: account_page
                header: default_header
            }
        },
        State {
            name: "forward"
            when: dialogs.messageIdsToForward.length > 0
            PropertyChanges {
                target: account_page
                header: forward_header
            }
        },
        State {
            name: "share"
            when: transfer_helper.hasContent
            PropertyChanges {
                target: account_page
                header: share_header
            }
        }
    ]
}
