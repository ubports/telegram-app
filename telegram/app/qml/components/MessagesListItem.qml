import QtQuick 2.4
import QtGraphicalEffects 1.0
import Ubuntu.Components 1.3

import TelegramQML 1.0

import "qrc:/qml"
import "qrc:/qml/components"
import "qrc:/qml/components/listitems"
import "qrc:/qml/js/colors.js" as Colors

ListItemWithActions {
    id: message_item
    width: 100
    height: (logicalHeight > minimumHeight) ? logicalHeight : minimumHeight
    clip: true

    color: Qt.rgba(0, 0, 0, 0)
    selectedColor: Qt.rgba(0, 0, 0, 0.2)

    property real messageFrameX: back_rect.x
    property real messageFrameY: back_rect.y
    property real messageFrameWidth: back_rect.width
    property real messageFrameHeight: back_rect.height

    property real logicalHeight: action_item.hasAction
            ? action_item.height : column.height + frameMargins*2 + textMargins*2
    property real minimumHeight: contact_image.visible ? contact_image.height + units.gu(1) : 0
    property real maximumWidth: 7*width/10.0
            - (contact_image.visible ? contact_image.width : 0)
            - (forward_contact_image.visible ? forward_contact_image.width : 0)

    property real minimumWidth: 0//100*Devices.density
    property real textMargins: units.dp(4)
    property real frameMargins: units.dp(3)

    property bool visibleNames: false

    property Message message
    property string messageText: message.message
    property User user: telegramObject.user(message.fromId)
    property User fwdUser: telegramObject.user(message.fwdFromId)

    property bool sent: message.sent
    property bool uploading: message.upload.fileId !== 0

    property variant messageLinks: Tools.stringLinks(message.message)
    property bool hasLink: messageLinks.length !== 0
    property bool allowLoadLinks: telegram.userData.isLoadLink(user.id)

    property alias maximumMediaHeight: message_media.maximumMediaHeight
    property alias maximumMediaWidth: message_media.maximumMediaWidth

    property alias isSticker: message_media.isSticker
    property alias hasMedia: message_media.hasMedia
    property alias mediaLocation: message_media.location

    signal dialogRequest(variant dialog);
    signal tagSearchRequest(string tag);
    signal messageFocusRequest(int msgId);
    signal previewRequest(int type, string path)

//    Connections {
//        target: telegram.userData
//        onLoadLinkChanged: {
//            if (id !== user.id) return;
//            allowLoadLinks = telegram.userData.isLoadLink(user.id);
//        }
//    }

    AccountMessageAction {
        id: action_item
        anchors.left: parent.left
        anchors.right: parent.right
        message: message_item.message
    }

    Row {
        id: frame_row
        // anchors.fill: parent
        anchors {
            fill: parent
            leftMargin: units.dp(4)
        }
        layoutDirection: message.out ? Qt.RightToLeft : Qt.LeftToRight
        visible: !action_item.hasAction
        spacing: units.dp(4)

        Avatar {
            id: contact_image
            anchors {
                leftMargin: units.dp(4)
                bottom: frame_row.bottom
                // verticalCenter: parent.verticalCenter
            }
            height: units.gu(5)
            visible: message_item.visibleNames && !message.out

            telegram: telegramObject
            user: message_item.user
            isChat: false

            onClicked: message_item.dialogRequest(telegramObject.fakeDialogObject(contact_image.user.id, false))
        }

        Avatar {
            id: forward_contact_image
            anchors {
                leftMargin: units.dp(4)
                verticalCenter: contact_image.verticalCenter
            }
            height: units.gu(5)
            visible: message.fwdFromId !== 0 && !message_media.isSticker

            telegram: telegramObject
            user: message_item.fwdUser
            isChat: false

            onClicked: message_item.dialogRequest(telegramObject.fakeDialogObject(forward_contact_image.user.id, false))
        }

        Item {
            height: units.gu(1)
            width: units.gu(1)
        }

        Item {
            id: back_rect
            width: column.width + 2*textMargins
            height: column.height + 2*textMargins
            anchors.verticalCenter: parent.verticalCenter

            Item {
                id: msg_frame_box
                anchors.fill: parent
                anchors.margins: -20*Devices.density
                visible: !message_media.isSticker && !upload_item.isSticker

                Item {
                    anchors.fill: parent
                    anchors.margins: 20*Devices.density

                    Rectangle {
                        id: pointer_rect
                        height: units.gu(1)
                        width: height
                        anchors.horizontalCenter: message.out ? parent.right : parent.left
                        // anchors.verticalCenter: parent.verticalCenter
                        // anchors.verticalCenter: contact_image.verticalCenter
                        y: contact_image.visible
                                ? (contact_image.y + contact_image.height / 2)
                                : back_rect_layer.y + back_rect_layer.height - units.gu(2.6)
                        color: back_rect_layer.color
                        transformOrigin: Item.Center
                        rotation: 45
                    }

                    Rectangle {
                        id: back_rect_layer
                        anchors.fill: parent
                        radius: 6*Devices.density
                        color: {
                            // if(message_media.mediaPlayer)
                            //     return "white"
                            // else
                                return message.out ? Colors.outgoing : Colors.incoming
                        }
                    }
                }
            }

            DropShadow {
                anchors.fill: source
                source: msg_frame_box
                radius: 6*Devices.density
                samples: 16
                horizontalOffset: 1*Devices.density
                verticalOffset: 2*Devices.density
                visible: !message_media.isSticker && !upload_item.isSticker
                color: Qt.rgba(0,0,0,0.2)
            }

            Column {
                id: column

                property real maxWidthNoMsg: Math.max(
                    user_name.visible ? user_name.width : 0,
                    forward_user_name.visible ? forward_user_name.width : 0,
                    message_reply.visible ? message_reply.width : 0,
                    upload_item.visible ? upload_item.width : 0,
                    message_media.visible ? message_media.width : 0);

                anchors.centerIn: parent
                width: Math.max(maxWidthNoMsg, message_wrapper.width)
                clip: true

                Label {
                    id: user_name
                    fontSize: "medium"
                    font.weight: Font.Normal
                    elide: Text.ElideRight
                    visible: visibleNames && !message.out && !hasMedia
                    text: user.firstName + " " + user.lastName

                    Component.onCompleted: {
                        if (user_name.paintedWidth > units.gu(28)) {
                            user_name.width = units.gu(28)
                        }
                    }
                }

                Label {
                    id: forward_user_name
                    fontSize: "smaller"
                    font.weight: Font.Normal
                    color: message.out ? Colors.dark_green : Colors.blue
                    visible: message.fwdFromId !== 0 && !message_media.isSticker
                    // TRANSLATORS: %1 indicates contact from whom the message was frowarded from.
                    text: visible ? i18n.tr("Forwarded from <b>%1</b>").arg(fwdUser.firstName + " " + fwdUser.lastName) : ""
                }

                MessageReplyItem {
                    id: message_reply
                    telegram: telegramObject
                    message: message_item.message
                    maximumWidth: message_item.maximumWidth
                    onMessageFocusRequest: message_item.messageFocusRequest(msgId)
                }

                AccountMessageUpload {
                    id: upload_item
                    telegram: telegramObject
                    message: message_item.message
                }
                
                AccountMessageMedia {
                    id: message_media
                    message: message_item.message
                    visible: message_media.hasMedia && !uploading

                    onMediaClicked: message_item.previewRequest(type, path)
                }

                Item {
                    id: message_wrapper

                    // Determine if time should go to the left or below the message.
                    property bool timeFitsSide: !message_item.hasMedia
                            && (message_text.contentWidth < maximumWidth - message_status.width - units.gu(2))

                    // Determine width, but expand if parent allows, so time fills to the far right.
                    width: message_text.width + (timeFitsSide ? message_status.width + units.dp(4) : 0)
                    // Math.max(message_status.x + message_status.width - message_text_frame.x)//, column.maxWidthNoMsg)
                    height: childrenRect.height
                    anchors.left: parent.left
                    visible: !hasMedia || message_media.isAudioMessage

                    TextEdit {
                        id: message_text
                        anchors {
                            top: parent.top
                            left: parent.left
                            leftMargin: units.dp(3)
                        }
                        width: Math.min(htmlWidth, maximumWidth)
                        height: contentHeight
                        font.pixelSize: FontUtils.sizeToPixels(message_item.hasMedia ? "small" : "medium")
                        font.weight: Font.Normal
                        horizontalAlignment: Text.AlignLeft
                        persistentSelection: false
                        activeFocusOnPress: false
                        selectByMouse: false
                        readOnly: true
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        textFormat: Text.RichText
                        text: emojis.bodyTextToEmojiText(messageText)

                        onLinkActivated: {
                            if (link.slice(0,6) == "tag://") {
                                console.log("tag links not supported yet");
                            } else {
                                Qt.openUrlExternally(link);
                            }
                        }

                        property real htmlWidth: Cutegram.htmlWidth(text)
                        property string messageText: {
                            if (message_media.isAudioMessage) {
                                return i18n.tr("Audio attachment not supported yet ;(")
                            } else {
                                return message.message
                            }
                        }
                    }

                    MessageStatus {
                        id: message_status
                        anchors {
                            top: message_text.bottom
                            right: parent.right
                        }

                        message: message_item.message
                        hasMedia: message_item.hasMedia

                        property int deltaY: message_wrapper.timeFitsSide ? -units.dp(4) : height
                        property int extraHeight: message_wrapper.timeFitsSide ? 0 : height

                        states: [
                            State {
                                name: "timeFitsText"
                                when: message_wrapper.timeFitsSide
                                PropertyChanges {
                                    target: message_status
                                    anchors.right: undefined
                                    anchors.topMargin: -units.dp(12)
                                    x: column.x + column.width - message_status.width - units.gu(1)
                                }
                            },
                            State {
                                name: "timeBottom"
                                when: !message_wrapper.timeFitsSide
                                PropertyChanges {
                                    target: message_status
                                    anchors.topMargin: units.dp(2)
                                }
                            }
                        ]
                    }

                }
            }

        }
    }

    function click() {
        return message_media.click()
    }
}
