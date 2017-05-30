/****************************************************************************
** Meta object code from reading C++ file 'telegramapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/telegram/telegramapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telegramapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelegramApi_t {
    QByteArrayData data[359];
    char stringdata0[8830];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelegramApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelegramApi_t qt_meta_stringdata_TelegramApi = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TelegramApi"
QT_MOC_LITERAL(1, 12, 27), // "accountRegisterDeviceAnswer"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "msgId"
QT_MOC_LITERAL(4, 47, 6), // "result"
QT_MOC_LITERAL(5, 54, 12), // "attachedData"
QT_MOC_LITERAL(6, 67, 29), // "accountUnregisterDeviceAnswer"
QT_MOC_LITERAL(7, 97, 33), // "accountUpdateNotifySettingsAn..."
QT_MOC_LITERAL(8, 131, 30), // "accountGetNotifySettingsAnswer"
QT_MOC_LITERAL(9, 162, 18), // "PeerNotifySettings"
QT_MOC_LITERAL(10, 181, 32), // "accountResetNotifySettingsAnswer"
QT_MOC_LITERAL(11, 214, 26), // "accountUpdateProfileAnswer"
QT_MOC_LITERAL(12, 241, 4), // "User"
QT_MOC_LITERAL(13, 246, 25), // "accountUpdateStatusAnswer"
QT_MOC_LITERAL(14, 272, 26), // "accountGetWallPapersAnswer"
QT_MOC_LITERAL(15, 299, 16), // "QList<WallPaper>"
QT_MOC_LITERAL(16, 316, 26), // "accountCheckUsernameAnswer"
QT_MOC_LITERAL(17, 343, 27), // "accountUpdateUsernameAnswer"
QT_MOC_LITERAL(18, 371, 23), // "accountGetPrivacyAnswer"
QT_MOC_LITERAL(19, 395, 19), // "AccountPrivacyRules"
QT_MOC_LITERAL(20, 415, 23), // "accountSetPrivacyAnswer"
QT_MOC_LITERAL(21, 439, 26), // "accountDeleteAccountAnswer"
QT_MOC_LITERAL(22, 466, 26), // "accountGetAccountTTLAnswer"
QT_MOC_LITERAL(23, 493, 14), // "AccountDaysTTL"
QT_MOC_LITERAL(24, 508, 26), // "accountSetAccountTTLAnswer"
QT_MOC_LITERAL(25, 535, 32), // "accountSendChangePhoneCodeAnswer"
QT_MOC_LITERAL(26, 568, 26), // "AccountSentChangePhoneCode"
QT_MOC_LITERAL(27, 595, 24), // "accountChangePhoneAnswer"
QT_MOC_LITERAL(28, 620, 31), // "accountUpdateDeviceLockedAnswer"
QT_MOC_LITERAL(29, 652, 30), // "accountGetAuthorizationsAnswer"
QT_MOC_LITERAL(30, 683, 21), // "AccountAuthorizations"
QT_MOC_LITERAL(31, 705, 31), // "accountResetAuthorizationAnswer"
QT_MOC_LITERAL(32, 737, 24), // "accountGetPasswordAnswer"
QT_MOC_LITERAL(33, 762, 15), // "AccountPassword"
QT_MOC_LITERAL(34, 778, 32), // "accountGetPasswordSettingsAnswer"
QT_MOC_LITERAL(35, 811, 23), // "AccountPasswordSettings"
QT_MOC_LITERAL(36, 835, 35), // "accountUpdatePasswordSettings..."
QT_MOC_LITERAL(37, 871, 20), // "authCheckPhoneAnswer"
QT_MOC_LITERAL(38, 892, 16), // "AuthCheckedPhone"
QT_MOC_LITERAL(39, 909, 18), // "authSendCodeAnswer"
QT_MOC_LITERAL(40, 928, 12), // "AuthSentCode"
QT_MOC_LITERAL(41, 941, 18), // "authSendCallAnswer"
QT_MOC_LITERAL(42, 960, 16), // "authSignUpAnswer"
QT_MOC_LITERAL(43, 977, 17), // "AuthAuthorization"
QT_MOC_LITERAL(44, 995, 16), // "authSignInAnswer"
QT_MOC_LITERAL(45, 1012, 16), // "authLogOutAnswer"
QT_MOC_LITERAL(46, 1029, 29), // "authResetAuthorizationsAnswer"
QT_MOC_LITERAL(47, 1059, 21), // "authSendInvitesAnswer"
QT_MOC_LITERAL(48, 1081, 29), // "authExportAuthorizationAnswer"
QT_MOC_LITERAL(49, 1111, 25), // "AuthExportedAuthorization"
QT_MOC_LITERAL(50, 1137, 29), // "authImportAuthorizationAnswer"
QT_MOC_LITERAL(51, 1167, 25), // "authBindTempAuthKeyAnswer"
QT_MOC_LITERAL(52, 1193, 17), // "authSendSmsAnswer"
QT_MOC_LITERAL(53, 1211, 32), // "authImportBotAuthorizationAnswer"
QT_MOC_LITERAL(54, 1244, 23), // "authCheckPasswordAnswer"
QT_MOC_LITERAL(55, 1268, 33), // "authRequestPasswordRecoveryAn..."
QT_MOC_LITERAL(56, 1302, 20), // "AuthPasswordRecovery"
QT_MOC_LITERAL(57, 1323, 25), // "authRecoverPasswordAnswer"
QT_MOC_LITERAL(58, 1349, 24), // "channelsGetDialogsAnswer"
QT_MOC_LITERAL(59, 1374, 15), // "MessagesDialogs"
QT_MOC_LITERAL(60, 1390, 33), // "channelsGetImportantHistoryAn..."
QT_MOC_LITERAL(61, 1424, 16), // "MessagesMessages"
QT_MOC_LITERAL(62, 1441, 25), // "channelsReadHistoryAnswer"
QT_MOC_LITERAL(63, 1467, 28), // "channelsDeleteMessagesAnswer"
QT_MOC_LITERAL(64, 1496, 24), // "MessagesAffectedMessages"
QT_MOC_LITERAL(65, 1521, 31), // "channelsDeleteUserHistoryAnswer"
QT_MOC_LITERAL(66, 1553, 23), // "MessagesAffectedHistory"
QT_MOC_LITERAL(67, 1577, 24), // "channelsReportSpamAnswer"
QT_MOC_LITERAL(68, 1602, 25), // "channelsGetMessagesAnswer"
QT_MOC_LITERAL(69, 1628, 29), // "channelsGetParticipantsAnswer"
QT_MOC_LITERAL(70, 1658, 27), // "ChannelsChannelParticipants"
QT_MOC_LITERAL(71, 1686, 28), // "channelsGetParticipantAnswer"
QT_MOC_LITERAL(72, 1715, 26), // "ChannelsChannelParticipant"
QT_MOC_LITERAL(73, 1742, 25), // "channelsGetChannelsAnswer"
QT_MOC_LITERAL(74, 1768, 13), // "MessagesChats"
QT_MOC_LITERAL(75, 1782, 28), // "channelsGetFullChannelAnswer"
QT_MOC_LITERAL(76, 1811, 16), // "MessagesChatFull"
QT_MOC_LITERAL(77, 1828, 27), // "channelsCreateChannelAnswer"
QT_MOC_LITERAL(78, 1856, 11), // "UpdatesType"
QT_MOC_LITERAL(79, 1868, 23), // "channelsEditAboutAnswer"
QT_MOC_LITERAL(80, 1892, 23), // "channelsEditAdminAnswer"
QT_MOC_LITERAL(81, 1916, 23), // "channelsEditTitleAnswer"
QT_MOC_LITERAL(82, 1940, 23), // "channelsEditPhotoAnswer"
QT_MOC_LITERAL(83, 1964, 28), // "channelsToggleCommentsAnswer"
QT_MOC_LITERAL(84, 1993, 27), // "channelsCheckUsernameAnswer"
QT_MOC_LITERAL(85, 2021, 28), // "channelsUpdateUsernameAnswer"
QT_MOC_LITERAL(86, 2050, 25), // "channelsJoinChannelAnswer"
QT_MOC_LITERAL(87, 2076, 26), // "channelsLeaveChannelAnswer"
QT_MOC_LITERAL(88, 2103, 29), // "channelsInviteToChannelAnswer"
QT_MOC_LITERAL(89, 2133, 29), // "channelsKickFromChannelAnswer"
QT_MOC_LITERAL(90, 2163, 26), // "channelsExportInviteAnswer"
QT_MOC_LITERAL(91, 2190, 18), // "ExportedChatInvite"
QT_MOC_LITERAL(92, 2209, 27), // "channelsDeleteChannelAnswer"
QT_MOC_LITERAL(93, 2237, 25), // "contactsGetStatusesAnswer"
QT_MOC_LITERAL(94, 2263, 20), // "QList<ContactStatus>"
QT_MOC_LITERAL(95, 2284, 25), // "contactsGetContactsAnswer"
QT_MOC_LITERAL(96, 2310, 16), // "ContactsContacts"
QT_MOC_LITERAL(97, 2327, 28), // "contactsImportContactsAnswer"
QT_MOC_LITERAL(98, 2356, 24), // "ContactsImportedContacts"
QT_MOC_LITERAL(99, 2381, 26), // "contactsGetSuggestedAnswer"
QT_MOC_LITERAL(100, 2408, 17), // "ContactsSuggested"
QT_MOC_LITERAL(101, 2426, 27), // "contactsDeleteContactAnswer"
QT_MOC_LITERAL(102, 2454, 12), // "ContactsLink"
QT_MOC_LITERAL(103, 2467, 28), // "contactsDeleteContactsAnswer"
QT_MOC_LITERAL(104, 2496, 19), // "contactsBlockAnswer"
QT_MOC_LITERAL(105, 2516, 21), // "contactsUnblockAnswer"
QT_MOC_LITERAL(106, 2538, 24), // "contactsGetBlockedAnswer"
QT_MOC_LITERAL(107, 2563, 15), // "ContactsBlocked"
QT_MOC_LITERAL(108, 2579, 24), // "contactsExportCardAnswer"
QT_MOC_LITERAL(109, 2604, 13), // "QList<qint32>"
QT_MOC_LITERAL(110, 2618, 24), // "contactsImportCardAnswer"
QT_MOC_LITERAL(111, 2643, 20), // "contactsSearchAnswer"
QT_MOC_LITERAL(112, 2664, 13), // "ContactsFound"
QT_MOC_LITERAL(113, 2678, 29), // "contactsResolveUsernameAnswer"
QT_MOC_LITERAL(114, 2708, 20), // "ContactsResolvedPeer"
QT_MOC_LITERAL(115, 2729, 19), // "helpGetConfigAnswer"
QT_MOC_LITERAL(116, 2749, 6), // "Config"
QT_MOC_LITERAL(117, 2756, 22), // "helpGetNearestDcAnswer"
QT_MOC_LITERAL(118, 2779, 9), // "NearestDc"
QT_MOC_LITERAL(119, 2789, 22), // "helpGetAppUpdateAnswer"
QT_MOC_LITERAL(120, 2812, 13), // "HelpAppUpdate"
QT_MOC_LITERAL(121, 2826, 20), // "helpSaveAppLogAnswer"
QT_MOC_LITERAL(122, 2847, 23), // "helpGetInviteTextAnswer"
QT_MOC_LITERAL(123, 2871, 14), // "HelpInviteText"
QT_MOC_LITERAL(124, 2886, 20), // "helpGetSupportAnswer"
QT_MOC_LITERAL(125, 2907, 11), // "HelpSupport"
QT_MOC_LITERAL(126, 2919, 25), // "helpGetAppChangelogAnswer"
QT_MOC_LITERAL(127, 2945, 16), // "HelpAppChangelog"
QT_MOC_LITERAL(128, 2962, 25), // "messagesGetMessagesAnswer"
QT_MOC_LITERAL(129, 2988, 24), // "messagesGetDialogsAnswer"
QT_MOC_LITERAL(130, 3013, 24), // "messagesGetHistoryAnswer"
QT_MOC_LITERAL(131, 3038, 20), // "messagesSearchAnswer"
QT_MOC_LITERAL(132, 3059, 25), // "messagesReadHistoryAnswer"
QT_MOC_LITERAL(133, 3085, 27), // "messagesDeleteHistoryAnswer"
QT_MOC_LITERAL(134, 3113, 28), // "messagesDeleteMessagesAnswer"
QT_MOC_LITERAL(135, 3142, 30), // "messagesReceivedMessagesAnswer"
QT_MOC_LITERAL(136, 3173, 28), // "QList<ReceivedNotifyMessage>"
QT_MOC_LITERAL(137, 3202, 23), // "messagesSetTypingAnswer"
QT_MOC_LITERAL(138, 3226, 25), // "messagesSendMessageAnswer"
QT_MOC_LITERAL(139, 3252, 23), // "messagesSendMediaAnswer"
QT_MOC_LITERAL(140, 3276, 29), // "messagesForwardMessagesAnswer"
QT_MOC_LITERAL(141, 3306, 24), // "messagesReportSpamAnswer"
QT_MOC_LITERAL(142, 3331, 22), // "messagesGetChatsAnswer"
QT_MOC_LITERAL(143, 3354, 25), // "messagesGetFullChatAnswer"
QT_MOC_LITERAL(144, 3380, 27), // "messagesEditChatTitleAnswer"
QT_MOC_LITERAL(145, 3408, 27), // "messagesEditChatPhotoAnswer"
QT_MOC_LITERAL(146, 3436, 25), // "messagesAddChatUserAnswer"
QT_MOC_LITERAL(147, 3462, 28), // "messagesDeleteChatUserAnswer"
QT_MOC_LITERAL(148, 3491, 24), // "messagesCreateChatAnswer"
QT_MOC_LITERAL(149, 3516, 28), // "messagesForwardMessageAnswer"
QT_MOC_LITERAL(150, 3545, 27), // "messagesSendBroadcastAnswer"
QT_MOC_LITERAL(151, 3573, 25), // "messagesGetDhConfigAnswer"
QT_MOC_LITERAL(152, 3599, 16), // "MessagesDhConfig"
QT_MOC_LITERAL(153, 3616, 31), // "messagesRequestEncryptionAnswer"
QT_MOC_LITERAL(154, 3648, 13), // "EncryptedChat"
QT_MOC_LITERAL(155, 3662, 30), // "messagesAcceptEncryptionAnswer"
QT_MOC_LITERAL(156, 3693, 31), // "messagesDiscardEncryptionAnswer"
QT_MOC_LITERAL(157, 3725, 32), // "messagesSetEncryptedTypingAnswer"
QT_MOC_LITERAL(158, 3758, 34), // "messagesReadEncryptedHistoryA..."
QT_MOC_LITERAL(159, 3793, 27), // "messagesSendEncryptedAnswer"
QT_MOC_LITERAL(160, 3821, 28), // "MessagesSentEncryptedMessage"
QT_MOC_LITERAL(161, 3850, 31), // "messagesSendEncryptedFileAnswer"
QT_MOC_LITERAL(162, 3882, 34), // "messagesSendEncryptedServiceA..."
QT_MOC_LITERAL(163, 3917, 27), // "messagesReceivedQueueAnswer"
QT_MOC_LITERAL(164, 3945, 13), // "QList<qint64>"
QT_MOC_LITERAL(165, 3959, 33), // "messagesReadMessageContentsAn..."
QT_MOC_LITERAL(166, 3993, 25), // "messagesGetStickersAnswer"
QT_MOC_LITERAL(167, 4019, 16), // "MessagesStickers"
QT_MOC_LITERAL(168, 4036, 28), // "messagesGetAllStickersAnswer"
QT_MOC_LITERAL(169, 4065, 19), // "MessagesAllStickers"
QT_MOC_LITERAL(170, 4085, 31), // "messagesGetWebPagePreviewAnswer"
QT_MOC_LITERAL(171, 4117, 12), // "MessageMedia"
QT_MOC_LITERAL(172, 4130, 30), // "messagesExportChatInviteAnswer"
QT_MOC_LITERAL(173, 4161, 29), // "messagesCheckChatInviteAnswer"
QT_MOC_LITERAL(174, 4191, 10), // "ChatInvite"
QT_MOC_LITERAL(175, 4202, 30), // "messagesImportChatInviteAnswer"
QT_MOC_LITERAL(176, 4233, 27), // "messagesGetStickerSetAnswer"
QT_MOC_LITERAL(177, 4261, 18), // "MessagesStickerSet"
QT_MOC_LITERAL(178, 4280, 31), // "messagesInstallStickerSetAnswer"
QT_MOC_LITERAL(179, 4312, 33), // "messagesUninstallStickerSetAn..."
QT_MOC_LITERAL(180, 4346, 22), // "messagesStartBotAnswer"
QT_MOC_LITERAL(181, 4369, 30), // "messagesGetMessagesViewsAnswer"
QT_MOC_LITERAL(182, 4400, 30), // "messagesToggleChatAdminsAnswer"
QT_MOC_LITERAL(183, 4431, 27), // "messagesEditChatAdminAnswer"
QT_MOC_LITERAL(184, 4459, 28), // "messagesDeactivateChatAnswer"
QT_MOC_LITERAL(185, 4488, 25), // "messagesMigrateChatAnswer"
QT_MOC_LITERAL(186, 4514, 26), // "messagesSearchGlobalAnswer"
QT_MOC_LITERAL(187, 4541, 30), // "photosUpdateProfilePhotoAnswer"
QT_MOC_LITERAL(188, 4572, 16), // "UserProfilePhoto"
QT_MOC_LITERAL(189, 4589, 30), // "photosUploadProfilePhotoAnswer"
QT_MOC_LITERAL(190, 4620, 11), // "PhotosPhoto"
QT_MOC_LITERAL(191, 4632, 24), // "photosDeletePhotosAnswer"
QT_MOC_LITERAL(192, 4657, 25), // "photosGetUserPhotosAnswer"
QT_MOC_LITERAL(193, 4683, 12), // "PhotosPhotos"
QT_MOC_LITERAL(194, 4696, 21), // "updatesGetStateAnswer"
QT_MOC_LITERAL(195, 4718, 12), // "UpdatesState"
QT_MOC_LITERAL(196, 4731, 26), // "updatesGetDifferenceAnswer"
QT_MOC_LITERAL(197, 4758, 17), // "UpdatesDifference"
QT_MOC_LITERAL(198, 4776, 33), // "updatesGetChannelDifferenceAn..."
QT_MOC_LITERAL(199, 4810, 24), // "UpdatesChannelDifference"
QT_MOC_LITERAL(200, 4835, 24), // "uploadSaveFilePartAnswer"
QT_MOC_LITERAL(201, 4860, 19), // "uploadGetFileAnswer"
QT_MOC_LITERAL(202, 4880, 10), // "UploadFile"
QT_MOC_LITERAL(203, 4891, 27), // "uploadSaveBigFilePartAnswer"
QT_MOC_LITERAL(204, 4919, 19), // "usersGetUsersAnswer"
QT_MOC_LITERAL(205, 4939, 11), // "QList<User>"
QT_MOC_LITERAL(206, 4951, 22), // "usersGetFullUserAnswer"
QT_MOC_LITERAL(207, 4974, 8), // "UserFull"
QT_MOC_LITERAL(208, 4983, 26), // "accountRegisterDeviceError"
QT_MOC_LITERAL(209, 5010, 9), // "errorCode"
QT_MOC_LITERAL(210, 5020, 9), // "errorText"
QT_MOC_LITERAL(211, 5030, 28), // "accountUnregisterDeviceError"
QT_MOC_LITERAL(212, 5059, 32), // "accountUpdateNotifySettingsError"
QT_MOC_LITERAL(213, 5092, 29), // "accountGetNotifySettingsError"
QT_MOC_LITERAL(214, 5122, 31), // "accountResetNotifySettingsError"
QT_MOC_LITERAL(215, 5154, 25), // "accountUpdateProfileError"
QT_MOC_LITERAL(216, 5180, 24), // "accountUpdateStatusError"
QT_MOC_LITERAL(217, 5205, 25), // "accountGetWallPapersError"
QT_MOC_LITERAL(218, 5231, 25), // "accountCheckUsernameError"
QT_MOC_LITERAL(219, 5257, 26), // "accountUpdateUsernameError"
QT_MOC_LITERAL(220, 5284, 22), // "accountGetPrivacyError"
QT_MOC_LITERAL(221, 5307, 22), // "accountSetPrivacyError"
QT_MOC_LITERAL(222, 5330, 25), // "accountDeleteAccountError"
QT_MOC_LITERAL(223, 5356, 25), // "accountGetAccountTTLError"
QT_MOC_LITERAL(224, 5382, 25), // "accountSetAccountTTLError"
QT_MOC_LITERAL(225, 5408, 31), // "accountSendChangePhoneCodeError"
QT_MOC_LITERAL(226, 5440, 23), // "accountChangePhoneError"
QT_MOC_LITERAL(227, 5464, 30), // "accountUpdateDeviceLockedError"
QT_MOC_LITERAL(228, 5495, 29), // "accountGetAuthorizationsError"
QT_MOC_LITERAL(229, 5525, 30), // "accountResetAuthorizationError"
QT_MOC_LITERAL(230, 5556, 23), // "accountGetPasswordError"
QT_MOC_LITERAL(231, 5580, 31), // "accountGetPasswordSettingsError"
QT_MOC_LITERAL(232, 5612, 34), // "accountUpdatePasswordSettings..."
QT_MOC_LITERAL(233, 5647, 19), // "authCheckPhoneError"
QT_MOC_LITERAL(234, 5667, 17), // "authSendCodeError"
QT_MOC_LITERAL(235, 5685, 17), // "authSendCallError"
QT_MOC_LITERAL(236, 5703, 15), // "authSignUpError"
QT_MOC_LITERAL(237, 5719, 15), // "authSignInError"
QT_MOC_LITERAL(238, 5735, 15), // "authLogOutError"
QT_MOC_LITERAL(239, 5751, 28), // "authResetAuthorizationsError"
QT_MOC_LITERAL(240, 5780, 20), // "authSendInvitesError"
QT_MOC_LITERAL(241, 5801, 28), // "authExportAuthorizationError"
QT_MOC_LITERAL(242, 5830, 28), // "authImportAuthorizationError"
QT_MOC_LITERAL(243, 5859, 24), // "authBindTempAuthKeyError"
QT_MOC_LITERAL(244, 5884, 16), // "authSendSmsError"
QT_MOC_LITERAL(245, 5901, 31), // "authImportBotAuthorizationError"
QT_MOC_LITERAL(246, 5933, 22), // "authCheckPasswordError"
QT_MOC_LITERAL(247, 5956, 32), // "authRequestPasswordRecoveryError"
QT_MOC_LITERAL(248, 5989, 24), // "authRecoverPasswordError"
QT_MOC_LITERAL(249, 6014, 23), // "channelsGetDialogsError"
QT_MOC_LITERAL(250, 6038, 32), // "channelsGetImportantHistoryError"
QT_MOC_LITERAL(251, 6071, 24), // "channelsReadHistoryError"
QT_MOC_LITERAL(252, 6096, 27), // "channelsDeleteMessagesError"
QT_MOC_LITERAL(253, 6124, 30), // "channelsDeleteUserHistoryError"
QT_MOC_LITERAL(254, 6155, 23), // "channelsReportSpamError"
QT_MOC_LITERAL(255, 6179, 24), // "channelsGetMessagesError"
QT_MOC_LITERAL(256, 6204, 28), // "channelsGetParticipantsError"
QT_MOC_LITERAL(257, 6233, 27), // "channelsGetParticipantError"
QT_MOC_LITERAL(258, 6261, 24), // "channelsGetChannelsError"
QT_MOC_LITERAL(259, 6286, 27), // "channelsGetFullChannelError"
QT_MOC_LITERAL(260, 6314, 26), // "channelsCreateChannelError"
QT_MOC_LITERAL(261, 6341, 22), // "channelsEditAboutError"
QT_MOC_LITERAL(262, 6364, 22), // "channelsEditAdminError"
QT_MOC_LITERAL(263, 6387, 22), // "channelsEditTitleError"
QT_MOC_LITERAL(264, 6410, 22), // "channelsEditPhotoError"
QT_MOC_LITERAL(265, 6433, 27), // "channelsToggleCommentsError"
QT_MOC_LITERAL(266, 6461, 26), // "channelsCheckUsernameError"
QT_MOC_LITERAL(267, 6488, 27), // "channelsUpdateUsernameError"
QT_MOC_LITERAL(268, 6516, 24), // "channelsJoinChannelError"
QT_MOC_LITERAL(269, 6541, 25), // "channelsLeaveChannelError"
QT_MOC_LITERAL(270, 6567, 28), // "channelsInviteToChannelError"
QT_MOC_LITERAL(271, 6596, 28), // "channelsKickFromChannelError"
QT_MOC_LITERAL(272, 6625, 25), // "channelsExportInviteError"
QT_MOC_LITERAL(273, 6651, 26), // "channelsDeleteChannelError"
QT_MOC_LITERAL(274, 6678, 24), // "contactsGetStatusesError"
QT_MOC_LITERAL(275, 6703, 24), // "contactsGetContactsError"
QT_MOC_LITERAL(276, 6728, 27), // "contactsImportContactsError"
QT_MOC_LITERAL(277, 6756, 25), // "contactsGetSuggestedError"
QT_MOC_LITERAL(278, 6782, 26), // "contactsDeleteContactError"
QT_MOC_LITERAL(279, 6809, 27), // "contactsDeleteContactsError"
QT_MOC_LITERAL(280, 6837, 18), // "contactsBlockError"
QT_MOC_LITERAL(281, 6856, 20), // "contactsUnblockError"
QT_MOC_LITERAL(282, 6877, 23), // "contactsGetBlockedError"
QT_MOC_LITERAL(283, 6901, 23), // "contactsExportCardError"
QT_MOC_LITERAL(284, 6925, 23), // "contactsImportCardError"
QT_MOC_LITERAL(285, 6949, 19), // "contactsSearchError"
QT_MOC_LITERAL(286, 6969, 28), // "contactsResolveUsernameError"
QT_MOC_LITERAL(287, 6998, 18), // "helpGetConfigError"
QT_MOC_LITERAL(288, 7017, 21), // "helpGetNearestDcError"
QT_MOC_LITERAL(289, 7039, 21), // "helpGetAppUpdateError"
QT_MOC_LITERAL(290, 7061, 19), // "helpSaveAppLogError"
QT_MOC_LITERAL(291, 7081, 22), // "helpGetInviteTextError"
QT_MOC_LITERAL(292, 7104, 19), // "helpGetSupportError"
QT_MOC_LITERAL(293, 7124, 24), // "helpGetAppChangelogError"
QT_MOC_LITERAL(294, 7149, 24), // "messagesGetMessagesError"
QT_MOC_LITERAL(295, 7174, 23), // "messagesGetDialogsError"
QT_MOC_LITERAL(296, 7198, 23), // "messagesGetHistoryError"
QT_MOC_LITERAL(297, 7222, 19), // "messagesSearchError"
QT_MOC_LITERAL(298, 7242, 24), // "messagesReadHistoryError"
QT_MOC_LITERAL(299, 7267, 26), // "messagesDeleteHistoryError"
QT_MOC_LITERAL(300, 7294, 27), // "messagesDeleteMessagesError"
QT_MOC_LITERAL(301, 7322, 29), // "messagesReceivedMessagesError"
QT_MOC_LITERAL(302, 7352, 22), // "messagesSetTypingError"
QT_MOC_LITERAL(303, 7375, 24), // "messagesSendMessageError"
QT_MOC_LITERAL(304, 7400, 22), // "messagesSendMediaError"
QT_MOC_LITERAL(305, 7423, 28), // "messagesForwardMessagesError"
QT_MOC_LITERAL(306, 7452, 23), // "messagesReportSpamError"
QT_MOC_LITERAL(307, 7476, 21), // "messagesGetChatsError"
QT_MOC_LITERAL(308, 7498, 24), // "messagesGetFullChatError"
QT_MOC_LITERAL(309, 7523, 26), // "messagesEditChatTitleError"
QT_MOC_LITERAL(310, 7550, 26), // "messagesEditChatPhotoError"
QT_MOC_LITERAL(311, 7577, 24), // "messagesAddChatUserError"
QT_MOC_LITERAL(312, 7602, 27), // "messagesDeleteChatUserError"
QT_MOC_LITERAL(313, 7630, 23), // "messagesCreateChatError"
QT_MOC_LITERAL(314, 7654, 27), // "messagesForwardMessageError"
QT_MOC_LITERAL(315, 7682, 26), // "messagesSendBroadcastError"
QT_MOC_LITERAL(316, 7709, 24), // "messagesGetDhConfigError"
QT_MOC_LITERAL(317, 7734, 30), // "messagesRequestEncryptionError"
QT_MOC_LITERAL(318, 7765, 29), // "messagesAcceptEncryptionError"
QT_MOC_LITERAL(319, 7795, 30), // "messagesDiscardEncryptionError"
QT_MOC_LITERAL(320, 7826, 31), // "messagesSetEncryptedTypingError"
QT_MOC_LITERAL(321, 7858, 33), // "messagesReadEncryptedHistoryE..."
QT_MOC_LITERAL(322, 7892, 26), // "messagesSendEncryptedError"
QT_MOC_LITERAL(323, 7919, 30), // "messagesSendEncryptedFileError"
QT_MOC_LITERAL(324, 7950, 33), // "messagesSendEncryptedServiceE..."
QT_MOC_LITERAL(325, 7984, 26), // "messagesReceivedQueueError"
QT_MOC_LITERAL(326, 8011, 32), // "messagesReadMessageContentsError"
QT_MOC_LITERAL(327, 8044, 24), // "messagesGetStickersError"
QT_MOC_LITERAL(328, 8069, 27), // "messagesGetAllStickersError"
QT_MOC_LITERAL(329, 8097, 30), // "messagesGetWebPagePreviewError"
QT_MOC_LITERAL(330, 8128, 29), // "messagesExportChatInviteError"
QT_MOC_LITERAL(331, 8158, 28), // "messagesCheckChatInviteError"
QT_MOC_LITERAL(332, 8187, 29), // "messagesImportChatInviteError"
QT_MOC_LITERAL(333, 8217, 26), // "messagesGetStickerSetError"
QT_MOC_LITERAL(334, 8244, 30), // "messagesInstallStickerSetError"
QT_MOC_LITERAL(335, 8275, 32), // "messagesUninstallStickerSetError"
QT_MOC_LITERAL(336, 8308, 21), // "messagesStartBotError"
QT_MOC_LITERAL(337, 8330, 29), // "messagesGetMessagesViewsError"
QT_MOC_LITERAL(338, 8360, 29), // "messagesToggleChatAdminsError"
QT_MOC_LITERAL(339, 8390, 26), // "messagesEditChatAdminError"
QT_MOC_LITERAL(340, 8417, 27), // "messagesDeactivateChatError"
QT_MOC_LITERAL(341, 8445, 24), // "messagesMigrateChatError"
QT_MOC_LITERAL(342, 8470, 25), // "messagesSearchGlobalError"
QT_MOC_LITERAL(343, 8496, 29), // "photosUpdateProfilePhotoError"
QT_MOC_LITERAL(344, 8526, 29), // "photosUploadProfilePhotoError"
QT_MOC_LITERAL(345, 8556, 23), // "photosDeletePhotosError"
QT_MOC_LITERAL(346, 8580, 24), // "photosGetUserPhotosError"
QT_MOC_LITERAL(347, 8605, 20), // "updatesGetStateError"
QT_MOC_LITERAL(348, 8626, 25), // "updatesGetDifferenceError"
QT_MOC_LITERAL(349, 8652, 32), // "updatesGetChannelDifferenceError"
QT_MOC_LITERAL(350, 8685, 23), // "uploadSaveFilePartError"
QT_MOC_LITERAL(351, 8709, 18), // "uploadGetFileError"
QT_MOC_LITERAL(352, 8728, 26), // "uploadSaveBigFilePartError"
QT_MOC_LITERAL(353, 8755, 18), // "usersGetUsersError"
QT_MOC_LITERAL(354, 8774, 21), // "usersGetFullUserError"
QT_MOC_LITERAL(355, 8796, 5), // "error"
QT_MOC_LITERAL(356, 8802, 12), // "functionName"
QT_MOC_LITERAL(357, 8815, 5), // "bool&"
QT_MOC_LITERAL(358, 8821, 8) // "accepted"

    },
    "TelegramApi\0accountRegisterDeviceAnswer\0"
    "\0msgId\0result\0attachedData\0"
    "accountUnregisterDeviceAnswer\0"
    "accountUpdateNotifySettingsAnswer\0"
    "accountGetNotifySettingsAnswer\0"
    "PeerNotifySettings\0accountResetNotifySettingsAnswer\0"
    "accountUpdateProfileAnswer\0User\0"
    "accountUpdateStatusAnswer\0"
    "accountGetWallPapersAnswer\0QList<WallPaper>\0"
    "accountCheckUsernameAnswer\0"
    "accountUpdateUsernameAnswer\0"
    "accountGetPrivacyAnswer\0AccountPrivacyRules\0"
    "accountSetPrivacyAnswer\0"
    "accountDeleteAccountAnswer\0"
    "accountGetAccountTTLAnswer\0AccountDaysTTL\0"
    "accountSetAccountTTLAnswer\0"
    "accountSendChangePhoneCodeAnswer\0"
    "AccountSentChangePhoneCode\0"
    "accountChangePhoneAnswer\0"
    "accountUpdateDeviceLockedAnswer\0"
    "accountGetAuthorizationsAnswer\0"
    "AccountAuthorizations\0"
    "accountResetAuthorizationAnswer\0"
    "accountGetPasswordAnswer\0AccountPassword\0"
    "accountGetPasswordSettingsAnswer\0"
    "AccountPasswordSettings\0"
    "accountUpdatePasswordSettingsAnswer\0"
    "authCheckPhoneAnswer\0AuthCheckedPhone\0"
    "authSendCodeAnswer\0AuthSentCode\0"
    "authSendCallAnswer\0authSignUpAnswer\0"
    "AuthAuthorization\0authSignInAnswer\0"
    "authLogOutAnswer\0authResetAuthorizationsAnswer\0"
    "authSendInvitesAnswer\0"
    "authExportAuthorizationAnswer\0"
    "AuthExportedAuthorization\0"
    "authImportAuthorizationAnswer\0"
    "authBindTempAuthKeyAnswer\0authSendSmsAnswer\0"
    "authImportBotAuthorizationAnswer\0"
    "authCheckPasswordAnswer\0"
    "authRequestPasswordRecoveryAnswer\0"
    "AuthPasswordRecovery\0authRecoverPasswordAnswer\0"
    "channelsGetDialogsAnswer\0MessagesDialogs\0"
    "channelsGetImportantHistoryAnswer\0"
    "MessagesMessages\0channelsReadHistoryAnswer\0"
    "channelsDeleteMessagesAnswer\0"
    "MessagesAffectedMessages\0"
    "channelsDeleteUserHistoryAnswer\0"
    "MessagesAffectedHistory\0"
    "channelsReportSpamAnswer\0"
    "channelsGetMessagesAnswer\0"
    "channelsGetParticipantsAnswer\0"
    "ChannelsChannelParticipants\0"
    "channelsGetParticipantAnswer\0"
    "ChannelsChannelParticipant\0"
    "channelsGetChannelsAnswer\0MessagesChats\0"
    "channelsGetFullChannelAnswer\0"
    "MessagesChatFull\0channelsCreateChannelAnswer\0"
    "UpdatesType\0channelsEditAboutAnswer\0"
    "channelsEditAdminAnswer\0channelsEditTitleAnswer\0"
    "channelsEditPhotoAnswer\0"
    "channelsToggleCommentsAnswer\0"
    "channelsCheckUsernameAnswer\0"
    "channelsUpdateUsernameAnswer\0"
    "channelsJoinChannelAnswer\0"
    "channelsLeaveChannelAnswer\0"
    "channelsInviteToChannelAnswer\0"
    "channelsKickFromChannelAnswer\0"
    "channelsExportInviteAnswer\0"
    "ExportedChatInvite\0channelsDeleteChannelAnswer\0"
    "contactsGetStatusesAnswer\0"
    "QList<ContactStatus>\0contactsGetContactsAnswer\0"
    "ContactsContacts\0contactsImportContactsAnswer\0"
    "ContactsImportedContacts\0"
    "contactsGetSuggestedAnswer\0ContactsSuggested\0"
    "contactsDeleteContactAnswer\0ContactsLink\0"
    "contactsDeleteContactsAnswer\0"
    "contactsBlockAnswer\0contactsUnblockAnswer\0"
    "contactsGetBlockedAnswer\0ContactsBlocked\0"
    "contactsExportCardAnswer\0QList<qint32>\0"
    "contactsImportCardAnswer\0contactsSearchAnswer\0"
    "ContactsFound\0contactsResolveUsernameAnswer\0"
    "ContactsResolvedPeer\0helpGetConfigAnswer\0"
    "Config\0helpGetNearestDcAnswer\0NearestDc\0"
    "helpGetAppUpdateAnswer\0HelpAppUpdate\0"
    "helpSaveAppLogAnswer\0helpGetInviteTextAnswer\0"
    "HelpInviteText\0helpGetSupportAnswer\0"
    "HelpSupport\0helpGetAppChangelogAnswer\0"
    "HelpAppChangelog\0messagesGetMessagesAnswer\0"
    "messagesGetDialogsAnswer\0"
    "messagesGetHistoryAnswer\0messagesSearchAnswer\0"
    "messagesReadHistoryAnswer\0"
    "messagesDeleteHistoryAnswer\0"
    "messagesDeleteMessagesAnswer\0"
    "messagesReceivedMessagesAnswer\0"
    "QList<ReceivedNotifyMessage>\0"
    "messagesSetTypingAnswer\0"
    "messagesSendMessageAnswer\0"
    "messagesSendMediaAnswer\0"
    "messagesForwardMessagesAnswer\0"
    "messagesReportSpamAnswer\0"
    "messagesGetChatsAnswer\0messagesGetFullChatAnswer\0"
    "messagesEditChatTitleAnswer\0"
    "messagesEditChatPhotoAnswer\0"
    "messagesAddChatUserAnswer\0"
    "messagesDeleteChatUserAnswer\0"
    "messagesCreateChatAnswer\0"
    "messagesForwardMessageAnswer\0"
    "messagesSendBroadcastAnswer\0"
    "messagesGetDhConfigAnswer\0MessagesDhConfig\0"
    "messagesRequestEncryptionAnswer\0"
    "EncryptedChat\0messagesAcceptEncryptionAnswer\0"
    "messagesDiscardEncryptionAnswer\0"
    "messagesSetEncryptedTypingAnswer\0"
    "messagesReadEncryptedHistoryAnswer\0"
    "messagesSendEncryptedAnswer\0"
    "MessagesSentEncryptedMessage\0"
    "messagesSendEncryptedFileAnswer\0"
    "messagesSendEncryptedServiceAnswer\0"
    "messagesReceivedQueueAnswer\0QList<qint64>\0"
    "messagesReadMessageContentsAnswer\0"
    "messagesGetStickersAnswer\0MessagesStickers\0"
    "messagesGetAllStickersAnswer\0"
    "MessagesAllStickers\0messagesGetWebPagePreviewAnswer\0"
    "MessageMedia\0messagesExportChatInviteAnswer\0"
    "messagesCheckChatInviteAnswer\0ChatInvite\0"
    "messagesImportChatInviteAnswer\0"
    "messagesGetStickerSetAnswer\0"
    "MessagesStickerSet\0messagesInstallStickerSetAnswer\0"
    "messagesUninstallStickerSetAnswer\0"
    "messagesStartBotAnswer\0"
    "messagesGetMessagesViewsAnswer\0"
    "messagesToggleChatAdminsAnswer\0"
    "messagesEditChatAdminAnswer\0"
    "messagesDeactivateChatAnswer\0"
    "messagesMigrateChatAnswer\0"
    "messagesSearchGlobalAnswer\0"
    "photosUpdateProfilePhotoAnswer\0"
    "UserProfilePhoto\0photosUploadProfilePhotoAnswer\0"
    "PhotosPhoto\0photosDeletePhotosAnswer\0"
    "photosGetUserPhotosAnswer\0PhotosPhotos\0"
    "updatesGetStateAnswer\0UpdatesState\0"
    "updatesGetDifferenceAnswer\0UpdatesDifference\0"
    "updatesGetChannelDifferenceAnswer\0"
    "UpdatesChannelDifference\0"
    "uploadSaveFilePartAnswer\0uploadGetFileAnswer\0"
    "UploadFile\0uploadSaveBigFilePartAnswer\0"
    "usersGetUsersAnswer\0QList<User>\0"
    "usersGetFullUserAnswer\0UserFull\0"
    "accountRegisterDeviceError\0errorCode\0"
    "errorText\0accountUnregisterDeviceError\0"
    "accountUpdateNotifySettingsError\0"
    "accountGetNotifySettingsError\0"
    "accountResetNotifySettingsError\0"
    "accountUpdateProfileError\0"
    "accountUpdateStatusError\0"
    "accountGetWallPapersError\0"
    "accountCheckUsernameError\0"
    "accountUpdateUsernameError\0"
    "accountGetPrivacyError\0accountSetPrivacyError\0"
    "accountDeleteAccountError\0"
    "accountGetAccountTTLError\0"
    "accountSetAccountTTLError\0"
    "accountSendChangePhoneCodeError\0"
    "accountChangePhoneError\0"
    "accountUpdateDeviceLockedError\0"
    "accountGetAuthorizationsError\0"
    "accountResetAuthorizationError\0"
    "accountGetPasswordError\0"
    "accountGetPasswordSettingsError\0"
    "accountUpdatePasswordSettingsError\0"
    "authCheckPhoneError\0authSendCodeError\0"
    "authSendCallError\0authSignUpError\0"
    "authSignInError\0authLogOutError\0"
    "authResetAuthorizationsError\0"
    "authSendInvitesError\0authExportAuthorizationError\0"
    "authImportAuthorizationError\0"
    "authBindTempAuthKeyError\0authSendSmsError\0"
    "authImportBotAuthorizationError\0"
    "authCheckPasswordError\0"
    "authRequestPasswordRecoveryError\0"
    "authRecoverPasswordError\0"
    "channelsGetDialogsError\0"
    "channelsGetImportantHistoryError\0"
    "channelsReadHistoryError\0"
    "channelsDeleteMessagesError\0"
    "channelsDeleteUserHistoryError\0"
    "channelsReportSpamError\0"
    "channelsGetMessagesError\0"
    "channelsGetParticipantsError\0"
    "channelsGetParticipantError\0"
    "channelsGetChannelsError\0"
    "channelsGetFullChannelError\0"
    "channelsCreateChannelError\0"
    "channelsEditAboutError\0channelsEditAdminError\0"
    "channelsEditTitleError\0channelsEditPhotoError\0"
    "channelsToggleCommentsError\0"
    "channelsCheckUsernameError\0"
    "channelsUpdateUsernameError\0"
    "channelsJoinChannelError\0"
    "channelsLeaveChannelError\0"
    "channelsInviteToChannelError\0"
    "channelsKickFromChannelError\0"
    "channelsExportInviteError\0"
    "channelsDeleteChannelError\0"
    "contactsGetStatusesError\0"
    "contactsGetContactsError\0"
    "contactsImportContactsError\0"
    "contactsGetSuggestedError\0"
    "contactsDeleteContactError\0"
    "contactsDeleteContactsError\0"
    "contactsBlockError\0contactsUnblockError\0"
    "contactsGetBlockedError\0contactsExportCardError\0"
    "contactsImportCardError\0contactsSearchError\0"
    "contactsResolveUsernameError\0"
    "helpGetConfigError\0helpGetNearestDcError\0"
    "helpGetAppUpdateError\0helpSaveAppLogError\0"
    "helpGetInviteTextError\0helpGetSupportError\0"
    "helpGetAppChangelogError\0"
    "messagesGetMessagesError\0"
    "messagesGetDialogsError\0messagesGetHistoryError\0"
    "messagesSearchError\0messagesReadHistoryError\0"
    "messagesDeleteHistoryError\0"
    "messagesDeleteMessagesError\0"
    "messagesReceivedMessagesError\0"
    "messagesSetTypingError\0messagesSendMessageError\0"
    "messagesSendMediaError\0"
    "messagesForwardMessagesError\0"
    "messagesReportSpamError\0messagesGetChatsError\0"
    "messagesGetFullChatError\0"
    "messagesEditChatTitleError\0"
    "messagesEditChatPhotoError\0"
    "messagesAddChatUserError\0"
    "messagesDeleteChatUserError\0"
    "messagesCreateChatError\0"
    "messagesForwardMessageError\0"
    "messagesSendBroadcastError\0"
    "messagesGetDhConfigError\0"
    "messagesRequestEncryptionError\0"
    "messagesAcceptEncryptionError\0"
    "messagesDiscardEncryptionError\0"
    "messagesSetEncryptedTypingError\0"
    "messagesReadEncryptedHistoryError\0"
    "messagesSendEncryptedError\0"
    "messagesSendEncryptedFileError\0"
    "messagesSendEncryptedServiceError\0"
    "messagesReceivedQueueError\0"
    "messagesReadMessageContentsError\0"
    "messagesGetStickersError\0"
    "messagesGetAllStickersError\0"
    "messagesGetWebPagePreviewError\0"
    "messagesExportChatInviteError\0"
    "messagesCheckChatInviteError\0"
    "messagesImportChatInviteError\0"
    "messagesGetStickerSetError\0"
    "messagesInstallStickerSetError\0"
    "messagesUninstallStickerSetError\0"
    "messagesStartBotError\0"
    "messagesGetMessagesViewsError\0"
    "messagesToggleChatAdminsError\0"
    "messagesEditChatAdminError\0"
    "messagesDeactivateChatError\0"
    "messagesMigrateChatError\0"
    "messagesSearchGlobalError\0"
    "photosUpdateProfilePhotoError\0"
    "photosUploadProfilePhotoError\0"
    "photosDeletePhotosError\0"
    "photosGetUserPhotosError\0updatesGetStateError\0"
    "updatesGetDifferenceError\0"
    "updatesGetChannelDifferenceError\0"
    "uploadSaveFilePartError\0uploadGetFileError\0"
    "uploadSaveBigFilePartError\0"
    "usersGetUsersError\0usersGetFullUserError\0"
    "error\0functionName\0bool&\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelegramApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     291,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     291,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3, 1469,    2, 0x06 /* Public */,
       6,    3, 1476,    2, 0x06 /* Public */,
       7,    3, 1483,    2, 0x06 /* Public */,
       8,    3, 1490,    2, 0x06 /* Public */,
      10,    3, 1497,    2, 0x06 /* Public */,
      11,    3, 1504,    2, 0x06 /* Public */,
      13,    3, 1511,    2, 0x06 /* Public */,
      14,    3, 1518,    2, 0x06 /* Public */,
      16,    3, 1525,    2, 0x06 /* Public */,
      17,    3, 1532,    2, 0x06 /* Public */,
      18,    3, 1539,    2, 0x06 /* Public */,
      20,    3, 1546,    2, 0x06 /* Public */,
      21,    3, 1553,    2, 0x06 /* Public */,
      22,    3, 1560,    2, 0x06 /* Public */,
      24,    3, 1567,    2, 0x06 /* Public */,
      25,    3, 1574,    2, 0x06 /* Public */,
      27,    3, 1581,    2, 0x06 /* Public */,
      28,    3, 1588,    2, 0x06 /* Public */,
      29,    3, 1595,    2, 0x06 /* Public */,
      31,    3, 1602,    2, 0x06 /* Public */,
      32,    3, 1609,    2, 0x06 /* Public */,
      34,    3, 1616,    2, 0x06 /* Public */,
      36,    3, 1623,    2, 0x06 /* Public */,
      37,    3, 1630,    2, 0x06 /* Public */,
      39,    3, 1637,    2, 0x06 /* Public */,
      41,    3, 1644,    2, 0x06 /* Public */,
      42,    3, 1651,    2, 0x06 /* Public */,
      44,    3, 1658,    2, 0x06 /* Public */,
      45,    3, 1665,    2, 0x06 /* Public */,
      46,    3, 1672,    2, 0x06 /* Public */,
      47,    3, 1679,    2, 0x06 /* Public */,
      48,    3, 1686,    2, 0x06 /* Public */,
      50,    3, 1693,    2, 0x06 /* Public */,
      51,    3, 1700,    2, 0x06 /* Public */,
      52,    3, 1707,    2, 0x06 /* Public */,
      53,    3, 1714,    2, 0x06 /* Public */,
      54,    3, 1721,    2, 0x06 /* Public */,
      55,    3, 1728,    2, 0x06 /* Public */,
      57,    3, 1735,    2, 0x06 /* Public */,
      58,    3, 1742,    2, 0x06 /* Public */,
      60,    3, 1749,    2, 0x06 /* Public */,
      62,    3, 1756,    2, 0x06 /* Public */,
      63,    3, 1763,    2, 0x06 /* Public */,
      65,    3, 1770,    2, 0x06 /* Public */,
      67,    3, 1777,    2, 0x06 /* Public */,
      68,    3, 1784,    2, 0x06 /* Public */,
      69,    3, 1791,    2, 0x06 /* Public */,
      71,    3, 1798,    2, 0x06 /* Public */,
      73,    3, 1805,    2, 0x06 /* Public */,
      75,    3, 1812,    2, 0x06 /* Public */,
      77,    3, 1819,    2, 0x06 /* Public */,
      79,    3, 1826,    2, 0x06 /* Public */,
      80,    3, 1833,    2, 0x06 /* Public */,
      81,    3, 1840,    2, 0x06 /* Public */,
      82,    3, 1847,    2, 0x06 /* Public */,
      83,    3, 1854,    2, 0x06 /* Public */,
      84,    3, 1861,    2, 0x06 /* Public */,
      85,    3, 1868,    2, 0x06 /* Public */,
      86,    3, 1875,    2, 0x06 /* Public */,
      87,    3, 1882,    2, 0x06 /* Public */,
      88,    3, 1889,    2, 0x06 /* Public */,
      89,    3, 1896,    2, 0x06 /* Public */,
      90,    3, 1903,    2, 0x06 /* Public */,
      92,    3, 1910,    2, 0x06 /* Public */,
      93,    3, 1917,    2, 0x06 /* Public */,
      95,    3, 1924,    2, 0x06 /* Public */,
      97,    3, 1931,    2, 0x06 /* Public */,
      99,    3, 1938,    2, 0x06 /* Public */,
     101,    3, 1945,    2, 0x06 /* Public */,
     103,    3, 1952,    2, 0x06 /* Public */,
     104,    3, 1959,    2, 0x06 /* Public */,
     105,    3, 1966,    2, 0x06 /* Public */,
     106,    3, 1973,    2, 0x06 /* Public */,
     108,    3, 1980,    2, 0x06 /* Public */,
     110,    3, 1987,    2, 0x06 /* Public */,
     111,    3, 1994,    2, 0x06 /* Public */,
     113,    3, 2001,    2, 0x06 /* Public */,
     115,    3, 2008,    2, 0x06 /* Public */,
     117,    3, 2015,    2, 0x06 /* Public */,
     119,    3, 2022,    2, 0x06 /* Public */,
     121,    3, 2029,    2, 0x06 /* Public */,
     122,    3, 2036,    2, 0x06 /* Public */,
     124,    3, 2043,    2, 0x06 /* Public */,
     126,    3, 2050,    2, 0x06 /* Public */,
     128,    3, 2057,    2, 0x06 /* Public */,
     129,    3, 2064,    2, 0x06 /* Public */,
     130,    3, 2071,    2, 0x06 /* Public */,
     131,    3, 2078,    2, 0x06 /* Public */,
     132,    3, 2085,    2, 0x06 /* Public */,
     133,    3, 2092,    2, 0x06 /* Public */,
     134,    3, 2099,    2, 0x06 /* Public */,
     135,    3, 2106,    2, 0x06 /* Public */,
     137,    3, 2113,    2, 0x06 /* Public */,
     138,    3, 2120,    2, 0x06 /* Public */,
     139,    3, 2127,    2, 0x06 /* Public */,
     140,    3, 2134,    2, 0x06 /* Public */,
     141,    3, 2141,    2, 0x06 /* Public */,
     142,    3, 2148,    2, 0x06 /* Public */,
     143,    3, 2155,    2, 0x06 /* Public */,
     144,    3, 2162,    2, 0x06 /* Public */,
     145,    3, 2169,    2, 0x06 /* Public */,
     146,    3, 2176,    2, 0x06 /* Public */,
     147,    3, 2183,    2, 0x06 /* Public */,
     148,    3, 2190,    2, 0x06 /* Public */,
     149,    3, 2197,    2, 0x06 /* Public */,
     150,    3, 2204,    2, 0x06 /* Public */,
     151,    3, 2211,    2, 0x06 /* Public */,
     153,    3, 2218,    2, 0x06 /* Public */,
     155,    3, 2225,    2, 0x06 /* Public */,
     156,    3, 2232,    2, 0x06 /* Public */,
     157,    3, 2239,    2, 0x06 /* Public */,
     158,    3, 2246,    2, 0x06 /* Public */,
     159,    3, 2253,    2, 0x06 /* Public */,
     161,    3, 2260,    2, 0x06 /* Public */,
     162,    3, 2267,    2, 0x06 /* Public */,
     163,    3, 2274,    2, 0x06 /* Public */,
     165,    3, 2281,    2, 0x06 /* Public */,
     166,    3, 2288,    2, 0x06 /* Public */,
     168,    3, 2295,    2, 0x06 /* Public */,
     170,    3, 2302,    2, 0x06 /* Public */,
     172,    3, 2309,    2, 0x06 /* Public */,
     173,    3, 2316,    2, 0x06 /* Public */,
     175,    3, 2323,    2, 0x06 /* Public */,
     176,    3, 2330,    2, 0x06 /* Public */,
     178,    3, 2337,    2, 0x06 /* Public */,
     179,    3, 2344,    2, 0x06 /* Public */,
     180,    3, 2351,    2, 0x06 /* Public */,
     181,    3, 2358,    2, 0x06 /* Public */,
     182,    3, 2365,    2, 0x06 /* Public */,
     183,    3, 2372,    2, 0x06 /* Public */,
     184,    3, 2379,    2, 0x06 /* Public */,
     185,    3, 2386,    2, 0x06 /* Public */,
     186,    3, 2393,    2, 0x06 /* Public */,
     187,    3, 2400,    2, 0x06 /* Public */,
     189,    3, 2407,    2, 0x06 /* Public */,
     191,    3, 2414,    2, 0x06 /* Public */,
     192,    3, 2421,    2, 0x06 /* Public */,
     194,    3, 2428,    2, 0x06 /* Public */,
     196,    3, 2435,    2, 0x06 /* Public */,
     198,    3, 2442,    2, 0x06 /* Public */,
     200,    3, 2449,    2, 0x06 /* Public */,
     201,    3, 2456,    2, 0x06 /* Public */,
     203,    3, 2463,    2, 0x06 /* Public */,
     204,    3, 2470,    2, 0x06 /* Public */,
     206,    3, 2477,    2, 0x06 /* Public */,
     208,    4, 2484,    2, 0x06 /* Public */,
     211,    4, 2493,    2, 0x06 /* Public */,
     212,    4, 2502,    2, 0x06 /* Public */,
     213,    4, 2511,    2, 0x06 /* Public */,
     214,    4, 2520,    2, 0x06 /* Public */,
     215,    4, 2529,    2, 0x06 /* Public */,
     216,    4, 2538,    2, 0x06 /* Public */,
     217,    4, 2547,    2, 0x06 /* Public */,
     218,    4, 2556,    2, 0x06 /* Public */,
     219,    4, 2565,    2, 0x06 /* Public */,
     220,    4, 2574,    2, 0x06 /* Public */,
     221,    4, 2583,    2, 0x06 /* Public */,
     222,    4, 2592,    2, 0x06 /* Public */,
     223,    4, 2601,    2, 0x06 /* Public */,
     224,    4, 2610,    2, 0x06 /* Public */,
     225,    4, 2619,    2, 0x06 /* Public */,
     226,    4, 2628,    2, 0x06 /* Public */,
     227,    4, 2637,    2, 0x06 /* Public */,
     228,    4, 2646,    2, 0x06 /* Public */,
     229,    4, 2655,    2, 0x06 /* Public */,
     230,    4, 2664,    2, 0x06 /* Public */,
     231,    4, 2673,    2, 0x06 /* Public */,
     232,    4, 2682,    2, 0x06 /* Public */,
     233,    4, 2691,    2, 0x06 /* Public */,
     234,    4, 2700,    2, 0x06 /* Public */,
     235,    4, 2709,    2, 0x06 /* Public */,
     236,    4, 2718,    2, 0x06 /* Public */,
     237,    4, 2727,    2, 0x06 /* Public */,
     238,    4, 2736,    2, 0x06 /* Public */,
     239,    4, 2745,    2, 0x06 /* Public */,
     240,    4, 2754,    2, 0x06 /* Public */,
     241,    4, 2763,    2, 0x06 /* Public */,
     242,    4, 2772,    2, 0x06 /* Public */,
     243,    4, 2781,    2, 0x06 /* Public */,
     244,    4, 2790,    2, 0x06 /* Public */,
     245,    4, 2799,    2, 0x06 /* Public */,
     246,    4, 2808,    2, 0x06 /* Public */,
     247,    4, 2817,    2, 0x06 /* Public */,
     248,    4, 2826,    2, 0x06 /* Public */,
     249,    4, 2835,    2, 0x06 /* Public */,
     250,    4, 2844,    2, 0x06 /* Public */,
     251,    4, 2853,    2, 0x06 /* Public */,
     252,    4, 2862,    2, 0x06 /* Public */,
     253,    4, 2871,    2, 0x06 /* Public */,
     254,    4, 2880,    2, 0x06 /* Public */,
     255,    4, 2889,    2, 0x06 /* Public */,
     256,    4, 2898,    2, 0x06 /* Public */,
     257,    4, 2907,    2, 0x06 /* Public */,
     258,    4, 2916,    2, 0x06 /* Public */,
     259,    4, 2925,    2, 0x06 /* Public */,
     260,    4, 2934,    2, 0x06 /* Public */,
     261,    4, 2943,    2, 0x06 /* Public */,
     262,    4, 2952,    2, 0x06 /* Public */,
     263,    4, 2961,    2, 0x06 /* Public */,
     264,    4, 2970,    2, 0x06 /* Public */,
     265,    4, 2979,    2, 0x06 /* Public */,
     266,    4, 2988,    2, 0x06 /* Public */,
     267,    4, 2997,    2, 0x06 /* Public */,
     268,    4, 3006,    2, 0x06 /* Public */,
     269,    4, 3015,    2, 0x06 /* Public */,
     270,    4, 3024,    2, 0x06 /* Public */,
     271,    4, 3033,    2, 0x06 /* Public */,
     272,    4, 3042,    2, 0x06 /* Public */,
     273,    4, 3051,    2, 0x06 /* Public */,
     274,    4, 3060,    2, 0x06 /* Public */,
     275,    4, 3069,    2, 0x06 /* Public */,
     276,    4, 3078,    2, 0x06 /* Public */,
     277,    4, 3087,    2, 0x06 /* Public */,
     278,    4, 3096,    2, 0x06 /* Public */,
     279,    4, 3105,    2, 0x06 /* Public */,
     280,    4, 3114,    2, 0x06 /* Public */,
     281,    4, 3123,    2, 0x06 /* Public */,
     282,    4, 3132,    2, 0x06 /* Public */,
     283,    4, 3141,    2, 0x06 /* Public */,
     284,    4, 3150,    2, 0x06 /* Public */,
     285,    4, 3159,    2, 0x06 /* Public */,
     286,    4, 3168,    2, 0x06 /* Public */,
     287,    4, 3177,    2, 0x06 /* Public */,
     288,    4, 3186,    2, 0x06 /* Public */,
     289,    4, 3195,    2, 0x06 /* Public */,
     290,    4, 3204,    2, 0x06 /* Public */,
     291,    4, 3213,    2, 0x06 /* Public */,
     292,    4, 3222,    2, 0x06 /* Public */,
     293,    4, 3231,    2, 0x06 /* Public */,
     294,    4, 3240,    2, 0x06 /* Public */,
     295,    4, 3249,    2, 0x06 /* Public */,
     296,    4, 3258,    2, 0x06 /* Public */,
     297,    4, 3267,    2, 0x06 /* Public */,
     298,    4, 3276,    2, 0x06 /* Public */,
     299,    4, 3285,    2, 0x06 /* Public */,
     300,    4, 3294,    2, 0x06 /* Public */,
     301,    4, 3303,    2, 0x06 /* Public */,
     302,    4, 3312,    2, 0x06 /* Public */,
     303,    4, 3321,    2, 0x06 /* Public */,
     304,    4, 3330,    2, 0x06 /* Public */,
     305,    4, 3339,    2, 0x06 /* Public */,
     306,    4, 3348,    2, 0x06 /* Public */,
     307,    4, 3357,    2, 0x06 /* Public */,
     308,    4, 3366,    2, 0x06 /* Public */,
     309,    4, 3375,    2, 0x06 /* Public */,
     310,    4, 3384,    2, 0x06 /* Public */,
     311,    4, 3393,    2, 0x06 /* Public */,
     312,    4, 3402,    2, 0x06 /* Public */,
     313,    4, 3411,    2, 0x06 /* Public */,
     314,    4, 3420,    2, 0x06 /* Public */,
     315,    4, 3429,    2, 0x06 /* Public */,
     316,    4, 3438,    2, 0x06 /* Public */,
     317,    4, 3447,    2, 0x06 /* Public */,
     318,    4, 3456,    2, 0x06 /* Public */,
     319,    4, 3465,    2, 0x06 /* Public */,
     320,    4, 3474,    2, 0x06 /* Public */,
     321,    4, 3483,    2, 0x06 /* Public */,
     322,    4, 3492,    2, 0x06 /* Public */,
     323,    4, 3501,    2, 0x06 /* Public */,
     324,    4, 3510,    2, 0x06 /* Public */,
     325,    4, 3519,    2, 0x06 /* Public */,
     326,    4, 3528,    2, 0x06 /* Public */,
     327,    4, 3537,    2, 0x06 /* Public */,
     328,    4, 3546,    2, 0x06 /* Public */,
     329,    4, 3555,    2, 0x06 /* Public */,
     330,    4, 3564,    2, 0x06 /* Public */,
     331,    4, 3573,    2, 0x06 /* Public */,
     332,    4, 3582,    2, 0x06 /* Public */,
     333,    4, 3591,    2, 0x06 /* Public */,
     334,    4, 3600,    2, 0x06 /* Public */,
     335,    4, 3609,    2, 0x06 /* Public */,
     336,    4, 3618,    2, 0x06 /* Public */,
     337,    4, 3627,    2, 0x06 /* Public */,
     338,    4, 3636,    2, 0x06 /* Public */,
     339,    4, 3645,    2, 0x06 /* Public */,
     340,    4, 3654,    2, 0x06 /* Public */,
     341,    4, 3663,    2, 0x06 /* Public */,
     342,    4, 3672,    2, 0x06 /* Public */,
     343,    4, 3681,    2, 0x06 /* Public */,
     344,    4, 3690,    2, 0x06 /* Public */,
     345,    4, 3699,    2, 0x06 /* Public */,
     346,    4, 3708,    2, 0x06 /* Public */,
     347,    4, 3717,    2, 0x06 /* Public */,
     348,    4, 3726,    2, 0x06 /* Public */,
     349,    4, 3735,    2, 0x06 /* Public */,
     350,    4, 3744,    2, 0x06 /* Public */,
     351,    4, 3753,    2, 0x06 /* Public */,
     352,    4, 3762,    2, 0x06 /* Public */,
     353,    4, 3771,    2, 0x06 /* Public */,
     354,    4, 3780,    2, 0x06 /* Public */,
     355,    6, 3789,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 9, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 12, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 15, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 12, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 19, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 19, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 23, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 26, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 12, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 30, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 33, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 35, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 38, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 40, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 49, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 56, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 43, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 59, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 64, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 66, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 70, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 72, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 74, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 76, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 91, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 94, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 96, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 98, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 100, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 102, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 107, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 109, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 12, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 112, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 114, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 116, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 118, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 120, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 123, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 125, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 127, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 59, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 64, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 66, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 64, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 136, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 74, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 76, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 152, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 154, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 154, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 160, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 160, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 160, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 164, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 64, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 167, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 169, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 171, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 91, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 174, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 177, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 109, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 78, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 61, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 188, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 190, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 164, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 193, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 195, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 197, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 199, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 202, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 205, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 207, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  209,  210,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, 0x80000000 | 357,    3,  209,  210,  356,    5,  358,

       0        // eod
};

void TelegramApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelegramApi *_t = static_cast<TelegramApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountRegisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 1: _t->accountUnregisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 2: _t->accountUpdateNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 3: _t->accountGetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PeerNotifySettings(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 4: _t->accountResetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->accountUpdateProfileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 6: _t->accountUpdateStatusAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 7: _t->accountGetWallPapersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<WallPaper>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 8: _t->accountCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->accountUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 10: _t->accountGetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 11: _t->accountSetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 12: _t->accountDeleteAccountAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 13: _t->accountGetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountDaysTTL(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 14: _t->accountSetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: _t->accountSendChangePhoneCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountSentChangePhoneCode(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 16: _t->accountChangePhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 17: _t->accountUpdateDeviceLockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 18: _t->accountGetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountAuthorizations(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 19: _t->accountResetAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 20: _t->accountGetPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPassword(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 21: _t->accountGetPasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPasswordSettings(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 22: _t->accountUpdatePasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 23: _t->authCheckPhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthCheckedPhone(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 24: _t->authSendCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthSentCode(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 25: _t->authSendCallAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 26: _t->authSignUpAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 27: _t->authSignInAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 28: _t->authLogOutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 29: _t->authResetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 30: _t->authSendInvitesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 31: _t->authExportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthExportedAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 32: _t->authImportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 33: _t->authBindTempAuthKeyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 34: _t->authSendSmsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 35: _t->authImportBotAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 36: _t->authCheckPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 37: _t->authRequestPasswordRecoveryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthPasswordRecovery(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 38: _t->authRecoverPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 39: _t->channelsGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 40: _t->channelsGetImportantHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 41: _t->channelsReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 42: _t->channelsDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 43: _t->channelsDeleteUserHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 44: _t->channelsReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 45: _t->channelsGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 46: _t->channelsGetParticipantsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipants(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 47: _t->channelsGetParticipantAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 48: _t->channelsGetChannelsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 49: _t->channelsGetFullChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 50: _t->channelsCreateChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 51: _t->channelsEditAboutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 52: _t->channelsEditAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 53: _t->channelsEditTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 54: _t->channelsEditPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 55: _t->channelsToggleCommentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 56: _t->channelsCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 57: _t->channelsUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 58: _t->channelsJoinChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 59: _t->channelsLeaveChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 60: _t->channelsInviteToChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 61: _t->channelsKickFromChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 62: _t->channelsExportInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 63: _t->channelsDeleteChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 64: _t->contactsGetStatusesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ContactStatus>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 65: _t->contactsGetContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsContacts(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 66: _t->contactsImportContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsImportedContacts(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 67: _t->contactsGetSuggestedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsSuggested(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 68: _t->contactsDeleteContactAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsLink(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 69: _t->contactsDeleteContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 70: _t->contactsBlockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 71: _t->contactsUnblockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 72: _t->contactsGetBlockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsBlocked(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 73: _t->contactsExportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 74: _t->contactsImportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 75: _t->contactsSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsFound(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 76: _t->contactsResolveUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsResolvedPeer(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 77: _t->helpGetConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const Config(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 78: _t->helpGetNearestDcAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const NearestDc(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 79: _t->helpGetAppUpdateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppUpdate(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 80: _t->helpSaveAppLogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 81: _t->helpGetInviteTextAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpInviteText(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 82: _t->helpGetSupportAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpSupport(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 83: _t->helpGetAppChangelogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppChangelog(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 84: _t->messagesGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 85: _t->messagesGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 86: _t->messagesGetHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 87: _t->messagesSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 88: _t->messagesReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 89: _t->messagesDeleteHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 90: _t->messagesDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 91: _t->messagesReceivedMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ReceivedNotifyMessage>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 92: _t->messagesSetTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 93: _t->messagesSendMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 94: _t->messagesSendMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 95: _t->messagesForwardMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 96: _t->messagesReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 97: _t->messagesGetChatsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 98: _t->messagesGetFullChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 99: _t->messagesEditChatTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 100: _t->messagesEditChatPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 101: _t->messagesAddChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 102: _t->messagesDeleteChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 103: _t->messagesCreateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 104: _t->messagesForwardMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 105: _t->messagesSendBroadcastAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 106: _t->messagesGetDhConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDhConfig(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 107: _t->messagesRequestEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 108: _t->messagesAcceptEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 109: _t->messagesDiscardEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 110: _t->messagesSetEncryptedTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 111: _t->messagesReadEncryptedHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 112: _t->messagesSendEncryptedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 113: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 114: _t->messagesSendEncryptedServiceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 115: _t->messagesReceivedQueueAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 116: _t->messagesReadMessageContentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 117: _t->messagesGetStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickers(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 118: _t->messagesGetAllStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAllStickers(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 119: _t->messagesGetWebPagePreviewAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessageMedia(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 120: _t->messagesExportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 121: _t->messagesCheckChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 122: _t->messagesImportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 123: _t->messagesGetStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickerSet(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 124: _t->messagesInstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 125: _t->messagesUninstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 126: _t->messagesStartBotAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 127: _t->messagesGetMessagesViewsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 128: _t->messagesToggleChatAdminsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 129: _t->messagesEditChatAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 130: _t->messagesDeactivateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 131: _t->messagesMigrateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 132: _t->messagesSearchGlobalAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 133: _t->photosUpdateProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserProfilePhoto(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 134: _t->photosUploadProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhoto(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 135: _t->photosDeletePhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 136: _t->photosGetUserPhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhotos(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 137: _t->updatesGetStateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesState(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 138: _t->updatesGetDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesDifference(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 139: _t->updatesGetChannelDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesChannelDifference(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 140: _t->uploadSaveFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 141: _t->uploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UploadFile(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 142: _t->uploadSaveBigFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 143: _t->usersGetUsersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 144: _t->usersGetFullUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 145: _t->accountRegisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 146: _t->accountUnregisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 147: _t->accountUpdateNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 148: _t->accountGetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 149: _t->accountResetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 150: _t->accountUpdateProfileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 151: _t->accountUpdateStatusError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 152: _t->accountGetWallPapersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 153: _t->accountCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 154: _t->accountUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 155: _t->accountGetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 156: _t->accountSetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 157: _t->accountDeleteAccountError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 158: _t->accountGetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 159: _t->accountSetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 160: _t->accountSendChangePhoneCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 161: _t->accountChangePhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 162: _t->accountUpdateDeviceLockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 163: _t->accountGetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 164: _t->accountResetAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 165: _t->accountGetPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 166: _t->accountGetPasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 167: _t->accountUpdatePasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 168: _t->authCheckPhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 169: _t->authSendCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 170: _t->authSendCallError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 171: _t->authSignUpError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 172: _t->authSignInError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 173: _t->authLogOutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 174: _t->authResetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 175: _t->authSendInvitesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 176: _t->authExportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 177: _t->authImportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 178: _t->authBindTempAuthKeyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 179: _t->authSendSmsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 180: _t->authImportBotAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 181: _t->authCheckPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 182: _t->authRequestPasswordRecoveryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 183: _t->authRecoverPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 184: _t->channelsGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 185: _t->channelsGetImportantHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 186: _t->channelsReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 187: _t->channelsDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 188: _t->channelsDeleteUserHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 189: _t->channelsReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 190: _t->channelsGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 191: _t->channelsGetParticipantsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 192: _t->channelsGetParticipantError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 193: _t->channelsGetChannelsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 194: _t->channelsGetFullChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 195: _t->channelsCreateChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 196: _t->channelsEditAboutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 197: _t->channelsEditAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 198: _t->channelsEditTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 199: _t->channelsEditPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 200: _t->channelsToggleCommentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 201: _t->channelsCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 202: _t->channelsUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 203: _t->channelsJoinChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 204: _t->channelsLeaveChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 205: _t->channelsInviteToChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 206: _t->channelsKickFromChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 207: _t->channelsExportInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 208: _t->channelsDeleteChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 209: _t->contactsGetStatusesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 210: _t->contactsGetContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 211: _t->contactsImportContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 212: _t->contactsGetSuggestedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 213: _t->contactsDeleteContactError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 214: _t->contactsDeleteContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 215: _t->contactsBlockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 216: _t->contactsUnblockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 217: _t->contactsGetBlockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 218: _t->contactsExportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 219: _t->contactsImportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 220: _t->contactsSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 221: _t->contactsResolveUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 222: _t->helpGetConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 223: _t->helpGetNearestDcError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 224: _t->helpGetAppUpdateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 225: _t->helpSaveAppLogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 226: _t->helpGetInviteTextError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 227: _t->helpGetSupportError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 228: _t->helpGetAppChangelogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 229: _t->messagesGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 230: _t->messagesGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 231: _t->messagesGetHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 232: _t->messagesSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 233: _t->messagesReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 234: _t->messagesDeleteHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 235: _t->messagesDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 236: _t->messagesReceivedMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 237: _t->messagesSetTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 238: _t->messagesSendMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 239: _t->messagesSendMediaError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 240: _t->messagesForwardMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 241: _t->messagesReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 242: _t->messagesGetChatsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 243: _t->messagesGetFullChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 244: _t->messagesEditChatTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 245: _t->messagesEditChatPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 246: _t->messagesAddChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 247: _t->messagesDeleteChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 248: _t->messagesCreateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 249: _t->messagesForwardMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 250: _t->messagesSendBroadcastError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 251: _t->messagesGetDhConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 252: _t->messagesRequestEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 253: _t->messagesAcceptEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 254: _t->messagesDiscardEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 255: _t->messagesSetEncryptedTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 256: _t->messagesReadEncryptedHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 257: _t->messagesSendEncryptedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 258: _t->messagesSendEncryptedFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 259: _t->messagesSendEncryptedServiceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 260: _t->messagesReceivedQueueError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 261: _t->messagesReadMessageContentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 262: _t->messagesGetStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 263: _t->messagesGetAllStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 264: _t->messagesGetWebPagePreviewError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 265: _t->messagesExportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 266: _t->messagesCheckChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 267: _t->messagesImportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 268: _t->messagesGetStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 269: _t->messagesInstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 270: _t->messagesUninstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 271: _t->messagesStartBotError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 272: _t->messagesGetMessagesViewsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 273: _t->messagesToggleChatAdminsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 274: _t->messagesEditChatAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 275: _t->messagesDeactivateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 276: _t->messagesMigrateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 277: _t->messagesSearchGlobalError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 278: _t->photosUpdateProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 279: _t->photosUploadProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 280: _t->photosDeletePhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 281: _t->photosGetUserPhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 282: _t->updatesGetStateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 283: _t->updatesGetDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 284: _t->updatesGetChannelDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 285: _t->uploadSaveFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 286: _t->uploadGetFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 287: _t->uploadSaveBigFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 288: _t->usersGetUsersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 289: _t->usersGetFullUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 290: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PeerNotifySettings >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<WallPaper> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPrivacyRules >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPrivacyRules >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountDaysTTL >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountSentChangePhoneCode >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountAuthorizations >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPassword >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPasswordSettings >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthCheckedPhone >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthSentCode >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthExportedAuthorization >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthPasswordRecovery >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDialogs >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedHistory >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelsChannelParticipants >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelsChannelParticipant >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChats >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChatFull >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 55:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExportedChatInvite >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactStatus> >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsContacts >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsImportedContacts >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsSuggested >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsLink >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsBlocked >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsFound >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsResolvedPeer >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Config >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NearestDc >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpAppUpdate >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpInviteText >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpSupport >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpAppChangelog >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDialogs >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedHistory >(); break;
            }
            break;
        case 90:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 91:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ReceivedNotifyMessage> >(); break;
            }
            break;
        case 93:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 95:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChats >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChatFull >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 102:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 103:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 104:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 105:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 106:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDhConfig >(); break;
            }
            break;
        case 107:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 115:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickers >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAllStickers >(); break;
            }
            break;
        case 119:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageMedia >(); break;
            }
            break;
        case 120:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExportedChatInvite >(); break;
            }
            break;
        case 121:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatInvite >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickerSet >(); break;
            }
            break;
        case 126:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 128:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 130:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 131:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 132:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 133:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserProfilePhoto >(); break;
            }
            break;
        case 134:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PhotosPhoto >(); break;
            }
            break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 136:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PhotosPhotos >(); break;
            }
            break;
        case 137:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesState >(); break;
            }
            break;
        case 138:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesDifference >(); break;
            }
            break;
        case 139:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesChannelDifference >(); break;
            }
            break;
        case 141:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UploadFile >(); break;
            }
            break;
        case 143:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 144:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserFull >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountRegisterDeviceAnswer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUnregisterDeviceAnswer)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateNotifySettingsAnswer)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const PeerNotifySettings & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetNotifySettingsAnswer)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountResetNotifySettingsAnswer)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const User & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateProfileAnswer)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateStatusAnswer)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<WallPaper> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetWallPapersAnswer)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountCheckUsernameAnswer)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const User & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateUsernameAnswer)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountPrivacyRules & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPrivacyAnswer)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountPrivacyRules & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSetPrivacyAnswer)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountDeleteAccountAnswer)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountDaysTTL & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetAccountTTLAnswer)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSetAccountTTLAnswer)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountSentChangePhoneCode & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSendChangePhoneCodeAnswer)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const User & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountChangePhoneAnswer)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateDeviceLockedAnswer)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountAuthorizations & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetAuthorizationsAnswer)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountResetAuthorizationAnswer)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountPassword & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPasswordAnswer)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AccountPasswordSettings & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPasswordSettingsAnswer)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdatePasswordSettingsAnswer)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthCheckedPhone & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authCheckPhoneAnswer)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthSentCode & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendCodeAnswer)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendCallAnswer)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSignUpAnswer)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSignInAnswer)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authLogOutAnswer)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authResetAuthorizationsAnswer)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendInvitesAnswer)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthExportedAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authExportAuthorizationAnswer)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authImportAuthorizationAnswer)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authBindTempAuthKeyAnswer)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendSmsAnswer)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authImportBotAuthorizationAnswer)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authCheckPasswordAnswer)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthPasswordRecovery & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authRequestPasswordRecoveryAnswer)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const AuthAuthorization & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authRecoverPasswordAnswer)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesDialogs & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetDialogsAnswer)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetImportantHistoryAnswer)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsReadHistoryAnswer)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteMessagesAnswer)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedHistory & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteUserHistoryAnswer)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsReportSpamAnswer)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetMessagesAnswer)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ChannelsChannelParticipants & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetParticipantsAnswer)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ChannelsChannelParticipant & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetParticipantAnswer)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesChats & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetChannelsAnswer)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesChatFull & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetFullChannelAnswer)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsCreateChannelAnswer)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditAboutAnswer)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditAdminAnswer)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditTitleAnswer)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditPhotoAnswer)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsToggleCommentsAnswer)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsCheckUsernameAnswer)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsUpdateUsernameAnswer)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsJoinChannelAnswer)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsLeaveChannelAnswer)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsInviteToChannelAnswer)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsKickFromChannelAnswer)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ExportedChatInvite & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsExportInviteAnswer)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteChannelAnswer)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<ContactStatus> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetStatusesAnswer)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsContacts & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetContactsAnswer)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsImportedContacts & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsImportContactsAnswer)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsSuggested & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetSuggestedAnswer)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsLink & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsDeleteContactAnswer)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsDeleteContactsAnswer)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsBlockAnswer)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsUnblockAnswer)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsBlocked & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetBlockedAnswer)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<qint32> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsExportCardAnswer)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const User & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsImportCardAnswer)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsFound & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsSearchAnswer)) {
                *result = 75;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ContactsResolvedPeer & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsResolveUsernameAnswer)) {
                *result = 76;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const Config & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetConfigAnswer)) {
                *result = 77;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const NearestDc & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetNearestDcAnswer)) {
                *result = 78;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const HelpAppUpdate & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetAppUpdateAnswer)) {
                *result = 79;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpSaveAppLogAnswer)) {
                *result = 80;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const HelpInviteText & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetInviteTextAnswer)) {
                *result = 81;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const HelpSupport & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetSupportAnswer)) {
                *result = 82;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const HelpAppChangelog & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetAppChangelogAnswer)) {
                *result = 83;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetMessagesAnswer)) {
                *result = 84;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesDialogs & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetDialogsAnswer)) {
                *result = 85;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetHistoryAnswer)) {
                *result = 86;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSearchAnswer)) {
                *result = 87;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadHistoryAnswer)) {
                *result = 88;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedHistory & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteHistoryAnswer)) {
                *result = 89;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteMessagesAnswer)) {
                *result = 90;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<ReceivedNotifyMessage> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReceivedMessagesAnswer)) {
                *result = 91;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSetTypingAnswer)) {
                *result = 92;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendMessageAnswer)) {
                *result = 93;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendMediaAnswer)) {
                *result = 94;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesForwardMessagesAnswer)) {
                *result = 95;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReportSpamAnswer)) {
                *result = 96;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesChats & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetChatsAnswer)) {
                *result = 97;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesChatFull & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetFullChatAnswer)) {
                *result = 98;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatTitleAnswer)) {
                *result = 99;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatPhotoAnswer)) {
                *result = 100;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesAddChatUserAnswer)) {
                *result = 101;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteChatUserAnswer)) {
                *result = 102;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesCreateChatAnswer)) {
                *result = 103;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesForwardMessageAnswer)) {
                *result = 104;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendBroadcastAnswer)) {
                *result = 105;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesDhConfig & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetDhConfigAnswer)) {
                *result = 106;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const EncryptedChat & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesRequestEncryptionAnswer)) {
                *result = 107;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const EncryptedChat & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesAcceptEncryptionAnswer)) {
                *result = 108;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDiscardEncryptionAnswer)) {
                *result = 109;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSetEncryptedTypingAnswer)) {
                *result = 110;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadEncryptedHistoryAnswer)) {
                *result = 111;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesSentEncryptedMessage & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedAnswer)) {
                *result = 112;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesSentEncryptedMessage & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedFileAnswer)) {
                *result = 113;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesSentEncryptedMessage & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedServiceAnswer)) {
                *result = 114;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<qint64> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReceivedQueueAnswer)) {
                *result = 115;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAffectedMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadMessageContentsAnswer)) {
                *result = 116;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesStickers & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetStickersAnswer)) {
                *result = 117;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesAllStickers & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetAllStickersAnswer)) {
                *result = 118;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessageMedia & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetWebPagePreviewAnswer)) {
                *result = 119;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ExportedChatInvite & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesExportChatInviteAnswer)) {
                *result = 120;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const ChatInvite & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesCheckChatInviteAnswer)) {
                *result = 121;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesImportChatInviteAnswer)) {
                *result = 122;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesStickerSet & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetStickerSetAnswer)) {
                *result = 123;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesInstallStickerSetAnswer)) {
                *result = 124;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesUninstallStickerSetAnswer)) {
                *result = 125;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesStartBotAnswer)) {
                *result = 126;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<qint32> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetMessagesViewsAnswer)) {
                *result = 127;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesToggleChatAdminsAnswer)) {
                *result = 128;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatAdminAnswer)) {
                *result = 129;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeactivateChatAnswer)) {
                *result = 130;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesType & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesMigrateChatAnswer)) {
                *result = 131;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const MessagesMessages & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSearchGlobalAnswer)) {
                *result = 132;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UserProfilePhoto & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosUpdateProfilePhotoAnswer)) {
                *result = 133;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const PhotosPhoto & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosUploadProfilePhotoAnswer)) {
                *result = 134;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<qint64> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosDeletePhotosAnswer)) {
                *result = 135;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const PhotosPhotos & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosGetUserPhotosAnswer)) {
                *result = 136;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesState & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetStateAnswer)) {
                *result = 137;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesDifference & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetDifferenceAnswer)) {
                *result = 138;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UpdatesChannelDifference & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetChannelDifferenceAnswer)) {
                *result = 139;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadSaveFilePartAnswer)) {
                *result = 140;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UploadFile & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadGetFileAnswer)) {
                *result = 141;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , bool , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadSaveBigFilePartAnswer)) {
                *result = 142;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const QList<User> & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::usersGetUsersAnswer)) {
                *result = 143;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , const UserFull & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::usersGetFullUserAnswer)) {
                *result = 144;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountRegisterDeviceError)) {
                *result = 145;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUnregisterDeviceError)) {
                *result = 146;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateNotifySettingsError)) {
                *result = 147;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetNotifySettingsError)) {
                *result = 148;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountResetNotifySettingsError)) {
                *result = 149;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateProfileError)) {
                *result = 150;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateStatusError)) {
                *result = 151;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetWallPapersError)) {
                *result = 152;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountCheckUsernameError)) {
                *result = 153;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateUsernameError)) {
                *result = 154;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPrivacyError)) {
                *result = 155;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSetPrivacyError)) {
                *result = 156;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountDeleteAccountError)) {
                *result = 157;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetAccountTTLError)) {
                *result = 158;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSetAccountTTLError)) {
                *result = 159;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountSendChangePhoneCodeError)) {
                *result = 160;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountChangePhoneError)) {
                *result = 161;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdateDeviceLockedError)) {
                *result = 162;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetAuthorizationsError)) {
                *result = 163;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountResetAuthorizationError)) {
                *result = 164;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPasswordError)) {
                *result = 165;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountGetPasswordSettingsError)) {
                *result = 166;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::accountUpdatePasswordSettingsError)) {
                *result = 167;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authCheckPhoneError)) {
                *result = 168;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendCodeError)) {
                *result = 169;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendCallError)) {
                *result = 170;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSignUpError)) {
                *result = 171;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSignInError)) {
                *result = 172;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authLogOutError)) {
                *result = 173;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authResetAuthorizationsError)) {
                *result = 174;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendInvitesError)) {
                *result = 175;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authExportAuthorizationError)) {
                *result = 176;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authImportAuthorizationError)) {
                *result = 177;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authBindTempAuthKeyError)) {
                *result = 178;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authSendSmsError)) {
                *result = 179;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authImportBotAuthorizationError)) {
                *result = 180;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authCheckPasswordError)) {
                *result = 181;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authRequestPasswordRecoveryError)) {
                *result = 182;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::authRecoverPasswordError)) {
                *result = 183;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetDialogsError)) {
                *result = 184;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetImportantHistoryError)) {
                *result = 185;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsReadHistoryError)) {
                *result = 186;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteMessagesError)) {
                *result = 187;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteUserHistoryError)) {
                *result = 188;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsReportSpamError)) {
                *result = 189;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetMessagesError)) {
                *result = 190;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetParticipantsError)) {
                *result = 191;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetParticipantError)) {
                *result = 192;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetChannelsError)) {
                *result = 193;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsGetFullChannelError)) {
                *result = 194;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsCreateChannelError)) {
                *result = 195;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditAboutError)) {
                *result = 196;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditAdminError)) {
                *result = 197;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditTitleError)) {
                *result = 198;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsEditPhotoError)) {
                *result = 199;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsToggleCommentsError)) {
                *result = 200;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsCheckUsernameError)) {
                *result = 201;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsUpdateUsernameError)) {
                *result = 202;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsJoinChannelError)) {
                *result = 203;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsLeaveChannelError)) {
                *result = 204;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsInviteToChannelError)) {
                *result = 205;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsKickFromChannelError)) {
                *result = 206;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsExportInviteError)) {
                *result = 207;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::channelsDeleteChannelError)) {
                *result = 208;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetStatusesError)) {
                *result = 209;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetContactsError)) {
                *result = 210;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsImportContactsError)) {
                *result = 211;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetSuggestedError)) {
                *result = 212;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsDeleteContactError)) {
                *result = 213;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsDeleteContactsError)) {
                *result = 214;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsBlockError)) {
                *result = 215;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsUnblockError)) {
                *result = 216;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsGetBlockedError)) {
                *result = 217;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsExportCardError)) {
                *result = 218;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsImportCardError)) {
                *result = 219;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsSearchError)) {
                *result = 220;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::contactsResolveUsernameError)) {
                *result = 221;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetConfigError)) {
                *result = 222;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetNearestDcError)) {
                *result = 223;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetAppUpdateError)) {
                *result = 224;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpSaveAppLogError)) {
                *result = 225;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetInviteTextError)) {
                *result = 226;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetSupportError)) {
                *result = 227;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::helpGetAppChangelogError)) {
                *result = 228;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetMessagesError)) {
                *result = 229;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetDialogsError)) {
                *result = 230;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetHistoryError)) {
                *result = 231;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSearchError)) {
                *result = 232;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadHistoryError)) {
                *result = 233;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteHistoryError)) {
                *result = 234;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteMessagesError)) {
                *result = 235;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReceivedMessagesError)) {
                *result = 236;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSetTypingError)) {
                *result = 237;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendMessageError)) {
                *result = 238;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendMediaError)) {
                *result = 239;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesForwardMessagesError)) {
                *result = 240;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReportSpamError)) {
                *result = 241;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetChatsError)) {
                *result = 242;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetFullChatError)) {
                *result = 243;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatTitleError)) {
                *result = 244;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatPhotoError)) {
                *result = 245;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesAddChatUserError)) {
                *result = 246;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeleteChatUserError)) {
                *result = 247;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesCreateChatError)) {
                *result = 248;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesForwardMessageError)) {
                *result = 249;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendBroadcastError)) {
                *result = 250;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetDhConfigError)) {
                *result = 251;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesRequestEncryptionError)) {
                *result = 252;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesAcceptEncryptionError)) {
                *result = 253;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDiscardEncryptionError)) {
                *result = 254;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSetEncryptedTypingError)) {
                *result = 255;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadEncryptedHistoryError)) {
                *result = 256;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedError)) {
                *result = 257;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedFileError)) {
                *result = 258;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSendEncryptedServiceError)) {
                *result = 259;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReceivedQueueError)) {
                *result = 260;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesReadMessageContentsError)) {
                *result = 261;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetStickersError)) {
                *result = 262;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetAllStickersError)) {
                *result = 263;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetWebPagePreviewError)) {
                *result = 264;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesExportChatInviteError)) {
                *result = 265;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesCheckChatInviteError)) {
                *result = 266;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesImportChatInviteError)) {
                *result = 267;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetStickerSetError)) {
                *result = 268;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesInstallStickerSetError)) {
                *result = 269;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesUninstallStickerSetError)) {
                *result = 270;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesStartBotError)) {
                *result = 271;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesGetMessagesViewsError)) {
                *result = 272;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesToggleChatAdminsError)) {
                *result = 273;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesEditChatAdminError)) {
                *result = 274;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesDeactivateChatError)) {
                *result = 275;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesMigrateChatError)) {
                *result = 276;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::messagesSearchGlobalError)) {
                *result = 277;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosUpdateProfilePhotoError)) {
                *result = 278;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosUploadProfilePhotoError)) {
                *result = 279;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosDeletePhotosError)) {
                *result = 280;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::photosGetUserPhotosError)) {
                *result = 281;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetStateError)) {
                *result = 282;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetDifferenceError)) {
                *result = 283;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::updatesGetChannelDifferenceError)) {
                *result = 284;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadSaveFilePartError)) {
                *result = 285;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadGetFileError)) {
                *result = 286;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::uploadSaveBigFilePartError)) {
                *result = 287;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::usersGetUsersError)) {
                *result = 288;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::usersGetFullUserError)) {
                *result = 289;
                return;
            }
        }
        {
            typedef void (TelegramApi::*_t)(qint64 , qint32 , const QString & , const QString & , const QVariant & , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramApi::error)) {
                *result = 290;
                return;
            }
        }
    }
}

