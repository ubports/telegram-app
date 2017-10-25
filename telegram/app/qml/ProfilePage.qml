import QtQuick 2.4
import QtQuick.Layouts 1.1
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import Ubuntu.Content 1.3
import Ubuntu.Components.Popups 1.3 as Popups
import Ubuntu.Components 1.3 as UC

import TelegramQML 1.0
import AsemanTools 1.0

import "components"
import "js/avatar.js" as Avatar
import "js/time.js" as Time
import "js/colors.js" as Colors

Page {

    property Telegram telegram
    property Dialog dialog

    property bool isChat: dialog.peer.chatId != 0
    property bool isChannel: dialog.peer.channelId != 0
    property User user: telegram.user(dialog.encrypted ? enChatUid : dialog.peer.userId)
    property Chat chat: telegram.chat(isChannel ? dialog.peer.channelId : dialog.peer.chatId)
    property variant dialogId: isChannel ? dialog.peer.channelId : isChat ? dialog.peer.chatId : (dialog.encrypted ? enChatUid : dialog.peer.userId)

    property EncryptedChat enchat: telegram.encryptedChat(dialog.peer.userId)
    property int enChatUid: enchat.adminId==telegram.me ? enchat.participantId : enchat.adminId

    property bool refreshing: false
    property bool signalBlocker: false
    property bool isAdmin: false
    property int onlineCount: 0

    property var noActions: []
    property list<Action> groupActions: [
        Action {
            iconName: "contact-new"
            // TRANSLATORS: Action text to add member to group chat.
            text: i18n.tr("Add member")
            onTriggered: addMember()
        },
        Action {
            iconName: "stock_image"
            // TRANSLATORS: Action text to change group photo.
            text: i18n.tr("Change photo")
            onTriggered: changeGroupPhoto()
       },
        Action {
            iconName: "edit"
            // TRANSLATORS: Action text to change group chat title.
            text: i18n.tr("Change Group Title")
            onTriggered: changeChatTitle()
        }
    ]

    id: profile_page
    objectName: "profilePage"
    title: isChannel ? i18n.tr("Channel Info") : isChat ? i18n.tr("Group Info") : i18n.tr("Contact Info")

    header: PageHeader {
        title: profile_page.title
        trailingActionBar.actions: isChat || isChannel ? groupActions : noActions
        leadingActionBar.actions: Action {
            id: back_action
            objectName: "profileBack"
            iconName: "back"
            onTriggered: pageStack.removePages(profile_page);
        }
    }

    signal openDialog(var dialogId)

    onIsChatChanged: {
        if (isChat) {
            online_count_refresher.restart()
        } else {
            online_count_refresher.stop()
        }
    }

    onIsChannelChanged: {
        if (isChannel) {
            online_count_refresher.restart()
        } else {
            online_count_refresher.stop()
        }
    }

    onUserChanged: {
        if (user == telegram.nullUser) return;
        telegram.getFile(user.photo.photoBig);
    }

    onChatChanged: {
        if (user == telegram.nullUser) return;
        telegram.getFile(chat.photo.photoBig);
    }

    Component.onCompleted: {
        if (dialogId == 0) return;

        notify_check.silentChecked = !telegram.userData.isMuted(dialogId);
        if (isChat) {
            telegram.messagesGetFullChat(chat.id)
        } else if (isChannel){
            telegram.channelsGetFullChannel(chat.id)
        } else {
            telegram.usersGetFullUser(user.id)
        }
    }

    Connections {
        target: telegram.userData
        // onFavoriteChanged: {
        //     if (id != dialogId) return;
        //     favorite_check.checked = telegram.userData.isFavorited(dialogId);
        // }
        onMuteChanged: {
            if (id != dialogId) return;
            notify_check.silentChecked = !telegram.userData.isMuted(id);
        }
        // onValueChanged: {
        //     if (key != "love") return;
        //     love_check.checked = (telegram.userData.value("love") == dialogId);
        // }
    }

    Connections {
        target: telegram
        onUserBlocked: {
            console.log("userId" + userId);
            console.log("user.id" + user.id);
            if (userId == user.id) {
                block_check.silentChecked = true;
            }
        }
        onUserUnblocked: {
            if (userId == user.id) {
                block_check.silentChecked = false;
            }
        }
    }

    function addMember() {
        pageStack.addPageToNextColumn(profile_page, contacts_page_component, {
            telegram: telegram,
            state: "add-to-group",
            groupChatId: dialogId,
            groupChatTitle: details_item.text
        });
    }

    function changeGroupPhoto() {
        Qt.inputMethod.hide();
        photo_importer.requestMedia();
    }

    function changeChatTitle() {
        PopupUtils.open(change_Group_Title_Component);
    }

    Component {
        //Change title component
        id: change_Group_Title_Component
         Popups.Dialog {
             id: change_Group_Title_Dialog
             title: i18n.tr("Change Group Title")

             TextField {
                 id: group_Title_Textfield
                 anchors {
                     left: parent.left
                     leftMargin: units.gu(1)
                     right: parent.right
                     rightMargin: units.gu(1)
                 }
                 horizontalAlignment: Text.AlignLeft
                 //inputMethodHints: Qt.ImhEmailCharactersOnly
                 text: chat.title
                 // TRANSLATORS: Placeholder for new group chat title
                 placeholderText: i18n.tr("New group chat title")
                 inputMethodHints: Qt.ImhNoPredictiveText
                 validator: RegExpValidator {
                     regExp: /[\w\s]+/
                 }
             }

             UC.Button {
                 text: i18n.tr("Change Title")
                 color: UbuntuColors.orange
                 onClicked: {
                     //console.log("CHANGE TITLE qsTr: " + qsTr(group_Title_Textfield.text));
                     telegram.messagesEditChatTitle(dialogId, qsTr(group_Title_Textfield.text));
                     PopupUtils.close(change_Group_Title_Dialog);
                 }
             }
             UC.Button {
                 text: i18n.tr("Cancel")
                 onClicked: PopupUtils.close(change_Group_Title_Dialog)
             }
         }
    }

    MediaImport {
        id: photo_importer
        objectName: "profileImageImport"
        contentType: ContentType.Pictures

        onMediaReceived: {
            if (urls.length > 0) {
                var path = String(urls[0]).replace('file://', '')
                if (path.length == 0) return
                edit_photo_timer.upload(path)
            }
        }
    }

    Timer {
        id: edit_photo_timer

        property string photo: ""

        interval: 500

        function upload(photoPath) {
            stop();
            photo = photoPath;
            restart();
        }

        onTriggered: {
            if (telegram.connected) {
                telegram.messagesEditChatPhoto(dialogId, photo);
            }
        }
    }

    Rectangle {
        id: background
        anchors.fill: parent
        // Due to some fancy Page behavior, in fact,
        // this doesn't end up as white anyway..
        color: Colors.page_background
    }

    ActivityIndicator {
        anchors.centerIn: parent
        z: 10
        width: units.gu(4)
        height: width
        running: refreshing || chat_participants_model.refreshing
    }

    ClickableContactImage {
        id: profile_image
        objectName: "profileImage"
        anchors {
            top: parent.top
            topMargin: units.gu(2) + profile_page.header.height
            left: parent.left
            leftMargin: units.gu(2)
        }
        width: units.gu(7.5)
        height: width
        telegram: profile_page.telegram
        dialog: profile_page.dialog

        onClicked: {
            pageStack.addPageToNextColumn(profile_page, preview_page_component,
                    { "title": details_item.title, "photoPreviewSource": path });
        }
    }

    SubtitledListItem {
        id: details_item
        anchors {
            left: profile_image.right
            right: parent.right
            verticalCenter: profile_image.verticalCenter
        }

        title.text: {
            if (!dialog) return "";

            if (isChat || isChannel)
                return chat ? chat.title : "" // emojis.textToEmojiText(chat ? chat.title : "", 18, true);
            else
                return user ? user.firstName + " " + user.lastName : ""//emojis.textToEmojiText(user ? user.firstName + " " + user.lastName : "", 18, true);
        }

        subtitle.text: {
            //groupModel.count + " " + i18n.tr("members")

            var result = ""
            var list = dialog.typingUsers
            if (list.length == 0) {
                if( isChat || isChannel ) {
                    if (onlineCount > 0) {
                        // TRANSLATORS: %1 is how many members the group chat has, %2 is how many are online.
                        return i18n.tr("%1 members, %2 online").arg(chat.participantsCount).arg(onlineCount)
                    } else {
                        // TRANSLATORS: %1 is how many members the group chat has.
                        return i18n.tr("%1 members").arg(chat.participantsCount)
                    }
                    return result;
                } else {
                    switch(profile_page.user.status.classType)
                    {
                    case userStatusType.typeUserStatusOnline:
                        // TRANSLATORS: Indicates when the contact was last seen.
                        return i18n.tr("online");
                    case userStatusType.typeUserStatusOffline:
                        // TRANSLATORS: %1 is the time when the person was last seen.
                        return i18n.tr("last seen %1").arg(Time.formatLastSeen(i18n, profile_page.user.status.wasOnline * 1000));
                    case userStatusType.typeUserStatusRecently:
                        // TRANSLATORS: Indicates when the contact was last seen.
                        return i18n.tr("last seen recently");
                    case userStatusType.typeUserStatusLastWeek:
                        // TRANSLATORS: Indicates when the contact was last seen.
                        return i18n.tr("last seen within a week");
                    case userStatusType.typeUserStatusLastMonth:
                        // TRANSLATORS: Indicates when the contact was last seen.
                        return i18n.tr("last seen within a month");
                    default:
                        // TRANSLATORS: Indicates when the contact was last seen.
                        return i18n.tr("last seen a long time ago");
                    }
                }
                return result;
            }

            for( var i=0; i<list.length; i++ ) {
                var uid = list[i]
                var user = telegram.user(list[i])
                var uname = profile_page.user.firstName + " " + profile_page.user.lastName
                result += uname.trim()

                if( i < list.length-1 )
                    result += ", "
            }

            if (list.length == 1) {
                // TRANSLATORS: Indicates in the chat header who is typing.
                result = i18n.tr("%1 is typing").arg(result.trim());
            } else {
                // TRANSLATORS: Indicates in the chat header which contacts are typing.
                result = i18n.tr("%1 are typing").arg(result.trim());
            }
            return result;
        }
    }

    Column {
        id: user_section
        anchors {
            top: profile_image.bottom
            topMargin: units.gu(2)
            left: parent.left
            right: parent.right
        }
        visible: !isChat && !isChannel
        height: visible ? implicitHeight : 0

        ListItem.Empty {
            id: phone_row
            height: units.gu(7)
            anchors {
                left: parent.left
                right: parent.right
            }
            showDivider: false
            highlightWhenPressed: (user && user.phone) ? true : false

            AbstractButton {
                id: call_button
                width: parent.height
                height: width
                visible: user.phone
                anchors {
                    top: parent.top
                    left: parent.left
                    bottom: parent.bottom
                }
                Icon {
                    width: units.gu(3)
                    height: width
                    anchors.centerIn: parent
                    name: "add-to-call"
                }
                onClicked: event.accepted = false
            }

            Column {
                anchors {
                    top: parent.top
                    topMargin: units.dp(10)
                    left: call_button.right
                    leftMargin: units.dp(10)
                    bottom: parent.bottom
                    bottomMargin: units.dp(10)
                    right: parent.right
                    rightMargin: units.dp(10)
                }
                spacing: units.dp(4)

                Label {
                    objectName: "profilePhoneNumber"
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    fontSize: "large"
                    color: Colors.black
                    // TRANSLATORS: Indicates unknown (not provided) phone number of a user in the profile.
                    text: user.phone ? "+" + user.phone : i18n.tr("Unknown")
                }

                Label {
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    fontSize: "small"
                    color: Colors.grey
                    // TRANSLATORS: The subtitle for the user's phone field in user profile.
                    text: i18n.tr("Mobile")
                }
            }

            onClicked: {
                if (user && user.phone)
                    Qt.openUrlExternally("tel:///+" + user.phone)
            }
        }

        ListItem.Empty {
            id: username_row
            height: units.gu(7)
            anchors {
                left: parent.left
                right: parent.right
            }
            showDivider: false
            highlightWhenPressed: false
            visible: username_label.text != ""

            Item {
                id: username_spacer
                width: parent.height
                height: width
                anchors {
                    top: parent.top
                    left: parent.left
                    bottom: parent.bottom
                }
            }

            Column {
                id: username_column
                anchors {
                    top: parent.top
                    topMargin: units.dp(10)
                    left: username_spacer.right
                    leftMargin: units.dp(10)
                    bottom: parent.bottom
                    bottomMargin: units.dp(10)
                    right: parent.right
                }
                spacing: units.dp(4)

                Label {
                    objectName: "profileUserName"
                    id: username_label
                    fontSize: "large"
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    color: Colors.black
                    // TRANSLATORS: Title for the user's username field. Normally should take be "@username", no space between @ symbol and username.
                    text: user.username.length > 0 ? i18n.tr("@%1").arg(user.username) : ""
                }

                Label {
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    fontSize: "small"
                    color: Colors.grey
                    // TRANSLATORS: The subtitle for the user's username field in user profile.
                    text: "Username"
                }
            }
        }

        Item {
            height: units.gu(2)
            anchors {
                left: parent.left
                right: parent.right
            }

            ListItem.ThinDivider {
                id: username_divider
                anchors.verticalCenter: parent.verticalCenter
                height: units.dp(2)
                anchors {
                    left: parent.left
                    leftMargin: username_column.x
                    right: parent.right
                }
            }
        }
    }

    ListItem.Empty {
        id: notifications_row
        height: units.gu(7)
        anchors {
            top: user_section.bottom
            left: parent.left
            right: parent.right
        }
        showDivider: false

        onClicked: {
            notify_check.checked = !notify_check.checked;
        }

        AbstractButton {
            id: settings_icon
            width: parent.height
            height: width
            anchors {
                top: parent.top
                left: parent.left
                bottom: parent.bottom
            }
            Icon {
                width: units.gu(3)
                height: width
                anchors.centerIn: parent
                name: "notification"
            }
        }

        Label {
            anchors {
                top: parent.top
                topMargin: units.dp(10)
                left: settings_icon.right
                leftMargin: units.dp(10)
                bottom: parent.bottom
                bottomMargin: units.dp(10)
                right: notify_check.right
                rightMargin: units.dp(10)
            }
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft
            fontSize: "large"
            color: Colors.black
            // TRANSLATORS: Text of the notifications switch label in user profile page.
            text: i18n.tr("Notifications")
        }

        Switch {
            id: notify_check

            property bool silentChecked
            property bool override: false

            anchors {
                right: parent.right
                rightMargin: units.gu(2)
                verticalCenter: parent.verticalCenter
            }

            onSilentCheckedChanged: {
                override = true;
                checked = silentChecked;
                override = false;
            }

            onCheckedChanged: {
                if (override) return;

                if (checked)
                    telegram.unmute(dialogId);
                else
                    telegram.mute(dialogId);
                    
            }
        }
    }


    ListItem.Empty {
        id: blocked_row
        height: visible ? units.gu(7) : 0
        anchors {
            top: notifications_row.bottom
            left: parent.left
            right: parent.right
        }
        showDivider: false
        visible: !isChat && !isChannel

        onClicked: {
            block_check.checked = !block_check.checked;
        }

        Item {
            id: blocked_spacer
            width: parent.height
            height: width
            anchors {
                top: parent.top
                left: parent.left
                bottom: parent.bottom
            }
        }

        Label {
            anchors {
                top: parent.top
                topMargin: units.dp(10)
                left: blocked_spacer.right
                leftMargin: units.dp(10)
                bottom: parent.bottom
                bottomMargin: units.dp(10)
                right: block_check.right
                rightMargin: units.dp(10)
            }
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft
            fontSize: "large"
            color: Colors.black
            // TRANSLATORS: Text of the block user switch label in user profile page.
            text: i18n.tr("Block user")
        }

        Switch {
            id: block_check
            objectName: "switchBlock"

            property bool silentChecked
            property bool override: false

            anchors {
                right: parent.right
                rightMargin: units.gu(2)
                verticalCenter: parent.verticalCenter
            }

            onSilentCheckedChanged: {
                override = true;
                checked = silentChecked;
                override = false;
            }

            onCheckedChanged: {
                if (override) return;

                if (checked)
                    telegram.contactsBlock(user.id);
                else
                    telegram.contactsUnblock(user.id);
            }
        }
    }

    ChatParticipantsModel {
        id: chat_participants_model
        telegram: profile_page.telegram
        dialog: profile_page.dialog
    }

    ListView {
        id: participants_list
        objectName: "memberListView"
        anchors {
            top: blocked_row.bottom
            topMargin: units.gu(2)
            left: parent.left
            bottom: parent.bottom
            right: parent.right
        }
        maximumFlickVelocity: 5000
        flickDeceleration: 2000
        clip: true
        model: chat_participants_model
        delegate: TelegramContactsListItem {
            id: contact_item
            objectName: "dialog%1".arg(index)
            telegram: profile_page.telegram
            user: telegram.user(item.userId)

            onClicked: {
                if (item.userId != telegram.me) {
                    userTapBackHome = false;
                    profile_page.openDialog(item.userId)
                }
            }

            leadingActions: ListItemActions {
                actions: [
                    Action {
                        iconName: "remove"
                        // TRANSLATORS: Text of leading action of group chat participants list item.
                        text: i18n.tr("Remove from group")
                        visible: isAdmin
                        onTriggered: {
                            telegram.messagesDeleteChatUser(dialogId, user.id);
                        }
                    }
                ]
            }

            trailingActions: ListItemActions {
                actions: Action {
                    iconName: "info"
                    // TRANSLATORS: Text of trailing action of group chat participants list item.
                    text: i18n.tr("Info")
                    visible: (user.id != telegram.me)
                    onTriggered: {
                        pageStack.addPageToNextColumn(profile_page, profile_page_component, {
                                telegram: profile_page.telegram,
                                dialog: telegramObject.fakeDialogObject(user.id, false)
                        });
                    }
                }
            }
        }
    }

    Timer {
        id: online_count_refresher
        interval: 2000
        repeat: true
        triggeredOnStart: isChat || isChannel
        onTriggered: {
            onlineCount = 0
            var chatFull = telegram.chatFull(chat.id)
            isAdmin = (chatFull.participants.adminId == telegram.me);
            var participants = chatFull.participants.participants
            for(var i=0; i<participants.count; i++) {
                var userId = participants.at(i).userId
                var user = telegram.user(userId)
                if (user.status.classType == userStatusType.typeUserStatusOnline)
                    onlineCount++
            }
        }
    }
}
