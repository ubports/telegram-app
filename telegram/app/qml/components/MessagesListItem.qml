import QtQuick 2.4
import QtGraphicalEffects 1.0
import Ubuntu.Components 1.3

import TelegramQML 1.0

import "qrc:/qml"
import "qrc:/qml/components"
import "qrc:/qml/js/colors.js" as Colors
import "../js/avatar.js" as Avatar
import "../js/ba-linkify.js" as BaLinkify

ListItem {
    id: message_item
    width: 100
    height: (logicalHeight > minimumHeight) ? logicalHeight : minimumHeight
    clip: true
    divider.visible: false

    property real messageFrameX: back_rect.x
    property real messageFrameY: back_rect.y
    property real messageFrameWidth: back_rect.width
    property real messageFrameHeight: back_rect.height

    property real logicalHeight: action_item.hasAction
            ? action_item.height : column.height + frameMargins*2 + textMargins*2
    property real minimumHeight: contact_image.visible ? contact_image.height + units.gu(1) : 0
    property real maximumWidth: 7*width/10.0
            - (contact_image.visible ? contact_image.width : 0)

    property real minimumWidth: 0
    property real textMargins: units.dp(4)
    property real frameMargins: units.dp(3)

    property bool visibleNames: false

    property Message message
    property string messageText: message.message
    property string messageHtmlText: parseText(message.message)
    property User user: telegramObject.user(message.fromId)
    property User fwdUser: telegramObject.user(message.fwdFromId ? message.fwdFromId.userId : 0)

    property bool sent: message.sent
    property bool uploading: message.upload.fileId !== 0

    property bool hasLink: htmlHasLinks(messageHtmlText)
    property bool allowLoadLinks: telegram.userData.isLoadLink(user.id)

    property alias maximumMediaHeight: message_media.maximumMediaHeight
    property alias maximumMediaWidth: message_media.maximumMediaWidth

    property alias isSticker: message_media.isSticker
    // A link may cause website image preview to show,
    // but this should not disable showing of message text.
    property bool hasMedia: message_media.hasMedia && !hasLink
    property alias media: message_media.media
    property alias mediaLocation: message_media.location

    property bool isSystemMessage: false

    signal dialogRequest(variant dialog);
    signal tagSearchRequest(string tag);
    signal messageFocusRequest(int msgId);
    signal previewRequest(int type, string path)

    // Taken from messaging-app
    function parseText(text) {
        var phoneExp = /(\+?([0-9]+[ ]?)?\(?([0-9]+)\)?[-. ]?([0-9]+)[-. ]?([0-9]+)[-. ]?([0-9]+))/img;
        // remove html tags
        text = text.replace(/</g,'&lt;').replace(/>/g,'<tt>&gt;</tt>');
        // replace line breaks
        text = text.replace(/(\n)+/g, '<br />');
        // check for links
        var htmlText = BaLinkify.linkify(text);
        if (htmlText !== text) {
            return htmlText;
        }
        // linkify phone numbers if no web links were found
        return text.replace(phoneExp, '<a href="tel:///$1">$1</a>');
    }

    function htmlHasLinks(html) {
        return html.indexOf('<a href="') !== -1;
    }

    AccountMessageAction {
        id: action_item
        anchors.left: parent.left
        anchors.right: parent.right
        message: message_item.message
        onHasActionChanged:{
            isSystemMessage = action_item.hasAction;

            if (isSystemMessage) {

                // Highlight colour is the same as BG colour, therefore
                // effectively removing highlight
                highlightColor = color;

                leadingActions = null;
                trailingActions = null;
            }
        }
    }

    Row {
        id: frame_row
        anchors {
            fill: parent
            leftMargin: units.dp(4)
            rightMargin: units.dp(4)
        }
        layoutDirection: message.out ? Qt.RightToLeft : Qt.LeftToRight
        visible: !action_item.hasAction
        spacing: units.dp(3)

        Avatar {
            id: contact_image
            anchors {
                top: frame_row.top
                leftMargin: units.dp(4)
                topMargin: units.gu(.5)
            }
            height: units.gu(5)
            visible: message_item.visibleNames && !message.out

            telegram: telegramObject
            user: message_item.user
            isChat: false

            onClicked:{
                userTapBackHome = false;
                message_item.dialogRequest(telegramObject.fakeDialogObject(contact_image.user.id, false))
            }
        }

        Item {
            // Just spacing in a row.
            height: units.dp(1)
            width: units.dp(1)
        }

        Item {
            id: back_rect
            width: column.width + 2*textMargins
            height: column.height + 2*textMargins
            anchors.verticalCenter: parent.verticalCenter

            Rectangle {
                id: msg_frame_shadow
                width: msg_frame_box.width
                height: msg_frame_box.height
                radius: msg_frame_box.radius

                y: units.dp(1)
                x: units.dp(1)
                color: "#cdcdcd"    // theme.palette.normal.base (i.e. #CDCDCD) with opacity: 0.5
                visible: msg_frame_box.visible
            }

            Rectangle {
                id: msg_frame_box
                anchors.fill: parent
                visible: (message_item.message != "" || forward_user_name.visible) && !message_media.isSticker
                radius: 5.5*Devices.density
                color: {
                    return message.out ? Colors.outgoing : Colors.incoming
                }
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
                    color: Avatar.getColor(message.fromId)
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
                    color:  Colors.telegram_blue
                    visible: message.fwdFromId !== 0 && message.fwdFromId.userId !== 0 && !message_media.isSticker
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
                    objectName: "accountMessageMedia"
                    message: message_item.message
                    visible: message_media.hasMedia && !uploading
                    showStatus: !hasLink

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
                    visible: !hasMedia

                    Label {
                        id: message_text
                        objectName: "messageText"

                        anchors {
                            top: parent.top
                            left: parent.left
                        }
                        // units.dp is used here, because Label wraps too early as compared to TextEdit.
                        width: Math.min(units.dp(htmlWidth), maximumWidth)
                        height: contentHeight
                        fontSize: message_item.hasMedia ? "small" : "medium"
                        font.weight: Font.Light
                        horizontalAlignment: Text.AlignLeft
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        textFormat: Text.RichText
                        text: message_item.messageHtmlText
                        color: message.out? "aliceblue" : "black"
                        onLinkActivated: {
                            if (link.slice(0,6) == "tag://") {
                                console.log("tag links not supported yet");
                            } else {
                                Qt.openUrlExternally(link);
                            }
                        }

                        property real htmlWidth: Cutegram.htmlWidth(text)
                    }

                    MessageStatus {
                        id: message_status
                        objectName: "messageStatus"
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