const QMetaObject TelegramApi::staticMetaObject = {
    { &AbstractApi::staticMetaObject, qt_meta_stringdata_TelegramApi.data,
      qt_meta_data_TelegramApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelegramApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelegramApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelegramApi.stringdata0))
        return static_cast<void*>(const_cast< TelegramApi*>(this));
    return AbstractApi::qt_metacast(_clname);
}

int TelegramApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApi::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 291)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 291;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 291)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 291;
    }
    return _id;
}

// SIGNAL 0
void TelegramApi::accountRegisterDeviceAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelegramApi::accountUnregisterDeviceAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TelegramApi::accountUpdateNotifySettingsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TelegramApi::accountGetNotifySettingsAnswer(qint64 _t1, const PeerNotifySettings & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TelegramApi::accountResetNotifySettingsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TelegramApi::accountUpdateProfileAnswer(qint64 _t1, const User & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TelegramApi::accountUpdateStatusAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TelegramApi::accountGetWallPapersAnswer(qint64 _t1, const QList<WallPaper> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TelegramApi::accountCheckUsernameAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TelegramApi::accountUpdateUsernameAnswer(qint64 _t1, const User & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TelegramApi::accountGetPrivacyAnswer(qint64 _t1, const AccountPrivacyRules & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TelegramApi::accountSetPrivacyAnswer(qint64 _t1, const AccountPrivacyRules & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TelegramApi::accountDeleteAccountAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TelegramApi::accountGetAccountTTLAnswer(qint64 _t1, const AccountDaysTTL & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TelegramApi::accountSetAccountTTLAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TelegramApi::accountSendChangePhoneCodeAnswer(qint64 _t1, const AccountSentChangePhoneCode & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TelegramApi::accountChangePhoneAnswer(qint64 _t1, const User & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TelegramApi::accountUpdateDeviceLockedAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TelegramApi::accountGetAuthorizationsAnswer(qint64 _t1, const AccountAuthorizations & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TelegramApi::accountResetAuthorizationAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void TelegramApi::accountGetPasswordAnswer(qint64 _t1, const AccountPassword & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void TelegramApi::accountGetPasswordSettingsAnswer(qint64 _t1, const AccountPasswordSettings & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void TelegramApi::accountUpdatePasswordSettingsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void TelegramApi::authCheckPhoneAnswer(qint64 _t1, const AuthCheckedPhone & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void TelegramApi::authSendCodeAnswer(qint64 _t1, const AuthSentCode & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void TelegramApi::authSendCallAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void TelegramApi::authSignUpAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void TelegramApi::authSignInAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void TelegramApi::authLogOutAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void TelegramApi::authResetAuthorizationsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void TelegramApi::authSendInvitesAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void TelegramApi::authExportAuthorizationAnswer(qint64 _t1, const AuthExportedAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void TelegramApi::authImportAuthorizationAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void TelegramApi::authBindTempAuthKeyAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void TelegramApi::authSendSmsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void TelegramApi::authImportBotAuthorizationAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void TelegramApi::authCheckPasswordAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void TelegramApi::authRequestPasswordRecoveryAnswer(qint64 _t1, const AuthPasswordRecovery & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void TelegramApi::authRecoverPasswordAnswer(qint64 _t1, const AuthAuthorization & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void TelegramApi::channelsGetDialogsAnswer(qint64 _t1, const MessagesDialogs & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void TelegramApi::channelsGetImportantHistoryAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void TelegramApi::channelsReadHistoryAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void TelegramApi::channelsDeleteMessagesAnswer(qint64 _t1, const MessagesAffectedMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void TelegramApi::channelsDeleteUserHistoryAnswer(qint64 _t1, const MessagesAffectedHistory & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void TelegramApi::channelsReportSpamAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void TelegramApi::channelsGetMessagesAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void TelegramApi::channelsGetParticipantsAnswer(qint64 _t1, const ChannelsChannelParticipants & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void TelegramApi::channelsGetParticipantAnswer(qint64 _t1, const ChannelsChannelParticipant & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void TelegramApi::channelsGetChannelsAnswer(qint64 _t1, const MessagesChats & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void TelegramApi::channelsGetFullChannelAnswer(qint64 _t1, const MessagesChatFull & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void TelegramApi::channelsCreateChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void TelegramApi::channelsEditAboutAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void TelegramApi::channelsEditAdminAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void TelegramApi::channelsEditTitleAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void TelegramApi::channelsEditPhotoAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void TelegramApi::channelsToggleCommentsAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void TelegramApi::channelsCheckUsernameAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void TelegramApi::channelsUpdateUsernameAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void TelegramApi::channelsJoinChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void TelegramApi::channelsLeaveChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void TelegramApi::channelsInviteToChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void TelegramApi::channelsKickFromChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void TelegramApi::channelsExportInviteAnswer(qint64 _t1, const ExportedChatInvite & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void TelegramApi::channelsDeleteChannelAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void TelegramApi::contactsGetStatusesAnswer(qint64 _t1, const QList<ContactStatus> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void TelegramApi::contactsGetContactsAnswer(qint64 _t1, const ContactsContacts & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void TelegramApi::contactsImportContactsAnswer(qint64 _t1, const ContactsImportedContacts & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void TelegramApi::contactsGetSuggestedAnswer(qint64 _t1, const ContactsSuggested & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void TelegramApi::contactsDeleteContactAnswer(qint64 _t1, const ContactsLink & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void TelegramApi::contactsDeleteContactsAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void TelegramApi::contactsBlockAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void TelegramApi::contactsUnblockAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void TelegramApi::contactsGetBlockedAnswer(qint64 _t1, const ContactsBlocked & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void TelegramApi::contactsExportCardAnswer(qint64 _t1, const QList<qint32> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void TelegramApi::contactsImportCardAnswer(qint64 _t1, const User & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void TelegramApi::contactsSearchAnswer(qint64 _t1, const ContactsFound & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void TelegramApi::contactsResolveUsernameAnswer(qint64 _t1, const ContactsResolvedPeer & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void TelegramApi::helpGetConfigAnswer(qint64 _t1, const Config & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void TelegramApi::helpGetNearestDcAnswer(qint64 _t1, const NearestDc & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void TelegramApi::helpGetAppUpdateAnswer(qint64 _t1, const HelpAppUpdate & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void TelegramApi::helpSaveAppLogAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void TelegramApi::helpGetInviteTextAnswer(qint64 _t1, const HelpInviteText & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void TelegramApi::helpGetSupportAnswer(qint64 _t1, const HelpSupport & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void TelegramApi::helpGetAppChangelogAnswer(qint64 _t1, const HelpAppChangelog & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void TelegramApi::messagesGetMessagesAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void TelegramApi::messagesGetDialogsAnswer(qint64 _t1, const MessagesDialogs & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void TelegramApi::messagesGetHistoryAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void TelegramApi::messagesSearchAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void TelegramApi::messagesReadHistoryAnswer(qint64 _t1, const MessagesAffectedMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void TelegramApi::messagesDeleteHistoryAnswer(qint64 _t1, const MessagesAffectedHistory & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void TelegramApi::messagesDeleteMessagesAnswer(qint64 _t1, const MessagesAffectedMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void TelegramApi::messagesReceivedMessagesAnswer(qint64 _t1, const QList<ReceivedNotifyMessage> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void TelegramApi::messagesSetTypingAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void TelegramApi::messagesSendMessageAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void TelegramApi::messagesSendMediaAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void TelegramApi::messagesForwardMessagesAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void TelegramApi::messagesReportSpamAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void TelegramApi::messagesGetChatsAnswer(qint64 _t1, const MessagesChats & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void TelegramApi::messagesGetFullChatAnswer(qint64 _t1, const MessagesChatFull & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void TelegramApi::messagesEditChatTitleAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void TelegramApi::messagesEditChatPhotoAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void TelegramApi::messagesAddChatUserAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void TelegramApi::messagesDeleteChatUserAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void TelegramApi::messagesCreateChatAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void TelegramApi::messagesForwardMessageAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void TelegramApi::messagesSendBroadcastAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void TelegramApi::messagesGetDhConfigAnswer(qint64 _t1, const MessagesDhConfig & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void TelegramApi::messagesRequestEncryptionAnswer(qint64 _t1, const EncryptedChat & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void TelegramApi::messagesAcceptEncryptionAnswer(qint64 _t1, const EncryptedChat & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void TelegramApi::messagesDiscardEncryptionAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void TelegramApi::messagesSetEncryptedTypingAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void TelegramApi::messagesReadEncryptedHistoryAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void TelegramApi::messagesSendEncryptedAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void TelegramApi::messagesSendEncryptedFileAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void TelegramApi::messagesSendEncryptedServiceAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void TelegramApi::messagesReceivedQueueAnswer(qint64 _t1, const QList<qint64> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void TelegramApi::messagesReadMessageContentsAnswer(qint64 _t1, const MessagesAffectedMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void TelegramApi::messagesGetStickersAnswer(qint64 _t1, const MessagesStickers & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void TelegramApi::messagesGetAllStickersAnswer(qint64 _t1, const MessagesAllStickers & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void TelegramApi::messagesGetWebPagePreviewAnswer(qint64 _t1, const MessageMedia & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void TelegramApi::messagesExportChatInviteAnswer(qint64 _t1, const ExportedChatInvite & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void TelegramApi::messagesCheckChatInviteAnswer(qint64 _t1, const ChatInvite & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void TelegramApi::messagesImportChatInviteAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void TelegramApi::messagesGetStickerSetAnswer(qint64 _t1, const MessagesStickerSet & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void TelegramApi::messagesInstallStickerSetAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void TelegramApi::messagesUninstallStickerSetAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void TelegramApi::messagesStartBotAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void TelegramApi::messagesGetMessagesViewsAnswer(qint64 _t1, const QList<qint32> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void TelegramApi::messagesToggleChatAdminsAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void TelegramApi::messagesEditChatAdminAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void TelegramApi::messagesDeactivateChatAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void TelegramApi::messagesMigrateChatAnswer(qint64 _t1, const UpdatesType & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void TelegramApi::messagesSearchGlobalAnswer(qint64 _t1, const MessagesMessages & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void TelegramApi::photosUpdateProfilePhotoAnswer(qint64 _t1, const UserProfilePhoto & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void TelegramApi::photosUploadProfilePhotoAnswer(qint64 _t1, const PhotosPhoto & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void TelegramApi::photosDeletePhotosAnswer(qint64 _t1, const QList<qint64> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void TelegramApi::photosGetUserPhotosAnswer(qint64 _t1, const PhotosPhotos & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void TelegramApi::updatesGetStateAnswer(qint64 _t1, const UpdatesState & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void TelegramApi::updatesGetDifferenceAnswer(qint64 _t1, const UpdatesDifference & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void TelegramApi::updatesGetChannelDifferenceAnswer(qint64 _t1, const UpdatesChannelDifference & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void TelegramApi::uploadSaveFilePartAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void TelegramApi::uploadGetFileAnswer(qint64 _t1, const UploadFile & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void TelegramApi::uploadSaveBigFilePartAnswer(qint64 _t1, bool _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void TelegramApi::usersGetUsersAnswer(qint64 _t1, const QList<User> & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void TelegramApi::usersGetFullUserAnswer(qint64 _t1, const UserFull & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void TelegramApi::accountRegisterDeviceError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void TelegramApi::accountUnregisterDeviceError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void TelegramApi::accountUpdateNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void TelegramApi::accountGetNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void TelegramApi::accountResetNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void TelegramApi::accountUpdateProfileError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void TelegramApi::accountUpdateStatusError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void TelegramApi::accountGetWallPapersError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void TelegramApi::accountCheckUsernameError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void TelegramApi::accountUpdateUsernameError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void TelegramApi::accountGetPrivacyError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void TelegramApi::accountSetPrivacyError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void TelegramApi::accountDeleteAccountError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void TelegramApi::accountGetAccountTTLError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void TelegramApi::accountSetAccountTTLError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void TelegramApi::accountSendChangePhoneCodeError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void TelegramApi::accountChangePhoneError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void TelegramApi::accountUpdateDeviceLockedError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void TelegramApi::accountGetAuthorizationsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void TelegramApi::accountResetAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void TelegramApi::accountGetPasswordError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void TelegramApi::accountGetPasswordSettingsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void TelegramApi::accountUpdatePasswordSettingsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void TelegramApi::authCheckPhoneError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void TelegramApi::authSendCodeError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}

// SIGNAL 170
void TelegramApi::authSendCallError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 170, _a);
}

// SIGNAL 171
void TelegramApi::authSignUpError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 171, _a);
}

// SIGNAL 172
void TelegramApi::authSignInError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 172, _a);
}

// SIGNAL 173
void TelegramApi::authLogOutError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 173, _a);
}

// SIGNAL 174
void TelegramApi::authResetAuthorizationsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 174, _a);
}

// SIGNAL 175
void TelegramApi::authSendInvitesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 175, _a);
}

// SIGNAL 176
void TelegramApi::authExportAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 176, _a);
}

// SIGNAL 177
void TelegramApi::authImportAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 177, _a);
}

// SIGNAL 178
void TelegramApi::authBindTempAuthKeyError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 178, _a);
}

// SIGNAL 179
void TelegramApi::authSendSmsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 179, _a);
}

// SIGNAL 180
void TelegramApi::authImportBotAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 180, _a);
}

// SIGNAL 181
void TelegramApi::authCheckPasswordError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 181, _a);
}

// SIGNAL 182
void TelegramApi::authRequestPasswordRecoveryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 182, _a);
}

// SIGNAL 183
void TelegramApi::authRecoverPasswordError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 183, _a);
}

// SIGNAL 184
void TelegramApi::channelsGetDialogsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 184, _a);
}

// SIGNAL 185
void TelegramApi::channelsGetImportantHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 185, _a);
}

// SIGNAL 186
void TelegramApi::channelsReadHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 186, _a);
}

// SIGNAL 187
void TelegramApi::channelsDeleteMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 187, _a);
}

// SIGNAL 188
void TelegramApi::channelsDeleteUserHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 188, _a);
}

// SIGNAL 189
void TelegramApi::channelsReportSpamError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 189, _a);
}

// SIGNAL 190
void TelegramApi::channelsGetMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 190, _a);
}

// SIGNAL 191
void TelegramApi::channelsGetParticipantsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 191, _a);
}

// SIGNAL 192
void TelegramApi::channelsGetParticipantError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 192, _a);
}

// SIGNAL 193
void TelegramApi::channelsGetChannelsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 193, _a);
}

// SIGNAL 194
void TelegramApi::channelsGetFullChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 194, _a);
}

// SIGNAL 195
void TelegramApi::channelsCreateChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 195, _a);
}

// SIGNAL 196
void TelegramApi::channelsEditAboutError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 196, _a);
}

// SIGNAL 197
void TelegramApi::channelsEditAdminError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 197, _a);
}

// SIGNAL 198
void TelegramApi::channelsEditTitleError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 198, _a);
}

// SIGNAL 199
void TelegramApi::channelsEditPhotoError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 199, _a);
}

// SIGNAL 200
void TelegramApi::channelsToggleCommentsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 200, _a);
}

// SIGNAL 201
void TelegramApi::channelsCheckUsernameError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 201, _a);
}

// SIGNAL 202
void TelegramApi::channelsUpdateUsernameError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 202, _a);
}

// SIGNAL 203
void TelegramApi::channelsJoinChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 203, _a);
}

// SIGNAL 204
void TelegramApi::channelsLeaveChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 204, _a);
}

// SIGNAL 205
void TelegramApi::channelsInviteToChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 205, _a);
}

