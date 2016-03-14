/*
 * Copyright 2015 Canonical Ltd.
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

import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Content 0.1

import TelegramQML 1.0

import "components"
import "js/colors.js" as Colors

Page {
    id: preview_page
    // TRANSLATORS: %1 is the person from whom the app is previewing media.
    title: i18n.tr("From: %1").arg(senderName)

    property User user
//    property string path

    property string senderName: user.firstName + " " + user.lastName
    property string photoPreviewSource: ""
    property string videoPreviewSource: ""

//    onPathChanged: {
//        if (path.indexOf("mp4") != -1) {
//            videoPreviewSource = path;
//        } else {
//            photoPreviewSource = path;
//        }
//    }

    head.actions: [

        Action {
            iconName: "save"
            text: i18n.tr("Save")
            onTriggered: save()
            visible: saveAndShareVisible()
        },
        Action {
            iconName: "share"
            text: i18n.tr("Share")
            onTriggered: share()
            visible: saveAndShareVisible()
        }

    ]

    Item {

        anchors {
            fill: parent
        }

        Rectangle {
            anchors.fill: parent
            color: Colors.page_background
        }

        SingleMediaViewer {
            id: singleMediaViewer
            anchors.fill: parent
            maxDimension: 2*Math.max(preview_page.width, preview_page.height)
        }
    }

    function saveAndShareVisible() {
        // TODO prevent from saving secret chat attachments
        return photoPreviewSource !== "" || videoPreviewSource !== "";
    }

    function save() {
        singleMediaViewer.reset();

        if (photoPreviewSource !== "") {
            pageStack.addPageToCurrentColumn(preview_page, picker_page_component, {
                "url": photoPreviewSource,
                "handler": ContentHandler.Destination,
                "contentType": ContentType.Pictures
            });
        } else if (videoPreviewSource !== "") {
            pageStack.addPageToCurrentColumn(preview_page, picker_page_component, {
                "url": videoPreviewSource,
                "handler": ContentHandler.Destination,
                "contentType": ContentType.Videos
            });
        }
    }

    function share() {
        singleMediaViewer.reset();

        if (photoPreviewSource !== "") {
            pageStack.addPageToCurrentColumn(preview_page, picker_page_component, {
                "url": photoPreviewSource,
                "handler": ContentHandler.Share,
                "contentType": ContentType.Pictures
            });
        } else if (videoPreviewSource !== "") {
            pageStack.addPageToCurrentColumn(preview_page, picker_page_component, {
                "url": videoPreviewSource,
                "handler": ContentHandler.Share,
                "contentType": ContentType.Videos
            });
        }
    }
}
