import QtQuick 2.0

DlgItemDesign {

    onClicked: {
        console.log("INDEX" + index);
        console.log("element:" + telegramClient.dialogsModel.get(index));
        dialogPage.peerId = telegramClient.dialogsModel.get(index).id;
        dialogPage.peerIsChat = telegramClient.dialogsModel.get(index).isChat;
        pageStack.showPage(dialogPage);

        console.log("ID:" + dialogPage.peerId);
        console.log("ISCHAT" + dialogPage.peerIsChat);
    }
}
