import QtQuick 2.4
import Ubuntu.Components 1.2

import TelegramQML 1.0

import "qrc:/qml"
import "qrc:/qml/components"
import "qrc:/qml/components/listitems"
import "qrc:/qml/js/colors.js" as Colors

ListItemWithActions {
    id: message_item
//    divider.visible: false
    height: Math.max(logicalHeight, minimumHeight)
    clip: true
    color: Qt.rgba(0, 0, 0, 0)
    selectedColor: Qt.rgba(0, 0, 0, 0.1)

    property real messageFrameX: back_rect.x
    property real messageFrameY: back_rect.y
    property real messageFrameWidth: back_rect.width
    property real messageFrameHeight: back_rect.height

    property real logicalHeight: action_item.hasAction
            ? action_item.height : column.height + frameMargins*2 + textMargins*2
    property real minimumHeight: 0//48*Devices.density
    property real maximumWidth: 3*width/5

    property alias maximumMediaHeight: message_media.maximumMediaHeight
    property alias maximumMediaWidth: message_media.maximumMediaWidth

    property real minimumWidth: 0//100*Devices.density
    property real textMargins: units.dp(4)
    property real frameMargins: units.dp(4)

    property bool visibleNames: false

    property Message message
    property string messageText: message.message
    property User user: telegramObject.user(message.fromId)
    property User fwdUser: telegramObject.user(message.fwdFromId)

    property bool sent: message.sent
    property bool uploading: message.upload.fileId !== 0
    property alias isSticker: message_media.isSticker

    property alias hasMedia: message_media.hasMedia
    property bool encryptMedia: message.message.length === 0 && message.encrypted
    property alias mediaLocation: message_media.location

    property variant messageLinks: Tools.stringLinks(message.message)
    property bool hasLink: messageLinks.length !== 0
    property bool allowLoadLinks: telegram.userData.isLoadLink(user.id)

    signal dialogRequest(variant dialog);
    signal tagSearchRequest(string tag);
    signal messageFocusRequest(int msgId);
    signal openMedia(int type, string path);

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
        anchors {
            left: parent.left
            leftMargin: units.gu(1)
            right: parent.right
            rightMargin: units.gu(1)
        }
        layoutDirection: message.out? Qt.RightToLeft : Qt.LeftToRight
        visible: !action_item.hasAction
        spacing: frameMargins

        Avatar {
            id: contact_image
            anchors.bottom: back_rect.bottom
            height: units.gu(5)
            visible: message_item.visibleNames && !message.out

            telegram: telegramObject
            user: message_item.user
            isChat: false
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
        }

        Item {
            height: 10
            width: units.dp(4)
        }

        Item {
            id: back_rect
            width: column.width + 2*textMargins
            height: column.height + 2*textMargins
            anchors.verticalCenter: parent.verticalCenter

            TelegramBubble {
                id: msg_frame_box
                anchors.fill: parent
                visible: !message_media.isSticker && !upload_item.isSticker
                outgoing: message.out
                height: parent.height
                width: parent.width
            }

            Column {
                id: column
                anchors.centerIn: parent
                height: (user_name.visible ? user_name.height : 0)
                        + (forward_user_name.visible ? forward_user_name.height : 0)
                        + (message_reply.visible ? message_reply.height : 0)
                        + (uploading ? upload_item.height : 0)
                        + (message_media.hasMedia ? message_media.height : 0)// + spacing
                        + message_column.height + units.dp(10)
                spacing: units.dp(4)
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
                    visible: hasMedia && !uploading

                    onMediaClicked: {
                        openMedia(type, path);
                    }
                }

                Column {
                    id: message_column
                    width: Math.max(user_name.width, forward_user_name.width,
                                    message_reply.width, message_media.width,
                                    (message_text_frame.visible ? message_text_frame.width : 0))

                    Item {
                        id: message_text_frame
                        width: message_text.width + units.dp(12)
                        height: message_text.height// + units.dp(8)
                        visible: !message_media.hasMedia && !uploading || message_media.isAudioMessage

                        TextEdit {
                            id: message_text
                            width: Math.min(htmlWidth, maximumWidth)
                            height: contentHeight
                            anchors.left: parent.left
                            persistentSelection: true
                            activeFocusOnPress: false
                            readOnly: true
                            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                            verticalAlignment: TextEdit.AlignLeft
                            font.pixelSize: FontUtils.sizeToPixels(
                                    message_item.hasMedia ? "small" : "medium")
                            font.weight: Font.Normal
                            color: message.out ? "white" : "#333333"
                            text: emojis.bodyTextToEmojiText(messageText)
                            textFormat: Text.RichText

                            onLinkActivated: {
                                if (link.slice(0,6) === "tag://") {
                                    message_item.tagSearchRequest(link.slide(6, link.length));
                                } else {
                                    Qt.openUrlExternally(link);
                                }
                            }

                            property real htmlWidth: Cutegram.htmlWidth(text)
                            property string messageText: message_media.isAudioMessage
                                    ? i18n.tr("Audio messages not supported.")
                                    : encryptMedia
                                            ? qsTr("Media files are currently not supported in secret chats.")
                                            : message.message
                        }

                        // MessageLinkImage

                    }

                    MessageStatus {
                        anchors {
                            right: parent.right
                            rightMargin: units.gu(1)
                        }
                        message: message_item.message
                        hasMedia: message_item.hasMedia
                    }

//                    ActivityIndicator {
//                        id: indicator
//                        anchors.centerIn: parent
//                        width: units.dp(12)
//                        height: width
//                        running: !sent
//                    }
                }
            } // column
        }
    }

    function click() {
        return message_media.click();
    }

