/*
 * Copyright (C) 2014 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
    Example:

    MainView {
        objectName: "mainView"

        applicationName: "com.ubuntu.developer.boiko.bottomedge"

        width: units.gu(100)
        height: units.gu(75)

        Component {
            id: pageComponent

            PageWithBottomEdge {
                id: mainPage
                title: i18n.tr("Main Page")

                Rectangle {
                    anchors.fill: parent
                    color: "white"
                }

                bottomEdgePageComponent: Page {
                    title: "Contents"
                    anchors.fill: parent
                    //anchors.topMargin: contentsPage.flickable.contentY

                    ListView {
                        anchors.fill: parent
                        model: 50
                        delegate: ListItems.Standard {
                            text: "One Content Item: " + index
                        }
                    }
                }
                bottomEdgeTitle: i18n.tr("Bottom edge action")
            }
        }

        PageStack {
            id: stack
            Component.onCompleted: stack.push(pageComponent)
        }
    }

*/

import QtQuick 2.2
import Ubuntu.Components 1.1

Page {
    id: page

    property alias bottomEdgePageComponent: edgeLoader.sourceComponent
    property alias bottomEdgePageSource: edgeLoader.source
    property alias bottomEdgeTitle: tipLabel.text
    property bool bottomEdgeEnabled: true
    property int bottomEdgeExpandThreshold: page.height * 0.2
    property int bottomEdgeExposedArea: bottomEdge.state !== "expanded" ? (page.height - bottomEdge.y - bottomEdge.tipHeight) : _areaWhenExpanded
    property bool reloadBottomEdgePage: true

    readonly property alias bottomEdgePage: edgeLoader.item
    readonly property bool isReady: ((bottomEdge.y === 0) && bottomEdgePageLoaded && edgeLoader.item.active)
    readonly property bool isCollapsed: (bottomEdge.y === page.height)
    readonly property bool bottomEdgePageLoaded: (edgeLoader.status == Loader.Ready)
    property var temporaryProperties: null

    property bool _showEdgePageWhenReady: false
    property int _areaWhenExpanded: 0

    signal bottomEdgeReleased()
    signal bottomEdgeDismissed()


    function showBottomEdgePage(source, properties)
    {
        edgeLoader.setSource(source, properties)
        temporaryProperties = properties
        _showEdgePageWhenReady = true
    }

    function setBottomEdgePage(source, properties)
    {
        edgeLoader.setSource(source, properties)
    }

    function _pushPage()
    {
        if (edgeLoader.status === Loader.Ready) {
            edgeLoader.item.active = true
            page.pageStack.push(edgeLoader.item)
            if (edgeLoader.item.flickable) {
                edgeLoader.item.flickable.contentY = -page.header.height
                edgeLoader.item.flickable.returnToBounds()
            }
            if (edgeLoader.item.ready)
                edgeLoader.item.ready()
        }
    }


    Component.onCompleted: {
        // avoid a binding on the expanded height value
        var expandedHeight = height;
        _areaWhenExpanded = expandedHeight;
    }

    onActiveChanged: {
        if (active) {
            bottomEdge.state = "collapsed"
        }
    }

    onBottomEdgePageLoadedChanged: {
        if (_showEdgePageWhenReady && bottomEdgePageLoaded) {
            bottomEdge.state = "expanded"
            _showEdgePageWhenReady = false
        }
    }

    InverseMouseArea {
        anchors.fill: edgeLoader.item
        sensingArea: mainView
        enabled: !tip.hidden
        onPressed: {
            mouse.accepted = false
            page.focus = false
        }
        z: 1
    }

    Rectangle {
        id: bgVisual

        color: "black"
        anchors.fill: page
        opacity: 0.7 * ((page.height - bottomEdge.y) / page.height)
        z: 1
    }

    UbuntuShape {
        id: tip
        objectName: "bottomEdgeTip"

        property bool hidden: (activeFocus === false) || ((bottomEdge.y - units.gu(1)) < tip.y)

        enabled: mouseArea.enabled
        anchors {
            bottom: parent.bottom
            horizontalCenter: bottomEdge.horizontalCenter
            bottomMargin: hidden ? - height + units.gu(1) : -units.gu(1)
            Behavior on bottomMargin {
                SequentialAnimation {
                    // wait some msecs in case of the focus change again, to avoid flickering
                    PauseAnimation {
                        duration: 300
                    }
                    UbuntuNumberAnimation {
                        duration: UbuntuAnimation.SnapDuration
                    }
                }
            }
        }

        z: 1
        width: tipLabel.paintedWidth + units.gu(6)
        height: bottomEdge.tipHeight + units.gu(1)
        color: Theme.palette.normal.overlay
        Label {
            id: tipLabel

            anchors {
                top: parent.top
                left: parent.left
                right: parent.right
            }
            height: bottomEdge.tipHeight
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            opacity: tip.hidden ? 0.0 : 1.0
            Behavior on opacity {
                UbuntuNumberAnimation {
                    duration: UbuntuAnimation.SnapDuration
                }
            }
        }
    }

    Rectangle {
        id: shadow

        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: units.gu(1)
        z: 1
        opacity: 0.0
        gradient: Gradient {
            GradientStop { position: 0.0; color: "transparent" }
            GradientStop { position: 1.0; color: Qt.rgba(0, 0, 0, 0.2) }
        }
    }

    MouseArea {
        id: mouseArea

        property real previousY: -1
        property string dragDirection: "None"

        preventStealing: true
        drag {
            axis: Drag.YAxis
            target: bottomEdge
            minimumY: bottomEdge.pageStartY
            maximumY: page.height
        }
        enabled: edgeLoader.status == Loader.Ready

        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom

        }
        height: bottomEdge.tipHeight
        z: 1

        onReleased: {
            page.bottomEdgeReleased()
            if ((dragDirection === "BottomToTop") &&
                bottomEdge.y < (page.height - bottomEdgeExpandThreshold - bottomEdge.tipHeight)) {
                bottomEdge.state = "expanded"
            } else {
                bottomEdge.state = "collapsed"
            }
            previousY = -1
            dragDirection = "None"
        }

        onPressed: {
            previousY = mouse.y
            tip.forceActiveFocus()
        }

        onMouseYChanged: {
            var yOffset = previousY - mouseY
            // skip if was a small move
            if (Math.abs(yOffset) <= units.gu(2)) {
                return
            }
            previousY = mouseY
            dragDirection = yOffset > 0 ? "BottomToTop" : "TopToBottom"
        }
    }

    Rectangle {
        id: bottomEdge
        objectName: "bottomEdge"

        readonly property int tipHeight: units.gu(3)
        readonly property int pageStartY: 0

        z: 1
        color: Theme.palette.normal.background
        clip: true
        anchors {
            left: parent.left
            right: parent.right
        }
        height: page.height
        y: height
        visible: page.bottomEdgeEnabled && !page.isCollapsed
        state: "collapsed"
        states: [
            State {
                name: "collapsed"
                PropertyChanges {
                    target: bottomEdge
                    y: bottomEdge.height
                }
            },
            State {
                name: "expanded"
                PropertyChanges {
                    target: bottomEdge
                    y: bottomEdge.pageStartY
                }
            },
            State {
                name: "floating"
                when: mouseArea.drag.active
                PropertyChanges {
                    target: shadow
                    opacity: 1.0
                }
            }
        ]

        transitions: [
            Transition {
                to: "expanded"
                SequentialAnimation {
                    alwaysRunToEnd: true

                    SmoothedAnimation {
                        target: bottomEdge
                        property: "y"
                        duration: UbuntuAnimation.FastDuration
                        easing.type: Easing.Linear
                    }
                    SmoothedAnimation {
                        target: edgeLoader
                        property: "anchors.topMargin"
                        to: - units.gu(4)
                        duration: UbuntuAnimation.FastDuration
                        easing.type: Easing.Linear
                    }
                    SmoothedAnimation {
                        target: edgeLoader
                        property: "anchors.topMargin"
                        to: 0
                        duration: UbuntuAnimation.FastDuration
                        easing: UbuntuAnimation.StandardEasing
                    }
                    ScriptAction {
                        script: page._pushPage()
                    }
                }
            },
            Transition {
                from: "expanded"
                to: "collapsed"
                SequentialAnimation {
                    alwaysRunToEnd: true

                    ScriptAction {
                        script: {
                            Qt.inputMethod.hide()
                            edgeLoader.item.parent = edgeLoader
                            edgeLoader.item.anchors.fill = edgeLoader
                            edgeLoader.item.active = false
                        }
                    }
                    SmoothedAnimation {
                        target: bottomEdge
                        property: "y"
                        duration: UbuntuAnimation.SlowDuration
                    }
                    ScriptAction {
                        script: {
                            // destroy current bottom page
                            if (page.reloadBottomEdgePage) {
                                edgeLoader.active = false
                                // remove properties from old instance
                                if (edgeLoader.source !== "") {
                                    var properties = {}
                                    if (temporaryProperties !== null) {
                                        properties = temporaryProperties
                                        temporaryProperties = null
                                    }

                                    edgeLoader.setSource(edgeLoader.source, properties)
                                }
                                // tip will receive focus on page active true
                            } else {
                                tip.forceActiveFocus()
                            }

                            // notify
                            page.bottomEdgeDismissed()

                            edgeLoader.active = true
                        }
                    }
                }
            },
            Transition {
                from: "floating"
                to: "collapsed"
                SmoothedAnimation {
                    target: bottomEdge
                    property: "y"
                    duration: UbuntuAnimation.FastDuration
                }
            }
        ]

        Loader {
            id: edgeLoader

            asynchronous: true
            anchors.fill: parent
            //WORKAROUND: The SDK move the page contents down to allocate space for the header we need to avoid that during the page dragging
            Binding {
                target: edgeLoader.status === Loader.Ready ? edgeLoader : null
                property: "anchors.topMargin"
                value:  edgeLoader.item && edgeLoader.item.flickable ? edgeLoader.item.flickable.contentY : 0
                when: !page.isReady
            }

            onLoaded: {
                tip.forceActiveFocus()
                if (page.isReady && edgeLoader.item.active !== true) {
                    page._pushPage()
                }
            }
        }
    }
}
