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
            dId = dialog.peer.userId

        currentDialog = dialog
//        acc_frame.activeRequest()
//        Cutegram.active()

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
    head.sections.model: profiles.count > 1 ? [ telegramObject.phoneNumber ] : []

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
        anchors {
            left: parent.left
            top: parent.top
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

    Emojis {
        id: emojis
        currentTheme: "twitter"
        userData: telegramObject.userData
        autoEmojis: Cutegram.autoEmojis
        replacements: {":)"   : "😌",
                       ":("   : "😞",
                       ":d"   : "😁",
                       ":*"   : "😘",
                       ":s"   : "😖",
                       "^_^"  : "😊",
                       ":/"   : "😕",
                       "B)"   : "😎",
                       ":p"   : "😋",
                       ":o"   : "😯",
                       ":x"   : "😍",
                       ";)"   : "😉",
                       ">:)"  : "😈",
                       "o:)"  : "😇",
                       ":(("  : "😢",
                       ":(((" : "😭",
                       ":))"  : "😄",
                       ":)))" : "😆",
                       ":))))": "😂"}
    }

    AccountDialogList {
        id: dialogs
        anchors.fill: parent
        clip: true
        //visible: search_frame.text.length == 0

        onCurrentDialogChanged: {
            if (currentDialog && currentDialog != telegramObject.nullDialog) {
                pageStack.clear();
                pageStack.addPageToNextColumn(account_page, account_dialog_page, {"maxId": 0});

                var tag = currentDialog.peer.chatId ? currentDialog.peer.chatId : currentDialog.peer.userId;
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

    // Not quite happy how bottom edge is working, commenting out for now.

//    bottomEdgePageComponent: AccountContactsPage {
//        anchors.fill: parent
//        telegram: telegramObject
//        onSelected: {
//            account_page.currentDialog = telegramObject.fakeDialogObject(cid, false);
//        }
//    }
//    bottomEdgeTitle: i18n.tr("Contacts")

    state: "default"
    states: [
        PageHeadState {
            name: "default"
            when: dialogs.messageIdsToForward.length == 0 && !transfer_helper.hasContent
            head: account_page.head
            contents: Label {
                text: {
                    if (NetworkingStatus.online) {
                        if (telegramObject.connected) {
                            // TRANSLATORS: Default app header title. Application name.
                            return i18n.tr("Telegram")
                        } else {
                            // TRANSLATORS: App header title when connecting to Telegram.
                            return i18n.tr("Connecting...")
                        }
                    } else {
                        // TRANSLATORS: Shown in app header when network is unavailable.
                        return i18n.tr("Waiting for network...")
                    }
                }
            }
            backAction: Action {
                iconName: "navigation-menu"
                onTriggered: {
                    account_panel.opened ? account_panel.close() : account_panel.open()
                }
            }
        },
        PageHeadState {
            name: "forward"
            when: dialogs.messageIdsToForward.length > 0
            head: account_page.head
            contents: Label {
                text: {
                    if (NetworkingStatus.online) {
                        // TRANSLATORS: Page title when forwarding messages.
                        return i18n.tr("Select Chat")
                    } else {
                        // TRANSLATORS: Shown in app header when network is unavailable.
                        return i18n.tr("Waiting for network...")
                    }
                }
            }
            backAction: Action {
                iconName: "go-previous"
                onTriggered: clearForwardedMessages()
            }
        },
        PageHeadState {
            name: "share"
            when: transfer_helper.hasContent
            head: account_page.head
            contents: Label {
                text: {
                    if (NetworkingStatus.online) {
                        // TRANSLATORS: Page title when sharing files.
                        return i18n.tr("Select Chat")
                    } else {
                        // TRANSLATORS: Shown in app header when network is unavailable.
                        return i18n.tr("Waiting for network...")
                    }
                }
            }
            backAction: Action {
                iconName: "go-previous"
                onTriggered: cancelSharedContent()
            }
        }
    ]
}