// SIGNAL 206
void TelegramApi::channelsKickFromChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 206, _a);
}

// SIGNAL 207
void TelegramApi::channelsExportInviteError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 207, _a);
}

// SIGNAL 208
void TelegramApi::channelsDeleteChannelError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 208, _a);
}

// SIGNAL 209
void TelegramApi::contactsGetStatusesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 209, _a);
}

// SIGNAL 210
void TelegramApi::contactsGetContactsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 210, _a);
}

// SIGNAL 211
void TelegramApi::contactsImportContactsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 211, _a);
}

// SIGNAL 212
void TelegramApi::contactsGetSuggestedError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 212, _a);
}

// SIGNAL 213
void TelegramApi::contactsDeleteContactError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 213, _a);
}

// SIGNAL 214
void TelegramApi::contactsDeleteContactsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 214, _a);
}

// SIGNAL 215
void TelegramApi::contactsBlockError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 215, _a);
}

// SIGNAL 216
void TelegramApi::contactsUnblockError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 216, _a);
}

// SIGNAL 217
void TelegramApi::contactsGetBlockedError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 217, _a);
}

// SIGNAL 218
void TelegramApi::contactsExportCardError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 218, _a);
}

// SIGNAL 219
void TelegramApi::contactsImportCardError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 219, _a);
}

