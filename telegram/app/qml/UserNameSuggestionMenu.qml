import QtQuick 2.0
import AsemanTools 1.0
import TelegramQML 1.0
import QtGraphicalEffects 1.0

import "js/colors.js" as Colors

Item {
    id: uname_sgs_menu
    width: parent.width
    height: 3*units.gu(4) + back_frame.anchors.topMargin
    visible: fmodel.count != 0
    clip: true

    property alias telegram: fmodel.telegram
    property alias dialog: fmodel.dialog
    property alias keyword: fmodel.keyword

    signal selected();

    UserNameFilterModel {
        id: fmodel
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
            color: theme.palette.normal.background

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

        delegate: Item {
            id: listv_item
            width: listv.width
            height: units.gu(4)

            property User user: telegram.user(userId)

            ContactImage {
                id: profile_img
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.left: parent.left
                anchors.margins: units.gu(0.5)
                width: height
                user: listv_item.user
                isChat: false
                telegram: uname_sgs_menu.telegram
            }

            Text {
                anchors.left: profile_img.right
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                anchors.margins: units.gu(0.5)
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                elide: Text.ElideRight
                maximumLineCount: 1
                text: user.firstName + " " + user.lastName
                color: theme.palette.normal.backgroundText
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    listv.currentIndex = index;
                    uname_sgs_menu.selected();
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

    function currentUserId() {
        return fmodel.get(listv.currentIndex)
    }
}

