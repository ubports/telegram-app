import QtQuick 2.4 
import Ubuntu.Components 1.3 

import AsemanTools 1.0 
import TelegramQML 1.0 
import QtGraphicalEffects 1.0 

import "components"
import "ui"

Item {
    id: msg_media

    property Message message
    property MessageMedia media: message.media
    property int mediaType: file_handler.targetType
    property bool hasMedia: mediaType != FileHandler.TypeTargetUnknown &&
                            file_handler.progressType != FileHandler.TypeProgressUpload
    property bool downloading: file_handler.progressType != FileHandler.TypeProgressEmpty

    property real maximumMediaHeight: 256*Devices.density
    property real maximumMediaWidth: width*0.75
    property real maximumMediaRatio: maximumMediaWidth/maximumMediaHeight

    property variant msgDate: CalendarConv.fromTime_t(message.date)
    property alias location: file_handler.filePath

    property alias isSticker: file_handler.isSticker
    property bool isImage: mediaType == FileHandler.TypeTargetMediaPhoto || mediaType == FileHandler.TypeTargetMediaDocument && media.document.mimeType.indexOf("image") != -1
    property bool isVideo: mediaType == FileHandler.TypeTargetMediaVideo || mediaType == FileHandler.TypeTargetMediaDocument && media.document.mimeType.indexOf("video") != -1
    property bool isAudio: mediaType == FileHandler.TypeTargetMediaAudio || mediaType == FileHandler.TypeTargetMediaDocument && media.document.mimeType.indexOf("audio") != -1

    property bool showStatus: true

    property variant mediaPlayer

    onIsAudioChanged: {
        if(isAudio) {
            if(mediaPlayer)
                mediaPlayer.destroy()
            mediaPlayer = media_player_component.createObject(msg_media)
            console.log("Created audio player")
        } else {
            if(mediaPlayer)
                mediaPlayer.destroy()
            mediaPlayer = 0
        }
    }

    signal mediaClicked(int type, string path);

    width: {
        var result
        if(mediaPlayer)
            return mediaPlayer.width
        if(file_handler.progressType == FileHandler.TypeProgressUpload)
            return 0
        // Prevent empty website image preview.
        if (media_img.source == 0)
            return 0;

        switch( mediaType )
        {
        case FileHandler.TypeTargetMediaVideo:
        case FileHandler.TypeTargetMediaPhoto:
            result = file_handler.imageSize.width/file_handler.imageSize.height<maximumMediaRatio?
                        Math.min(file_handler.imageSize.height, maximumMediaHeight)*file_handler.imageSize.width/file_handler.imageSize.height
                      : Math.min(file_handler.imageSize.width, maximumMediaWidth)
            break;

        case FileHandler.TypeTargetUnknown:
        case FileHandler.TypeTargetMediaAudio:
        case FileHandler.TypeTargetMediaDocument:
            result = isSticker ? units.gu(20) : units.gu(17)
            break;

        case FileHandler.TypeTargetMediaGeoPoint:
            result = mapDownloader.size.width
            break;

        default:
            result = 0
            break;
        }

        return result
    }

    height: {
        var result
        if(mediaPlayer)
            return mediaPlayer.height
        if(file_handler.progressType == FileHandler.TypeProgressUpload)
            return 0
        // Prevent empty website image preview.
        if (media_img.source == 0)
            return 0;

        switch( mediaType )
        {
        case FileHandler.TypeTargetMediaVideo:
        case FileHandler.TypeTargetMediaPhoto:
            result = file_handler.imageSize.width/file_handler.imageSize.height<maximumMediaRatio?
                        Math.min(file_handler.imageSize.height, maximumMediaHeight)
                      : Math.min(file_handler.imageSize.width, maximumMediaWidth)*file_handler.imageSize.height/file_handler.imageSize.width
            break;

        case FileHandler.TypeTargetMediaAudio:
            result = 0;
            break;
        case FileHandler.TypeTargetUnknown:
        case FileHandler.TypeTargetMediaDocument:
            result = isSticker ? width*media_img.imageSize.height/media_img.imageSize.width : width
            break;

        case FileHandler.TypeTargetMediaGeoPoint:
            result = mapDownloader.size.height
            break;

        default:
            result = 0
            break;
        }

        return result
    }

    FileHandler {
        id: file_handler
        telegram: telegramObject
        target: message
        defaultThumbnail: "image://theme/stock_document"
        onTargetTypeChanged: {
            if((isSticker || targetType == FileHandler.TypeTargetMediaPhoto || targetType == FileHandler.TypeTargetMediaDocument && message.media.document.mimeType.indexOf("image")) && (filePath == ""))
            {
                console.log("Immediate download of sticker or foto")
                download()
            }

            else if(targetType == FileHandler.TypeTargetMediaGeoPoint)
                mapDownloader.addToQueue(Qt.point(message.media.geo.lat, message.media.geo.longitude), media_img.setImage )
        }
    }

    Image {
        id: media_img
        anchors.fill: parent
        fillMode: isSticker? Image.PreserveAspectFit : Image.PreserveAspectCrop
        asynchronous: true
        smooth: true
        visible: mediaType != FileHandler.TypeTargetMediaVideo || location.length != 0

        property size imageSize: Cutegram.imageSize(source)
        property string customImage

        sourceSize: {
            var ratio = imageSize.width/imageSize.height
            if(ratio>1)
                return Qt.size( height*ratio, height)
            else
                return Qt.size( width, width/ratio)
        }

        source: {
            var result = ""
            switch( mediaType )
            {
            case FileHandler.TypeTargetMediaPhoto:
                console.log("AccountMessageMedia: media type photo detected")
                result = file_handler.filePath
                break;

            case FileHandler.TypeTargetMediaVideo:
                console.log("AccountMessageMedia: media type video detected")
                result = file_handler.thumbPath
                break;

            case FileHandler.TypeTargetUnknown:
                break;
            case FileHandler.TypeTargetMediaAudio:
                console.log("AccountMessageMedia: media type audio detected")
                break;

            case FileHandler.TypeTargetMediaDocument:
                if (isSticker)
                    console.log("AccountMessageMedia: media type sticker detected")
                else
                    console.log("AccountMessageMedia: media type document detected")
                if(isSticker) {
                    result = location
                    if(result.length==0)
                        result = file_handler.thumbPath
                }
                else
                if(Cutegram.fileIsImage(file_handler.filePath))
                    result = location
                else
                    result = file_handler.thumbPath
                break;

            case FileHandler.TypeTargetMediaGeoPoint:
                result = customImage
                break;
            }

            return result
        }

        function setImage(img) {
            customImage = img
        }
    }


    Rectangle {
        anchors {
            leftMargin: units.dp(-4)
            rightMargin: units.dp(-5)
            topMargin: units.dp(-1)
            bottomMargin: units.dp(-1)
            fill: filename_lbl
        }
        color: Qt.rgba(0, 0, 0, 0.3)
        radius: units.dp(2)
        visible: filename_lbl.text !== ""
    }

    Label {
        id: filename_lbl
        anchors.top: parent.top
        anchors.left: parent.left
        font.weight: Font.DemiBold
        fontSize: "small"
        color: "white"
        visible: !download_frame.visible
        text: {
                if (!isSticker && !Cutegram.fileIsImage(file_handler.filePath))
                    return file_handler.fileName;
                else
                    return "";
        }
    }

    FastBlur {
        anchors.fill: media_img
        source: media_img
        radius: 32
        visible: !media_img.visible
    }

    Rectangle {
        id: video_frame
        color: "#44000000"
        visible: mediaType == FileHandler.TypeTargetMediaVideo && location.length != 0
        anchors.fill: media_img

        Icon {
            width: units.gu(6)
            height: width
            name: video_frame.visible ? "media-playback-start" : "" //don't know where to test it
            anchors.centerIn: parent
        }
    }

    Rectangle {
        id: download_frame
        anchors.fill: parent
        color: "#88000000"
        visible: location.length == 0 && !isSticker
                && mediaType != FileHandler.TypeTargetMediaPhoto
                && mediaType != FileHandler.TypeTargetMediaGeoPoint
        radius: 3*Devices.density

        Icon {
            height: units.gu(4)
            width: height
            anchors.centerIn: parent
            color: "white"
            //sourceSize: Qt.size(width,height)
            name: {
                if (mediaType == FileHandler.TypeTargetUnknown) {
                    return "cancel" // indicating error
                } else {
                    return "save"
                }
            }
            visible: !downloading
        }

        Rectangle {
            anchors {
                leftMargin: units.dp(-4)
                rightMargin: units.dp(-5)
                topMargin: units.dp(-1)
                bottomMargin: units.dp(-1)
                fill: filesize_lbl
            }
            color: Qt.rgba(0, 0, 0, 0.3)
            radius: units.dp(2)
        }

        Label {
            id:filesize_lbl
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.margins: 3*Devices.density
            font.weight: Font.DemiBold
            fontSize: "small"
            color: "white"
            text: {
                if(downloading)
                    return uploadedSize + " / " + totalSize;
                else
                    return file_handler.filename == "" ? totalSize : file_handler.fileName + "\n" + totalSize;
            }

            property string totalSize: Math.floor(file_handler.fileSize/(10485.76))/100 + "MB"
            property string uploadedSize: Math.floor(file_handler.progressCurrentByte/(10485.76))/100 + "MB"

        }
    }

    ProgressBar {
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 4*Devices.density
        height: units.dp(3)
        radius: 0
        percent: downloading ? file_handler.progressPercent : 0
        visible: downloading
    }

    Image {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.verticalCenter
        source: mediaType == FileHandler.TypeTargetMediaOther? "files/map-pin.png" : ""
        sourceSize: Qt.size(width,height)
        fillMode: Image.PreserveAspectFit
        width: 92*Devices.density
        height: 92*Devices.density
        visible: mediaType == FileHandler.TypeTargetMediaOther
        asynchronous: true
        smooth: true
    }

    MessageStatus {
        id: message_status
        objectName: "mediaMessageStatus"
        anchors {
            bottom: parent.bottom
            bottomMargin: units.dp(4)
            right: parent.right
            rightMargin: units.dp(4)
        }
        visible: msg_media.showStatus

        message: msg_media.message
        hasMedia: msg_media.hasMedia
    }

    Icon {
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        height: units.gu(4)
        width: height
        color: "white"
        name: "cancel"
        visible: downloading && mediaType != FileHandler.TypeTargetMediaPhoto && !isSticker

        MouseArea {
            anchors.fill: parent
            onClicked: file_handler.cancelProgress()
        }
    }

    function click() {
        if (isSticker)
            return false
        if (location.length != 0) {
            console.log("opening! " + location);
            msg_media.mediaClicked(mediaType, location);
        }
        else
        {
            switch( mediaType )
            {
            case FileHandler.TypeTargetMediaVideo:
            case FileHandler.TypeTargetMediaPhoto:
            case FileHandler.TypeTargetMediaDocument:
            case FileHandler.TypeTargetMediaAudio:
                console.log("downloading");
                file_handler.download()
                break;

            case FileHandler.TypeTargetMediaGeoPoint:
                //Qt.openUrlExternally( mapDownloader.webLinkOf(Qt.point(media.geo.lat, media.geo.longitude)) )
                break;

            default:
                return false
            }
        }

        return true
    }

    Component {
        id: media_player_component
        MediaPlayerItem {
            width: 180*Devices.density
            height: 40*Devices.density
            anchors.verticalCenter: parent.verticalCenter
            filePath: location
            z: location.length == 0? -1 : 0

            MouseArea {
                anchors.fill: parent
                visible: location.length == 0
                onClicked: msg_media.click()
            }
        }
    }
}