// SIGNAL 220
void TelegramApi::contactsSearchError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 220, _a);
}

// SIGNAL 221
void TelegramApi::contactsResolveUsernameError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 221, _a);
}

// SIGNAL 222
void TelegramApi::helpGetConfigError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 222, _a);
}

// SIGNAL 223
void TelegramApi::helpGetNearestDcError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 223, _a);
}

// SIGNAL 224
void TelegramApi::helpGetAppUpdateError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 224, _a);
}

// SIGNAL 225
void TelegramApi::helpSaveAppLogError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 225, _a);
}

// SIGNAL 226
void TelegramApi::helpGetInviteTextError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 226, _a);
}

// SIGNAL 227
void TelegramApi::helpGetSupportError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 227, _a);
}

// SIGNAL 228
void TelegramApi::helpGetAppChangelogError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 228, _a);
}

// SIGNAL 229
void TelegramApi::messagesGetMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 229, _a);
}

// SIGNAL 230
void TelegramApi::messagesGetDialogsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 230, _a);
}

// SIGNAL 231
void TelegramApi::messagesGetHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 231, _a);
}

// SIGNAL 232
void TelegramApi::messagesSearchError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 232, _a);
}

// SIGNAL 233
void TelegramApi::messagesReadHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 233, _a);
}

