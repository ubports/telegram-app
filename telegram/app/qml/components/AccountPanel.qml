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
import Ubuntu.Components.ListItems 1.3 as ListItem
import QtGraphicalEffects 1.0

import TelegramQML 1.0

Panel {
    id: panel

    // This property must be set to desired max height value.
    property int maxHeight: units.gu(16)

    signal yourSelfChatClicked()
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

    property Telegram telegram
    property User user: telegram.myUser


    Rectangle {
        id: background
        anchors.fill: parent
        color: theme.palette.normal.background
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

            FileHandler {
                id: panel_file_handler
                telegram: panel.telegram
                target: panel.user
            }

            anchors {
                top: parent.top
                right: parent.right
                left: parent.left
            }

            /*AccountPanelItem {
                objectName: "meChatItem"
                userImage: Image {
                    source: panel_file_handler.thumbPath
                }
                text: panel.user ? panel.user.firstName : ""
                showDivider: true
                showProportionalShape: true
                onClicked: {
                    panel.close();
                    panel.yourSelfChatClicked();
                }
            }*/

            AccountPanelItem {
                objectName:"groupChatItem"
                icon: "contact-group"
                text: i18n.tr("New Group")
                showDivider: false
                onClicked: {
                    panel.close();
                    panel.newGroupClicked();
                }
            }
            AccountPanelItem {
                objectName:"secretChatItem"
                icon: "lock"
                text: i18n.tr("New Secret Chat")
                onClicked: {
                    panel.close();
                    panel.newSecretChatClicked();
                }
            }
            AccountPanelItem {
                objectName:"panelContacts"
                icon: "address-book-app-symbolic"
                text: i18n.tr("Contacts")
                showDivider: false
                onClicked: {
                    panel.close();
                    panel.contactsClicked();
                }
            }
            AccountPanelItem {
                objectName:"panelSettings"
                icon: "settings"
                text: i18n.tr("Settings")
                showDivider: false
                onClicked: {
                    panel.close();
                    panel.settingsClicked();
                }
            }
            AccountPanelItem {
                objectName:"panelDark"
                icon: "night-mode"
                text: i18n.tr("Night mode")
                showDivider: false
                onClicked: sswitch.checked = !sswitch.checked
                Switch {
                    id: sswitch
                    checked: Cutegram.darkTheme
                    anchors {
                        right: parent.right
                        rightMargin: units.gu(2)
                        verticalCenter: parent.verticalCenter
                    }
                    onCheckedChanged: {
                        Cutegram.darkTheme = checked
                        Theme.name = !Cutegram.darkTheme ? "Ubuntu.Components.Themes.Ambiance" : "Ubuntu.Components.Themes.SuruDark"
                    }
                }
            }
            AccountPanelItem {
                icon: "help"
                text: i18n.tr("Telegram FAQ")
                showDivider: false
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
                color: Qt.rgba(0.6, 0.6, 0.6, 0.2)

                Label {
                    id: section_label
                    anchors {
                        left: parent.left
                        leftMargin: units.gu(2)
                        right: parent.right
                        rightMargin: units.gu(2)
                    }
                    // TRANSLATORS: Main menu list separator, right above signed in accounts list.
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
                delegate: AccountPanelItem {
                    icon: "account"
                    text: number
                    showDivider: false
                    showProgression: profiles.count > 1
                    onClicked: {
                        panel.close();
                        if (profiles.count > 1) {
                            panel.accountClicked(number)
                        }
                    }
                }
            }

            AccountPanelItem {
                icon: "contact-new"
                text: i18n.tr("Add Account")
                showDivider: false
                onClicked: {
                    panel.close();
                    panel.addAccountClicked();
                }
            }
        }

    }


}