/*
    Column {
        id: column
        anchors {
            left: parent.left
            right: parent.right
            verticalCenter: parent.verticalCenter
        }
        spacing: units.gu(1)

        // TelegramSection{}

        Item {
            id: internal_delegate
            anchors {
                left: parent ? parent.left : undefined
                right: parent ? parent.right : undefined
            }
            height: isAction ? 0 : bubble.height
            visible: !isAction

            ContactImage {
                id: image
                anchors{
                    left: parent.left
                    leftMargin: visible ? units.gu(1) : 0
                    //bottom: sectionVisible ? bubble.bottom : parent.bottom
                    bottom: parent.bottom
                }
                width: visible ? units.gu(5) : 0
                height: width
                visible: message_item.isChat && !message.out
                user: message_item.user
                circleMode: false
            }

            Item {

                width: units.gu(5)
                height: width
            }

            TelegramBubble {
                id: bubble
                outgoing: message.out
                anchors {
                    top: parent.top
                    left: outgoing ? undefined : image.right
                    leftMargin: units.gu(2)
                    right: outgoing ? parent.right : undefined
                    rightMargin: units.gu(2)
                }
                height: message_contents.height + units.gu(1)
                width: Math.max(sender_label.width,
                                message_label.width) + units.gu(2)

                Item {
                    id: message_contents
                    anchors {
                        top: parent.top
                        topMargin: units.dp(4)
                        left: parent.left
                        leftMargin: units.gu(1)
                        right: parent.right
                        rightMargin: units.gu(1)
                    }
                    height: childrenRect.height

                    Label {
                        id: sender_label
                        anchors.top: parent.top
                        height: text === "" ? 0 : implicitHeight
                        fontSize: "medium" //userSettings.contents.fontSize
                        font.weight: Font.Normal
                        elide: Text.ElideRight
                        visible: visibleNames
                        text: user.firstName + " " + user.lastName
//                        color: {
//                            if(message_media.mediaPlayer)
//                                return Cutegram.currentTheme.messageAudioNameColor
//                            else
//                            if(hasMedia || encryptMedia)
//                                return Cutegram.currentTheme.messageMediaNameColor
//                            else
//                            if(message.out)
//                                return Cutegram.currentTheme.messageOutgoingNameColor
//                            else
//                                return Cutegram.currentTheme.messageIncomingNameColor
//                        }

                        Component.onCompleted: {
                            if (sender_label.paintedWidth > units.gu(28)) {
                                sender_label.width = units.gu(28);
                            }
                        }
                    }

                    Label {
                        id: message_label
                        anchors {
                            top: sender_label.bottom
                        }
                        height: paintedHeight
                        width: Math.min(implicitWidth, 0.7 * internal_delegate.width)
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        fontSize: "small"
                        font.weight: Font.Normal
                        text: emojis.bodyTextToEmojiText(message.message)
                        textFormat: Text.RichText
                    }
                }
            }
        }
    }
*/

}