// SIGNAL 234
void TelegramApi::messagesDeleteHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 234, _a);
}

// SIGNAL 235
void TelegramApi::messagesDeleteMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 235, _a);
}

// SIGNAL 236
void TelegramApi::messagesReceivedMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 236, _a);
}

// SIGNAL 237
void TelegramApi::messagesSetTypingError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 237, _a);
}

// SIGNAL 238
void TelegramApi::messagesSendMessageError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 238, _a);
}

// SIGNAL 239
void TelegramApi::messagesSendMediaError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 239, _a);
}

// SIGNAL 240
void TelegramApi::messagesForwardMessagesError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 240, _a);
}

// SIGNAL 241
void TelegramApi::messagesReportSpamError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 241, _a);
}

// SIGNAL 242
void TelegramApi::messagesGetChatsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 242, _a);
}

// SIGNAL 243
void TelegramApi::messagesGetFullChatError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 243, _a);
}

// SIGNAL 244
void TelegramApi::messagesEditChatTitleError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 244, _a);
}

// SIGNAL 245
void TelegramApi::messagesEditChatPhotoError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 245, _a);
}

// SIGNAL 246
void TelegramApi::messagesAddChatUserError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 246, _a);
}

// SIGNAL 247
void TelegramApi::messagesDeleteChatUserError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 247, _a);
}

