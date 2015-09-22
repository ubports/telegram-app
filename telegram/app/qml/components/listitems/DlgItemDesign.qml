import QtQuick 2.0
import Ubuntu.Components 0.1
import Ubuntu.Components.ListItems 0.1


Empty {
    id: baseListItem

    /*!
      \preliminary
      The location of the icon to show in the list item (optional), or an Item that is
      shown on the left side inside the list item. The icon will automatically be
      anchored to the left side of the list item, and if its height is undefined, to the top
      and bottom of the list item.
      \qmlproperty variant icon
    */
    property variant icon

    /*!
      \preliminary
      The location of the icon to show in the list item if iconSource failed to load (optional).
      \qmlproperty url fallbackIconSource
     */
    property alias fallbackIconSource: iconHelper.fallbackSource

    /*!
      \preliminary
      Show or hide the frame around the icon
      \qmlproperty bool iconFrame
     */
    property alias iconFrame: iconHelper.hasFrame

    /*!
      \preliminary
      The text that is shown in the list item as a label.
      \qmlproperty string text
     */
    property alias text: label.text

    /*!
      \preliminary
      The list of strings that will be shown under the label text
      \qmlproperty string subText
     */
    property alias subText: subLabel.text

    property alias date: date.text

    property alias unread: unread.text

    __height: Math.max(middleVisuals.height, units.gu(6))

    __contentsMargins: units.gu(1)

    property bool __iconIsItem: false

    /*!
      \internal
     */
    onIconChanged: {
        __iconIsItem = (typeof icon != "string")
        if (typeof icon == "string") {
            // icon is the url of an image
            iconHelper.source = icon;
            __iconIsItem = false;
        } else {
            // icon is an Item.
            __iconIsItem = true;
            iconHelper.source = "";

//            icon.parent = baseListItem;
//            icon.anchors.left = baseListItem.left;
//            icon.anchors.margins = Qt.binding(function() { return baseListItem.__contentsMargins });
//            if (!icon.height) {
//                icon.anchors.top = baseListItem.top;
//                icon.anchors.bottom = baseListItem.bottom;
//            }
        }
    }

    /*!
      \internal
     */
    property alias children: middle.children

    IconVisual {
        id: iconHelper
        width: height
        height: Math.min(units.gu(5), parent.height - units.gu(1))
        anchors {
            left: parent.left
            leftMargin: baseListItem.__contentsMargins
            verticalCenter: parent.verticalCenter
        }
    }


    Item {
        id: middle
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: iconHelper.right
            right: parent.right
            rightMargin: baseListItem.__contentsMargins
            leftMargin: baseListItem.__contentsMargins
        }

        Item  {
            id: middleVisuals
            anchors {
                left: parent.left
                right: parent.right
                verticalCenter: parent.verticalCenter
            }

            height: childrenRect.height + labelRect.anchors.topMargin + subLabelRect.anchors.bottomMargin

            Item {
                id: upRow
                anchors {
                    top: parent.top
                    left: parent.left
                    right: parent.right
                }

                height: iconHelper.height / 2.5

                Item {
                    id: labelRect
                    anchors {
                        left: parent.left
                        right: dateRect.left
                    }
                    height: parent.height
                    width: childrenRect.width

                    LabelVisual {
                        anchors.fill: parent
                        id: label
                        font.weight: Font.Bold
                        wrapMode: Text.WrapAnywhere
                        maximumLineCount: 1
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignLeft
                    }
                }

                Item {
                    id: dateRect
                    anchors {
                        right: parent.right
                    }
                    height: parent.height
                    width: childrenRect.width

                    LabelVisual {
                        id: date
                        fontSize: "x-small"
                        wrapMode: Text.NoWrap
                        maximumLineCount: 1
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                    }
                }

            }


            Item {
                id: downRow
                anchors {
                    top: upRow.bottom
                    left: parent.left
                    right: parent.right
                }

                height: iconHelper.height / 2.5

                Item {
                    id: subLabelRect
                    anchors {
                        left: parent.left
                        right: unreadRect.left
                    }
                    height: parent.height
                    width: childrenRect.width

                    LabelVisual {
                        id: subLabel
                        anchors.fill: parent
                        fontSize: "small"
                        wrapMode: Text.WrapAnywhere
                        maximumLineCount: 1
                        verticalAlignment: Text.AlignBottom
                        horizontalAlignment: Text.AlignLeft
                    }
                }

                Rectangle {
                    id: unreadRect
                    anchors {
                        right: parent.right
                    }
                    visible: unread.text > '0'
                    color: "lightgreen"
                    height: parent.height
                    width: height//childrenRect.width

                    LabelVisual {
                        id: unread
                        anchors.fill: parent
                        fontSize: "x-small"
                        wrapMode: Text.NoWrap
                        maximumLineCount: 1
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                    }
                }
            }

        }
    }


}
