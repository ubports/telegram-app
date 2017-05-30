/****************************************************************************
** Meta object code from reading C++ file 'telegram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/telegram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telegram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Telegram_t {
    QByteArrayData data[309];
    char stringdata0[5624];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Telegram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Telegram_t qt_meta_stringdata_Telegram = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Telegram"
QT_MOC_LITERAL(1, 9, 5), // "error"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 2), // "id"
QT_MOC_LITERAL(4, 19, 9), // "errorCode"
QT_MOC_LITERAL(5, 29, 9), // "errorText"
QT_MOC_LITERAL(6, 39, 12), // "functionName"
QT_MOC_LITERAL(7, 52, 15), // "authSignInError"
QT_MOC_LITERAL(8, 68, 15), // "authSignUpError"
QT_MOC_LITERAL(9, 84, 10), // "authNeeded"
QT_MOC_LITERAL(10, 95, 12), // "authLoggedIn"
QT_MOC_LITERAL(11, 108, 20), // "authCheckPhoneAnswer"
QT_MOC_LITERAL(12, 129, 15), // "phoneRegistered"
QT_MOC_LITERAL(13, 145, 21), // "authCheckedPhoneError"
QT_MOC_LITERAL(14, 167, 5), // "msgId"
QT_MOC_LITERAL(15, 173, 18), // "authCheckPhoneSent"
QT_MOC_LITERAL(16, 192, 11), // "phoneNumber"
QT_MOC_LITERAL(17, 204, 18), // "authSendCodeAnswer"
QT_MOC_LITERAL(18, 223, 15), // "sendCallTimeout"
QT_MOC_LITERAL(19, 239, 17), // "authSendCodeError"
QT_MOC_LITERAL(20, 257, 17), // "authSendSmsAnswer"
QT_MOC_LITERAL(21, 275, 2), // "ok"
QT_MOC_LITERAL(22, 278, 18), // "authSendCallAnswer"
QT_MOC_LITERAL(23, 297, 16), // "authLogOutAnswer"
QT_MOC_LITERAL(24, 314, 21), // "authSendInvitesAnswer"
QT_MOC_LITERAL(25, 336, 29), // "authResetAuthorizationsAnswer"
QT_MOC_LITERAL(26, 366, 23), // "authCheckPasswordAnswer"
QT_MOC_LITERAL(27, 390, 7), // "expires"
QT_MOC_LITERAL(28, 398, 4), // "User"
QT_MOC_LITERAL(29, 403, 4), // "user"
QT_MOC_LITERAL(30, 408, 33), // "authRequestPasswordRecoveryAn..."
QT_MOC_LITERAL(31, 442, 20), // "AuthPasswordRecovery"
QT_MOC_LITERAL(32, 463, 8), // "recovery"
QT_MOC_LITERAL(33, 472, 25), // "authRecoverPasswordAnswer"
QT_MOC_LITERAL(34, 498, 17), // "AuthAuthorization"
QT_MOC_LITERAL(35, 516, 4), // "auth"
QT_MOC_LITERAL(36, 521, 27), // "accountRegisterDeviceAnswer"
QT_MOC_LITERAL(37, 549, 29), // "accountUnregisterDeviceAnswer"
QT_MOC_LITERAL(38, 579, 33), // "accountUpdateNotifySettingsAn..."
QT_MOC_LITERAL(39, 613, 30), // "accountGetNotifySettingsAnswer"
QT_MOC_LITERAL(40, 644, 18), // "PeerNotifySettings"
QT_MOC_LITERAL(41, 663, 18), // "peerNotifySettings"
QT_MOC_LITERAL(42, 682, 32), // "accountResetNotifySettingsAnswer"
QT_MOC_LITERAL(43, 715, 26), // "accountUpdateProfileAnswer"
QT_MOC_LITERAL(44, 742, 25), // "accountUpdateStatusAnswer"
QT_MOC_LITERAL(45, 768, 26), // "accountGetWallPapersAnswer"
QT_MOC_LITERAL(46, 795, 16), // "QList<WallPaper>"
QT_MOC_LITERAL(47, 812, 10), // "wallPapers"
QT_MOC_LITERAL(48, 823, 26), // "accountCheckUsernameAnswer"
QT_MOC_LITERAL(49, 850, 27), // "accountUpdateUsernameAnswer"
QT_MOC_LITERAL(50, 878, 26), // "accountDeleteAccountAnswer"
QT_MOC_LITERAL(51, 905, 26), // "accountGetAccountTTLAnswer"
QT_MOC_LITERAL(52, 932, 14), // "AccountDaysTTL"
QT_MOC_LITERAL(53, 947, 3), // "ttl"
QT_MOC_LITERAL(54, 951, 26), // "accountSetAccountTTLAnswer"
QT_MOC_LITERAL(55, 978, 31), // "accountUpdateDeviceLockedAnswer"
QT_MOC_LITERAL(56, 1010, 24), // "accountChangePhoneAnswer"
QT_MOC_LITERAL(57, 1035, 26), // "accountSentChangePhoneCode"
QT_MOC_LITERAL(58, 1062, 15), // "phone_code_hash"
QT_MOC_LITERAL(59, 1078, 17), // "send_call_timeout"
QT_MOC_LITERAL(60, 1096, 24), // "accountGetPasswordAnswer"
QT_MOC_LITERAL(61, 1121, 15), // "AccountPassword"
QT_MOC_LITERAL(62, 1137, 8), // "password"
QT_MOC_LITERAL(63, 1146, 30), // "accountGetAuthorizationsAnswer"
QT_MOC_LITERAL(64, 1177, 21), // "AccountAuthorizations"
QT_MOC_LITERAL(65, 1199, 5), // "auths"
QT_MOC_LITERAL(66, 1205, 31), // "accountResetAuthorizationAnswer"
QT_MOC_LITERAL(67, 1237, 32), // "accountGetPasswordSettingsAnswer"
QT_MOC_LITERAL(68, 1270, 23), // "AccountPasswordSettings"
QT_MOC_LITERAL(69, 1294, 8), // "settings"
QT_MOC_LITERAL(70, 1303, 35), // "accountUpdatePasswordSettings..."
QT_MOC_LITERAL(71, 1339, 30), // "photosUploadProfilePhotoAnswer"
QT_MOC_LITERAL(72, 1370, 5), // "Photo"
QT_MOC_LITERAL(73, 1376, 5), // "photo"
QT_MOC_LITERAL(74, 1382, 11), // "QList<User>"
QT_MOC_LITERAL(75, 1394, 5), // "users"
QT_MOC_LITERAL(76, 1400, 30), // "photosUpdateProfilePhotoAnswer"
QT_MOC_LITERAL(77, 1431, 16), // "UserProfilePhoto"
QT_MOC_LITERAL(78, 1448, 16), // "userProfilePhoto"
QT_MOC_LITERAL(79, 1465, 19), // "usersGetUsersAnswer"
QT_MOC_LITERAL(80, 1485, 22), // "usersGetFullUserAnswer"
QT_MOC_LITERAL(81, 1508, 12), // "ContactsLink"
QT_MOC_LITERAL(82, 1521, 4), // "link"
QT_MOC_LITERAL(83, 1526, 12), // "profilePhoto"
QT_MOC_LITERAL(84, 1539, 14), // "notifySettings"
QT_MOC_LITERAL(85, 1554, 7), // "blocked"
QT_MOC_LITERAL(86, 1562, 13), // "realFirstName"
QT_MOC_LITERAL(87, 1576, 12), // "realLastName"
QT_MOC_LITERAL(88, 1589, 25), // "photosGetUserPhotosAnswer"
QT_MOC_LITERAL(89, 1615, 10), // "sliceCount"
QT_MOC_LITERAL(90, 1626, 12), // "QList<Photo>"
QT_MOC_LITERAL(91, 1639, 6), // "photos"
QT_MOC_LITERAL(92, 1646, 25), // "contactsGetStatusesAnswer"
QT_MOC_LITERAL(93, 1672, 20), // "QList<ContactStatus>"
QT_MOC_LITERAL(94, 1693, 8), // "statuses"
QT_MOC_LITERAL(95, 1702, 25), // "contactsGetContactsAnswer"
QT_MOC_LITERAL(96, 1728, 8), // "modified"
QT_MOC_LITERAL(97, 1737, 14), // "QList<Contact>"
QT_MOC_LITERAL(98, 1752, 8), // "contacts"
QT_MOC_LITERAL(99, 1761, 28), // "contactsImportContactsAnswer"
QT_MOC_LITERAL(100, 1790, 22), // "QList<ImportedContact>"
QT_MOC_LITERAL(101, 1813, 16), // "importedContacts"
QT_MOC_LITERAL(102, 1830, 13), // "QList<qint64>"
QT_MOC_LITERAL(103, 1844, 13), // "retryContacts"
QT_MOC_LITERAL(104, 1858, 27), // "contactsDeleteContactAnswer"
QT_MOC_LITERAL(105, 1886, 11), // "ContactLink"
QT_MOC_LITERAL(106, 1898, 6), // "myLink"
QT_MOC_LITERAL(107, 1905, 11), // "foreignLink"
QT_MOC_LITERAL(108, 1917, 28), // "contactsDeleteContactsAnswer"
QT_MOC_LITERAL(109, 1946, 29), // "contactsResolveUsernameAnswer"
QT_MOC_LITERAL(110, 1976, 19), // "contactsBlockAnswer"
QT_MOC_LITERAL(111, 1996, 21), // "contactsUnblockAnswer"
QT_MOC_LITERAL(112, 2018, 19), // "contactsBlockResult"
QT_MOC_LITERAL(113, 2038, 24), // "contactsGetBlockedAnswer"
QT_MOC_LITERAL(114, 2063, 21), // "QList<ContactBlocked>"
QT_MOC_LITERAL(115, 2085, 25), // "messagesSendMessageAnswer"
QT_MOC_LITERAL(116, 2111, 4), // "date"
QT_MOC_LITERAL(117, 2116, 12), // "MessageMedia"
QT_MOC_LITERAL(118, 2129, 5), // "media"
QT_MOC_LITERAL(119, 2135, 3), // "pts"
QT_MOC_LITERAL(120, 2139, 9), // "pts_count"
QT_MOC_LITERAL(121, 2149, 3), // "seq"
QT_MOC_LITERAL(122, 2153, 19), // "QList<ContactsLink>"
QT_MOC_LITERAL(123, 2173, 5), // "links"
QT_MOC_LITERAL(124, 2179, 23), // "messagesSendMediaAnswer"
QT_MOC_LITERAL(125, 2203, 11), // "UpdatesType"
QT_MOC_LITERAL(126, 2215, 7), // "updates"
QT_MOC_LITERAL(127, 2223, 23), // "messagesSendPhotoAnswer"
QT_MOC_LITERAL(128, 2247, 26), // "messagesSendGeoPointAnswer"
QT_MOC_LITERAL(129, 2274, 25), // "messagesSendContactAnswer"
QT_MOC_LITERAL(130, 2300, 23), // "messagesSendVideoAnswer"
QT_MOC_LITERAL(131, 2324, 23), // "messagesSendAudioAnswer"
QT_MOC_LITERAL(132, 2348, 26), // "messagesSendDocumentAnswer"
QT_MOC_LITERAL(133, 2375, 26), // "messagesForwardMediaAnswer"
QT_MOC_LITERAL(134, 2402, 26), // "messagesForwardPhotoAnswer"
QT_MOC_LITERAL(135, 2429, 26), // "messagesForwardVideoAnswer"
QT_MOC_LITERAL(136, 2456, 26), // "messagesForwardAudioAnswer"
QT_MOC_LITERAL(137, 2483, 29), // "messagesForwardDocumentAnswer"
QT_MOC_LITERAL(138, 2513, 23), // "messagesSetTypingAnswer"
QT_MOC_LITERAL(139, 2537, 25), // "messagesGetMessagesAnswer"
QT_MOC_LITERAL(140, 2563, 14), // "QList<Message>"
QT_MOC_LITERAL(141, 2578, 8), // "messages"
QT_MOC_LITERAL(142, 2587, 11), // "QList<Chat>"
QT_MOC_LITERAL(143, 2599, 5), // "chats"
QT_MOC_LITERAL(144, 2605, 24), // "messagesGetDialogsAnswer"
QT_MOC_LITERAL(145, 2630, 13), // "QList<Dialog>"
QT_MOC_LITERAL(146, 2644, 7), // "dialogs"
QT_MOC_LITERAL(147, 2652, 24), // "messagesGetHistoryAnswer"
QT_MOC_LITERAL(148, 2677, 20), // "messagesSearchAnswer"
QT_MOC_LITERAL(149, 2698, 25), // "messagesReadHistoryAnswer"
QT_MOC_LITERAL(150, 2724, 6), // "offset"
QT_MOC_LITERAL(151, 2731, 27), // "messagesDeleteHistoryAnswer"
QT_MOC_LITERAL(152, 2759, 33), // "messagesReadMessageContentsAn..."
QT_MOC_LITERAL(153, 2793, 24), // "MessagesAffectedMessages"
QT_MOC_LITERAL(154, 2818, 15), // "watchedMessages"
QT_MOC_LITERAL(155, 2834, 28), // "messagesDeleteMessagesAnswer"
QT_MOC_LITERAL(156, 2863, 15), // "deletedMessages"
QT_MOC_LITERAL(157, 2879, 30), // "messagesReceivedMessagesAnswer"
QT_MOC_LITERAL(158, 2910, 28), // "QList<ReceivedNotifyMessage>"
QT_MOC_LITERAL(159, 2939, 15), // "confirmedMsgIds"
QT_MOC_LITERAL(160, 2955, 28), // "messagesForwardMessageAnswer"
QT_MOC_LITERAL(161, 2984, 29), // "messagesForwardMessagesAnswer"
QT_MOC_LITERAL(162, 3014, 27), // "messagesSendBroadcastAnswer"
QT_MOC_LITERAL(163, 3042, 31), // "messagesGetWebPagePreviewAnswer"
QT_MOC_LITERAL(164, 3074, 22), // "messagesGetChatsAnswer"
QT_MOC_LITERAL(165, 3097, 25), // "messagesGetFullChatAnswer"
QT_MOC_LITERAL(166, 3123, 8), // "ChatFull"
QT_MOC_LITERAL(167, 3132, 8), // "chatFull"
QT_MOC_LITERAL(168, 3141, 27), // "messagesEditChatTitleAnswer"
QT_MOC_LITERAL(169, 3169, 40), // "messagesEditChatPhotoStatedMe..."
QT_MOC_LITERAL(170, 3210, 25), // "messagesAddChatUserAnswer"
QT_MOC_LITERAL(171, 3236, 28), // "messagesDeleteChatUserAnswer"
QT_MOC_LITERAL(172, 3265, 24), // "messagesCreateChatAnswer"
QT_MOC_LITERAL(173, 3290, 33), // "messagesCreateEncryptedChatAn..."
QT_MOC_LITERAL(174, 3324, 6), // "chatId"
QT_MOC_LITERAL(175, 3331, 6), // "peerId"
QT_MOC_LITERAL(176, 3338, 10), // "accessHash"
QT_MOC_LITERAL(177, 3349, 30), // "messagesEncryptedChatRequested"
QT_MOC_LITERAL(178, 3380, 28), // "messagesEncryptedChatCreated"
QT_MOC_LITERAL(179, 3409, 30), // "messagesEncryptedChatDiscarded"
QT_MOC_LITERAL(180, 3440, 32), // "messagesSetEncryptedTypingAnswer"
QT_MOC_LITERAL(181, 3473, 34), // "messagesReadEncryptedHistoryA..."
QT_MOC_LITERAL(182, 3508, 27), // "messagesSendEncryptedAnswer"
QT_MOC_LITERAL(183, 3536, 13), // "EncryptedFile"
QT_MOC_LITERAL(184, 3550, 13), // "encryptedFile"
QT_MOC_LITERAL(185, 3564, 31), // "messagesSendEncryptedFileAnswer"
QT_MOC_LITERAL(186, 3596, 34), // "messagesSendEncryptedServiceA..."
QT_MOC_LITERAL(187, 3631, 26), // "messagesReceivedQueueAnwer"
QT_MOC_LITERAL(188, 3658, 6), // "msgIds"
QT_MOC_LITERAL(189, 3665, 24), // "messagesGetStickersAnwer"
QT_MOC_LITERAL(190, 3690, 16), // "MessagesStickers"
QT_MOC_LITERAL(191, 3707, 8), // "stickers"
QT_MOC_LITERAL(192, 3716, 27), // "messagesGetAllStickersAnwer"
QT_MOC_LITERAL(193, 3744, 19), // "MessagesAllStickers"
QT_MOC_LITERAL(194, 3764, 26), // "messagesGetStickerSetAnwer"
QT_MOC_LITERAL(195, 3791, 18), // "MessagesStickerSet"
QT_MOC_LITERAL(196, 3810, 10), // "stickerset"
QT_MOC_LITERAL(197, 3821, 30), // "messagesInstallStickerSetAnwer"
QT_MOC_LITERAL(198, 3852, 32), // "messagesUninstallStickerSetAnwer"
QT_MOC_LITERAL(199, 3885, 29), // "messagesExportChatInviteAnwer"
QT_MOC_LITERAL(200, 3915, 18), // "ExportedChatInvite"
QT_MOC_LITERAL(201, 3934, 6), // "invite"
QT_MOC_LITERAL(202, 3941, 28), // "messagesCheckChatInviteAnwer"
QT_MOC_LITERAL(203, 3970, 10), // "ChatInvite"
QT_MOC_LITERAL(204, 3981, 29), // "messagesImportChatInviteAnwer"
QT_MOC_LITERAL(205, 4011, 21), // "updatesGetStateAnswer"
QT_MOC_LITERAL(206, 4033, 3), // "qts"
QT_MOC_LITERAL(207, 4037, 11), // "unreadCount"
QT_MOC_LITERAL(208, 4049, 26), // "updatesGetDifferenceAnswer"
QT_MOC_LITERAL(209, 4076, 24), // "QList<SecretChatMessage>"
QT_MOC_LITERAL(210, 4101, 18), // "secretChatMessages"
QT_MOC_LITERAL(211, 4120, 13), // "QList<Update>"
QT_MOC_LITERAL(212, 4134, 12), // "otherUpdates"
QT_MOC_LITERAL(213, 4147, 12), // "UpdatesState"
QT_MOC_LITERAL(214, 4160, 5), // "state"
QT_MOC_LITERAL(215, 4166, 19), // "isIntermediateState"
QT_MOC_LITERAL(216, 4186, 19), // "uploadGetFileAnswer"
QT_MOC_LITERAL(217, 4206, 6), // "fileId"
QT_MOC_LITERAL(218, 4213, 15), // "StorageFileType"
QT_MOC_LITERAL(219, 4229, 4), // "type"
QT_MOC_LITERAL(220, 4234, 5), // "mtime"
QT_MOC_LITERAL(221, 4240, 5), // "bytes"
QT_MOC_LITERAL(222, 4246, 6), // "partId"
QT_MOC_LITERAL(223, 4253, 10), // "downloaded"
QT_MOC_LITERAL(224, 4264, 5), // "total"
QT_MOC_LITERAL(225, 4270, 22), // "uploadCancelFileAnswer"
QT_MOC_LITERAL(226, 4293, 9), // "cancelled"
QT_MOC_LITERAL(227, 4303, 20), // "uploadSendFileAnswer"
QT_MOC_LITERAL(228, 4324, 8), // "uploaded"
QT_MOC_LITERAL(229, 4333, 9), // "totalSize"
QT_MOC_LITERAL(230, 4343, 21), // "helpGetSuppportAnswer"
QT_MOC_LITERAL(231, 4365, 23), // "helpGetInviteTextAnswer"
QT_MOC_LITERAL(232, 4389, 7), // "message"
QT_MOC_LITERAL(233, 4397, 22), // "helpGetAppUpdateAnswer"
QT_MOC_LITERAL(234, 4420, 8), // "updateId"
QT_MOC_LITERAL(235, 4429, 8), // "critical"
QT_MOC_LITERAL(236, 4438, 3), // "url"
QT_MOC_LITERAL(237, 4442, 4), // "text"
QT_MOC_LITERAL(238, 4447, 14), // "updatesTooLong"
QT_MOC_LITERAL(239, 4462, 18), // "updateShortMessage"
QT_MOC_LITERAL(240, 4481, 6), // "userId"
QT_MOC_LITERAL(241, 4488, 11), // "fwd_from_id"
QT_MOC_LITERAL(242, 4500, 8), // "fwd_date"
QT_MOC_LITERAL(243, 4509, 15), // "reply_to_msg_id"
QT_MOC_LITERAL(244, 4525, 6), // "unread"
QT_MOC_LITERAL(245, 4532, 3), // "out"
QT_MOC_LITERAL(246, 4536, 22), // "updateShortChatMessage"
QT_MOC_LITERAL(247, 4559, 6), // "fromId"
QT_MOC_LITERAL(248, 4566, 11), // "updateShort"
QT_MOC_LITERAL(249, 4578, 6), // "Update"
QT_MOC_LITERAL(250, 4585, 6), // "update"
QT_MOC_LITERAL(251, 4592, 15), // "updatesCombined"
QT_MOC_LITERAL(252, 4608, 8), // "seqStart"
QT_MOC_LITERAL(253, 4617, 4), // "udts"
QT_MOC_LITERAL(254, 4622, 23), // "updateSecretChatMessage"
QT_MOC_LITERAL(255, 4646, 17), // "SecretChatMessage"
QT_MOC_LITERAL(256, 4664, 17), // "secretChatMessage"
QT_MOC_LITERAL(257, 4682, 12), // "disconnected"
QT_MOC_LITERAL(258, 4695, 9), // "connected"
QT_MOC_LITERAL(259, 4705, 5), // "woken"
QT_MOC_LITERAL(260, 4711, 10), // "fatalError"
QT_MOC_LITERAL(261, 4722, 7), // "onError"
QT_MOC_LITERAL(262, 4730, 12), // "attachedData"
QT_MOC_LITERAL(263, 4743, 5), // "bool&"
QT_MOC_LITERAL(264, 4749, 8), // "accepted"
QT_MOC_LITERAL(265, 4758, 17), // "onDcProviderReady"
QT_MOC_LITERAL(266, 4776, 14), // "onAuthLoggedIn"
QT_MOC_LITERAL(267, 4791, 25), // "onAuthCheckPhoneDcChanged"
QT_MOC_LITERAL(268, 4817, 28), // "onHelpGetInviteTextDcChanged"
QT_MOC_LITERAL(269, 4846, 25), // "onImportContactsDcChanged"
QT_MOC_LITERAL(270, 4872, 14), // "onAuthSentCode"
QT_MOC_LITERAL(271, 4887, 13), // "phoneCodeHash"
QT_MOC_LITERAL(272, 4901, 10), // "isPassword"
QT_MOC_LITERAL(273, 4912, 16), // "onUserAuthorized"
QT_MOC_LITERAL(274, 4929, 18), // "onAuthLogOutAnswer"
QT_MOC_LITERAL(275, 4948, 14), // "onPhotosPhotos"
QT_MOC_LITERAL(276, 4963, 30), // "onContactsImportContactsAnswer"
QT_MOC_LITERAL(277, 4994, 18), // "onContactsContacts"
QT_MOC_LITERAL(278, 5013, 29), // "onContactsContactsNotModified"
QT_MOC_LITERAL(279, 5043, 17), // "onContactsBlocked"
QT_MOC_LITERAL(280, 5061, 21), // "onMessagesSentMessage"
QT_MOC_LITERAL(281, 5083, 25), // "onMessagesSendMediaAnswer"
QT_MOC_LITERAL(282, 5109, 28), // "onMessagesForwardMediaAnswer"
QT_MOC_LITERAL(283, 5138, 29), // "onMessagesGetMessagesMessages"
QT_MOC_LITERAL(284, 5168, 17), // "onMessagesDialogs"
QT_MOC_LITERAL(285, 5186, 28), // "onMessagesGetHistoryMessages"
QT_MOC_LITERAL(286, 5215, 24), // "onMessagesSearchMessages"
QT_MOC_LITERAL(287, 5240, 18), // "onMessagesDhConfig"
QT_MOC_LITERAL(288, 5259, 1), // "g"
QT_MOC_LITERAL(289, 5261, 1), // "p"
QT_MOC_LITERAL(290, 5263, 7), // "version"
QT_MOC_LITERAL(291, 5271, 6), // "random"
QT_MOC_LITERAL(292, 5278, 29), // "onMessagesDhConfigNotModified"
QT_MOC_LITERAL(293, 5308, 40), // "onMessagesRequestEncryptionEn..."
QT_MOC_LITERAL(294, 5349, 13), // "EncryptedChat"
QT_MOC_LITERAL(295, 5363, 4), // "chat"
QT_MOC_LITERAL(296, 5368, 19), // "onUpdatesDifference"
QT_MOC_LITERAL(297, 5388, 9), // "messsages"
QT_MOC_LITERAL(298, 5398, 23), // "QList<EncryptedMessage>"
QT_MOC_LITERAL(299, 5422, 20), // "newEncryptedMessages"
QT_MOC_LITERAL(300, 5443, 24), // "onUpdatesDifferenceSlice"
QT_MOC_LITERAL(301, 5468, 13), // "onUpdateShort"
QT_MOC_LITERAL(302, 5482, 17), // "onUpdatesCombined"
QT_MOC_LITERAL(303, 5500, 9), // "onUpdates"
QT_MOC_LITERAL(304, 5510, 39), // "onMessagesAcceptEncryptionEnc..."
QT_MOC_LITERAL(305, 5550, 33), // "onMessagesDiscardEncryptionRe..."
QT_MOC_LITERAL(306, 5584, 19), // "onSequenceNumberGap"
QT_MOC_LITERAL(307, 5604, 10), // "startSeqNo"
QT_MOC_LITERAL(308, 5615, 8) // "endSeqNo"

    },
    "Telegram\0error\0\0id\0errorCode\0errorText\0"
    "functionName\0authSignInError\0"
    "authSignUpError\0authNeeded\0authLoggedIn\0"
    "authCheckPhoneAnswer\0phoneRegistered\0"
    "authCheckedPhoneError\0msgId\0"
    "authCheckPhoneSent\0phoneNumber\0"
    "authSendCodeAnswer\0sendCallTimeout\0"
    "authSendCodeError\0authSendSmsAnswer\0"
    "ok\0authSendCallAnswer\0authLogOutAnswer\0"
    "authSendInvitesAnswer\0"
    "authResetAuthorizationsAnswer\0"
    "authCheckPasswordAnswer\0expires\0User\0"
    "user\0authRequestPasswordRecoveryAnswer\0"
    "AuthPasswordRecovery\0recovery\0"
    "authRecoverPasswordAnswer\0AuthAuthorization\0"
    "auth\0accountRegisterDeviceAnswer\0"
    "accountUnregisterDeviceAnswer\0"
    "accountUpdateNotifySettingsAnswer\0"
    "accountGetNotifySettingsAnswer\0"
    "PeerNotifySettings\0peerNotifySettings\0"
    "accountResetNotifySettingsAnswer\0"
    "accountUpdateProfileAnswer\0"
    "accountUpdateStatusAnswer\0"
    "accountGetWallPapersAnswer\0QList<WallPaper>\0"
    "wallPapers\0accountCheckUsernameAnswer\0"
    "accountUpdateUsernameAnswer\0"
    "accountDeleteAccountAnswer\0"
    "accountGetAccountTTLAnswer\0AccountDaysTTL\0"
    "ttl\0accountSetAccountTTLAnswer\0"
    "accountUpdateDeviceLockedAnswer\0"
    "accountChangePhoneAnswer\0"
    "accountSentChangePhoneCode\0phone_code_hash\0"
    "send_call_timeout\0accountGetPasswordAnswer\0"
    "AccountPassword\0password\0"
    "accountGetAuthorizationsAnswer\0"
    "AccountAuthorizations\0auths\0"
    "accountResetAuthorizationAnswer\0"
    "accountGetPasswordSettingsAnswer\0"
    "AccountPasswordSettings\0settings\0"
    "accountUpdatePasswordSettingsAnswer\0"
    "photosUploadProfilePhotoAnswer\0Photo\0"
    "photo\0QList<User>\0users\0"
    "photosUpdateProfilePhotoAnswer\0"
    "UserProfilePhoto\0userProfilePhoto\0"
    "usersGetUsersAnswer\0usersGetFullUserAnswer\0"
    "ContactsLink\0link\0profilePhoto\0"
    "notifySettings\0blocked\0realFirstName\0"
    "realLastName\0photosGetUserPhotosAnswer\0"
    "sliceCount\0QList<Photo>\0photos\0"
    "contactsGetStatusesAnswer\0"
    "QList<ContactStatus>\0statuses\0"
    "contactsGetContactsAnswer\0modified\0"
    "QList<Contact>\0contacts\0"
    "contactsImportContactsAnswer\0"
    "QList<ImportedContact>\0importedContacts\0"
    "QList<qint64>\0retryContacts\0"
    "contactsDeleteContactAnswer\0ContactLink\0"
    "myLink\0foreignLink\0contactsDeleteContactsAnswer\0"
    "contactsResolveUsernameAnswer\0"
    "contactsBlockAnswer\0contactsUnblockAnswer\0"
    "contactsBlockResult\0contactsGetBlockedAnswer\0"
    "QList<ContactBlocked>\0messagesSendMessageAnswer\0"
    "date\0MessageMedia\0media\0pts\0pts_count\0"
    "seq\0QList<ContactsLink>\0links\0"
    "messagesSendMediaAnswer\0UpdatesType\0"
    "updates\0messagesSendPhotoAnswer\0"
    "messagesSendGeoPointAnswer\0"
    "messagesSendContactAnswer\0"
    "messagesSendVideoAnswer\0messagesSendAudioAnswer\0"
    "messagesSendDocumentAnswer\0"
    "messagesForwardMediaAnswer\0"
    "messagesForwardPhotoAnswer\0"
    "messagesForwardVideoAnswer\0"
    "messagesForwardAudioAnswer\0"
    "messagesForwardDocumentAnswer\0"
    "messagesSetTypingAnswer\0"
    "messagesGetMessagesAnswer\0QList<Message>\0"
    "messages\0QList<Chat>\0chats\0"
    "messagesGetDialogsAnswer\0QList<Dialog>\0"
    "dialogs\0messagesGetHistoryAnswer\0"
    "messagesSearchAnswer\0messagesReadHistoryAnswer\0"
    "offset\0messagesDeleteHistoryAnswer\0"
    "messagesReadMessageContentsAnswer\0"
    "MessagesAffectedMessages\0watchedMessages\0"
    "messagesDeleteMessagesAnswer\0"
    "deletedMessages\0messagesReceivedMessagesAnswer\0"
    "QList<ReceivedNotifyMessage>\0"
    "confirmedMsgIds\0messagesForwardMessageAnswer\0"
    "messagesForwardMessagesAnswer\0"
    "messagesSendBroadcastAnswer\0"
    "messagesGetWebPagePreviewAnswer\0"
    "messagesGetChatsAnswer\0messagesGetFullChatAnswer\0"
    "ChatFull\0chatFull\0messagesEditChatTitleAnswer\0"
    "messagesEditChatPhotoStatedMessageAnswer\0"
    "messagesAddChatUserAnswer\0"
    "messagesDeleteChatUserAnswer\0"
    "messagesCreateChatAnswer\0"
    "messagesCreateEncryptedChatAnswer\0"
    "chatId\0peerId\0accessHash\0"
    "messagesEncryptedChatRequested\0"
    "messagesEncryptedChatCreated\0"
    "messagesEncryptedChatDiscarded\0"
    "messagesSetEncryptedTypingAnswer\0"
    "messagesReadEncryptedHistoryAnswer\0"
    "messagesSendEncryptedAnswer\0EncryptedFile\0"
    "encryptedFile\0messagesSendEncryptedFileAnswer\0"
    "messagesSendEncryptedServiceAnswer\0"
    "messagesReceivedQueueAnwer\0msgIds\0"
    "messagesGetStickersAnwer\0MessagesStickers\0"
    "stickers\0messagesGetAllStickersAnwer\0"
    "MessagesAllStickers\0messagesGetStickerSetAnwer\0"
    "MessagesStickerSet\0stickerset\0"
    "messagesInstallStickerSetAnwer\0"
    "messagesUninstallStickerSetAnwer\0"
    "messagesExportChatInviteAnwer\0"
    "ExportedChatInvite\0invite\0"
    "messagesCheckChatInviteAnwer\0ChatInvite\0"
    "messagesImportChatInviteAnwer\0"
    "updatesGetStateAnswer\0qts\0unreadCount\0"
    "updatesGetDifferenceAnswer\0"
    "QList<SecretChatMessage>\0secretChatMessages\0"
    "QList<Update>\0otherUpdates\0UpdatesState\0"
    "state\0isIntermediateState\0uploadGetFileAnswer\0"
    "fileId\0StorageFileType\0type\0mtime\0"
    "bytes\0partId\0downloaded\0total\0"
    "uploadCancelFileAnswer\0cancelled\0"
    "uploadSendFileAnswer\0uploaded\0totalSize\0"
    "helpGetSuppportAnswer\0helpGetInviteTextAnswer\0"
    "message\0helpGetAppUpdateAnswer\0updateId\0"
    "critical\0url\0text\0updatesTooLong\0"
    "updateShortMessage\0userId\0fwd_from_id\0"
    "fwd_date\0reply_to_msg_id\0unread\0out\0"
    "updateShortChatMessage\0fromId\0updateShort\0"
    "Update\0update\0updatesCombined\0seqStart\0"
    "udts\0updateSecretChatMessage\0"
    "SecretChatMessage\0secretChatMessage\0"
    "disconnected\0connected\0woken\0fatalError\0"
    "onError\0attachedData\0bool&\0accepted\0"
    "onDcProviderReady\0onAuthLoggedIn\0"
    "onAuthCheckPhoneDcChanged\0"
    "onHelpGetInviteTextDcChanged\0"
    "onImportContactsDcChanged\0onAuthSentCode\0"
    "phoneCodeHash\0isPassword\0onUserAuthorized\0"
    "onAuthLogOutAnswer\0onPhotosPhotos\0"
    "onContactsImportContactsAnswer\0"
    "onContactsContacts\0onContactsContactsNotModified\0"
    "onContactsBlocked\0onMessagesSentMessage\0"
    "onMessagesSendMediaAnswer\0"
    "onMessagesForwardMediaAnswer\0"
    "onMessagesGetMessagesMessages\0"
    "onMessagesDialogs\0onMessagesGetHistoryMessages\0"
    "onMessagesSearchMessages\0onMessagesDhConfig\0"
    "g\0p\0version\0random\0onMessagesDhConfigNotModified\0"
    "onMessagesRequestEncryptionEncryptedChat\0"
    "EncryptedChat\0chat\0onUpdatesDifference\0"
    "messsages\0QList<EncryptedMessage>\0"
    "newEncryptedMessages\0onUpdatesDifferenceSlice\0"
    "onUpdateShort\0onUpdatesCombined\0"
    "onUpdates\0onMessagesAcceptEncryptionEncryptedChat\0"
    "onMessagesDiscardEncryptionResult\0"
    "onSequenceNumberGap\0startSeqNo\0endSeqNo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Telegram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     162,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     130,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  824,    2, 0x06 /* Public */,
       1,    3,  833,    2, 0x26 /* Public | MethodCloned */,
       7,    3,  840,    2, 0x06 /* Public */,
       8,    3,  847,    2, 0x06 /* Public */,
       9,    0,  854,    2, 0x06 /* Public */,
      10,    0,  855,    2, 0x06 /* Public */,
      11,    2,  856,    2, 0x06 /* Public */,
      13,    1,  861,    2, 0x06 /* Public */,
      15,    2,  864,    2, 0x06 /* Public */,
      17,    3,  869,    2, 0x06 /* Public */,
      19,    1,  876,    2, 0x06 /* Public */,
      20,    2,  879,    2, 0x06 /* Public */,
      22,    2,  884,    2, 0x06 /* Public */,
      23,    2,  889,    2, 0x06 /* Public */,
      24,    2,  894,    2, 0x06 /* Public */,
      25,    2,  899,    2, 0x06 /* Public */,
      26,    3,  904,    2, 0x06 /* Public */,
      30,    2,  911,    2, 0x06 /* Public */,
      33,    2,  916,    2, 0x06 /* Public */,
      36,    2,  921,    2, 0x06 /* Public */,
      37,    2,  926,    2, 0x06 /* Public */,
      38,    2,  931,    2, 0x06 /* Public */,
      39,    2,  936,    2, 0x06 /* Public */,
      42,    2,  941,    2, 0x06 /* Public */,
      43,    2,  946,    2, 0x06 /* Public */,
      44,    2,  951,    2, 0x06 /* Public */,
      45,    2,  956,    2, 0x06 /* Public */,
      48,    2,  961,    2, 0x06 /* Public */,
      49,    2,  966,    2, 0x06 /* Public */,
      50,    2,  971,    2, 0x06 /* Public */,
      51,    2,  976,    2, 0x06 /* Public */,
      54,    2,  981,    2, 0x06 /* Public */,
      55,    2,  986,    2, 0x06 /* Public */,
      56,    2,  991,    2, 0x06 /* Public */,
      57,    3,  996,    2, 0x06 /* Public */,
      60,    2, 1003,    2, 0x06 /* Public */,
      63,    2, 1008,    2, 0x06 /* Public */,
      66,    2, 1013,    2, 0x06 /* Public */,
      67,    2, 1018,    2, 0x06 /* Public */,
      70,    2, 1023,    2, 0x06 /* Public */,
      71,    3, 1028,    2, 0x06 /* Public */,
      76,    2, 1035,    2, 0x06 /* Public */,
      79,    2, 1040,    2, 0x06 /* Public */,
      80,    8, 1045,    2, 0x06 /* Public */,
      88,    4, 1062,    2, 0x06 /* Public */,
      92,    2, 1071,    2, 0x06 /* Public */,
      95,    4, 1076,    2, 0x06 /* Public */,
      99,    4, 1085,    2, 0x06 /* Public */,
     104,    4, 1094,    2, 0x06 /* Public */,
     108,    2, 1103,    2, 0x06 /* Public */,
     109,    2, 1108,    2, 0x06 /* Public */,
     110,    2, 1113,    2, 0x06 /* Public */,
     111,    2, 1118,    2, 0x06 /* Public */,
     112,    2, 1123,    2, 0x06 /* Public */,
     113,    4, 1128,    2, 0x06 /* Public */,
     115,    8, 1137,    2, 0x06 /* Public */,
     124,    2, 1154,    2, 0x06 /* Public */,
     127,    2, 1159,    2, 0x06 /* Public */,
     128,    2, 1164,    2, 0x06 /* Public */,
     129,    2, 1169,    2, 0x06 /* Public */,
     130,    2, 1174,    2, 0x06 /* Public */,
     131,    2, 1179,    2, 0x06 /* Public */,
     132,    2, 1184,    2, 0x06 /* Public */,
     133,    2, 1189,    2, 0x06 /* Public */,
     134,    2, 1194,    2, 0x06 /* Public */,
     135,    2, 1199,    2, 0x06 /* Public */,
     136,    2, 1204,    2, 0x06 /* Public */,
     137,    2, 1209,    2, 0x06 /* Public */,
     138,    2, 1214,    2, 0x06 /* Public */,
     139,    5, 1219,    2, 0x06 /* Public */,
     144,    6, 1230,    2, 0x06 /* Public */,
     147,    5, 1243,    2, 0x06 /* Public */,
     148,    5, 1254,    2, 0x06 /* Public */,
     149,    4, 1265,    2, 0x06 /* Public */,
     151,    4, 1274,    2, 0x06 /* Public */,
     152,    2, 1283,    2, 0x06 /* Public */,
     155,    2, 1288,    2, 0x06 /* Public */,
     157,    2, 1293,    2, 0x06 /* Public */,
     160,    2, 1298,    2, 0x06 /* Public */,
     161,    2, 1303,    2, 0x06 /* Public */,
     162,    2, 1308,    2, 0x06 /* Public */,
     163,    2, 1313,    2, 0x06 /* Public */,
     164,    2, 1318,    2, 0x06 /* Public */,
     165,    4, 1323,    2, 0x06 /* Public */,
     168,    2, 1332,    2, 0x06 /* Public */,
     169,    2, 1337,    2, 0x06 /* Public */,
     170,    2, 1342,    2, 0x06 /* Public */,
     171,    2, 1347,    2, 0x06 /* Public */,
     172,    2, 1352,    2, 0x06 /* Public */,
     173,    4, 1357,    2, 0x06 /* Public */,
     177,    4, 1366,    2, 0x06 /* Public */,
     178,    4, 1375,    2, 0x06 /* Public */,
     179,    1, 1384,    2, 0x06 /* Public */,
     180,    2, 1387,    2, 0x06 /* Public */,
     181,    2, 1392,    2, 0x06 /* Public */,
     182,    3, 1397,    2, 0x06 /* Public */,
     182,    2, 1404,    2, 0x26 /* Public | MethodCloned */,
     185,    3, 1409,    2, 0x06 /* Public */,
     185,    2, 1416,    2, 0x26 /* Public | MethodCloned */,
     186,    3, 1421,    2, 0x06 /* Public */,
     186,    2, 1428,    2, 0x26 /* Public | MethodCloned */,
     187,    2, 1433,    2, 0x06 /* Public */,
     189,    2, 1438,    2, 0x06 /* Public */,
     192,    2, 1443,    2, 0x06 /* Public */,
     194,    2, 1448,    2, 0x06 /* Public */,
     197,    2, 1453,    2, 0x06 /* Public */,
     198,    2, 1458,    2, 0x06 /* Public */,
     199,    2, 1463,    2, 0x06 /* Public */,
     202,    2, 1468,    2, 0x06 /* Public */,
     204,    2, 1473,    2, 0x06 /* Public */,
     205,    6, 1478,    2, 0x06 /* Public */,
     208,    3, 1491,    2, 0x06 /* Public */,
     208,    8, 1498,    2, 0x06 /* Public */,
     216,    7, 1515,    2, 0x06 /* Public */,
     225,    2, 1530,    2, 0x06 /* Public */,
     227,    4, 1535,    2, 0x06 /* Public */,
     230,    3, 1544,    2, 0x06 /* Public */,
     231,    2, 1551,    2, 0x06 /* Public */,
     233,    5, 1556,    2, 0x06 /* Public */,
     238,    0, 1567,    2, 0x06 /* Public */,
     239,   11, 1568,    2, 0x06 /* Public */,
     246,   12, 1591,    2, 0x06 /* Public */,
     248,    2, 1616,    2, 0x06 /* Public */,
     251,    6, 1621,    2, 0x06 /* Public */,
     126,    5, 1634,    2, 0x06 /* Public */,
     254,    2, 1645,    2, 0x06 /* Public */,
     257,    0, 1650,    2, 0x06 /* Public */,
     258,    0, 1651,    2, 0x06 /* Public */,
     259,    0, 1652,    2, 0x06 /* Public */,
     260,    0, 1653,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     261,    6, 1654,    2, 0x08 /* Private */,
     265,    0, 1667,    2, 0x08 /* Private */,
     266,    0, 1668,    2, 0x08 /* Private */,
     267,    0, 1669,    2, 0x08 /* Private */,
     268,    0, 1670,    2, 0x08 /* Private */,
     269,    0, 1671,    2, 0x08 /* Private */,
     270,    5, 1672,    2, 0x08 /* Private */,
     273,    3, 1683,    2, 0x08 /* Private */,
     274,    2, 1690,    2, 0x08 /* Private */,
     275,    3, 1695,    2, 0x08 /* Private */,
     276,    0, 1702,    2, 0x08 /* Private */,
     277,    3, 1703,    2, 0x08 /* Private */,
     278,    1, 1710,    2, 0x08 /* Private */,
     279,    3, 1713,    2, 0x08 /* Private */,
     280,    7, 1720,    2, 0x08 /* Private */,
     281,    2, 1735,    2, 0x08 /* Private */,
     282,    2, 1740,    2, 0x08 /* Private */,
     283,    4, 1745,    2, 0x08 /* Private */,
     284,    5, 1754,    2, 0x08 /* Private */,
     285,    4, 1765,    2, 0x08 /* Private */,
     286,    4, 1774,    2, 0x08 /* Private */,
     287,    5, 1783,    2, 0x08 /* Private */,
     292,    2, 1794,    2, 0x08 /* Private */,
     293,    2, 1799,    2, 0x08 /* Private */,
     296,    7, 1804,    2, 0x08 /* Private */,
     300,    7, 1819,    2, 0x08 /* Private */,
     301,    1, 1834,    2, 0x08 /* Private */,
     302,    1, 1837,    2, 0x08 /* Private */,
     303,    1, 1840,    2, 0x08 /* Private */,
     304,    2, 1843,    2, 0x08 /* Private */,
     305,    2, 1848,    2, 0x08 /* Private */,
     306,    3, 1853,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   12,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   14,   16,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::Int,    3,   12,   18,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 28,   14,   27,   29,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 31,   14,   32,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 34,   14,   35,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 40,    3,   41,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 28,    3,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 46,    3,   47,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 28,    3,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 52,   14,   53,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 28,   14,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::Int,   14,   58,   59,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61,   14,   62,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 64,   14,   65,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 68,   14,   69,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 72, 0x80000000 | 74,    3,   73,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,   78,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 74,    3,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 28, 0x80000000 | 81, 0x80000000 | 72, 0x80000000 | 40, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,   29,   82,   83,   84,   85,   86,   87,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 90, 0x80000000 | 74,    3,   89,   91,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 93,    3,   94,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, 0x80000000 | 97, 0x80000000 | 74,    3,   96,   98,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 100, 0x80000000 | 102, 0x80000000 | 74,    3,  101,  103,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 105, 0x80000000 | 105, 0x80000000 | 28,    3,  106,  107,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 28,   14,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 114, 0x80000000 | 74,    3,   89,   85,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, 0x80000000 | 117, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 122,    3,   14,  116,  118,  119,  120,  121,  123,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,    3,   89,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 145, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,    3,   89,  146,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,    3,   89,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,    3,   89,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,  119,  120,  150,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,  119,  120,  150,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153,   14,  154,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153,    3,  156,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 158,    3,  159,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 117,   14,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 142,    3,  143,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 166, 0x80000000 | 142, 0x80000000 | 74,    3,  167,  143,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,   14,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,    3,  126,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,  174,  116,  175,  176,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,  174,  116,  175,  176,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,  174,  116,  175,  176,
    QMetaType::Void, QMetaType::Int,  174,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 183,    3,  116,  184,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    3,  116,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 183,    3,  116,  184,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    3,  116,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 183,    3,  116,  184,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    3,  116,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 102,    3,  188,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 190,   14,  191,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 193,   14,  191,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 195,   14,  196,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,   14,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 200,   14,  201,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 203,   14,  201,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,   14,  126,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,  119,  206,  116,  121,  207,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int,    3,  116,  121,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 209, 0x80000000 | 211, 0x80000000 | 142, 0x80000000 | 74, 0x80000000 | 213, QMetaType::Bool,    3,  141,  210,  212,  143,   75,  214,  215,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 218, QMetaType::Int, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int,  217,  219,  220,  221,  222,  223,  224,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,  217,  226,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, QMetaType::Int,  217,  222,  228,  229,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, 0x80000000 | 28,    3,   16,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    3,  232,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,  234,  235,  236,  237,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,  240,  232,  119,  120,  116,  241,  242,  243,  244,  245,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,  247,  174,  232,  119,  120,  116,  241,  242,  243,  244,  245,
    QMetaType::Void, 0x80000000 | 249, QMetaType::Int,  250,  116,
    QMetaType::Void, 0x80000000 | 211, 0x80000000 | 74, 0x80000000 | 142, QMetaType::Int, QMetaType::Int, QMetaType::Int,  126,   75,  143,  116,  252,  121,
    QMetaType::Void, 0x80000000 | 211, 0x80000000 | 74, 0x80000000 | 142, QMetaType::Int, QMetaType::Int,  253,   75,  143,  116,  121,
    QMetaType::Void, 0x80000000 | 255, QMetaType::Int,  256,  206,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, 0x80000000 | 263,    3,    4,    5,    6,  262,  264,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,   12,  271,   18,  272,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 28,    3,   27,   29,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 90, 0x80000000 | 74,   14,   91,   75,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 97, 0x80000000 | 74,   14,   98,   75,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 114, 0x80000000 | 74,   14,   85,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, 0x80000000 | 117, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   14,  116,  118,  119,  120,  121,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,  217,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125,   14,  126,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,   14,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 145, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,   14,  146,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,   14,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 142, 0x80000000 | 74,   14,  141,  143,   75,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QByteArray, QMetaType::Int, QMetaType::QByteArray,   14,  288,  289,  290,  291,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray,   14,  291,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 294,   14,  295,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 298, 0x80000000 | 211, 0x80000000 | 142, 0x80000000 | 74, 0x80000000 | 213,   14,  297,  299,  212,  143,   75,  214,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 140, 0x80000000 | 298, 0x80000000 | 211, 0x80000000 | 142, 0x80000000 | 74, 0x80000000 | 213,   14,  297,  299,  212,  143,   75,  214,
    QMetaType::Void, 0x80000000 | 249,  250,
    QMetaType::Void, 0x80000000 | 211,  126,
    QMetaType::Void, 0x80000000 | 211,  253,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 294,    2,  295,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    2,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  174,  307,  308,

       0        // eod
};

