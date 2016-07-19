import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.0

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
                console.log("***userTapBackHome == TRUE");
                dialog_list.currentIndex = -1;
                if (!userTappedNotification) {
                    console.log("***userTappedNotification == FALSE");
                    currentDialog = telegramObject.nullDialog;
                } else {
                    console.log("***userTappedNotification == TRUE");
                    userTappedNotification = false;
                }
            } else {
                console.log("***userTapBackHome == FALSE");
                userTapBackHome = true;
            }
        }
    }

    ListView {
        id: dialog_list
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
            anchors {
                topMargin: units.dp(3)
                leftMargin: units.dp(5)
                bottomMargin: units.dp(3)
                rightMargin: units.dp(12)
            }

            telegram: telegramObject
            dialog: item
            selected: currentDialog == dialog
            showMessage: showLastMessage

            // TODO benchmark if useful, speed hack from ureadit
            //opacity: ((y + height) >= dialog_list.contentY) &&
            //          (y <= (dialog_list.contentY + dialog_list.height)) ? 1 :0

            onCurrentIndexChanged: {
                dialog_list.currentIndex = index;
            }

            onCurrentDialogChanged: {
                if (list_item.width > units.gu(35)) {
                    currentDialog = telegramObject.nullDialog;
                }
                currentDialog = dialog;
            }

            onClicked: {
                if (messageIdsToForward.length > 0) {
                    PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                        list_item, {
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
                        list_item, {
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
