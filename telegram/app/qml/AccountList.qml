import QtQuick 2.0
import Ubuntu.Components.ListItems 1.3 as ListItem
import Ubuntu.Components 1.3

import AsemanTools 1.0
import TelegramQML 1.0

ListView {
    height: profiles.count * units.gu(6)

    property alias hash: hashObject
    property alias list: listObject
    property string currentKey

    signal accountSelected(string number)

    HashObject {
        id: hashObject
    }

    ListObject {
        id: listObject
    }

    model: profiles
    delegate: ListItem.Standard {
        text: number
        showDivider: false

        onClicked: accountSelected(number)
    }
}
