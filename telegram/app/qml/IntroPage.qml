import QtQuick 2.4
import Ubuntu.Components 1.2

import "components"
import "js/colors.js" as Colors

TelegramPage {
    id: page

    property alias startMessagingButton: startMessagingButton
    property alias currentIndex: slider.currentIndex

    signal startMessaging()

    IntroPageListModel {
        id: introModel
    }

    Rectangle {
        anchors.fill: parent
        color: Colors.intro_background

        CrossFadeImage {
            id: icon

            anchors {
                bottom: parent.verticalCenter
                bottomMargin: units.gu(2)
                horizontalCenter: parent.horizontalCenter
            }
            width: units.gu(16)
            height: width
            z: 2

            fadeDuration: 250
            fillMode: Image.PreserveAspectFit
        }

        ListView {
            id: slider

            anchors.fill: parent
            z: 1

            orientation: ListView.Horizontal
            snapMode: ListView.SnapOneItem
            boundsBehavior: Flickable.StopAtBounds
            cacheBuffer: width
            clip: true
            highlightFollowsCurrentItem: true
            highlightRangeMode: ListView.StrictlyEnforceRange

            model: introModel
            delegate: Rectangle {
                id: delegateRect
                width: slider.width
                height: slider.height

                Rectangle {
                    width: parent.width
                    height: units.gu(10)
                    anchors.horizontalCenter: delegateRect.horizontalCenter
                    y: icon.y + icon.height + units.gu(3)

                    // Problem changing Label color. Hence, using Text instead.
                    Text {
                        id: titleText
                        anchors.top: parent.top
                        width: parent.width

                        horizontalAlignment: TextInput.AlignHCenter
                        font.pixelSize: FontUtils.sizeToPixels("large")
                        color: "#000000"
                        text: title
                    }
                    // Not using Ubuntu font color, because it's affected by background color.
                    Text {
                        id: bodyText
                        anchors {
                            top: titleText.bottom
                            topMargin: units.gu(1.5)
                            // Why don't these work?
                            leftMargin: units.gu(15)
                            rightMargin: units.gu(3)
                        }
                        width: parent.width

                        horizontalAlignment: TextInput.AlignHCenter
                        font.pixelSize: FontUtils.sizeToPixels("medium")
                        wrapMode: Text.WordWrap
                        // Using Ubuntu Theme color.
                        color: "#777777"
                        text: body
                    }
                }
            }

            onCurrentIndexChanged: {
                icon.source = "files/intro" + (currentIndex + 1) + ".png";
            }
        }

        Row {
            id: indicator
            height: units.gu(6)
            spacing: units.dp(8)
            anchors {
                bottom: parent.bottom
                horizontalCenter: parent.horizontalCenter
            }
            z: 2

            Repeater {
                model: introModel.count
                delegate: Rectangle {
                    height: width
                    width: units.dp(6)
                    antialiasing: true
                    color: slider.currentIndex == index ? "#2ca5e0" : "#bbbbbb"
                    Behavior on color {
                        ColorAnimation {
                            duration: UbuntuAnimation.FastDuration
                        }
                    }
                }
            }
        }

        // TODO karni: Perhaps replace with styled Button. This doesn't work in Button, though:
        // font: Qt.font({family: "Ubuntu", pixelSize: FontUtils.sizeToPixels("medium"), color: "#000000"})
        TelegramButton {
            id: startMessagingButton

            anchors {
                bottom: indicator.top
                bottomMargin: units.gu(8)
                horizontalCenter: parent.horizontalCenter
            }
            z: 2

            // TRANSLATORS: Text of the button visible on the intro pages.
            text: i18n.tr("Start Messaging")
            onClicked: startMessaging()
        }
    }
}
