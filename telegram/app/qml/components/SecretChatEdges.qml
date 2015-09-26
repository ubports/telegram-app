import QtQuick 2.0
import Ubuntu.Components 1.2

import "../js/colors.js" as Colors

Item {
    anchors.fill: parent
    z: 10

    Rectangle {
        id: left_edge_shadow
        anchors.top: parent.top
        anchors.left: parent.left
        transformOrigin: Item.BottomLeft
        rotation: 90
        width: parent.height
        height: units.dp(6)
        gradient: Gradient {
            GradientStop { position: 0.0; color: Colors.header_blue; }
            GradientStop { position: 1.0; color: Colors.header_blue_ff; }
        }
    }

    Rectangle {
        id: right_edge_shadow
        anchors.top: parent.top
        anchors.right: parent.right
        transformOrigin: Item.BottomRight
        rotation: -90
        width: parent.height
        height: units.dp(6)
        gradient: Gradient {
            GradientStop { position: 0.0; color: Colors.header_blue; }
            GradientStop { position: 1.0; color: Colors.header_blue_ff; }
        }
    }
}
