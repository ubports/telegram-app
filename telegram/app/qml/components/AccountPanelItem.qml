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

ListItem {
    id: item

    property bool showDivider: true
    property bool showProportionalShape: false

    property alias icon: image.name
    property alias text: label.text
    property alias showIcon: image.visible
    property alias showProgression: progression.visible
    property alias userImage: proportionalShape.source

    height: units.gu(6)
    divider.visible: showDivider
    color: theme.palette.normal.background

    Icon {
        id: image
        anchors {
            left: parent.left
            leftMargin: units.gu(2)
            verticalCenter: parent.verticalCenter
        }
        width: visible ? units.gu(3) : 0
        visible: !showProportionalShape
        color: Theme.palette.normal.backgroundSecondaryText
        Component.onCompleted: console.log("icon color: "+color)
    }

    ProportionalShape {
        id: proportionalShape
        anchors {
            left: parent.left
            leftMargin: units.gu(2)
            verticalCenter: parent.verticalCenter
        }
        width: visible ? units.gu(5) : 0
        visible: showProportionalShape
        aspect: UbuntuShape.DropShadow
    }

    Label {
        id: label
        anchors {
            left: image.visible ? image.right : proportionalShape.right
            leftMargin: units.gu(3)
            verticalCenter: parent.verticalCenter
        }
    }

    Icon {
        id: progression
        anchors {
            right: parent.right
            rightMargin: units.gu(2)
            verticalCenter: parent.verticalCenter
        }
        height: units.dp(20)
        name: "go-next"
        visible: false
    }
}
