import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3

Dialog {
    id: dialogue
    objectName: "confirmationDialog"
    title: i18n.tr("Telegram")
    // text is the property to fill for the dialog body

    property string acceptText: i18n.tr("OK")
    property string altText: "" 
    property string cancelText: i18n.tr("Cancel")
    property var onAccept: function() {}
    property var onAlt: function() {}
    property var onCancel: function() {
        PopupUtils.close(dialogue);
    }

    Button {
        objectName: "acceptButton"
        text: acceptText
        color: UbuntuColors.green
        visible: text.length > 0
        onClicked: optionSelected(onAccept)
    }

    Button {
        text: altText
        strokeColor: theme.palette.normal.overlaySecondaryText
        visible: text.length > 0
        onClicked: optionSelected(onAlt)
    }

    Button {
        objectName: "cancelButton"
        text: cancelText
        color: theme.palette.normal.overlaySecondaryText
        visible: text.length > 0
        onClicked: optionSelected(onCancel)
    }

    function optionSelected(option) {
        option();
        PopupUtils.close(dialogue);
    }
}