// SIGNAL 248
void TelegramApi::messagesCreateChatError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 248, _a);
}

// SIGNAL 249
void TelegramApi::messagesForwardMessageError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 249, _a);
}

// SIGNAL 250
void TelegramApi::messagesSendBroadcastError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 250, _a);
}

// SIGNAL 251
void TelegramApi::messagesGetDhConfigError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 251, _a);
}

// SIGNAL 252
void TelegramApi::messagesRequestEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 252, _a);
}

// SIGNAL 253
void TelegramApi::messagesAcceptEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 253, _a);
}

// SIGNAL 254
void TelegramApi::messagesDiscardEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 254, _a);
}

// SIGNAL 255
void TelegramApi::messagesSetEncryptedTypingError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 255, _a);
}

// SIGNAL 256
void TelegramApi::messagesReadEncryptedHistoryError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 256, _a);
}

// SIGNAL 257
void TelegramApi::messagesSendEncryptedError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 257, _a);
}

// SIGNAL 258
void TelegramApi::messagesSendEncryptedFileError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 258, _a);
}

// SIGNAL 259
void TelegramApi::messagesSendEncryptedServiceError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 259, _a);
}

// SIGNAL 260
void TelegramApi::messagesReceivedQueueError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 260, _a);
}

// SIGNAL 261
void TelegramApi::messagesReadMessageContentsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 261, _a);
}

