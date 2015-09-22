import QtQuick 2.4
import Ubuntu.Components 1.2

import Cutegram 1.0
import AsemanTools 1.0

import "qrc:/"
import "qrc:/qml/js/colors.js" as Colors

Item {
    id: status_item
    height: message_status_row.height
    width: message_status_row.width

    property variant message
    property bool hasMedia: false

    Rectangle {
        visible: hasMedia
        anchors {
            leftMargin: units.gu(-1)
            rightMargin: units.gu(-1)
            topMargin: units.dp(-2)
            bottomMargin: units.dp(-2)
            fill: message_status_row
        }
        color: Qt.rgba(0, 0, 0, 0.4)
        radius: units.dp(3)
    }

    Row {
        id: message_status_row
        spacing: units.dp(4)

        Label {
            id: time_label
            anchors.verticalCenter: parent.verticalCenter
            font.weight: Font.DemiBold
            fontSize: "x-small"
            color: {
                if (hasMedia) {
                    return Colors.white;
                }
                return message.out ? Colors.dark_green : Colors.grey;
            }
            text: Cutegram.getTimeString(messageDate)

            property variant messageDate: CalendarConv.fromTime_t(message.date)
        }

        Image {
            id: status_image
            anchors.verticalCenter: parent.verticalCenter
            width: units.gu(2)
            height: width
            visible: message.out
            z: 1
            fillMode: Image.PreserveAspectFit
            source: {
                if (!message.sent) {
                    return Qt.resolvedUrl("qrc:/qml/files/msg_clock_white.png");
                } else if (message.out && message.unread) {
                    return Qt.resolvedUrl("qrc:/qml/files/check_single_white.png");
                } else if (message.out) {
                    return Qt.resolvedUrl("qrc:/qml/files/check_double_white.png");
                } else {
                    return "";
                }
            }
        }
    }
}
