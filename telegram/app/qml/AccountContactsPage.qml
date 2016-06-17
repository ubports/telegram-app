import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components 1.3 as UC
import Ubuntu.Components.ListItems 1.3 as ListItems
import Ubuntu.Components.Popups 1.3 as Popups
import Ubuntu.Contacts 0.1

import AsemanTools 1.0
import TelegramQML 1.0

import "components"
import "js/time.js" as Time
import "js/colors.js" as Colors

// Cutegram: AccountContactList.qml

Page {
    id: page
    flickable: null

    header: default_header

    PageHeader {
        id: default_header
        visible: page.header === default_header
        title: i18n.tr("Contacts")
        trailingActionBar.actions: [
            Action {
                iconName: "search"
                text: i18n.tr("Search")
                onTriggered: page.state = "search"
            },
            Action {
                iconName: "contact-new"
                // TRANSLATORS: As in: add new contact
                text: i18n.tr("Add")
                onTriggered: addPressed()
            }
        ]
    }

    PageHeader {
        id: search_header
        visible: page.header === search_header
        title: i18n.tr("Contacts")
        trailingActionBar.actions: []
        leadingActionBar.actions: Action {
            // TRANSLATORS: As in, back out of contacts page.
            text: i18n.tr("Back")
            iconName: "back"
            onTriggered: {
                search_text_field.text = "";
                page.state = "default";
            }
        }
        contents: TextField {
            id: search_text_field
            anchors {
                right: parent ? parent.right : undefined
                rightMargin: units.gu(2)
                left: parent ? parent.left : undefined
                leftMargin: units.gu(2)
                verticalCenter: parent ? parent.verticalCenter : undefined
            }
            focus: true
            inputMethodHints: Qt.ImhNoPredictiveText
            onTextChanged: searchChanged(text)
            // TRANSLATORS: Placeholder for contacts search field.
            placeholderText: i18n.tr("Search contacts...")

            onTriggered: {
                // TODO No worky.
                page.state = "default";
            }
        }
    }

    PageHeader {
        id: new_secret_chat_header
        visible: page.header === new_secret_chat_header
        title: i18n.tr("New Secret Chat")
    }

    PageHeader {
        id: add_to_group_header
        visible: page.header === add_to_group_header
        title: i18n.tr("Add to group")
        trailingActionBar.actions: [
            Action {
                iconName: "search"
                text: i18n.tr("Search")
                onTriggered: {
                    page.state = "search";
                }
            },
            Action {
                iconName: "contact-new"
                text: i18n.tr("Add")
                onTriggered: addPressed()
            }
        ]
    }

    PageHeader {
        id: new_group_chat_header
        visible: page.header === new_group_chat_header
        title: i18n.tr("New Group")
        leadingActionBar.actions: new_group_chat_header.cancel
        trailingActionBar.actions: hasGroupCount
                                   ? new_group_chat_header.confirm
                                   : new_group_chat_header.none

        property var none: []
        property list<Action> confirm: [
            Action {
                iconName: "ok"
                text: i18n.tr("OK")
                enabled: hasGroupTitle
                onTriggered: createChatPressed()
            }
        ]
        property Action cancel: Action {
            iconName: "back"
            text: i18n.tr("Back")
            onTriggered: {
                page.state = "default"
                pageStack.removePages(page);
            }
        }
    }

    state: "default"
    states: [
        State {
            name: "default"
            PropertyChanges {
                target: page
                header: default_header
            }
        },
        PageHeadState {
            name: "search"
            PropertyChanges {
                target: page
                header: search_header
            }
        },
        PageHeadState {
            name: "new-secret-chat"
            PropertyChanges {
                target: page
                header: new_secret_chat_header
            }
        },
        PageHeadState {
            name: "add-to-group"
            PropertyChanges {
                target: page
                header: add_to_group_header
            }

        },
        PageHeadState {
//            id: new_group_chat_states
            name: "new-group-chat"
            PropertyChanges {
                target: page
                header: new_group_chat_header
            }
        }
    ]

    property bool newSecretChatMode: state == "new-secret-chat"
    property bool groupChatMode: state == "new-group-chat"
    property bool addToGroupMode: state == "add-to-group"
    property int groupChatId: -1
    property alias groupChatTitle: group_chat_title_text_field.text

    property Telegram telegram
    property string searchTerm: ""
    property alias isSelectingGroup: contact_list.isInSelectionMode
    property bool hasGroupCount: list.count > 1 // == contact_list.selectedItems.count
    property bool hasGroupTitle: groupChatTitle.length > 0

    signal selected(variant cid)
    signal searchChanged(string text)
    signal addContactManually()
    signal addContact(int uid, var contact)

    onSearchChanged: {
        searchTerm = text;
    }

    onStateChanged: {
        if (state == "new-group-chat") {
            contact_list.startSelection();
        } else {
            contact_list.cancelSelection();
        }
        contact_list.refreshSubtitle();
    }

    ActivityIndicator {
        id: activity_indicator
        anchors.centerIn: parent
        width: height
        height: units.gu(4)
        running: contacts_model.initializing
        z: 1
    }

    ListObject {
        id: list
    }

    DetailedContactsModel {
        id: contacts_model
        telegram: page.telegram
    }

    ContactsFilterModel {
        id: contacts_filter_model
        sourceModel: contacts_model
        searchTerm: page.searchTerm
    }

    TextField {
        id: group_chat_title_text_field
        anchors {
            top: page.header.bottom
            topMargin: isVisible ? units.gu(1) : 0
            left: parent.left
            leftMargin: units.gu(1)
            right: parent.right
            rightMargin: units.gu(1)
        }
        height: isVisible ? units.gu(4) : 0
        opacity: isVisible ? 1.0 : 0.0
        // TRANSLATORS: Placeholder for new group chat title
        placeholderText: i18n.tr("Chat title")
        inputMethodHints: Qt.ImhNoPredictiveText

        onAccepted: createChatPressed()

        // Use height and opacity, we can't animate on visibility.
        property bool isVisible: hasGroupCount

        Behavior on height {
            NumberAnimation { duration: 300 }
        }
        Behavior on opacity {
            NumberAnimation { duration: 300 }
        }
    }

    MultipleSelectionListView {
        id: contact_list
        anchors {
            top: group_chat_title_text_field.visible ? group_chat_title_text_field.bottom : parent.top
            topMargin: group_chat_title_text_field.isVisible ? units.gu(1) : 0
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        cacheBuffer: units.gu(8)*20
        maximumFlickVelocity: 5000
        flickDeceleration: 2000
        clip: true

        section {
            property: "firstName"
            criteria: ViewSection.FirstCharacter
            labelPositioning: ViewSection.InlineLabels
            delegate: ListItems.Header {
                text: section != "" ? section : "#"

            }
        }

        listModel: searchTerm == "" ? contacts_model : contacts_filter_model
        listDelegate: TelegramContactsListItem {
            id: delegate
            telegram: page.telegram
            user: model.user
            userId: model.id
            fullName: model.fullName
            status: model.status

            selected: contact_list.isSelected(delegate)

            onClicked: {
                if (contact_list.isInSelectionMode) {
                    if (list.contains(model.id)) {
                        list.removeOne(model.id);
                        contact_list.deselectItem(delegate);
                    } else {
                        if (list.count >= 200) return;
                        list.append(model.id);
                        contact_list.selectItem(delegate);
                    }
//                    refreshSubtitle();
                } else if (newSecretChatMode) {
                    telegramObject.messagesCreateEncryptedChat(model.id);
                    pageStack.removePages(page);
                } else if (addToGroupMode) {
                    var dialog = PopupUtils.open(add_contact_to_group_chat_component);
                    dialog.setData(user.id, user.fullName, groupChatTitle);
                } else {
                    page.selected(userId);
                }
            }
        }

        onSelectedItemsChanged: {
//            refreshSubtitle();
        }

        onSelectionCanceled: {
            list.clear();
            state = "default";
        }

        onSelectionDone: {
            console.log("members: " +list.count);
            telegram.messagesCreateChat(list.list, groupChatTitle);
            state = "default";
            groupChatTitle = "";
            pageStack.removePages(page);
        }

        function refreshSubtitle() {
            // TODO
        }

        Component.onCompleted: {
            // FIXME: workaround for qtubuntu not returning values depending on the grid unit definition
            // for Flickable.maximumFlickVelocity and Flickable.flickDeceleration
            var scaleFactor = units.gridUnit / 8;
            maximumFlickVelocity = maximumFlickVelocity * scaleFactor;
            flickDeceleration = flickDeceleration * scaleFactor;
        }
    }

    Scrollbar {
        flickableItem: contact_list
    }

    Component {
         id: add_contact_component
         Popups.Dialog {
             id: add_contact_dialog
             title: i18n.tr("Add Contact")
             UC.Button {
                // TRANSLATORS: Pick contact to add from address book.
                 text: i18n.tr("From Address Book")
                 color: UbuntuColors.orange
                 onClicked: {
                     PopupUtils.close(add_contact_dialog);
                     contact_importer.requestContact();
                 }
             }
             UC.Button {
                // TRANSLATORS: Manually enter details of contact being added.
                 text: i18n.tr("Enter Details")
                 color: UbuntuColors.orange
                 onClicked: {
                     PopupUtils.close(add_contact_dialog);
                     addContactManually();
                 }
             }
             UC.Button {
                 text: i18n.tr("Cancel")
                 onClicked: PopupUtils.close(add_contact_dialog)
             }
         }
    }

    ContactImport {
        id: contact_importer

        onContactsReceived: {
            contact_parser.vCardUrl = url;
        }
    }

    Component {
        id: contact_import_dialog_component
        Popups.Dialog {
            id: contact_import_dialog
            title: contact_parser.dialogTitle
            text: contact_parser.dialogText
            UC.Button {
                text: i18n.tr("OK")
                color: UbuntuColors.orange
                onClicked: PopupUtils.close(contact_import_dialog)
            }
        }
    }

    Component {
        id: add_contact_to_group_chat_component
        Popups.Dialog {
            property int userId: -1

            id: add_contact_to_group_chat
            title: i18n.tr("Telegram")
            TextField {
                id: messages_to_forward
                anchors {
                    left: parent.left
                    leftMargin: units.gu(1)
                    right: parent.right
                    rightMargin: units.gu(1)
                }
                inputMethodHints: Qt.ImhDigitsOnly
                horizontalAlignment: Text.AlignHCenter
                text: "50"
            }

            UC.Button {
                text: i18n.tr("OK")
                color: UbuntuColors.orange
                onClicked: {
                    var msgCount = parseInt(messages_to_forward.text) || 20;
                    if (msgCount < 0) msgCount = 0;
                    add_contact_to_group_chat_timer.startWithData(userId, msgCount);
                    PopupUtils.close(add_contact_to_group_chat);
                }
            }
            UC.Button {
                text: i18n.tr("Cancel")
                onClicked: PopupUtils.close(add_contact_to_group_chat)
            }

            function setData(userId, userName, groupName) {
                add_contact_to_group_chat.userId = userId;
                // TRANSLATORS: Asking whether to add person %1 to group chat %2 and how many last messages to forward.
                var text = i18n.tr("Add %1 to %2?\n\nNumber of last messages to forward:")
                        .arg(userName).arg(groupName);
                add_contact_to_group_chat.text = text;
            }
        }
    }

    Timer {
        property int userId: -1
        property int forwardedMessageCount: 20

        id: add_contact_to_group_chat_timer
        interval: 300
        repeat: false

        onTriggered: {
            telegram.messagesAddChatUser(groupChatId, userId, forwardedMessageCount);
            pageStack.pop();
        }

        function startWithData(userId, msgCount) {
            add_contact_to_group_chat_timer.userId = userId;
            add_contact_to_group_chat_timer.forwardedMessageCount = msgCount;
            start();
        }
    }

    VCardParser {
        id: contact_parser

        property int importedContactCount: 0
        property string dialogTitle: ""
        property string dialogText: ""

        signal contactsImportedContacts(int importedCount, int retryCount)

        function parseContact(vcardContact) {
            var contact = {};
            contact['phone'] = vcardContact.phoneNumber.number;
            contact['firstName'] = vcardContact.name.firstName;
            contact['lastName'] = vcardContact.name.lastName;
            if (contact['firstName'] === "") {
                var labelName = vcardContact.displayLabel.label.split(" ");
                contact['firstName'] = labelName[0];
                if (labelName.length > 1) {
                    labelName.shift();
                    contact['lastName'] = labelName.toString().replace(",", "");
                } else {
                    contact['lastName'] = "";
                }
            }
            return contact;
        }

        onContactsImportedContacts: {
            telegram.contactsImportedContacts.disconnect(contact_parser.contactsImportedContacts);
            console.log("imported " + importedCount + ", retry " + retryCount);

            console.log("Imported " + importedCount + " contacts out of " + importedContactCount);
            if (importedCount > 0) {
                // TRANSLATORS: Title of the dialog with contact(s) import result.
                dialogTitle = i18n.tr("Contacts imported");
            } else {
                // TRANSLATORS: Title of the dialog with contact(s) import result.
                dialogTitle = i18n.tr("No contacts imported");
            }
            if (importedCount == 0) {
                dialogText = "";
            } else {
                if (importedCount == 1 && importedContactCount == 1) {
                    // TRANSLATORS: Indicates result of a single contact import.
                    dialogText = i18n.tr("This contact is on Telegram.");
                } else {
                    // TRANSLATORS: Indicates result of contacts import (how many have been imported).
                    dialogText = i18n.tr("%1 out of %2 contacts are on Telegram.").arg(importedCount).arg(importedContactCount);
                }
            }

            dialogText = importedCount == 0 ? "" :
                    
            PopupUtils.open(contact_import_dialog_component);
        }

        onVcardParsed: {
            if (contacts.length === 0) {
                return;
            }
            console.log("Parsed " + contacts.length + " contacts.");
            if (contacts.length === 1) {
                var singleContact = parseContact(contacts[0]);
                importedContactCount = 1;
                pageStack.addPageToNextColumn(page, add_contact_page_component, {
                        "telegram": telegram,
                        "addManually": true,
                        "contact": singleContact
                });
            } else {
                var contactList = [];
                for (var i = 0; i < contacts.length; i++) {
                    var contact = parseContact(contacts[i]);
                    if (contact.phone !== "" && contact.firstName !== "") {
                        contactList.push(contact);
                    }
                }
                telegram.contactsImportedContacts.connect(contact_parser.contactsImportedContacts);
                importedContactCount = contactList.length;
                import_timer.importContacts(contactList);
            }
        }
    }

    Timer {
        property var contactList: []

        id: import_timer
        interval: 500;
        running: false;
        repeat: true;
        triggeredOnStart: false

        onTriggered: {
            telegram.addContacts(contactList, false);
            import_timer.stop();
        }

        function importContacts(contactList) {
            import_timer.contactList = contactList;
            import_timer.start();
        }
    }

    function addPressed() {
        PopupUtils.open(add_contact_component);
    }

    function createChatPressed() {
        Qt.inputMethod.commit();

        if (hasGroupCount && hasGroupTitle) {
            contact_list.endSelection();
        }
    }
}
