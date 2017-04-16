/*
 * Copyright 2015 Canonical Ltd.
 *
 * This file is part of messaging-app.
 *
 * messaging-app is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * messaging-app is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.0
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3

import TelegramQML 1.0
import AsemanTools 1.0

Item {
    id: recordingBar
    opacity: audioRecorder.recording ? 1.0 : 0.0
    Behavior on opacity { UbuntuNumberAnimation {} }
    visible: opacity > 0

    property Telegram telegram

    readonly property bool recording: audioRecorder.recording
    readonly property bool codecError: audioRecorder.codecError
    readonly property bool resourceError: audioRecorder.resourceError

    property real buttonOpacity: 1

    signal audioRecorded(var audio)

    function startRecording() {
        audioRecorder.record()
    }

    function stopRecording() {
        audioRecorder.stop()
    }

    AudioEncoderSettings {
        id: audioEncoderSettings
        codec: "audio/x-opus"
        sampleRate: 16000
        channelCount: 1
    }

    Loader {
        id: audioRecorder
        readonly property bool ready: status == Loader.Ready && item != null
        readonly property bool recording: ready ? item.recording : false
        property bool codecError: false
        property bool resourceError: false

        function record() {
            audioRecorder.active = true
            item.output = Cutegram.createTemporaryFile(telegram.phoneNumber, "audio", ".ogg")
            if (!codecError && !resourceError)
                item.record()
        }
        function stop() {
            if (!codecError && !resourceError)
                item.stop()
            audioRecorder.active = false
        }
 
        active: false
        sourceComponent: audioRecorderComponent
        onLoaded: {
            codecError = false
            resourceError = false
            item.encoderSettings = audioEncoderSettings
        }
    }

    Component {
        id: audioRecorderComponent
        AudioRecorder {
            readonly property bool recording: state == AudioRecorder.RecordingState

            onStateChanged: {
                if (state == AudioRecorder.StoppedState && output.toString() != "") {
                    var filePath = output.toString()

                    if (!Cutegram.filsIsAudio(filePath)) {
                        //If the recording process is too quick the generated file is not an audio one and should be ignored
                        Cutegram.deleteFile(filePath)
                        return;
                    }

                    recordingBar.audioRecorded(filePath)
                }
            }
            onErrorChanged: {
                switch(error) {
                    case AudioRecorder.ResourceError:
                        audioRecorder.resourceError = true
                        break
                    case AudioRecorder.CodecError:
                        audioRecorder.codecError = true
                        break
                    default:
                }
            }
        }
    }

    TransparentButton {
        id: recordingIcon
        objectName: "recordingIcon"
        iconPulsate: recordingBar.recording
        sideBySide: true
        spacing: units.gu(1)
        opacity: buttonOpacity

        anchors {
            left: parent.left
            leftMargin: units.gu(2)
            verticalCenter: parent.verticalCenter
        }

        focus: false

        iconColor: "red"
        iconName: "audio-input-microphone-symbolic"
    }

    Label {
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: recordingIcon.right
            right: parent.right
            topMargin: units.gu(1)
            bottomMargin: units.gu(1)
            leftMargin: units.gu(1)
            rightMargin: units.gu(1)
        }
        opacity: buttonOpacity

        text: i18n.tr("<<< Swipe to cancel")
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
    }
}

