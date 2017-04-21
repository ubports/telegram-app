import QtQuick 2.0
import Ubuntu.Components 1.3

import "../js/colors.js" as Colors

Item {
    anchors.fill: parent
    z: 10

    Item {
        id: left_edge_shadow
        anchors.top: parent.top
        anchors.left: parent.left
        width: units.dp(6)
        height: parent.height
        Rectangle {
            anchors.centerIn: parent
            rotation: 90
            width: parent.height
            height: parent.width
            gradient: Gradient {
                GradientStop { position: 0.0; color: Colors.secret_start }
                GradientStop { position: 1.0; color: Colors.secret_end }
            }
        }
    }

    Item {
        id: right_edge_shadow
        anchors.top: parent.top
        anchors.right: parent.right
        width: units.dp(6)
        height: parent.height
        Rectangle {
            anchors.centerIn: parent
            rotation: -90
            width: parent.height
            height: parent.width
            gradient: Gradient {
                GradientStop { position: 0.0; color: Colors.secret_start }
                GradientStop { position: 1.0; color: Colors.secret_end }
            }
        }
    }
}
