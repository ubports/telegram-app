import QtQuick 2.3
import Ubuntu.Components 1.1
import Ubuntu.Components.Popups 1.0

import "../../components"

Dialog {
    id: selfDestructDialog
    // TRANSLATORS: Title of self destruct timer dialog.
    title: i18n.tr("Self-Destruct Timer")

    property var chatId

    Column {
        spacing: units.gu(1.5)

        OptionSelector {
            id: selfDestructSelector

            property var timeModel: [
                0, 1, 2, 3, 4, 5,
                6, 7, 8, 9, 10,
                11, 12, 13, 14, 15,
                30, 60, 3600, 86400, 604800
            ]

            model: timeModel
            delegate: OptionSelectorDelegate {
                text: delegateUtils.getSecretChatSelfDestructTime(
                    selfDestructSelector.timeModel[index])
            }
            selectedIndex: getSelfDestructValueIndex(dialogModel.ttl)
            containerHeight: itemHeight * 6
            onDelegateClicked: {
                telegramClient.setSecretChatTTL(chatId, timeModel[index]);
                close();
            }

            function getSelfDestructValueIndex(value) {
                var index = timeModel.indexOf(dialogModel.ttl);
                return index >= 0 ? index : 0;
            }
        }

        Button {
            text: i18n.tr("Cancel")
            width: parent.width
            onClicked: close()
        }
    }

    function close() {
        PopupUtils.close(selfDestructDialog);
    }

    DelegateUtils {
        id: delegateUtils
    }
}

