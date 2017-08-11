import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3

import AsemanTools 1.0
import TelegramQML 1.0

import "components"
import "ui/dialogs"
import "js/time.js" as Time
import "js/colors.js" as Colors

// Cutegram: AccountDialogList.qml

Item {
    id: account_dialog_list

    property alias telegramObject: dialogs_model.telegram
    property Dialog currentDialog: telegram.dialog(0)

    property var messageIdsToForward: []

    property bool showLastMessage: true // TODO Cutegram.showLastMessage

    signal windowRequest(variant dialog)
    signal dialogClosed()
    signal dialogClosedFromBackButton()

    ActivityIndicator {
        id: activity_indicator
        anchors.centerIn: parent
        width: height
        height: units.gu(4)
        running: dialogs_model.initializing
        z: 1
    }

    DialogsModel {
        id: dialogs_model
    }

    onDialogClosed: {
        if(mainView.width <= units.gu(80)) {
            if (userTapBackHome) {
                dialog_list.currentIndex = -1;

                if (!userTappedNotification) {
                    currentDialog = telegramObject.nullDialog;
                } else {
                    userTappedNotification = false;
                }
            } else {
                userTapBackHome = true;
            }
        }
    }

    ListView {
        id: dialog_list
        objectName: "dialogListView"
        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        clip: true
        cacheBuffer: units.gu(8)*20
        maximumFlickVelocity: 5000
        flickDeceleration: 2000
        model: dialogs_model

        currentIndex: -1
        highlightMoveDuration: 0

        move: Transition {
            NumberAnimation { easing.type: Easing.OutCubic; properties: "y"; duration: 300 }
        }
        moveDisplaced: Transition {
            NumberAnimation { easing.type: Easing.OutCubic; properties: "y"; duration: 300 }
        }

        delegate: DialogsListItem {
            id: list_item
            objectName: "dialog%1".arg(index)
            anchors {
                left: parent.left
                right: parent.right
                topMargin: units.dp(3)
                bottomMargin: units.dp(3)
            }

            telegram: telegramObject
            dialog: item
            selected: currentDialog == dialog
            showMessage: showLastMessage

            onCurrentIndexChanged: {
                dialog_list.currentIndex = index;
            }

            onCurrentDialogChanged: {
                // FIXME: keep below assignment to make forwarding workable of bug#1642637 for now
                currentDialog = telegramObject.nullDialog;
                currentDialog = dialog;
            }

            onClicked: {
                if (messageIdsToForward.length > 0) {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        null, {
                            // TRANSLATORS: %1 represents person to whom we are forwarding messages to.
                            text: i18n.tr("Forward message to %1?".arg(title)),
                            onAccept: function() {
                                telegramObject.forwardMessages(messageIdsToForward, dialogId)
                                clearForwardedMessages()
                                currentDialogChanged(dialog)
                            }
                        }
                    );
                } else if (transfer_helper.hasContent) {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        null, {
                            // TRANSLATORS: %1 represents person to whom we are sending files to.
                            text: i18n.tr("Send messages to %1?".arg(title)),
                            onAccept: function() {
                                // Shared content is processed in AccountSendMessage.qml
                                currentDialogChanged(dialog)
                            }
                        }
                    );
                } else {
                    currentDialogChanged(dialog);
                }
            }
        }

        Component.onCompleted: {
            // FIXME: workaround for qtubuntu not returning values depending on the grid unit definition
            // for Flickable.maximumFlickVelocity and Flickable.flickDeceleration
            var scaleFactor = units.gridUnit / 8;
            maximumFlickVelocity = maximumFlickVelocity * scaleFactor;
            flickDeceleration = flickDeceleration * scaleFactor;
        }
    }
}