// SIGNAL 262
void TelegramApi::messagesGetStickersError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 262, _a);
}

// SIGNAL 263
void TelegramApi::messagesGetAllStickersError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 263, _a);
}

// SIGNAL 264
void TelegramApi::messagesGetWebPagePreviewError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 264, _a);
}

// SIGNAL 265
void TelegramApi::messagesExportChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 265, _a);
}

// SIGNAL 266
void TelegramApi::messagesCheckChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 266, _a);
}

// SIGNAL 267
void TelegramApi::messagesImportChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 267, _a);
}

// SIGNAL 268
void TelegramApi::messagesGetStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 268, _a);
}

// SIGNAL 269
void TelegramApi::messagesInstallStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 269, _a);
}

// SIGNAL 270
void TelegramApi::messagesUninstallStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 270, _a);
}

// SIGNAL 271
void TelegramApi::messagesStartBotError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 271, _a);
}

// SIGNAL 272
void TelegramApi::messagesGetMessagesViewsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 272, _a);
}

// SIGNAL 273
void TelegramApi::messagesToggleChatAdminsError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 273, _a);
}

// SIGNAL 274
void TelegramApi::messagesEditChatAdminError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 274, _a);
}

// SIGNAL 275
void TelegramApi::messagesDeactivateChatError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 275, _a);
}

// SIGNAL 276
void TelegramApi::messagesMigrateChatError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 276, _a);
}

// SIGNAL 277
void TelegramApi::messagesSearchGlobalError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 277, _a);
}

// SIGNAL 278
void TelegramApi::photosUpdateProfilePhotoError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 278, _a);
}

// SIGNAL 279
void TelegramApi::photosUploadProfilePhotoError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 279, _a);
}

// SIGNAL 280
void TelegramApi::photosDeletePhotosError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 280, _a);
}

// SIGNAL 281
void TelegramApi::photosGetUserPhotosError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 281, _a);
}

// SIGNAL 282
void TelegramApi::updatesGetStateError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 282, _a);
}

// SIGNAL 283
void TelegramApi::updatesGetDifferenceError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 283, _a);
}

// SIGNAL 284
void TelegramApi::updatesGetChannelDifferenceError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 284, _a);
}

// SIGNAL 285
void TelegramApi::uploadSaveFilePartError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 285, _a);
}

// SIGNAL 286
void TelegramApi::uploadGetFileError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 286, _a);
}

// SIGNAL 287
void TelegramApi::uploadSaveBigFilePartError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 287, _a);
}

// SIGNAL 288
void TelegramApi::usersGetUsersError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 288, _a);
}

// SIGNAL 289
void TelegramApi::usersGetFullUserError(qint64 _t1, qint32 _t2, const QString & _t3, const QVariant & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 289, _a);
}

// SIGNAL 290
void TelegramApi::error(qint64 _t1, qint32 _t2, const QString & _t3, const QString & _t4, const QVariant & _t5, bool & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 290, _a);
}
QT_END_MOC_NAMESPACE
