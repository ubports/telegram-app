import QtQuick 2.4
import Ubuntu.Components 1.3

ListItem {
    id: item

    property alias title: itemLayout.title
    property alias subtitle: itemLayout.subtitle

    height: itemLayout.height
    divider.visible: false

    ListItemLayout {
        id: itemLayout

        title.font.bold: true
        title.wrapMode: Text.Wrap
        title.textSize: Label.Large
        title.maximumLineCount: 2
    }
}
