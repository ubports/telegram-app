import QtQuick 2.0
import AsemanTools 1.0
import TelegramQML 1.0
import QtGraphicalEffects 1.0

Item {
    id: root
    width: parent.width
    height: 3 * 32*Devices.density + back_frame.anchors.topMargin
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
        radius: 8*Devices.density
        samples: 16
        horizontalOffset: 1*Devices.density
        verticalOffset: 1*Devices.density
        color: "#66111111"
    }

    Item {
        id: back
        anchors.fill: parent

        Rectangle {
            id: back_frame
            anchors.fill: parent
            anchors.topMargin: 8*Devices.density
            color: Cutegram.currentTheme.sendFrameColor

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
        width: back_frame.width-8*Devices.density
        height: back_frame.height-4*Devices.density
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        clip: true
        model: fmodel

        highlightMoveDuration: 0
        highlight: Rectangle {
            width: listv.width
            height: 32*Devices.density
            color: Cutegram.currentTheme.masterColor
            radius: 2*Devices.density
        }

        delegate: Item {
            width: listv.width
            height: 32*Devices.density

            Text {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                anchors.margins: 4*Devices.density
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                elide: Text.ElideRight
                maximumLineCount: 1
                text: tag
                color: Cutegram.currentTheme.sendFrameFontColor
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

