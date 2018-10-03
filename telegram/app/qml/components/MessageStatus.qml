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
    property var bgMessageColor: !message.sent ? theme.palette.normal.backgroundTertiaryText : ((message.out && message.unread && !status_image.visible) ? theme.palette.normal.activity : (Theme.name == "Ubuntu.Components.Themes.Ambiance" ? UbuntuColors.green : Colors.new_green ))

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
            id: edited_label
            text: i18n.tr("Edited");
            visible: message.editDate > 0;
            font.weight: Font.DemiBold
            fontSize: "x-small"
            color: {
                if (hasMedia) {
                    return Colors.white;
                }
                return message.out ? "white" : theme.palette.normal.backgroundText
            }
            opacity: message.out ? 1 : 0.6
        }

        Label {
            id: time_label
            anchors.verticalCenter: parent.verticalCenter
            font.weight: Font.DemiBold
            fontSize: "x-small"
            color: {
                if (hasMedia) {
                    return Colors.white;
                }
                return message.out ? "white" : theme.palette.normal.backgroundText
            }
            text: Cutegram.getTimeString(messageDate)
            property variant messageDate: CalendarConv.fromTime_t(message.date)
            opacity: message.out ? 1 : 0.6
        }

        Row {
            id: channel_views
            visible: message.views > 0
            anchors.verticalCenter: parent.verticalCenter
            Icon {
                anchors.verticalCenter: parent.verticalCenter
                width: units.gu(2)
                height: width
                source: Qt.resolvedUrl("qrc:/qml/files/eye.svg")
                color: message.out ? "white" : theme.palette.normal.backgroundText
                opacity: message.out ? 1 : 0.6
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
                    return message.out ? "white" : theme.palette.normal.backgroundText;
                }
                opacity: message.out ? 1 : 0.6
            }
        }
        
        Image {
            id: status_image
            objectName: "statusImage"
            anchors.verticalCenter: parent.verticalCenter
            width: visible ? units.gu(2) : 0
            height: width
            visible: Cutegram.showIndicators && status === Image.Ready
            z: 1
            fillMode: Image.PreserveAspectFit
            source: {
                if(!message.sent) {
                    return Qt.resolvedUrl("qrc:/qml/files/clock_white.svg");
                }
                else if(message.out && message.unread) {
                    return Qt.resolvedUrl("qrc:/qml/files/tick_single_white.svg");
                }
                else if(message.out) {
                    return Qt.resolvedUrl("qrc:/qml/files/tick_double_white2.svg");
                }
                else {
                    return "";
                }
            }
        } 
    }
}
