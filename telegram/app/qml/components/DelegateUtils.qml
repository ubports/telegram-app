import QtQuick 2.0
import Cutegram 1.0

Item {
    function getMediaTypeString(mediaType) {
        switch (mediaType) {
        case TLMessageMedia.TypeMessageMediaEmpty:
            return "Text";
        case TLMessageMedia.TypeMessageMediaPhoto:
            return "Photo";
        case TLMessageMedia.TypeMessageMediaVideo:
            return "Video";
        case TLMessageMedia.TypeMessageMediaGeo:
            return "Location";
        case TLMessageMedia.TypeMessageMediaContact:
            return "Contact";
        case TLMessageMedia.TypeMessageMediaAudio:
            return "Audio";
        case TLMessageMedia.TypeMessageMediaDocument:
            return "Document";
        case TLMessageMedia.TypeMessageMediaUnsupported:
            return "Unsupported";
        default:
            return "Text";
        }
    }

    function getSecretChatState(types, type) {
        switch (type) {
            case types.typeEncryptedChatEmpty:
                return ""
            case types.typeEncryptedChatWaiting:
                // TRANSLATORS: Used at bottom of screen when requesting secret chat.
                return i18n.tr("Waiting for user to get online...")
            case types.typeEncryptedChatRequested:
                return i18n.tr("Secret chat requested")
            case types.typeEncryptedChat:
                return i18n.tr("Secret chat created")
            case types.typeEncryptedChatDiscarded:
                // TRANSLATORS: Used at bottom of screen when secret chat was discarded by the other party.
                return i18n.tr("Secret chat discarded")
        }
    }

    function getSecretChatSelfDestructTime(seconds) {
        if (seconds === 0) {
            // TRANSLATORS: Secret chat self destruct timer disabled.
            return i18n.tr("Disabled");
        } else if (seconds > 0 && seconds <= 30) {
            // TRANSLATORS: Secret chat self destruct timer.
            return i18n.tr("%1 second", "%1 seconds", seconds).arg(seconds);
        } else if (seconds === 60) {
            // TRANSLATORS: Secret chat self destruct timer.
            return i18n.tr("1 minute");
        } else if (seconds === 3600) {
            // TRANSLATORS: Secret chat self destruct timer.
            return i18n.tr("1 hour");
        } else if (seconds === 86400) {
            // TRANSLATORS: Secret chat self destruct timer.
            return i18n.tr("1 day");
        } else if (seconds === 604800) {
            // TRANSLATORS: Secret chat self destruct timer.
            return i18n.tr("1 week");
        }
    }

    function humanFileSize(bytes, si) {
        var thresh = si ? 1000 : 1024;
        if (bytes < thresh) return bytes + ' B';
        var units = si ? ['kB','MB','GB','TB','PB','EB','ZB','YB'] : ['KiB','MiB','GiB','TiB','PiB','EiB','ZiB','YiB'];
        var u = -1;
        do {
            bytes /= thresh;
            ++u;
        } while(bytes >= thresh);
        return bytes.toFixed(1) + ' ' + units[u];
    }

    function formatTime(time, ms) {
        if (ms) {
            // convert ms to s
            time = Math.floor(time / 1000);
        }
        var mm = Math.floor(time / 60);
        var ss = time - (mm * 60);
        return mm.toString() + ":" + ("0" + ss).slice(-2);
    }
}