void Telegram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Telegram *_t = static_cast<Telegram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->authSignInError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->authSignUpError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->authNeeded(); break;
        case 5: _t->authLoggedIn(); break;
        case 6: _t->authCheckPhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->authCheckedPhoneError((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->authCheckPhoneSent((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->authSendCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3]))); break;
        case 10: _t->authSendCodeError((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->authSendSmsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->authSendCallAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->authLogOutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->authSendInvitesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->authResetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->authCheckPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const User(*)>(_a[3]))); break;
        case 17: _t->authRequestPasswordRecoveryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthPasswordRecovery(*)>(_a[2]))); break;
        case 18: _t->authRecoverPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 19: _t->accountRegisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->accountUnregisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->accountUpdateNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->accountGetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PeerNotifySettings(*)>(_a[2]))); break;
        case 23: _t->accountResetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->accountUpdateProfileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 25: _t->accountUpdateStatusAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->accountGetWallPapersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<WallPaper>(*)>(_a[2]))); break;
        case 27: _t->accountCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->accountUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 29: _t->accountDeleteAccountAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->accountGetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountDaysTTL(*)>(_a[2]))); break;
        case 31: _t->accountSetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->accountUpdateDeviceLockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->accountChangePhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 34: _t->accountSentChangePhoneCode((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3]))); break;
        case 35: _t->accountGetPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPassword(*)>(_a[2]))); break;
        case 36: _t->accountGetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountAuthorizations(*)>(_a[2]))); break;
        case 37: _t->accountResetAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->accountGetPasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPasswordSettings(*)>(_a[2]))); break;
        case 39: _t->accountUpdatePasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->photosUploadProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const Photo(*)>(_a[2])),(*reinterpret_cast< const QList<User>(*)>(_a[3]))); break;
        case 41: _t->photosUpdateProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserProfilePhoto(*)>(_a[2]))); break;
        case 42: _t->usersGetUsersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2]))); break;
        case 43: _t->usersGetFullUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const ContactsLink(*)>(_a[3])),(*reinterpret_cast< const Photo(*)>(_a[4])),(*reinterpret_cast< const PeerNotifySettings(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8]))); break;
        case 44: _t->photosGetUserPhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<Photo>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 45: _t->contactsGetStatusesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ContactStatus>(*)>(_a[2]))); break;
        case 46: _t->contactsGetContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<Contact>(*)>(_a[3])),(*reinterpret_cast< QList<User>(*)>(_a[4]))); break;
        case 47: _t->contactsImportContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ImportedContact>(*)>(_a[2])),(*reinterpret_cast< const QList<qint64>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 48: _t->contactsDeleteContactAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactLink(*)>(_a[2])),(*reinterpret_cast< const ContactLink(*)>(_a[3])),(*reinterpret_cast< const User(*)>(_a[4]))); break;
        case 49: _t->contactsDeleteContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->contactsResolveUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 51: _t->contactsBlockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->contactsUnblockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->contactsBlockResult((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->contactsGetBlockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<ContactBlocked>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 55: _t->messagesSendMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const MessageMedia(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< const QList<ContactsLink>(*)>(_a[8]))); break;
        case 56: _t->messagesSendMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 57: _t->messagesSendPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 58: _t->messagesSendGeoPointAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 59: _t->messagesSendContactAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 60: _t->messagesSendVideoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 61: _t->messagesSendAudioAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 62: _t->messagesSendDocumentAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 63: _t->messagesForwardMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 64: _t->messagesForwardPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 65: _t->messagesForwardVideoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 66: _t->messagesForwardAudioAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 67: _t->messagesForwardDocumentAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 68: _t->messagesSetTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->messagesGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<Message>(*)>(_a[3])),(*reinterpret_cast< const QList<Chat>(*)>(_a[4])),(*reinterpret_cast< const QList<User>(*)>(_a[5]))); break;
        case 70: _t->messagesGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<Dialog>(*)>(_a[3])),(*reinterpret_cast< const QList<Message>(*)>(_a[4])),(*reinterpret_cast< const QList<Chat>(*)>(_a[5])),(*reinterpret_cast< const QList<User>(*)>(_a[6]))); break;
        case 71: _t->messagesGetHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<Message>(*)>(_a[3])),(*reinterpret_cast< const QList<Chat>(*)>(_a[4])),(*reinterpret_cast< const QList<User>(*)>(_a[5]))); break;
        case 72: _t->messagesSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QList<Message>(*)>(_a[3])),(*reinterpret_cast< const QList<Chat>(*)>(_a[4])),(*reinterpret_cast< const QList<User>(*)>(_a[5]))); break;
        case 73: _t->messagesReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 74: _t->messagesDeleteHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 75: _t->messagesReadMessageContentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 76: _t->messagesDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 77: _t->messagesReceivedMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ReceivedNotifyMessage>(*)>(_a[2]))); break;
        case 78: _t->messagesForwardMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 79: _t->messagesForwardMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 80: _t->messagesSendBroadcastAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 81: _t->messagesGetWebPagePreviewAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessageMedia(*)>(_a[2]))); break;
        case 82: _t->messagesGetChatsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Chat>(*)>(_a[2]))); break;
        case 83: _t->messagesGetFullChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChatFull(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 84: _t->messagesEditChatTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 85: _t->messagesEditChatPhotoStatedMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 86: _t->messagesAddChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 87: _t->messagesDeleteChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 88: _t->messagesCreateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 89: _t->messagesCreateEncryptedChatAnswer((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 90: _t->messagesEncryptedChatRequested((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 91: _t->messagesEncryptedChatCreated((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 92: _t->messagesEncryptedChatDiscarded((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 93: _t->messagesSetEncryptedTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 94: _t->messagesReadEncryptedHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 95: _t->messagesSendEncryptedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const EncryptedFile(*)>(_a[3]))); break;
        case 96: _t->messagesSendEncryptedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 97: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const EncryptedFile(*)>(_a[3]))); break;
        case 98: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 99: _t->messagesSendEncryptedServiceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< EncryptedFile(*)>(_a[3]))); break;
        case 100: _t->messagesSendEncryptedServiceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 101: _t->messagesReceivedQueueAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2]))); break;
        case 102: _t->messagesGetStickersAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickers(*)>(_a[2]))); break;
        case 103: _t->messagesGetAllStickersAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAllStickers(*)>(_a[2]))); break;
        case 104: _t->messagesGetStickerSetAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickerSet(*)>(_a[2]))); break;
        case 105: _t->messagesInstallStickerSetAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 106: _t->messagesUninstallStickerSetAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 107: _t->messagesExportChatInviteAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2]))); break;
        case 108: _t->messagesCheckChatInviteAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChatInvite(*)>(_a[2]))); break;
        case 109: _t->messagesImportChatInviteAnwer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 110: _t->updatesGetStateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6]))); break;
        case 111: _t->updatesGetDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3]))); break;
        case 112: _t->updatesGetDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<SecretChatMessage>(*)>(_a[3])),(*reinterpret_cast< const QList<Update>(*)>(_a[4])),(*reinterpret_cast< const QList<Chat>(*)>(_a[5])),(*reinterpret_cast< const QList<User>(*)>(_a[6])),(*reinterpret_cast< const UpdatesState(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 113: _t->uploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const StorageFileType(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 114: _t->uploadCancelFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 115: _t->uploadSendFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 116: _t->helpGetSuppportAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const User(*)>(_a[3]))); break;
        case 117: _t->helpGetInviteTextAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 118: _t->helpGetAppUpdateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 119: _t->updatesTooLong(); break;
        case 120: _t->updateShortMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< qint32(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 121: _t->updateShortChatMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< qint32(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< qint32(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12]))); break;
        case 122: _t->updateShort((*reinterpret_cast< const Update(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 123: _t->updatesCombined((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6]))); break;
        case 124: _t->updates((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5]))); break;
        case 125: _t->updateSecretChatMessage((*reinterpret_cast< const SecretChatMessage(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 126: _t->disconnected(); break;
        case 127: _t->connected(); break;
        case 128: _t->woken(); break;
        case 129: _t->fatalError(); break;
        case 130: _t->onError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 131: _t->onDcProviderReady(); break;
        case 132: _t->onAuthLoggedIn(); break;
        case 133: _t->onAuthCheckPhoneDcChanged(); break;
        case 134: _t->onHelpGetInviteTextDcChanged(); break;
        case 135: _t->onImportContactsDcChanged(); break;
        case 136: _t->onAuthSentCode((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 137: _t->onUserAuthorized((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const User(*)>(_a[3]))); break;
        case 138: _t->onAuthLogOutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 139: _t->onPhotosPhotos((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Photo>(*)>(_a[2])),(*reinterpret_cast< const QList<User>(*)>(_a[3]))); break;
        case 140: _t->onContactsImportContactsAnswer(); break;
        case 141: _t->onContactsContacts((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Contact>(*)>(_a[2])),(*reinterpret_cast< const QList<User>(*)>(_a[3]))); break;
        case 142: _t->onContactsContactsNotModified((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 143: _t->onContactsBlocked((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ContactBlocked>(*)>(_a[2])),(*reinterpret_cast< const QList<User>(*)>(_a[3]))); break;
        case 144: _t->onMessagesSentMessage((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const MessageMedia(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 145: _t->onMessagesSendMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 146: _t->onMessagesForwardMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 147: _t->onMessagesGetMessagesMessages((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 148: _t->onMessagesDialogs((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Dialog>(*)>(_a[2])),(*reinterpret_cast< const QList<Message>(*)>(_a[3])),(*reinterpret_cast< const QList<Chat>(*)>(_a[4])),(*reinterpret_cast< const QList<User>(*)>(_a[5]))); break;
        case 149: _t->onMessagesGetHistoryMessages((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 150: _t->onMessagesSearchMessages((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< const QList<User>(*)>(_a[4]))); break;
        case 151: _t->onMessagesDhConfig((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 152: _t->onMessagesDhConfigNotModified((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 153: _t->onMessagesRequestEncryptionEncryptedChat((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2]))); break;
        case 154: _t->onUpdatesDifference((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<EncryptedMessage>(*)>(_a[3])),(*reinterpret_cast< const QList<Update>(*)>(_a[4])),(*reinterpret_cast< const QList<Chat>(*)>(_a[5])),(*reinterpret_cast< const QList<User>(*)>(_a[6])),(*reinterpret_cast< const UpdatesState(*)>(_a[7]))); break;
        case 155: _t->onUpdatesDifferenceSlice((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<Message>(*)>(_a[2])),(*reinterpret_cast< const QList<EncryptedMessage>(*)>(_a[3])),(*reinterpret_cast< const QList<Update>(*)>(_a[4])),(*reinterpret_cast< const QList<Chat>(*)>(_a[5])),(*reinterpret_cast< const QList<User>(*)>(_a[6])),(*reinterpret_cast< const UpdatesState(*)>(_a[7]))); break;
        case 156: _t->onUpdateShort((*reinterpret_cast< const Update(*)>(_a[1]))); break;
        case 157: _t->onUpdatesCombined((*reinterpret_cast< const QList<Update>(*)>(_a[1]))); break;
        case 158: _t->onUpdates((*reinterpret_cast< const QList<Update>(*)>(_a[1]))); break;
        case 159: _t->onMessagesAcceptEncryptionEncryptedChat((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2]))); break;
        case 160: _t->onMessagesDiscardEncryptionResult((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 161: _t->onSequenceNumberGap((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthPasswordRecovery >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PeerNotifySettings >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<WallPaper> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountDaysTTL >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPassword >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountAuthorizations >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPasswordSettings >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Photo >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserProfilePhoto >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsLink >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PeerNotifySettings >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Photo >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Photo> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactStatus> >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Contact> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ImportedContact> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactLink >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactBlocked> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageMedia >(); break;
            case 7:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactsLink> >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Dialog> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ReceivedNotifyMessage> >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageMedia >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatFull >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 95:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedFile >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedFile >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedFile >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 102:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickers >(); break;
            }
            break;
        case 103:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAllStickers >(); break;
            }
            break;
        case 104:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickerSet >(); break;
            }
            break;
        case 107:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExportedChatInvite >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatInvite >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesState >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StorageFileType >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 124:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 137:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 139:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Photo> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 141:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Contact> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 143:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactBlocked> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 144:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageMedia >(); break;
            }
            break;
        case 145:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 146:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 147:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 148:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Dialog> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 149:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 150:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 153:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        case 154:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<EncryptedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesState >(); break;
            }
            break;
        case 155:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<EncryptedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Message> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesState >(); break;
            }
            break;
        case 156:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update >(); break;
            }
            break;
        case 157:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            }
            break;
        case 158:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            }
            break;
        case 159:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSignInError)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSignUpError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authNeeded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authLoggedIn)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authCheckPhoneAnswer)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authCheckedPhoneError)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authCheckPhoneSent)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSendCodeAnswer)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSendCodeError)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSendSmsAnswer)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSendCallAnswer)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authLogOutAnswer)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authSendInvitesAnswer)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authResetAuthorizationsAnswer)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authCheckPasswordAnswer)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AuthPasswordRecovery & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authRequestPasswordRecoveryAnswer)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::authRecoverPasswordAnswer)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountRegisterDeviceAnswer)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUnregisterDeviceAnswer)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdateNotifySettingsAnswer)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const PeerNotifySettings & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetNotifySettingsAnswer)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountResetNotifySettingsAnswer)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdateProfileAnswer)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdateStatusAnswer)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<WallPaper> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetWallPapersAnswer)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountCheckUsernameAnswer)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdateUsernameAnswer)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountDeleteAccountAnswer)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AccountDaysTTL & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetAccountTTLAnswer)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountSetAccountTTLAnswer)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdateDeviceLockedAnswer)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountChangePhoneAnswer)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QString & , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountSentChangePhoneCode)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AccountPassword & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetPasswordAnswer)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AccountAuthorizations & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetAuthorizationsAnswer)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountResetAuthorizationAnswer)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const AccountPasswordSettings & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountGetPasswordSettingsAnswer)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::accountUpdatePasswordSettingsAnswer)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const Photo & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::photosUploadProfilePhotoAnswer)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UserProfilePhoto & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::photosUpdateProfilePhotoAnswer)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::usersGetUsersAnswer)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const User & , const ContactsLink & , const Photo & , const PeerNotifySettings & , bool , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::usersGetFullUserAnswer)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<Photo> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::photosGetUserPhotosAnswer)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<ContactStatus> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsGetStatusesAnswer)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool , QList<Contact> , QList<User> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsGetContactsAnswer)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<ImportedContact> & , const QList<qint64> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsImportContactsAnswer)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const ContactLink & , const ContactLink & , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsDeleteContactAnswer)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsDeleteContactsAnswer)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsResolveUsernameAnswer)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsBlockAnswer)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsUnblockAnswer)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsBlockResult)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<ContactBlocked> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::contactsGetBlockedAnswer)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 , const MessageMedia & , qint32 , qint32 , qint32 , const QList<ContactsLink> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendMessageAnswer)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendMediaAnswer)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendPhotoAnswer)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendGeoPointAnswer)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendContactAnswer)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendVideoAnswer)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendAudioAnswer)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendDocumentAnswer)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardMediaAnswer)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardPhotoAnswer)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardVideoAnswer)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardAudioAnswer)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardDocumentAnswer)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSetTypingAnswer)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<Message> & , const QList<Chat> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetMessagesAnswer)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<Dialog> & , const QList<Message> & , const QList<Chat> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetDialogsAnswer)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<Message> & , const QList<Chat> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetHistoryAnswer)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const QList<Message> & , const QList<Chat> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSearchAnswer)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesReadHistoryAnswer)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesDeleteHistoryAnswer)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesReadMessageContentsAnswer)) {
                *result = 75;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesDeleteMessagesAnswer)) {
                *result = 76;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<ReceivedNotifyMessage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesReceivedMessagesAnswer)) {
                *result = 77;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardMessageAnswer)) {
                *result = 78;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesForwardMessagesAnswer)) {
                *result = 79;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendBroadcastAnswer)) {
                *result = 80;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessageMedia & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetWebPagePreviewAnswer)) {
                *result = 81;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<Chat> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetChatsAnswer)) {
                *result = 82;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const ChatFull & , const QList<Chat> & , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetFullChatAnswer)) {
                *result = 83;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesEditChatTitleAnswer)) {
                *result = 84;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesEditChatPhotoStatedMessageAnswer)) {
                *result = 85;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesAddChatUserAnswer)) {
                *result = 86;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesDeleteChatUserAnswer)) {
                *result = 87;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesCreateChatAnswer)) {
                *result = 88;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 , qint32 , qint32 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesCreateEncryptedChatAnswer)) {
                *result = 89;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 , qint32 , qint32 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesEncryptedChatRequested)) {
                *result = 90;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 , qint32 , qint32 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesEncryptedChatCreated)) {
                *result = 91;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesEncryptedChatDiscarded)) {
                *result = 92;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSetEncryptedTypingAnswer)) {
                *result = 93;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesReadEncryptedHistoryAnswer)) {
                *result = 94;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const EncryptedFile & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendEncryptedAnswer)) {
                *result = 95;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , const EncryptedFile & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendEncryptedFileAnswer)) {
                *result = 97;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , EncryptedFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesSendEncryptedServiceAnswer)) {
                *result = 99;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<qint64> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesReceivedQueueAnwer)) {
                *result = 101;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessagesStickers & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetStickersAnwer)) {
                *result = 102;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessagesAllStickers & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetAllStickersAnwer)) {
                *result = 103;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const MessagesStickerSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesGetStickerSetAnwer)) {
                *result = 104;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesInstallStickerSetAnwer)) {
                *result = 105;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesUninstallStickerSetAnwer)) {
                *result = 106;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const ExportedChatInvite & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesExportChatInviteAnwer)) {
                *result = 107;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const ChatInvite & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesCheckChatInviteAnwer)) {
                *result = 108;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::messagesImportChatInviteAnwer)) {
                *result = 109;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updatesGetStateAnswer)) {
                *result = 110;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updatesGetDifferenceAnswer)) {
                *result = 111;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QList<Message> & , const QList<SecretChatMessage> & , const QList<Update> & , const QList<Chat> & , const QList<User> & , const UpdatesState & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updatesGetDifferenceAnswer)) {
                *result = 112;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const StorageFileType & , qint32 , const QByteArray & , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::uploadGetFileAnswer)) {
                *result = 113;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::uploadCancelFileAnswer)) {
                *result = 114;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::uploadSendFileAnswer)) {
                *result = 115;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QString & , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::helpGetSuppportAnswer)) {
                *result = 116;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::helpGetInviteTextAnswer)) {
                *result = 117;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint64 , qint32 , bool , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::helpGetAppUpdateAnswer)) {
                *result = 118;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updatesTooLong)) {
                *result = 119;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , qint32 , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updateShortMessage)) {
                *result = 120;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(qint32 , qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , qint32 , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updateShortChatMessage)) {
                *result = 121;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(const Update & , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updateShort)) {
                *result = 122;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updatesCombined)) {
                *result = 123;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updates)) {
                *result = 124;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)(const SecretChatMessage & , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::updateSecretChatMessage)) {
                *result = 125;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::disconnected)) {
                *result = 126;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::connected)) {
                *result = 127;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::woken)) {
                *result = 128;
                return;
            }
        }
        {
            typedef void (Telegram::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Telegram::fatalError)) {
                *result = 129;
                return;
            }
        }
    }
}

