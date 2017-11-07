import QtQuick 2.0
import Ubuntu.Components 1.3
import TelegramQML 1.0
import AsemanTools 1.0

import "js/colors.js" as Colors

Item {
    id: msg_reply
    width: row.width + 12*Devices.density
    height: row.height + 4*Devices.density
    visible: replyMessage || (message && message.replyToMsgId != 0)

    property Telegram telegram
    property Message message
    property Message replyMessage
    property Dialog dialog

    property real maximumWidth: 100

    signal messageFocusRequest(int msgId, int channelId)

    Row {
        id: row
        anchors.centerIn: parent
        spacing: units.dp(6)

        Rectangle {
            id: reply_separator
            width: units.dp(2)
            height: parent.height
            color:  Colors.telegram_blue
        }

        Column {
            id: column
            anchors.verticalCenter: parent.verticalCenter
            spacing: 2*Devices.density

            Label {
                id: name_text
                fontSize: "small"
                font.weight: Font.Normal
                color: Colors.telegram_blue
                text: {
                    if(!msg_reply.visible)
                        return ""
                    var replyMsg = replyMessage? replyMessage : telegram.message(message.replyToMsgId, dialog.peer.channelId)
                    var replyUser = telegram.user(replyMsg.fromId)
                    return replyUser.firstName + " " + replyUser.lastName
                }
            }

            Image {
                id: media_img
                width: height*imageSize.width/imageSize.height
                height: 48*Devices.density
                fillMode: Image.PreserveAspectFit
                asynchronous: true
                sourceSize: Qt.size(width,height)
                smooth: true
                visible: path.length != 0
                source: path

                property size imageSize: Cutegram.imageSize(source)
                property variant media: {
                    if(!msg_reply.visible)
                        return 0

                    var replyMsg = replyMessage? replyMessage : telegram.message(message.replyToMsgId, dialog.peer.channelId)
                    return replyMsg.media
                }

                property bool hasMedia: media? media.messageMediaEnum != MessageMedia.Empty : false
                onHasMediaChanged: {
                    if( !hasMedia )
                        return

                    switch( media.messageMediaEnum )
                    {
                    case MessageMedia.Photo:
                        telegramObject.getFile(media.photo.sizes.last.location)
                        break;

                    case MessageMedia.Video:
                        telegramObject.getFile(media.video.thumb.location)
                        break;

                    case MessageMedia.Document:
                        telegramObject.getFile(media.document.thumb.location)
                        break;

                    default:
                        break;
                    }
                }

                property string path: {
                    var result
                    if(!media)
                        return ""

                    switch( media.messageMediaEnum )
                    {
                    case MessageMedia.Photo:
                        result = media.photo.sizes.last.location.download.location;
                        break;

                    case MessageMedia.Video:
                        result = media.video.thumb.location.download.location;
                        break;

                    case MessageMedia.Audio:
                        result = "files/audio.png"
                        break;

                    case MessageMedia.Unsupported:
                        result = "files/document.png"
                        break;

                    case MessageMedia.Document:
                        result = media.document.thumb.location.download.location
                        break;

                    default:
                        result = ""
                        break;
                    }

                    return result
                }
            }

            Label {
                id: txt
                width: Math.min(htmlWidth, maximumWidth)
                fontSize: "small"
                font.weight: Font.Normal
                horizontalAlignment: Text.AlignLeft
                visible: text.length != 0
                maximumLineCount: 1
                elide: Text.ElideRight
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                text: {
                    if(!msg_reply.visible)
                        return ""

                    var replyMsg = replyMessage? replyMessage : telegram.message(message.replyToMsgId, dialog.peer.channelId)
                    return replyMsg.message
                }

                property real htmlWidth: Cutegram.htmlWidth(text)
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            if(!msg_reply.visible)
                return
            var replyMsg = replyMessage? replyMessage : telegram.message(message.replyToMsgId, dialog.peer.channelId)
            msg_reply.messageFocusRequest(replyMsg.id, dialog.peer.channelId)
        }
    }
}
