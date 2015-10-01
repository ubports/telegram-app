/*
 * Copyright 2015 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.0 as ListItem
import QtGraphicalEffects 1.0

Panel {
    id: panel

    // This property must be set to desired max height value.
    property int maxHeight: units.gu(16)

    signal newGroupClicked()
    signal newSecretChatClicked()
    signal contactsClicked()
    signal settingsClicked()
    signal faqClicked()

    signal addAccountClicked()
    signal accountClicked(string number)

    height: column.height < maxHeight ? column.height : maxHeight
    width: parent.width / 10 * 8
    animate: true
    align: Qt.AlignLeading
    visible: opened || animating

    Rectangle {
        id: background
        anchors.fill: parent
        color: "white"
    }

    EdgeShadow {
        source: background
    }

    InverseMouseArea {
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton
        onPressed: account_panel.close()
    }

    Flickable {
        anchors.fill: parent
        clip: true
        contentHeight: column.height
        interactive: column.height > parent.height

        Column {
            id: column

            property bool showIcons: true

            anchors {
                left: parent.left
                right: parent.right
                top: parent.top
            }

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

            Rectangle {
                anchors {
                    left: parent.left
                    right: parent.right
                }
                height: section_label.height
                color: Qt.rgba(0, 0, 0, 0.1)

                Label {
                    id: section_label
                    anchors {
                        left: parent.left
                        leftMargin: units.gu(2)
                        right: parent.right
                        rightMargin: units.gu(2)
                    }
                    text: i18n.tr("Accounts")
                    height: units.gu(4)
                    fontSize: "medium"
                    font.weight: Font.DemiBold
                    verticalAlignment: Text.AlignVCenter
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
        }

    }


}
