import QtQuick 2.4
import Ubuntu.Components 1.2
import Ubuntu.Components.ListItems 1.0 as ListItem

import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "qrc:/qml/components"

// Cutegram: AccountView.qml

Page {
    id: account_page
    objectName: "accountPage"
    flickable: null

    property alias telegramObject: dialogs.telegramObject
    property alias currentDialog: dialogs.currentDialog

    property AccountDialogPage dialogPage;

    signal openDialog(var dialogId)
    signal addParticipantRequest()

    onOpenDialog: {
        // while (pageStack.currentPage && pageStack.currentPage.objectName != "accountPage") {
        //     console.log("popping: " + pageStack.currentPage.objectName);
        //     pageStack.pop();
        // }

        pageStack.pop();
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

        pageStack.push(account_dialog_page, {
                "telegramObject": telegramObject,
                "currentDialog": currentDialog
        });

        telegramObject.messagesReadHistory(dId)
    }

    Component.onCompleted: {
        open_chat_timer.start();
    }

    Connections {
        target: mainView
        onChatToOpenChanged: {
            open_chat_timer.start();
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
                if (pageStack.currentPage && pageStack.currentPage.objectName != "dialogPage")
                dialogPage = pageStack.push(account_dialog_page, {"maxId": 0});

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

            Component.onDestruction: {
                dialogs.currentDialog = telegramObject.nullDialog;
            }
        }
    }

    Component {
        id: contacts_page_component

        AccountContactsPage {
            onSelected: {
                pageStack.pop(); // remove self
                account_page.currentDialog = telegramObject.fakeDialogObject(cid, false);
            }

            onAddContactManually: {
                pageStack.push(add_contact_page_component, {
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

    Connections {
        target: mainView.panel
        ignoreUnknownSignals: true

        onNewSecretChatClicked: {
            pageStack.push(contacts_page_component, {
                    "telegram": telegramObject,
                    "state": "new-secret-chat"
            });
        }

        onNewGroupClicked: {
            pageStack.push(contacts_page_component, {
                    "telegram": telegramObject,
                    "state": "new-group-chat"
            });
        }

        onContactsClicked: {
            pageStack.push(contacts_page_component, {
                    "telegram": telegramObject
            });
        }

        onSettingsClicked: {
            pageStack.push(settings_page_component, {
                    "telegram": telegramObject
            });
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

}
