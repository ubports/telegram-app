import QtQuick 2.0
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3
import Ubuntu.Components 1.3 as UC
import Ubuntu.Content 1.3
import AsemanTools.Controls 1.0 as Controls

import AsemanTools 1.0
import TelegramQML 1.0

import "components"
import "js/colors.js" as Colors
import "ui"

Rectangle {
    id: acc_msg_list

    property alias telegramObject: messages_model.telegram
    property alias currentDialog: messages_model.dialog
    property alias refreshing: messages_model.refreshing

    readonly property bool inSelectionMode: mlist.isInSelectionMode
    readonly property int selectedItemCount: mlist.selectedItems.count
    readonly property int totalItemCount: mlist.listModel.count

    property real topMargin
    property real bottomMargin

    property real maximumMediaHeight: maximumMediaWidth
    // This is neat, but I don't like it resizes the photo live: (height-topMargin-bottomMargin)*0.75
    property real maximumMediaWidth: width*0.75

    property bool isActive: View.active && View.visible
    property bool messageDraging: false

    property string selectedText

    property alias maxId: messages_model.maxId

    property bool isChat: currentDialog ? currentDialog.peer.chatId != 0 : false
    property bool isChannel: currentDialog ? currentDialog.peer.channelId != 0 : false

    property EncryptedChat enchat: telegramObject.encryptedChat(currentDialog.peer.userId)
    property int enChatUid: enchat.adminId==telegramObject.me? enchat.participantId : enchat.adminId

    property int filterId: -1

    signal forwardRequest(variant messageIds)
    signal focusRequest()
    signal dialogRequest(variant dialogObject)
    signal tagSearchRequest(string tag)
    signal replyToRequest(int msgId)
    signal rejectSecretRequest()

    onIsActiveChanged: {
        if( isActive )
            messages_model.setReaded()
    }

    onCurrentDialogChanged: {
        selected_list.clear()
        //add_anim_disabler.restart()
    }

    ListObject {
        id: selected_list
    }

    MessagesModel {
        id: messages_model
        onCountChanged: {
            if(count>1 && isActive)
                messages_model.setReaded()
        }
        onRefreshingChanged: {
            if(focus_msg_timer.msgId) {
                if(refreshing)
                    focus_msg_timer.stop()
                else
                    focus_msg_timer.restart()
            }
        }
        onFocusToNewRequest: {
            if(!hasNewMessage) {
                return;
            }

            focus_msg_timer.msgIndex = unreads>0? unreads-1 : 0
            focus_msg_timer.restart()
        }
    }

    Connections {
        id: sticker_installer
        target: telegramObject
        onDocumentStickerRecieved: {
            if(document != doc)
                return

            PopupUtils.open(Qt.resolvedUrl("InstallStickerDialog.qml"), null, {telegram: telegramObject, stickerSet: set.shortName})
        }
        property Document doc
    }

    //Timer refreshes MessagesModel to check if message(s) have been read or not
    Timer {
        id: refresh_timer
        repeat: true
        interval: 1500
        onTriggered: {
            messages_model.refresh()
        }
        Component.onCompleted: {
            if (!isChat && !isChannel) {
                start()
            }
        }
    }

    Image {
        anchors.fill: parent
        fillMode: Cutegram.background.length==0? Image.Tile : Image.PreserveAspectCrop
        horizontalAlignment: Image.AlignLeft
        verticalAlignment: Image.AlignTop
        sourceSize: Cutegram.background.length==0? Cutegram.imageSize("qrc:/qml/files/telegram_background.png") : Qt.size(width,height)
        source: {
            return "qrc:/qml/files/telegram_background.png"
//            if(backgroundManager.background == "")
//                return Cutegram.background.length==0? "qrc:/qml/files/telegram_background.png" : Devices.localFilesPrePath + Cutegram.background
//            else
//                return backgroundManager.background
        }
        opacity: 0.7
    }

    Rectangle {
        anchors.centerIn: parent
        color: "#ffffff"
        width: welcome_txt.width + 20*Devices.density
        height: welcome_txt.height + 10*Devices.density
        radius: 5*Devices.density
        visible: currentDialog == telegramObject.nullDialog

        Text {
            id: welcome_txt
            anchors.centerIn: parent
            font.pixelSize: Math.floor((Cutegram.font.pointSize+1)*Devices.fontDensity)
            font.family: Cutegram.font.family
            // TRANSLATORS: Label for an empty 'chat area' side of the screen (for larger screens).
            text: i18n.tr("Please select chat")
            color: "#111111"
        }
    }

    Timer {
        id: anim_enabler_timer
        interval: 400
    }

    Timer {
        id: file_delete_timer
        interval: 1000
        onTriggered: Cutegram.deleteFile(filePath)

        property string filePath
    }

    /*Timer {
        id: add_anim_disabler
        interval: 500
    }*/

    StickersModel {
        id: stickers_model
        telegram: telegramObject
    }

    MultipleSelectionListView {
        id: mlist
        objectName: "messagesListView"
        anchors.fill: parent
        cacheBuffer: units.gu(10) * 20
        clip: true
        focus: false
        highlightFollowsCurrentItem: false
        verticalLayoutDirection: ListView.BottomToTop
        visible: !enchat || enchat.classType != encryptedTypes.typeEncryptedChatDiscarded

        maximumFlickVelocity: 5000
        flickDeceleration: 2000

        header: Item{ width: 4; height: units.dp(4) }
        footer: Item{ width: 4; height: units.dp(4) }

        onAtYBeginningChanged: if( atYBeginning && contentHeight>height &&
                                   currentDialog != telegramObject.nullDialog ) messages_model.loadMore()

        section.property: "unreaded"
        section.criteria: ViewSection.FullString
        section.delegate: Item {
            property int padding: units.dp(3)

            width: mlist.width
            height: unread_texts.text.length != 0 && messages_model.hasNewMessage ? unread_texts.height + 2*padding : 0
            clip: true

            Rectangle {
                id: unread_background
                anchors.fill: parent
                color: Qt.rgba(1, 1, 1, 0.5)
            }

            Label {
                id: unread_texts
                anchors.centerIn: parent
                color: Colors.telegram_blue
                text: section=="false" ? i18n.tr("New messages") : ""
                fontSize: "medium"
                font.weight: Font.Normal
            }
        }

        listModel: messages_model
        listDelegate: MessagesListItem {
            id: message_item
            objectName: "message%1".arg(index)
            maximumMediaHeight: acc_msg_list.maximumMediaHeight
            maximumMediaWidth: acc_msg_list.maximumMediaWidth
            message: item
            width: mlist.width
            visibleNames: isChat || isChannel
            opacity: filterId == user.id || filterId == -1 ? 1 : 0.1

            leadingActions: ListItemActions {
                actions: [
                    Action {
                        iconName: "delete"
                        text: i18n.tr("Delete")
                        onTriggered: telegram.deleteMessages([item.id])
                    }
                ]
            }

            trailingActions: ListItemActions {
                // TODO resend action
                actions: [
                    Action {
                        iconName: "edit-copy"
                        text: i18n.tr("Copy")
                        visible: !message_item.hasMedia
                        onTriggered: Clipboard.push(item.message)
                    },
                    Action {
                        iconName: "mail-reply"
                        text: i18n.tr("Reply")
                        onTriggered: {
                            acc_msg_list.replyToRequest(message.id);
                        }
                    },
                    Action {
                        iconName: "info"
                        text: i18n.tr("Sticker Pack info")
                        visible: message_item.isSticker && telegramObject.documentStickerId(message_item.media.document) !== 0
                        onTriggered: {
                            sticker_installer.doc = message_item.media.document
                            telegramObject.getStickerSet(sticker_installer.doc)
                        }
                    },
                    Action {
                        iconName: "next"
                        text: i18n.tr("Forward")
                        visible: enchat == telegramObject.nullEncryptedChat
                        onTriggered: forwardMessages([message.id])
                    }
                ]
            }

            selected: mlist.isSelected(message_item)
            selectMode: mlist.isInSelectionMode

            onDialogRequest: acc_msg_list.dialogRequest(dialog)
            onTagSearchRequest: acc_msg_list.tagSearchRequest(tag)
            onMessageFocusRequest: focusOnMessage(msgId)

            onPressAndHold: {
                if (!message_item.isSystemMessage) {
                    mlist.clearSelection();
                    mlist.startSelection();
                    if (mlist.isInSelectionMode) {
                        mlist.selectItem(message_item);
                    }
                }
            }

            onSelectedChanged:{
                if (mlist.isInSelectionMode) {
                    if (!selected)
                        mlist.deselectItem(message_item);
                    else
                        mlist.selectItem(message_item);
                }
            }

            onClicked: {
                if (!message_item.isSystemMessage) {
                    if (mlist.isInSelectionMode) {
                        if (selected)
                            selected = false;
                        else
                            selected = true;
                    } else {
                        message_item.click();
                    }
                }
                else
                    message_item.click();
            }

//            onClicked: {
//                console.log("on item clicked");
//                if (mlist.isInSelectionMode) {
//                    if (selected) {
//                        mlist.deselectItem(message_item)
//                    } else {
//                        mlist.selectItem(message_item)
//                    }
//                }

//                message_item.click();
//            }

            onPreviewRequest: {
                console.log("onOpenMedia");
                var properties;
                switch (type) {
                case FileHandler.TypeTargetMediaPhoto:
                    properties = {
                        "user": user,
                        "photoPreviewSource": path
                    };
                    break;
                case FileHandler.TypeTargetMediaVideo:
                    properties = {
                        "user": user,
                        "videoPreviewSource": path
                    };
                    break;
                case FileHandler.TypeTargetMediaDocument:
                    // TODO export document
                    pageStack.addPageToCurrentColumn(dialog_page, picker_page_component, {
                            "url": path,
                            "handler": ContentHandler.Destination,
                            "contentType": ContentType.All
                    });
                    return;
                case FileHandler.TypeTargetMediaAudio:
                    return;
                }
                pageStack.addPageToCurrentColumn(dialog_page, preview_page_component, properties);
            }
        }

        Component.onCompleted: {
            // FIXME: workaround for qtubuntu not returning values depending on the grid unit definition
            // for Flickable.maximumFlickVelocity and Flickable.flickDeceleration
            var scaleFactor = units.gridUnit / 8;
            maximumFlickVelocity = maximumFlickVelocity * scaleFactor;
            flickDeceleration = flickDeceleration * scaleFactor;
        }
    }

    MouseArea {
        anchors.fill: parent
        onPressed: {
            acc_msg_list.focusRequest()
            mouse.accepted = false
        }
    }

    NormalWheelScroll {
        flick: mlist
        animated: Cutegram.smoothScroll
        reverse: true
    }

    PhysicalScrollBar {
        scrollArea: mlist; height: mlist.height-bottomMargin-topMargin; width: 6*Devices.density
        anchors.right: mlist.right; anchors.top: mlist.top;
        anchors.topMargin: topMargin; reverse: true
    }

    Rectangle {
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.bottomMargin: bottomMargin + 8*Devices.density
        anchors.rightMargin: 8*Devices.density
        width: units.gu(7)//64*Devices.density
        height: width
        radius: height / 2//5*Devices.density
        color: "#88000000"
//        normalColor: "#88000000"
//        highlightColor: "#aa000000"
//        iconSource: "files/down.png"
//        cursorShape: Qt.PointingHandCursor
//        iconHeight: 18*Devices.density
        visible: opacity != 0
        opacity: mlist.visibleArea.yPosition+mlist.visibleArea.heightRatio < 0.95? 1 : 0

        MouseArea {
            anchors.fill: parent
            onClicked: mlist.positionViewAtBeginning()
        }

//        onClicked: mlist.positionViewAtBeginning()

        Image {
            anchors.centerIn: parent
            height: units.gu(2)
            fillMode: Image.PreserveAspectFit
            source: "qrc:/qml/files/down.png"
        }

        Behavior on opacity {
            NumberAnimation{ easing.type: Easing.OutCubic; duration: 300 }
        }
    }

    Label {
        id: acc_rjc_txt
        anchors.top: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: units.gu(5)
        fontSize: "large"
        text: i18n.tr("Secret chat requested.")
        visible: enchat && enchat.classType == encryptedTypes.typeEncryptedChatRequested
        onVisibleChanged: secret_chat_indicator.stop()
    }

    Label {
        id: rejected_txt
        anchors.top: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: units.gu(5)
        fontSize: "x-small"
        horizontalAlignment: Text.AlignHCenter
        text: i18n.tr("Secret chat rejected or accepted from another device.\nNote that Android accepts secret chats automatically.")
        visible: enchat && enchat.classType == encryptedTypes.typeEncryptedChatDiscarded
        onVisibleChanged: secret_chat_indicator.stop()
    }

    ActivityIndicator {
        id: secret_chat_indicator
        width: units.gu(3)
        height: width
        anchors.top: acc_rjc_txt.bottom
        anchors.topMargin: units.gu(1)
        anchors.horizontalCenter: parent.horizontalCenter

        function start() { running = true; }
        function stop() { running = false; }
    }

    Column {
        anchors.top: acc_rjc_txt.bottom
        anchors.topMargin: 10*Devices.density
        anchors.left: parent.left
        anchors.right: parent.right
        spacing: 10*Devices.density
        visible: acc_rjc_txt.visible

        TelegramButton {
            anchors {
                right: parent.right
                left: parent.left
                margins: units.gu(2)
            }
            // TRANSLATORS: Button label to accept an incoming secret chat request. (Temporarily secret chats are automatically accepted.)
            text: i18n.tr("Accept")
            onClicked: {
                secret_chat_indicator.start()
                telegramObject.messagesAcceptEncryptedChat(currentDialog.peer.userId)
            }
        }

        TelegramButton {
            anchors {
                right: parent.right
                left: parent.left
                margins: units.gu(2)
            }
            // TRANSLATORS: Button label to reject an incoming secret chat request. (Temporarily secret chats are automatically accepted.)
            text: i18n.tr("Reject")
            backgroundColor: Colors.dark_blue
            onClicked: {
                secret_chat_indicator.start()
                telegramObject.messagesDiscardEncryptedChat(currentDialog.peer.userId)
                rejectSecretRequest()
            }
        }
    }

    Timer {
        id: focus_msg_timer
        interval: 300
        onTriggered: {
            var idx = msgIndex
            if(msgId)
                idx = messages_model.indexOf(msgId)

            mlist.positionViewAtIndex(idx, ListView.Center)
            msgIndex = 0
            msgId = 0
        }
        property int msgId
        property int msgIndex
    }

    function cancelSelection() {
        mlist.cancelSelection();
    }

    function selectAll() {
        mlist.selectAll();
    }

    function getSelectedMessageText() {
        var message = "", item;
        for (var i = mlist.selectedItems.count - 1; i >= 0; i--) {
            item = mlist.selectedItems.get(i);
            var text = item.model.item.message;
            if (text.trim().length > 0) {
                message += text + "\n";
            }
        }
        return message;
    }

    function getSelectedMessageIds() {
        var messageIds = [], item;
        for (var i = 0; i < mlist.selectedItems.count; i++) {
            item = mlist.selectedItems.get(i);
            messageIds.push(item.model.item.id);
        }
        return messageIds;
    }

    function copySelected() {
        var message = getSelectedMessageText();
        mlist.endSelection();
        Clipboard.push(message);
    }

    function deleteSelected() {
        var messageIds = getSelectedMessageIds();
        mlist.endSelection();
        telegram.deleteMessages(messageIds);
    }

    function forwardSelected() {
        var messageIds = getSelectedMessageIds();
        mlist.endSelection();
        forwardMessages(messageIds);
    }

    function forwardMessages(messageIds) {
        forwardRequest(messageIds);
        pageStack.clear();
    }

    function sendMessage( txt, inReplyTo ) {
        messages_model.sendMessage(txt, inReplyTo)
    }

    function focusOn(msgId) {
        focus_msg_timer.msgId = msgId
    }

    function focusOnMessage(msgId) {
        var idx = messages_model.indexOf(msgId)
        mlist.positionViewAtIndex(idx, ListView.Center)
    }

    function copy() {
        if(selectedText.length == 0)
            return

        Devices.clipboard = selectedText
    }
}
