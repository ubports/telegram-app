import QtQuick 2.4
import AsemanTools 1.0
import TelegramQML 1.0

ContactImage {
    id: contact_img
    width: 100
    height: 62

    property FileLocation photoBigLocation: isChat ? chat.photo.photoBig : user.photo.photoBig
    property FileLocation photoSmallLocation: isChat ? chat.photo.photoSmall : user.photo.photoSmall

    signal clicked(string path)

    Indicator {
        anchors.fill: parent
        light: true
        modern: true
        indicatorSize: 22*Devices.density
        property bool active: user_photo_marea.loadingPhoto

        onActiveChanged: {
            if( active )
                start()
            else
                stop()
        }
    }

    MouseArea {
        id: user_photo_marea
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor
        onClicked: {
            if (smallFilePath.length == 0) {
                return;
            }

            if(filePath.length == 0) {
                loadingPhoto = true
                telegram.getFile(photoBigLocation)
            } else {
                contact_img.clicked(filePath);
            }
        }

        property bool loadingPhoto: false
        property string filePath: photoBigLocation.download.location
        property string smallFilePath: photoSmallLocation.download.location

        onFilePathChanged: {
            if(!loadingPhoto)
                return

            loadingPhoto = false
            contact_img.clicked(filePath);
        }
    }
}

