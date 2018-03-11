import QtQuick 2.4
import Ubuntu.Components 1.3

import Cutegram 1.0
import AsemanTools 1.0

import "qrc:/"
import "qrc:/qml/js/colors.js" as Colors
import "qrc:/qml/js/time.js" as Time

Item {
    id: status_item
    height: message_status_row.height
    width: message_status_row.width

    property variant message
    property bool hasMedia: false
    property var bgMessageColor: !message.sent ? Colors.grey : ((message.out && message.unread) ? Colors.blue : (message.out ? Colors.outgoing : Colors.outgoing ))

    Rectangle {
        visible: hasMedia
        anchors {
            leftMargin: units.dp(-4)
            rightMargin: units.dp(-5)
            topMargin: units.dp(-1)
            bottomMargin: units.dp(-1)
            fill: message_status_row
        }
        color: Qt.rgba(0, 0, 0, 0.3)
        radius: units.dp(2)
    }

    Row {
        id: message_status_row
        spacing: units.dp(4)
        anchors.right: parent.right

        Label {
            id: time_label
            anchors.verticalCenter: parent.verticalCenter
            font.weight: Font.DemiBold
            fontSize: "x-small"
            color: {
                if (hasMedia) {
                    return Colors.white;
                }
                return message.out ? "aliceblue" : Colors.time_in;
            }
            text: Cutegram.getTimeString(messageDate)
            property variant messageDate: CalendarConv.fromTime_t(message.date)
        }

        Row {
            id: channel_views
            visible: message.views > 0
            anchors.verticalCenter: parent.verticalCenter
            Image {
                anchors.verticalCenter: parent.verticalCenter
                width: units.gu(2)
                height: width
                fillMode: Image.PreserveAspectFit
                source: message.out? Qt.resolvedUrl("qrc:/qml/files/eyeWhite.svg") : Qt.resolvedUrl("qrc:/qml/files/eye.svg")
            }
            Label {
            anchors.verticalCenter: parent.verticalCenter
            text: {
                    if (message.views > 9999 && message.views <= 999999)
                        return ~~(message.views / 100) / 10 + "K";
                    else if (message.views > 999999)
                        return ~~(message.views / 100000) / 10 + "M";
                    else
                        return message.views;
            }
            font.weight: Font.DemiBold
            fontSize: "x-small"
            color: {
                if (hasMedia) {
                    return Colors.white;
                }
                return message.out ? "aliceblue" : Colors.time_in;
            }
            }

        }

//        Image {
//            id: status_image
//            objectName: "statusImage"
//            anchors.verticalCenter: parent.verticalCenter
//            width: units.gu(2)
//            height: width
//            visible: message.out
//            z: 1
//            fillMode: Image.PreserveAspectFit
//            source: {
//                if (!message.sent) {
//                    return Qt.resolvedUrl("qrc:/qml/files/clock_white.svg");
//                } else if (message.out && message.unread) {
//                    return Qt.resolvedUrl("qrc:/qml/files/tick_single_white.svg");
//                } else if (message.out) {
//                    return Qt.resolvedUrl("qrc:/qml/files/tick_double_white2.svg");
//                } else {
//                    return "";
//                }
//            }
//        }
    }
}

