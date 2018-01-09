import QtQuick 2.0
import AsemanTools 1.0
import TelegramQML 1.0
import QtGraphicalEffects 1.0

import "js/colors.js" as Colors

Item {
    id: root
    width: parent.width
    height: 3 * units.gu(4) + back_frame.anchors.topMargin
    visible: fmodel.count != 0
    clip: true

    property Telegram telegram
    property alias keyword: fmodel.keyword

    signal selected();

    TagFilterModel {
        id: fmodel
        userData: telegram.userData
    }

    DropShadow {
        anchors.fill: source
        source: back
        radius: units.gu(1)
        samples: 16
        horizontalOffset: units.dp(1)
        verticalOffset: units.dp(1)
        color: "#66111111"
    }

    Item {
        id: back
        anchors.fill: parent

        Rectangle {
            id: back_frame
            anchors.fill: parent
            anchors.topMargin: units.gu(1)
            color: Colors.white

            Rectangle {
                width: parent.width
                height: parent.radius
                anchors.bottom: parent.bottom
                color: parent.color
            }
        }
    }

    ListView {
        id: listv
        width: back_frame.width-units.gu(1)
        height: back_frame.height-units.gu(0.5)
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        clip: true
        model: fmodel

        /* @todo: enable again this only for desktop */
        /*highlightMoveDuration: 0
        highlight: Rectangle {
            width: listv.width
            height: units.gu(4)
            color: Colors.list_pressed
            radius: units.gu(0.25)
        }*/

        delegate: Item {
            width: listv.width
            height: units.gu(4)

            Text {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                anchors.margins: units.gu(0.5)
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                elide: Text.ElideRight
                maximumLineCount: 1
                text: tag
                color: Colors.black
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    listv.currentIndex = index;
                    root.selected();
                }
            }
        }
    }

    function down() {
        if(listv.currentIndex+1 >= listv.count)
            return

        listv.currentIndex++
    }

    function up() {
        if(listv.currentIndex-1 < 0)
            return

        listv.currentIndex--
    }

    function currentTag() {
        return fmodel.get(listv.currentIndex)
    }
}

