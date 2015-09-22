import QtQuick 2.0

ListModel {
    dynamicRoles: true

    Component.onCompleted: {
        setup();
    }

    /*
     * This is a workaround, ListModel ListElement properties
     * don't accept script values like i18n.tr calls..
     */
    function setup() {
        append({
            // TRANSLATORS: Application name.
            "title": i18n.tr("Telegram"),
            "body": i18n.tr("Welcome to the era<br>of fast and secure messaging")
        });
        append({
            // TRANSLATORS: Adjective, describing fast application.
            "title": i18n.tr("Fast"),
            "body": i18n.tr("<b>Telegram</b> delivers messages faster<br> than any other application")
        });
        append({
            // TRANSLATORS: Adjective, describing non-paid application.
            "title": i18n.tr("Free"),
            "body": i18n.tr("<b>Telegram</b> is free forever. No ads.<br> No subscription fees")
        });
        append({
            // TRANSLATORS: Adjective, describing secure application.
            "title": i18n.tr("Secure"),
            "body": i18n.tr("<b>Telegram</b> keeps your messages safe<br> from hacker attacks")
        });
        append({
            // TRANSLATORS: Adjective, describing a powerful/efficient application.
            "title": i18n.tr("Powerful"),
            "body": i18n.tr("<b>Telegram</b> has no limits on the size<br> of your media and chats")
        });
        append({
            // TRANSLATORS: Adjective, describing cloud based app that allows syncing.
            "title": i18n.tr("Cloud-Based"),
            "body": i18n.tr("<b>Telegram</b> lets you access your messages<br> from multiple devices")
        });
        append({
            // TRANSLATORS: Adjective, describing application allowing for private conversations.
            "title": i18n.tr("Private"),
            "body": i18n.tr("<b>Telegram</b> messages are heavily encrypted<br>")
        });
    }
}
