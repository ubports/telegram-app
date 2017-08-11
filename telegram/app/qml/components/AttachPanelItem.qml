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

Column {
    id: attach_item

    //property bool showTick: false

    property alias text: attach_label.text
    property alias image: attach_image.name

    signal clicked(var mouse)

    Item {
        width: units.gu(5)
        height: width

        Button {
            width: parent.width
            height: width
            color: image==="stock_image" ? UbuntuColors.purple : image==="stock_video" ? UbuntuColors.red : image==="stock_document" ? UbuntuColors.blue : UbuntuColors.silk

            Icon {
                id: attach_image
                objectName: "attach_gallery"
                anchors.centerIn: parent
                color: "white"
                anchors.fill: parent
                anchors.margins: units.gu(1)
            }

            MouseArea {
                anchors.fill: parent
                onClicked: attach_item.clicked(mouse)
            }
        }
    }

    Label {
        id: attach_label
        anchors.horizontalCenter: parent.horizontalCenter
        fontSize: "x-small"
        font.weight: Font.DemiBold
    }
}
