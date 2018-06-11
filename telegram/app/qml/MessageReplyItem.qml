import QtQuick 2.0
import Ubuntu.Components 1.3
import TelegramQML 1.0
import AsemanTools 1.0

import "js/colors.js" as Colors

Item {
    id: msg_reply
    width: row.width + units.gu(1.5)
    height: row.height + units.gu(0.5)
    visible: realMessage

    property Telegram telegram
    property Message message
    property Message replyMessage
    property Dialog dialog

    property Message realMessage: (message && message.replyToMsgId != 0) ? telegram.message(message.replyToMsgId, dialog.peer.channelId) : replyMessage

    property real maximumWidth: 90

    signal messageFocusRequest(int msgId, int channelId)

    Row {
        id: row
        anchors.centerIn: parent
        spacing: units.dp(6)

        Rectangle {
            id: reply_separator
            width: units.dp(2)
            height: parent.height
            color: theme.palette.normal.activityText
        }

        Column {
            id: column
            anchors.verticalCenter: parent.verticalCenter
            spacing: units.gu(0.25)

            Label {
                id: name_text
                fontSize: "small"
                font.weight: Font.Normal
                color: theme.palette.normal.activityText
                text: {
                    if (!realMessage)
                        return ""
                    var replyUser = telegram.user(realMessage.fromId)
                    return replyUser.firstName + " " + replyUser.lastName
                }
            }

            Icon {
                id: media_img
                width: height*imageSize.width/imageSize.height
                height: units.gu(6)
                asynchronous: true
                smooth: true
                visible: path.length != 0
                source: path
                color: switch( media.messageMediaEnum )
                    {
                    case MessageMedia.Unsupported:
                    case MessageMedia.Audio:
                        return Theme.name == "Ubuntu.Components.Themes.SuruDark" ? UbuntuColors.porcelain : Colors.graphite

                    default:
                        return Qt.rgba(0.0, 0.0, 0.0, 0.0)
                    }

                property size imageSize: Cutegram.imageSize(source)
                property variant media: realMessage ? realMessage.media : 0

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
                        result = "image://theme/audio-x-generic-symbolic"
                        break;

                    case MessageMedia.Unsupported:
                        result = "image://theme/stock_document"
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
                width: maximumWidth
                fontSize: "small"
                horizontalAlignment: Text.AlignLeft
                visible: text.length != 0
                maximumLineCount: 1
                elide: Text.ElideRight
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                text: realMessage ? realMessage.message : ""
                color: message.out? "white" : theme.palette.normal.backgroundText
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            if (realMessage)
                msg_reply.messageFocusRequest(realMessage.id, dialog.peer.channelId)
        }
    }
}
