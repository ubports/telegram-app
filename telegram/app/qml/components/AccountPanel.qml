import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.0 as ListItem

Rectangle {
    id: panel
    x: isOpen ? 0 : -width
    anchors {
        top: parent.top
    }
    width: units.gu(34)
    height: parent.height

    property bool isOpen: false
    property PageStack pageStack

    signal newGroupClicked()
    signal newSecretChatClicked()
    signal contactsClicked()
    signal settingsClicked()
    signal faqClicked()

    signal addAccountClicked();
    signal accountClicked(string number);


    Behavior on x {
        NumberAnimation {
            easing.type: Easing.OutCubic;
            duration: isOpen ? 200 : 400
        }
    }

    Rectangle {
        id: panel_edge_shadow
        z: 1
        anchors.top: panel.top
        anchors.right: panel.right
        transformOrigin: Item.TopRight
        rotation: -90
        width: parent.height
        height: units.dp(6)
        opacity: 0.4
        visible: isOpen
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#aa000000"; }
            GradientStop { position: 1.0; color: "#00000000"; }
        }
    }

    Column {
        id: panel_menu

        property bool showIcons: false

        anchors {
            top: parent.top
            topMargin: units.gu(1)
            left: parent.left
        }
        width: parent.width

        ListItem.Standard {
            text: i18n.tr("New Group")
            iconSource: showIcons ? "../files/menu_newgroup.png" : ""
            iconFrame: false
            showDivider: false
            onClicked: {
                panel.close();
                panel.newGroupClicked();
            }
        }
        ListItem.Standard {
            text: i18n.tr("New Secret Chat")
            iconSource: showIcons ? "../files/menu_secret.png" : ""
            iconFrame: false
            showDivider: true
            onClicked: {
                panel.close();
                panel.newSecretChatClicked();
            }
        }
        ListItem.Standard {
            text: i18n.tr("Contacts")
            iconSource: showIcons ? "../files/menu_contacts.png" : ""
            iconFrame: false
            showDivider: false
            onClicked: {
                panel.close();
                panel.contactsClicked();
            }
        }
        ListItem.Standard {
            text: i18n.tr("Settings")
            iconSource: showIcons ? "../files/menu_settings.png" : ""
            iconFrame: false
            showDivider: false
            onClicked: {
                panel.close();
                panel.settingsClicked();
            }
        }
        ListItem.Standard {
            text: i18n.tr("Telegram FAQ")
            iconSource: showIcons ? "../files/menu_help.png" : ""
            iconFrame: false
            showDivider: true
            onClicked: {
                panel.close();
                panel.faqClicked();
            }
        }
        ListItem.Standard {
            text: i18n.tr("Add Account")
            iconSource: showIcons ? "../files/menu_invite.png" : ""
            iconFrame: false
            showDivider: false
            onClicked: {
                panel.close();
                panel.addAccountClicked();
            }
        }

        Repeater {
            id: aclist
            model: profiles
            delegate: ListItem.Standard {
                text: number
                showDivider: false
                progression: profiles.count > 1
                onClicked: {
                    panel.close();
                    panel.accountClicked(number)
                }
            }
        }
    }

    InverseMouseArea {
        anchors.fill: parent

        onPressed: {
            if (panel.isOpen) {
                panel.isOpen = false;
                mouse.accepted = true;
            } else {
                mouse.accepted = false;
            }
        }
    }

    function open() {
        if (!isOpen) isOpen = true;
    }

    function close() {
        if (isOpen) isOpen = false;
    }
}
