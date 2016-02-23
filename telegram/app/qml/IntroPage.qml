import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Layouts 1.0

import "components"
import "js/colors.js" as Colors

TelegramPage {
    id: page

    property bool isWide: page.width > units.gu(70)
    property alias startMessagingButton: startMessagingButton
    property alias currentIndex: slider.currentIndex

    signal startMessaging()

    IntroPageListModel {
        id: introModel
    }

    Layouts {
        id: layouts
        anchors.fill: parent
        layouts: [
            ConditionalLayout {
                name: "wide"
                when: page.isWide
                Item {
                    anchors.fill: parent
                    ItemLayout {
                        item: "item_body"
                        anchors {
                            top: parent.top
                            bottom: parent.bottom
                            left: parent.left
                            right: parent.horizontalCenter
                            bottomMargin: 0
                        }
                        width: page.width / 2
                    }
                    ItemLayout {
                        item: "item_button"
                        anchors {
                            top: parent.top
                            bottom: parent.bottom
                            right: parent.right
                            left: parent.horizontalCenter
                        }
                        width: page.width / 2
                    }
                }
            }
        ]

        Item {
            anchors.fill: parent

            Rectangle {
                anchors {
                    top: parent.top
                    left: parent.left
                    right: parent.right
                    bottom: parent.bottom
                }
                color: Colors.intro_background

                Layouts.item: "item_body"

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
                        bottomMargin: isWide
                                ? 0 : page.height - (startMessagingButton.parent.y - units.gu(4))
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

            }

            Item {
                Layouts.item: "item_button"
                anchors {
                    top: undefined
                    left: parent.left
                    right: parent.right
                    bottom: parent.bottom
                    bottomMargin: units.gu(4)
                }
                width: page.width
                height: startMessagingButton.height

                // TODO karni: Perhaps replace with styled Button. This doesn't work in Button, though:
                // font: Qt.font({family: "Ubuntu", pixelSize: FontUtils.sizeToPixels("medium"), color: "#000000"})
                TelegramButton {
                    id: startMessagingButton
                    z: 2
                    anchors {
                        horizontalCenter: parent.horizontalCenter
                        verticalCenter: page.isWide ? parent.verticalCenter : undefined
                    }
                    // TRANSLATORS: Text of the button visible on the intro pages.
                    text: i18n.tr("Start Messaging")                

                    onClicked: startMessaging()
                }
            }


        }
    }
}