const QMetaObject Telegram::staticMetaObject = {
    { &TelegramCore::staticMetaObject, qt_meta_stringdata_Telegram.data,
      qt_meta_data_Telegram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Telegram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Telegram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Telegram.stringdata0))
        return static_cast<void*>(const_cast< Telegram*>(this));
    return TelegramCore::qt_metacast(_clname);
}

int Telegram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TelegramCore::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
    }
    return _id;
}

// SIGNAL 0
void Telegram::error(qint64 _t1, qint32 _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void Telegram::authSignInError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Telegram::authSignUpError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Telegram::authNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Telegram::authLoggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Telegram::authCheckPhoneAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Telegram::authCheckedPhoneError(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Telegram::authCheckPhoneSent(qint64 _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Telegram::authSendCodeAnswer(qint64 _t1, bool _t2, qint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Telegram::authSendCodeError(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Telegram::authSendSmsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Telegram::authSendCallAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Telegram::authLogOutAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Telegram::authSendInvitesAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Telegram::authResetAuthorizationsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Telegram::authCheckPasswordAnswer(qint64 _t1, qint32 _t2, const User & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Telegram::authRequestPasswordRecoveryAnswer(qint64 _t1, const AuthPasswordRecovery & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Telegram::authRecoverPasswordAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Telegram::accountRegisterDeviceAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Telegram::accountUnregisterDeviceAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Telegram::accountUpdateNotifySettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Telegram::accountGetNotifySettingsAnswer(qint64 _t1, const PeerNotifySettings & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Telegram::accountResetNotifySettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Telegram::accountUpdateProfileAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Telegram::accountUpdateStatusAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Telegram::accountGetWallPapersAnswer(qint64 _t1, const QList<WallPaper> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Telegram::accountCheckUsernameAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Telegram::accountUpdateUsernameAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Telegram::accountDeleteAccountAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Telegram::accountGetAccountTTLAnswer(qint64 _t1, const AccountDaysTTL & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Telegram::accountSetAccountTTLAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Telegram::accountUpdateDeviceLockedAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Telegram::accountChangePhoneAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Telegram::accountSentChangePhoneCode(qint64 _t1, const QString & _t2, qint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Telegram::accountGetPasswordAnswer(qint64 _t1, const AccountPassword & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Telegram::accountGetAuthorizationsAnswer(qint64 _t1, const AccountAuthorizations & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Telegram::accountResetAuthorizationAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Telegram::accountGetPasswordSettingsAnswer(qint64 _t1, const AccountPasswordSettings & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Telegram::accountUpdatePasswordSettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Telegram::photosUploadProfilePhotoAnswer(qint64 _t1, const Photo & _t2, const QList<User> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Telegram::photosUpdateProfilePhotoAnswer(qint64 _t1, const UserProfilePhoto & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Telegram::usersGetUsersAnswer(qint64 _t1, const QList<User> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Telegram::usersGetFullUserAnswer(qint64 _t1, const User & _t2, const ContactsLink & _t3, const Photo & _t4, const PeerNotifySettings & _t5, bool _t6, const QString & _t7, const QString & _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Telegram::photosGetUserPhotosAnswer(qint64 _t1, qint32 _t2, const QList<Photo> & _t3, const QList<User> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Telegram::contactsGetStatusesAnswer(qint64 _t1, const QList<ContactStatus> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Telegram::contactsGetContactsAnswer(qint64 _t1, bool _t2, QList<Contact> _t3, QList<User> _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Telegram::contactsImportContactsAnswer(qint64 _t1, const QList<ImportedContact> & _t2, const QList<qint64> & _t3, const QList<User> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Telegram::contactsDeleteContactAnswer(qint64 _t1, const ContactLink & _t2, const ContactLink & _t3, const User & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Telegram::contactsDeleteContactsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Telegram::contactsResolveUsernameAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Telegram::contactsBlockAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Telegram::contactsUnblockAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Telegram::contactsBlockResult(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Telegram::contactsGetBlockedAnswer(qint64 _t1, qint32 _t2, const QList<ContactBlocked> & _t3, const QList<User> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Telegram::messagesSendMessageAnswer(qint64 _t1, qint32 _t2, qint32 _t3, const MessageMedia & _t4, qint32 _t5, qint32 _t6, qint32 _t7, const QList<ContactsLink> & _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Telegram::messagesSendMediaAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Telegram::messagesSendPhotoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void Telegram::messagesSendGeoPointAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Telegram::messagesSendContactAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Telegram::messagesSendVideoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Telegram::messagesSendAudioAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Telegram::messagesSendDocumentAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Telegram::messagesForwardMediaAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Telegram::messagesForwardPhotoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Telegram::messagesForwardVideoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Telegram::messagesForwardAudioAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Telegram::messagesForwardDocumentAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Telegram::messagesSetTypingAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Telegram::messagesGetMessagesAnswer(qint64 _t1, qint32 _t2, const QList<Message> & _t3, const QList<Chat> & _t4, const QList<User> & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Telegram::messagesGetDialogsAnswer(qint64 _t1, qint32 _t2, const QList<Dialog> & _t3, const QList<Message> & _t4, const QList<Chat> & _t5, const QList<User> & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Telegram::messagesGetHistoryAnswer(qint64 _t1, qint32 _t2, const QList<Message> & _t3, const QList<Chat> & _t4, const QList<User> & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Telegram::messagesSearchAnswer(qint64 _t1, qint32 _t2, const QList<Message> & _t3, const QList<Chat> & _t4, const QList<User> & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Telegram::messagesReadHistoryAnswer(qint64 _t1, qint32 _t2, qint32 _t3, qint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Telegram::messagesDeleteHistoryAnswer(qint64 _t1, qint32 _t2, qint32 _t3, qint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Telegram::messagesReadMessageContentsAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void Telegram::messagesDeleteMessagesAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void Telegram::messagesReceivedMessagesAnswer(qint64 _t1, const QList<ReceivedNotifyMessage> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void Telegram::messagesForwardMessageAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void Telegram::messagesForwardMessagesAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void Telegram::messagesSendBroadcastAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void Telegram::messagesGetWebPagePreviewAnswer(qint64 _t1, const MessageMedia & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void Telegram::messagesGetChatsAnswer(qint64 _t1, const QList<Chat> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void Telegram::messagesGetFullChatAnswer(qint64 _t1, const ChatFull & _t2, const QList<Chat> & _t3, const QList<User> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void Telegram::messagesEditChatTitleAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void Telegram::messagesEditChatPhotoStatedMessageAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void Telegram::messagesAddChatUserAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void Telegram::messagesDeleteChatUserAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void Telegram::messagesCreateChatAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void Telegram::messagesCreateEncryptedChatAnswer(qint32 _t1, qint32 _t2, qint32 _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void Telegram::messagesEncryptedChatRequested(qint32 _t1, qint32 _t2, qint32 _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void Telegram::messagesEncryptedChatCreated(qint32 _t1, qint32 _t2, qint32 _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void Telegram::messagesEncryptedChatDiscarded(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void Telegram::messagesSetEncryptedTypingAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void Telegram::messagesReadEncryptedHistoryAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void Telegram::messagesSendEncryptedAnswer(qint64 _t1, qint32 _t2, const EncryptedFile & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 97
void Telegram::messagesSendEncryptedFileAnswer(qint64 _t1, qint32 _t2, const EncryptedFile & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 99
void Telegram::messagesSendEncryptedServiceAnswer(qint64 _t1, qint32 _t2, EncryptedFile _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 101
void Telegram::messagesReceivedQueueAnwer(qint64 _t1, const QList<qint64> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void Telegram::messagesGetStickersAnwer(qint64 _t1, const MessagesStickers & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void Telegram::messagesGetAllStickersAnwer(qint64 _t1, const MessagesAllStickers & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void Telegram::messagesGetStickerSetAnwer(qint64 _t1, const MessagesStickerSet & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void Telegram::messagesInstallStickerSetAnwer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void Telegram::messagesUninstallStickerSetAnwer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void Telegram::messagesExportChatInviteAnwer(qint64 _t1, const ExportedChatInvite & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void Telegram::messagesCheckChatInviteAnwer(qint64 _t1, const ChatInvite & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void Telegram::messagesImportChatInviteAnwer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void Telegram::updatesGetStateAnswer(qint64 _t1, qint32 _t2, qint32 _t3, qint32 _t4, qint32 _t5, qint32 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void Telegram::updatesGetDifferenceAnswer(qint64 _t1, qint32 _t2, qint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void Telegram::updatesGetDifferenceAnswer(qint64 _t1, const QList<Message> & _t2, const QList<SecretChatMessage> & _t3, const QList<Update> & _t4, const QList<Chat> & _t5, const QList<User> & _t6, const UpdatesState & _t7, bool _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void Telegram::uploadGetFileAnswer(qint64 _t1, const StorageFileType & _t2, qint32 _t3, const QByteArray & _t4, qint32 _t5, qint32 _t6, qint32 _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void Telegram::uploadCancelFileAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void Telegram::uploadSendFileAnswer(qint64 _t1, qint32 _t2, qint32 _t3, qint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void Telegram::helpGetSuppportAnswer(qint64 _t1, const QString & _t2, const User & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void Telegram::helpGetInviteTextAnswer(qint64 _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void Telegram::helpGetAppUpdateAnswer(qint64 _t1, qint32 _t2, bool _t3, QString _t4, QString _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void Telegram::updatesTooLong()
{
    QMetaObject::activate(this, &staticMetaObject, 119, Q_NULLPTR);
}

// SIGNAL 120
void Telegram::updateShortMessage(qint32 _t1, qint32 _t2, const QString & _t3, qint32 _t4, qint32 _t5, qint32 _t6, qint32 _t7, qint32 _t8, qint32 _t9, bool _t10, bool _t11)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void Telegram::updateShortChatMessage(qint32 _t1, qint32 _t2, qint32 _t3, const QString & _t4, qint32 _t5, qint32 _t6, qint32 _t7, qint32 _t8, qint32 _t9, qint32 _t10, bool _t11, bool _t12)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void Telegram::updateShort(const Update & _t1, qint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void Telegram::updatesCombined(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5, qint32 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void Telegram::updates(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void Telegram::updateSecretChatMessage(const SecretChatMessage & _t1, qint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void Telegram::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 126, Q_NULLPTR);
}

// SIGNAL 127
void Telegram::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 127, Q_NULLPTR);
}

// SIGNAL 128
void Telegram::woken()
{
    QMetaObject::activate(this, &staticMetaObject, 128, Q_NULLPTR);
}

// SIGNAL 129
void Telegram::fatalError()
{
    QMetaObject::activate(this, &staticMetaObject, 129, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
