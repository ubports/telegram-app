/*
 * Copyright 2015 Canonical Ltd.
 *
 * This file is part of messaging-app.
 *
 * messaging-app is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * messaging-app is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.0
import Ubuntu.Components 1.3

Item {
    id: button

    width: sideBySide ? iconShape.width + spacing + label.width : iconShape.width
    height: sideBySide ? iconShape.height : iconShape.height + label.height + spacing

    property alias iconName: icon.name
    property alias iconSource: icon.source
    property alias iconColor: icon.color
    property int iconSize: units.gu(2)
    property alias iconRotation: icon.rotation
    property alias text: label.text
    property alias textSize: label.font.pixelSize
    property alias textColor: label.color
    property int spacing: 0
    property bool sideBySide: false
    property bool iconPulsate: false
    property var iconPulsationScaleFrom: 0.7
    property var iconPulsationScaleTo: 1.3

    property alias drag: mouseArea.drag

    signal clicked()
    signal pressed()
    signal released()

    Item {
        id: iconShape
        height: iconSize
        width: iconSize
        anchors {
            left: parent.left
            right: sideBySide ? undefined : parent.right
            top: parent.top
        }
        Icon {
            id: icon
            anchors.centerIn: parent
            height: iconSize
            width: height
            color: Theme.palette.normal.backgroundText
            Behavior on rotation {
                UbuntuNumberAnimation { }
            }
            SequentialAnimation {
                running: iconPulsate
                loops: Animation.Infinite
                NumberAnimation { target: icon; property: "scale"; from: button.iconPulsationScaleTo; to: button.iconPulsationScaleFrom; duration: 1000; easing.type: Easing.InOutQuad }
                NumberAnimation { target: icon; property: "scale"; from: button.iconPulsationScaleFrom; to: button.iconPulsationScaleTo; duration: 1000; easing.type: Easing.InOutQuad }
            }
        }
    }

    MouseArea {
        id: mouseArea
        anchors {
            fill: iconShape
            margins: units.gu(-2)
        }
        onClicked: {
            mouse.accepted = true
            button.clicked()
        }

        onPressed: button.pressed()
        onReleased: button.released()
    }

    Text {
        id: label
        color: Theme.palette.normal.backgroundText
        height: text !== "" ? paintedHeight : 0
        anchors {
            left: sideBySide ? iconShape.right : parent.left
            right: sideBySide ? undefined : parent.right
            bottom: sideBySide ? undefined : parent.bottom
            verticalCenter: sideBySide ? iconShape.verticalCenter : undefined
            leftMargin: sideBySide ? spacing : undefined
        }
        horizontalAlignment: sideBySide ? undefined : Text.AlignHCenter
        verticalAlignment: sideBySide ? Text.AlignVCenter : Text.AlignBottom
        font.family: "Ubuntu"
        font.pixelSize: FontUtils.sizeToPixels("small")
    }
}
