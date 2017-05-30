/****************************************************************************
** Meta object code from reading C++ file 'telegramcore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/telegram/telegramcore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telegramcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelegramCore_t {
    QByteArrayData data[651];
    char stringdata0[17153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelegramCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelegramCore_t qt_meta_stringdata_TelegramCore = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TelegramCore"
QT_MOC_LITERAL(1, 13, 27), // "accountRegisterDeviceAnswer"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "msgId"
QT_MOC_LITERAL(4, 48, 6), // "result"
QT_MOC_LITERAL(5, 55, 29), // "accountUnregisterDeviceAnswer"
QT_MOC_LITERAL(6, 85, 33), // "accountUpdateNotifySettingsAn..."
QT_MOC_LITERAL(7, 119, 30), // "accountGetNotifySettingsAnswer"
QT_MOC_LITERAL(8, 150, 18), // "PeerNotifySettings"
QT_MOC_LITERAL(9, 169, 32), // "accountResetNotifySettingsAnswer"
QT_MOC_LITERAL(10, 202, 26), // "accountUpdateProfileAnswer"
QT_MOC_LITERAL(11, 229, 4), // "User"
QT_MOC_LITERAL(12, 234, 25), // "accountUpdateStatusAnswer"
QT_MOC_LITERAL(13, 260, 26), // "accountGetWallPapersAnswer"
QT_MOC_LITERAL(14, 287, 16), // "QList<WallPaper>"
QT_MOC_LITERAL(15, 304, 26), // "accountCheckUsernameAnswer"
QT_MOC_LITERAL(16, 331, 27), // "accountUpdateUsernameAnswer"
QT_MOC_LITERAL(17, 359, 23), // "accountGetPrivacyAnswer"
QT_MOC_LITERAL(18, 383, 19), // "AccountPrivacyRules"
QT_MOC_LITERAL(19, 403, 23), // "accountSetPrivacyAnswer"
QT_MOC_LITERAL(20, 427, 26), // "accountDeleteAccountAnswer"
QT_MOC_LITERAL(21, 454, 26), // "accountGetAccountTTLAnswer"
QT_MOC_LITERAL(22, 481, 14), // "AccountDaysTTL"
QT_MOC_LITERAL(23, 496, 26), // "accountSetAccountTTLAnswer"
QT_MOC_LITERAL(24, 523, 32), // "accountSendChangePhoneCodeAnswer"
QT_MOC_LITERAL(25, 556, 26), // "AccountSentChangePhoneCode"
QT_MOC_LITERAL(26, 583, 24), // "accountChangePhoneAnswer"
QT_MOC_LITERAL(27, 608, 31), // "accountUpdateDeviceLockedAnswer"
QT_MOC_LITERAL(28, 640, 30), // "accountGetAuthorizationsAnswer"
QT_MOC_LITERAL(29, 671, 21), // "AccountAuthorizations"
QT_MOC_LITERAL(30, 693, 31), // "accountResetAuthorizationAnswer"
QT_MOC_LITERAL(31, 725, 24), // "accountGetPasswordAnswer"
QT_MOC_LITERAL(32, 750, 15), // "AccountPassword"
QT_MOC_LITERAL(33, 766, 32), // "accountGetPasswordSettingsAnswer"
QT_MOC_LITERAL(34, 799, 23), // "AccountPasswordSettings"
QT_MOC_LITERAL(35, 823, 35), // "accountUpdatePasswordSettings..."
QT_MOC_LITERAL(36, 859, 20), // "authCheckPhoneAnswer"
QT_MOC_LITERAL(37, 880, 16), // "AuthCheckedPhone"
QT_MOC_LITERAL(38, 897, 18), // "authSendCodeAnswer"
QT_MOC_LITERAL(39, 916, 12), // "AuthSentCode"
QT_MOC_LITERAL(40, 929, 18), // "authSendCallAnswer"
QT_MOC_LITERAL(41, 948, 16), // "authSignUpAnswer"
QT_MOC_LITERAL(42, 965, 17), // "AuthAuthorization"
QT_MOC_LITERAL(43, 983, 16), // "authSignInAnswer"
QT_MOC_LITERAL(44, 1000, 16), // "authLogOutAnswer"
QT_MOC_LITERAL(45, 1017, 29), // "authResetAuthorizationsAnswer"
QT_MOC_LITERAL(46, 1047, 21), // "authSendInvitesAnswer"
QT_MOC_LITERAL(47, 1069, 29), // "authExportAuthorizationAnswer"
QT_MOC_LITERAL(48, 1099, 25), // "AuthExportedAuthorization"
QT_MOC_LITERAL(49, 1125, 29), // "authImportAuthorizationAnswer"
QT_MOC_LITERAL(50, 1155, 25), // "authBindTempAuthKeyAnswer"
QT_MOC_LITERAL(51, 1181, 17), // "authSendSmsAnswer"
QT_MOC_LITERAL(52, 1199, 32), // "authImportBotAuthorizationAnswer"
QT_MOC_LITERAL(53, 1232, 23), // "authCheckPasswordAnswer"
QT_MOC_LITERAL(54, 1256, 33), // "authRequestPasswordRecoveryAn..."
QT_MOC_LITERAL(55, 1290, 20), // "AuthPasswordRecovery"
QT_MOC_LITERAL(56, 1311, 25), // "authRecoverPasswordAnswer"
QT_MOC_LITERAL(57, 1337, 24), // "channelsGetDialogsAnswer"
QT_MOC_LITERAL(58, 1362, 15), // "MessagesDialogs"
QT_MOC_LITERAL(59, 1378, 33), // "channelsGetImportantHistoryAn..."
QT_MOC_LITERAL(60, 1412, 16), // "MessagesMessages"
QT_MOC_LITERAL(61, 1429, 25), // "channelsReadHistoryAnswer"
QT_MOC_LITERAL(62, 1455, 28), // "channelsDeleteMessagesAnswer"
QT_MOC_LITERAL(63, 1484, 24), // "MessagesAffectedMessages"
QT_MOC_LITERAL(64, 1509, 31), // "channelsDeleteUserHistoryAnswer"
QT_MOC_LITERAL(65, 1541, 23), // "MessagesAffectedHistory"
QT_MOC_LITERAL(66, 1565, 24), // "channelsReportSpamAnswer"
QT_MOC_LITERAL(67, 1590, 25), // "channelsGetMessagesAnswer"
QT_MOC_LITERAL(68, 1616, 29), // "channelsGetParticipantsAnswer"
QT_MOC_LITERAL(69, 1646, 27), // "ChannelsChannelParticipants"
QT_MOC_LITERAL(70, 1674, 28), // "channelsGetParticipantAnswer"
QT_MOC_LITERAL(71, 1703, 26), // "ChannelsChannelParticipant"
QT_MOC_LITERAL(72, 1730, 25), // "channelsGetChannelsAnswer"
QT_MOC_LITERAL(73, 1756, 13), // "MessagesChats"
QT_MOC_LITERAL(74, 1770, 28), // "channelsGetFullChannelAnswer"
QT_MOC_LITERAL(75, 1799, 16), // "MessagesChatFull"
QT_MOC_LITERAL(76, 1816, 27), // "channelsCreateChannelAnswer"
QT_MOC_LITERAL(77, 1844, 11), // "UpdatesType"
QT_MOC_LITERAL(78, 1856, 23), // "channelsEditAboutAnswer"
QT_MOC_LITERAL(79, 1880, 23), // "channelsEditAdminAnswer"
QT_MOC_LITERAL(80, 1904, 23), // "channelsEditTitleAnswer"
QT_MOC_LITERAL(81, 1928, 23), // "channelsEditPhotoAnswer"
QT_MOC_LITERAL(82, 1952, 28), // "channelsToggleCommentsAnswer"
QT_MOC_LITERAL(83, 1981, 27), // "channelsCheckUsernameAnswer"
QT_MOC_LITERAL(84, 2009, 28), // "channelsUpdateUsernameAnswer"
QT_MOC_LITERAL(85, 2038, 25), // "channelsJoinChannelAnswer"
QT_MOC_LITERAL(86, 2064, 26), // "channelsLeaveChannelAnswer"
QT_MOC_LITERAL(87, 2091, 29), // "channelsInviteToChannelAnswer"
QT_MOC_LITERAL(88, 2121, 29), // "channelsKickFromChannelAnswer"
QT_MOC_LITERAL(89, 2151, 26), // "channelsExportInviteAnswer"
QT_MOC_LITERAL(90, 2178, 18), // "ExportedChatInvite"
QT_MOC_LITERAL(91, 2197, 27), // "channelsDeleteChannelAnswer"
QT_MOC_LITERAL(92, 2225, 25), // "contactsGetStatusesAnswer"
QT_MOC_LITERAL(93, 2251, 20), // "QList<ContactStatus>"
QT_MOC_LITERAL(94, 2272, 25), // "contactsGetContactsAnswer"
QT_MOC_LITERAL(95, 2298, 16), // "ContactsContacts"
QT_MOC_LITERAL(96, 2315, 28), // "contactsImportContactsAnswer"
QT_MOC_LITERAL(97, 2344, 24), // "ContactsImportedContacts"
QT_MOC_LITERAL(98, 2369, 26), // "contactsGetSuggestedAnswer"
QT_MOC_LITERAL(99, 2396, 17), // "ContactsSuggested"
QT_MOC_LITERAL(100, 2414, 27), // "contactsDeleteContactAnswer"
QT_MOC_LITERAL(101, 2442, 12), // "ContactsLink"
QT_MOC_LITERAL(102, 2455, 28), // "contactsDeleteContactsAnswer"
QT_MOC_LITERAL(103, 2484, 19), // "contactsBlockAnswer"
QT_MOC_LITERAL(104, 2504, 21), // "contactsUnblockAnswer"
QT_MOC_LITERAL(105, 2526, 24), // "contactsGetBlockedAnswer"
QT_MOC_LITERAL(106, 2551, 15), // "ContactsBlocked"
QT_MOC_LITERAL(107, 2567, 24), // "contactsExportCardAnswer"
QT_MOC_LITERAL(108, 2592, 13), // "QList<qint32>"
QT_MOC_LITERAL(109, 2606, 24), // "contactsImportCardAnswer"
QT_MOC_LITERAL(110, 2631, 20), // "contactsSearchAnswer"
QT_MOC_LITERAL(111, 2652, 13), // "ContactsFound"
QT_MOC_LITERAL(112, 2666, 29), // "contactsResolveUsernameAnswer"
QT_MOC_LITERAL(113, 2696, 20), // "ContactsResolvedPeer"
QT_MOC_LITERAL(114, 2717, 19), // "helpGetConfigAnswer"
QT_MOC_LITERAL(115, 2737, 6), // "Config"
QT_MOC_LITERAL(116, 2744, 22), // "helpGetNearestDcAnswer"
QT_MOC_LITERAL(117, 2767, 9), // "NearestDc"
QT_MOC_LITERAL(118, 2777, 22), // "helpGetAppUpdateAnswer"
QT_MOC_LITERAL(119, 2800, 13), // "HelpAppUpdate"
QT_MOC_LITERAL(120, 2814, 20), // "helpSaveAppLogAnswer"
QT_MOC_LITERAL(121, 2835, 23), // "helpGetInviteTextAnswer"
QT_MOC_LITERAL(122, 2859, 14), // "HelpInviteText"
QT_MOC_LITERAL(123, 2874, 20), // "helpGetSupportAnswer"
QT_MOC_LITERAL(124, 2895, 11), // "HelpSupport"
QT_MOC_LITERAL(125, 2907, 25), // "helpGetAppChangelogAnswer"
QT_MOC_LITERAL(126, 2933, 16), // "HelpAppChangelog"
QT_MOC_LITERAL(127, 2950, 25), // "messagesGetMessagesAnswer"
QT_MOC_LITERAL(128, 2976, 24), // "messagesGetDialogsAnswer"
QT_MOC_LITERAL(129, 3001, 24), // "messagesGetHistoryAnswer"
QT_MOC_LITERAL(130, 3026, 20), // "messagesSearchAnswer"
QT_MOC_LITERAL(131, 3047, 25), // "messagesReadHistoryAnswer"
QT_MOC_LITERAL(132, 3073, 27), // "messagesDeleteHistoryAnswer"
QT_MOC_LITERAL(133, 3101, 28), // "messagesDeleteMessagesAnswer"
QT_MOC_LITERAL(134, 3130, 30), // "messagesReceivedMessagesAnswer"
QT_MOC_LITERAL(135, 3161, 28), // "QList<ReceivedNotifyMessage>"
QT_MOC_LITERAL(136, 3190, 23), // "messagesSetTypingAnswer"
QT_MOC_LITERAL(137, 3214, 25), // "messagesSendMessageAnswer"
QT_MOC_LITERAL(138, 3240, 23), // "messagesSendMediaAnswer"
QT_MOC_LITERAL(139, 3264, 29), // "messagesForwardMessagesAnswer"
QT_MOC_LITERAL(140, 3294, 24), // "messagesReportSpamAnswer"
QT_MOC_LITERAL(141, 3319, 22), // "messagesGetChatsAnswer"
QT_MOC_LITERAL(142, 3342, 25), // "messagesGetFullChatAnswer"
QT_MOC_LITERAL(143, 3368, 27), // "messagesEditChatTitleAnswer"
QT_MOC_LITERAL(144, 3396, 27), // "messagesEditChatPhotoAnswer"
QT_MOC_LITERAL(145, 3424, 25), // "messagesAddChatUserAnswer"
QT_MOC_LITERAL(146, 3450, 28), // "messagesDeleteChatUserAnswer"
QT_MOC_LITERAL(147, 3479, 24), // "messagesCreateChatAnswer"
QT_MOC_LITERAL(148, 3504, 28), // "messagesForwardMessageAnswer"
QT_MOC_LITERAL(149, 3533, 27), // "messagesSendBroadcastAnswer"
QT_MOC_LITERAL(150, 3561, 25), // "messagesGetDhConfigAnswer"
QT_MOC_LITERAL(151, 3587, 16), // "MessagesDhConfig"
QT_MOC_LITERAL(152, 3604, 31), // "messagesRequestEncryptionAnswer"
QT_MOC_LITERAL(153, 3636, 13), // "EncryptedChat"
QT_MOC_LITERAL(154, 3650, 30), // "messagesAcceptEncryptionAnswer"
QT_MOC_LITERAL(155, 3681, 31), // "messagesDiscardEncryptionAnswer"
QT_MOC_LITERAL(156, 3713, 32), // "messagesSetEncryptedTypingAnswer"
QT_MOC_LITERAL(157, 3746, 34), // "messagesReadEncryptedHistoryA..."
QT_MOC_LITERAL(158, 3781, 27), // "messagesSendEncryptedAnswer"
QT_MOC_LITERAL(159, 3809, 28), // "MessagesSentEncryptedMessage"
QT_MOC_LITERAL(160, 3838, 31), // "messagesSendEncryptedFileAnswer"
QT_MOC_LITERAL(161, 3870, 34), // "messagesSendEncryptedServiceA..."
QT_MOC_LITERAL(162, 3905, 27), // "messagesReceivedQueueAnswer"
QT_MOC_LITERAL(163, 3933, 13), // "QList<qint64>"
QT_MOC_LITERAL(164, 3947, 33), // "messagesReadMessageContentsAn..."
QT_MOC_LITERAL(165, 3981, 25), // "messagesGetStickersAnswer"
QT_MOC_LITERAL(166, 4007, 16), // "MessagesStickers"
QT_MOC_LITERAL(167, 4024, 28), // "messagesGetAllStickersAnswer"
QT_MOC_LITERAL(168, 4053, 19), // "MessagesAllStickers"
QT_MOC_LITERAL(169, 4073, 31), // "messagesGetWebPagePreviewAnswer"
QT_MOC_LITERAL(170, 4105, 12), // "MessageMedia"
QT_MOC_LITERAL(171, 4118, 30), // "messagesExportChatInviteAnswer"
QT_MOC_LITERAL(172, 4149, 29), // "messagesCheckChatInviteAnswer"
QT_MOC_LITERAL(173, 4179, 10), // "ChatInvite"
QT_MOC_LITERAL(174, 4190, 30), // "messagesImportChatInviteAnswer"
QT_MOC_LITERAL(175, 4221, 27), // "messagesGetStickerSetAnswer"
QT_MOC_LITERAL(176, 4249, 18), // "MessagesStickerSet"
QT_MOC_LITERAL(177, 4268, 31), // "messagesInstallStickerSetAnswer"
QT_MOC_LITERAL(178, 4300, 33), // "messagesUninstallStickerSetAn..."
QT_MOC_LITERAL(179, 4334, 22), // "messagesStartBotAnswer"
QT_MOC_LITERAL(180, 4357, 30), // "messagesGetMessagesViewsAnswer"
QT_MOC_LITERAL(181, 4388, 30), // "messagesToggleChatAdminsAnswer"
QT_MOC_LITERAL(182, 4419, 27), // "messagesEditChatAdminAnswer"
QT_MOC_LITERAL(183, 4447, 28), // "messagesDeactivateChatAnswer"
QT_MOC_LITERAL(184, 4476, 25), // "messagesMigrateChatAnswer"
QT_MOC_LITERAL(185, 4502, 26), // "messagesSearchGlobalAnswer"
QT_MOC_LITERAL(186, 4529, 30), // "photosUpdateProfilePhotoAnswer"
QT_MOC_LITERAL(187, 4560, 16), // "UserProfilePhoto"
QT_MOC_LITERAL(188, 4577, 30), // "photosUploadProfilePhotoAnswer"
QT_MOC_LITERAL(189, 4608, 11), // "PhotosPhoto"
QT_MOC_LITERAL(190, 4620, 24), // "photosDeletePhotosAnswer"
QT_MOC_LITERAL(191, 4645, 25), // "photosGetUserPhotosAnswer"
QT_MOC_LITERAL(192, 4671, 12), // "PhotosPhotos"
QT_MOC_LITERAL(193, 4684, 21), // "updatesGetStateAnswer"
QT_MOC_LITERAL(194, 4706, 12), // "UpdatesState"
QT_MOC_LITERAL(195, 4719, 26), // "updatesGetDifferenceAnswer"
QT_MOC_LITERAL(196, 4746, 17), // "UpdatesDifference"
QT_MOC_LITERAL(197, 4764, 33), // "updatesGetChannelDifferenceAn..."
QT_MOC_LITERAL(198, 4798, 24), // "UpdatesChannelDifference"
QT_MOC_LITERAL(199, 4823, 24), // "uploadSaveFilePartAnswer"
QT_MOC_LITERAL(200, 4848, 19), // "uploadGetFileAnswer"
QT_MOC_LITERAL(201, 4868, 10), // "UploadFile"
QT_MOC_LITERAL(202, 4879, 27), // "uploadSaveBigFilePartAnswer"
QT_MOC_LITERAL(203, 4907, 19), // "usersGetUsersAnswer"
QT_MOC_LITERAL(204, 4927, 11), // "QList<User>"
QT_MOC_LITERAL(205, 4939, 22), // "usersGetFullUserAnswer"
QT_MOC_LITERAL(206, 4962, 8), // "UserFull"
QT_MOC_LITERAL(207, 4971, 26), // "accountRegisterDeviceError"
QT_MOC_LITERAL(208, 4998, 9), // "errorCode"
QT_MOC_LITERAL(209, 5008, 9), // "errorText"
QT_MOC_LITERAL(210, 5018, 28), // "accountUnregisterDeviceError"
QT_MOC_LITERAL(211, 5047, 32), // "accountUpdateNotifySettingsError"
QT_MOC_LITERAL(212, 5080, 29), // "accountGetNotifySettingsError"
QT_MOC_LITERAL(213, 5110, 31), // "accountResetNotifySettingsError"
QT_MOC_LITERAL(214, 5142, 25), // "accountUpdateProfileError"
QT_MOC_LITERAL(215, 5168, 24), // "accountUpdateStatusError"
QT_MOC_LITERAL(216, 5193, 25), // "accountGetWallPapersError"
QT_MOC_LITERAL(217, 5219, 25), // "accountCheckUsernameError"
QT_MOC_LITERAL(218, 5245, 26), // "accountUpdateUsernameError"
QT_MOC_LITERAL(219, 5272, 22), // "accountGetPrivacyError"
QT_MOC_LITERAL(220, 5295, 22), // "accountSetPrivacyError"
QT_MOC_LITERAL(221, 5318, 25), // "accountDeleteAccountError"
QT_MOC_LITERAL(222, 5344, 25), // "accountGetAccountTTLError"
QT_MOC_LITERAL(223, 5370, 25), // "accountSetAccountTTLError"
QT_MOC_LITERAL(224, 5396, 31), // "accountSendChangePhoneCodeError"
QT_MOC_LITERAL(225, 5428, 23), // "accountChangePhoneError"
QT_MOC_LITERAL(226, 5452, 30), // "accountUpdateDeviceLockedError"
QT_MOC_LITERAL(227, 5483, 29), // "accountGetAuthorizationsError"
QT_MOC_LITERAL(228, 5513, 30), // "accountResetAuthorizationError"
QT_MOC_LITERAL(229, 5544, 23), // "accountGetPasswordError"
QT_MOC_LITERAL(230, 5568, 31), // "accountGetPasswordSettingsError"
QT_MOC_LITERAL(231, 5600, 34), // "accountUpdatePasswordSettings..."
QT_MOC_LITERAL(232, 5635, 19), // "authCheckPhoneError"
QT_MOC_LITERAL(233, 5655, 17), // "authSendCodeError"
QT_MOC_LITERAL(234, 5673, 17), // "authSendCallError"
QT_MOC_LITERAL(235, 5691, 15), // "authSignUpError"
QT_MOC_LITERAL(236, 5707, 15), // "authSignInError"
QT_MOC_LITERAL(237, 5723, 15), // "authLogOutError"
QT_MOC_LITERAL(238, 5739, 28), // "authResetAuthorizationsError"
QT_MOC_LITERAL(239, 5768, 20), // "authSendInvitesError"
QT_MOC_LITERAL(240, 5789, 28), // "authExportAuthorizationError"
QT_MOC_LITERAL(241, 5818, 28), // "authImportAuthorizationError"
QT_MOC_LITERAL(242, 5847, 24), // "authBindTempAuthKeyError"
QT_MOC_LITERAL(243, 5872, 16), // "authSendSmsError"
QT_MOC_LITERAL(244, 5889, 31), // "authImportBotAuthorizationError"
QT_MOC_LITERAL(245, 5921, 22), // "authCheckPasswordError"
QT_MOC_LITERAL(246, 5944, 32), // "authRequestPasswordRecoveryError"
QT_MOC_LITERAL(247, 5977, 24), // "authRecoverPasswordError"
QT_MOC_LITERAL(248, 6002, 23), // "channelsGetDialogsError"
QT_MOC_LITERAL(249, 6026, 32), // "channelsGetImportantHistoryError"
QT_MOC_LITERAL(250, 6059, 24), // "channelsReadHistoryError"
QT_MOC_LITERAL(251, 6084, 27), // "channelsDeleteMessagesError"
QT_MOC_LITERAL(252, 6112, 30), // "channelsDeleteUserHistoryError"
QT_MOC_LITERAL(253, 6143, 23), // "channelsReportSpamError"
QT_MOC_LITERAL(254, 6167, 24), // "channelsGetMessagesError"
QT_MOC_LITERAL(255, 6192, 28), // "channelsGetParticipantsError"
QT_MOC_LITERAL(256, 6221, 27), // "channelsGetParticipantError"
QT_MOC_LITERAL(257, 6249, 24), // "channelsGetChannelsError"
QT_MOC_LITERAL(258, 6274, 27), // "channelsGetFullChannelError"
QT_MOC_LITERAL(259, 6302, 26), // "channelsCreateChannelError"
QT_MOC_LITERAL(260, 6329, 22), // "channelsEditAboutError"
QT_MOC_LITERAL(261, 6352, 22), // "channelsEditAdminError"
QT_MOC_LITERAL(262, 6375, 22), // "channelsEditTitleError"
QT_MOC_LITERAL(263, 6398, 22), // "channelsEditPhotoError"
QT_MOC_LITERAL(264, 6421, 27), // "channelsToggleCommentsError"
QT_MOC_LITERAL(265, 6449, 26), // "channelsCheckUsernameError"
QT_MOC_LITERAL(266, 6476, 27), // "channelsUpdateUsernameError"
QT_MOC_LITERAL(267, 6504, 24), // "channelsJoinChannelError"
QT_MOC_LITERAL(268, 6529, 25), // "channelsLeaveChannelError"
QT_MOC_LITERAL(269, 6555, 28), // "channelsInviteToChannelError"
QT_MOC_LITERAL(270, 6584, 28), // "channelsKickFromChannelError"
QT_MOC_LITERAL(271, 6613, 25), // "channelsExportInviteError"
QT_MOC_LITERAL(272, 6639, 26), // "channelsDeleteChannelError"
QT_MOC_LITERAL(273, 6666, 24), // "contactsGetStatusesError"
QT_MOC_LITERAL(274, 6691, 24), // "contactsGetContactsError"
QT_MOC_LITERAL(275, 6716, 27), // "contactsImportContactsError"
QT_MOC_LITERAL(276, 6744, 25), // "contactsGetSuggestedError"
QT_MOC_LITERAL(277, 6770, 26), // "contactsDeleteContactError"
QT_MOC_LITERAL(278, 6797, 27), // "contactsDeleteContactsError"
QT_MOC_LITERAL(279, 6825, 18), // "contactsBlockError"
QT_MOC_LITERAL(280, 6844, 20), // "contactsUnblockError"
QT_MOC_LITERAL(281, 6865, 23), // "contactsGetBlockedError"
QT_MOC_LITERAL(282, 6889, 23), // "contactsExportCardError"
QT_MOC_LITERAL(283, 6913, 23), // "contactsImportCardError"
QT_MOC_LITERAL(284, 6937, 19), // "contactsSearchError"
QT_MOC_LITERAL(285, 6957, 28), // "contactsResolveUsernameError"
QT_MOC_LITERAL(286, 6986, 18), // "helpGetConfigError"
QT_MOC_LITERAL(287, 7005, 21), // "helpGetNearestDcError"
QT_MOC_LITERAL(288, 7027, 21), // "helpGetAppUpdateError"
QT_MOC_LITERAL(289, 7049, 19), // "helpSaveAppLogError"
QT_MOC_LITERAL(290, 7069, 22), // "helpGetInviteTextError"
QT_MOC_LITERAL(291, 7092, 19), // "helpGetSupportError"
QT_MOC_LITERAL(292, 7112, 24), // "helpGetAppChangelogError"
QT_MOC_LITERAL(293, 7137, 24), // "messagesGetMessagesError"
QT_MOC_LITERAL(294, 7162, 23), // "messagesGetDialogsError"
QT_MOC_LITERAL(295, 7186, 23), // "messagesGetHistoryError"
QT_MOC_LITERAL(296, 7210, 19), // "messagesSearchError"
QT_MOC_LITERAL(297, 7230, 24), // "messagesReadHistoryError"
QT_MOC_LITERAL(298, 7255, 26), // "messagesDeleteHistoryError"
QT_MOC_LITERAL(299, 7282, 27), // "messagesDeleteMessagesError"
QT_MOC_LITERAL(300, 7310, 29), // "messagesReceivedMessagesError"
QT_MOC_LITERAL(301, 7340, 22), // "messagesSetTypingError"
QT_MOC_LITERAL(302, 7363, 24), // "messagesSendMessageError"
QT_MOC_LITERAL(303, 7388, 22), // "messagesSendMediaError"
QT_MOC_LITERAL(304, 7411, 28), // "messagesForwardMessagesError"
QT_MOC_LITERAL(305, 7440, 23), // "messagesReportSpamError"
QT_MOC_LITERAL(306, 7464, 21), // "messagesGetChatsError"
QT_MOC_LITERAL(307, 7486, 24), // "messagesGetFullChatError"
QT_MOC_LITERAL(308, 7511, 26), // "messagesEditChatTitleError"
QT_MOC_LITERAL(309, 7538, 26), // "messagesEditChatPhotoError"
QT_MOC_LITERAL(310, 7565, 24), // "messagesAddChatUserError"
QT_MOC_LITERAL(311, 7590, 27), // "messagesDeleteChatUserError"
QT_MOC_LITERAL(312, 7618, 23), // "messagesCreateChatError"
QT_MOC_LITERAL(313, 7642, 27), // "messagesForwardMessageError"
QT_MOC_LITERAL(314, 7670, 26), // "messagesSendBroadcastError"
QT_MOC_LITERAL(315, 7697, 24), // "messagesGetDhConfigError"
QT_MOC_LITERAL(316, 7722, 30), // "messagesRequestEncryptionError"
QT_MOC_LITERAL(317, 7753, 29), // "messagesAcceptEncryptionError"
QT_MOC_LITERAL(318, 7783, 30), // "messagesDiscardEncryptionError"
QT_MOC_LITERAL(319, 7814, 31), // "messagesSetEncryptedTypingError"
QT_MOC_LITERAL(320, 7846, 33), // "messagesReadEncryptedHistoryE..."
QT_MOC_LITERAL(321, 7880, 26), // "messagesSendEncryptedError"
QT_MOC_LITERAL(322, 7907, 30), // "messagesSendEncryptedFileError"
QT_MOC_LITERAL(323, 7938, 33), // "messagesSendEncryptedServiceE..."
QT_MOC_LITERAL(324, 7972, 26), // "messagesReceivedQueueError"
QT_MOC_LITERAL(325, 7999, 32), // "messagesReadMessageContentsError"
QT_MOC_LITERAL(326, 8032, 24), // "messagesGetStickersError"
QT_MOC_LITERAL(327, 8057, 27), // "messagesGetAllStickersError"
QT_MOC_LITERAL(328, 8085, 30), // "messagesGetWebPagePreviewError"
QT_MOC_LITERAL(329, 8116, 29), // "messagesExportChatInviteError"
QT_MOC_LITERAL(330, 8146, 28), // "messagesCheckChatInviteError"
QT_MOC_LITERAL(331, 8175, 29), // "messagesImportChatInviteError"
QT_MOC_LITERAL(332, 8205, 26), // "messagesGetStickerSetError"
QT_MOC_LITERAL(333, 8232, 30), // "messagesInstallStickerSetError"
QT_MOC_LITERAL(334, 8263, 32), // "messagesUninstallStickerSetError"
QT_MOC_LITERAL(335, 8296, 21), // "messagesStartBotError"
QT_MOC_LITERAL(336, 8318, 29), // "messagesGetMessagesViewsError"
QT_MOC_LITERAL(337, 8348, 29), // "messagesToggleChatAdminsError"
QT_MOC_LITERAL(338, 8378, 26), // "messagesEditChatAdminError"
QT_MOC_LITERAL(339, 8405, 27), // "messagesDeactivateChatError"
QT_MOC_LITERAL(340, 8433, 24), // "messagesMigrateChatError"
QT_MOC_LITERAL(341, 8458, 25), // "messagesSearchGlobalError"
QT_MOC_LITERAL(342, 8484, 29), // "photosUpdateProfilePhotoError"
QT_MOC_LITERAL(343, 8514, 29), // "photosUploadProfilePhotoError"
QT_MOC_LITERAL(344, 8544, 23), // "photosDeletePhotosError"
QT_MOC_LITERAL(345, 8568, 24), // "photosGetUserPhotosError"
QT_MOC_LITERAL(346, 8593, 20), // "updatesGetStateError"
QT_MOC_LITERAL(347, 8614, 25), // "updatesGetDifferenceError"
QT_MOC_LITERAL(348, 8640, 32), // "updatesGetChannelDifferenceError"
QT_MOC_LITERAL(349, 8673, 23), // "uploadSaveFilePartError"
QT_MOC_LITERAL(350, 8697, 18), // "uploadGetFileError"
QT_MOC_LITERAL(351, 8716, 26), // "uploadSaveBigFilePartError"
QT_MOC_LITERAL(352, 8743, 18), // "usersGetUsersError"
QT_MOC_LITERAL(353, 8762, 21), // "usersGetFullUserError"
QT_MOC_LITERAL(354, 8784, 5), // "error"
QT_MOC_LITERAL(355, 8790, 2), // "id"
QT_MOC_LITERAL(356, 8793, 12), // "functionName"
QT_MOC_LITERAL(357, 8806, 29), // "onAccountRegisterDeviceAnswer"
QT_MOC_LITERAL(358, 8836, 12), // "attachedData"
QT_MOC_LITERAL(359, 8849, 31), // "onAccountUnregisterDeviceAnswer"
QT_MOC_LITERAL(360, 8881, 35), // "onAccountUpdateNotifySettings..."
QT_MOC_LITERAL(361, 8917, 32), // "onAccountGetNotifySettingsAnswer"
QT_MOC_LITERAL(362, 8950, 34), // "onAccountResetNotifySettingsA..."
QT_MOC_LITERAL(363, 8985, 28), // "onAccountUpdateProfileAnswer"
QT_MOC_LITERAL(364, 9014, 27), // "onAccountUpdateStatusAnswer"
QT_MOC_LITERAL(365, 9042, 28), // "onAccountGetWallPapersAnswer"
QT_MOC_LITERAL(366, 9071, 28), // "onAccountCheckUsernameAnswer"
QT_MOC_LITERAL(367, 9100, 29), // "onAccountUpdateUsernameAnswer"
QT_MOC_LITERAL(368, 9130, 25), // "onAccountGetPrivacyAnswer"
QT_MOC_LITERAL(369, 9156, 25), // "onAccountSetPrivacyAnswer"
QT_MOC_LITERAL(370, 9182, 28), // "onAccountDeleteAccountAnswer"
QT_MOC_LITERAL(371, 9211, 28), // "onAccountGetAccountTTLAnswer"
QT_MOC_LITERAL(372, 9240, 28), // "onAccountSetAccountTTLAnswer"
QT_MOC_LITERAL(373, 9269, 34), // "onAccountSendChangePhoneCodeA..."
QT_MOC_LITERAL(374, 9304, 26), // "onAccountChangePhoneAnswer"
QT_MOC_LITERAL(375, 9331, 33), // "onAccountUpdateDeviceLockedAn..."
QT_MOC_LITERAL(376, 9365, 32), // "onAccountGetAuthorizationsAnswer"
QT_MOC_LITERAL(377, 9398, 33), // "onAccountResetAuthorizationAn..."
QT_MOC_LITERAL(378, 9432, 26), // "onAccountGetPasswordAnswer"
QT_MOC_LITERAL(379, 9459, 34), // "onAccountGetPasswordSettingsA..."
QT_MOC_LITERAL(380, 9494, 37), // "onAccountUpdatePasswordSettin..."
QT_MOC_LITERAL(381, 9532, 22), // "onAuthCheckPhoneAnswer"
QT_MOC_LITERAL(382, 9555, 20), // "onAuthSendCodeAnswer"
QT_MOC_LITERAL(383, 9576, 20), // "onAuthSendCallAnswer"
QT_MOC_LITERAL(384, 9597, 18), // "onAuthSignUpAnswer"
QT_MOC_LITERAL(385, 9616, 18), // "onAuthSignInAnswer"
QT_MOC_LITERAL(386, 9635, 18), // "onAuthLogOutAnswer"
QT_MOC_LITERAL(387, 9654, 31), // "onAuthResetAuthorizationsAnswer"
QT_MOC_LITERAL(388, 9686, 23), // "onAuthSendInvitesAnswer"
QT_MOC_LITERAL(389, 9710, 31), // "onAuthExportAuthorizationAnswer"
QT_MOC_LITERAL(390, 9742, 31), // "onAuthImportAuthorizationAnswer"
QT_MOC_LITERAL(391, 9774, 27), // "onAuthBindTempAuthKeyAnswer"
QT_MOC_LITERAL(392, 9802, 19), // "onAuthSendSmsAnswer"
QT_MOC_LITERAL(393, 9822, 34), // "onAuthImportBotAuthorizationA..."
QT_MOC_LITERAL(394, 9857, 25), // "onAuthCheckPasswordAnswer"
QT_MOC_LITERAL(395, 9883, 35), // "onAuthRequestPasswordRecovery..."
QT_MOC_LITERAL(396, 9919, 27), // "onAuthRecoverPasswordAnswer"
QT_MOC_LITERAL(397, 9947, 26), // "onChannelsGetDialogsAnswer"
QT_MOC_LITERAL(398, 9974, 35), // "onChannelsGetImportantHistory..."
QT_MOC_LITERAL(399, 10010, 27), // "onChannelsReadHistoryAnswer"
QT_MOC_LITERAL(400, 10038, 30), // "onChannelsDeleteMessagesAnswer"
QT_MOC_LITERAL(401, 10069, 33), // "onChannelsDeleteUserHistoryAn..."
QT_MOC_LITERAL(402, 10103, 26), // "onChannelsReportSpamAnswer"
QT_MOC_LITERAL(403, 10130, 27), // "onChannelsGetMessagesAnswer"
QT_MOC_LITERAL(404, 10158, 31), // "onChannelsGetParticipantsAnswer"
QT_MOC_LITERAL(405, 10190, 30), // "onChannelsGetParticipantAnswer"
QT_MOC_LITERAL(406, 10221, 27), // "onChannelsGetChannelsAnswer"
QT_MOC_LITERAL(407, 10249, 30), // "onChannelsGetFullChannelAnswer"
QT_MOC_LITERAL(408, 10280, 29), // "onChannelsCreateChannelAnswer"
QT_MOC_LITERAL(409, 10310, 25), // "onChannelsEditAboutAnswer"
QT_MOC_LITERAL(410, 10336, 25), // "onChannelsEditAdminAnswer"
QT_MOC_LITERAL(411, 10362, 25), // "onChannelsEditTitleAnswer"
QT_MOC_LITERAL(412, 10388, 25), // "onChannelsEditPhotoAnswer"
QT_MOC_LITERAL(413, 10414, 30), // "onChannelsToggleCommentsAnswer"
QT_MOC_LITERAL(414, 10445, 29), // "onChannelsCheckUsernameAnswer"
QT_MOC_LITERAL(415, 10475, 30), // "onChannelsUpdateUsernameAnswer"
QT_MOC_LITERAL(416, 10506, 27), // "onChannelsJoinChannelAnswer"
QT_MOC_LITERAL(417, 10534, 28), // "onChannelsLeaveChannelAnswer"
QT_MOC_LITERAL(418, 10563, 31), // "onChannelsInviteToChannelAnswer"
QT_MOC_LITERAL(419, 10595, 31), // "onChannelsKickFromChannelAnswer"
QT_MOC_LITERAL(420, 10627, 28), // "onChannelsExportInviteAnswer"
QT_MOC_LITERAL(421, 10656, 29), // "onChannelsDeleteChannelAnswer"
QT_MOC_LITERAL(422, 10686, 27), // "onContactsGetStatusesAnswer"
QT_MOC_LITERAL(423, 10714, 27), // "onContactsGetContactsAnswer"
QT_MOC_LITERAL(424, 10742, 30), // "onContactsImportContactsAnswer"
QT_MOC_LITERAL(425, 10773, 28), // "onContactsGetSuggestedAnswer"
QT_MOC_LITERAL(426, 10802, 29), // "onContactsDeleteContactAnswer"
QT_MOC_LITERAL(427, 10832, 30), // "onContactsDeleteContactsAnswer"
QT_MOC_LITERAL(428, 10863, 21), // "onContactsBlockAnswer"
QT_MOC_LITERAL(429, 10885, 23), // "onContactsUnblockAnswer"
QT_MOC_LITERAL(430, 10909, 26), // "onContactsGetBlockedAnswer"
QT_MOC_LITERAL(431, 10936, 26), // "onContactsExportCardAnswer"
QT_MOC_LITERAL(432, 10963, 26), // "onContactsImportCardAnswer"
QT_MOC_LITERAL(433, 10990, 22), // "onContactsSearchAnswer"
QT_MOC_LITERAL(434, 11013, 31), // "onContactsResolveUsernameAnswer"
QT_MOC_LITERAL(435, 11045, 21), // "onHelpGetConfigAnswer"
QT_MOC_LITERAL(436, 11067, 24), // "onHelpGetNearestDcAnswer"
QT_MOC_LITERAL(437, 11092, 24), // "onHelpGetAppUpdateAnswer"
QT_MOC_LITERAL(438, 11117, 22), // "onHelpSaveAppLogAnswer"
QT_MOC_LITERAL(439, 11140, 25), // "onHelpGetInviteTextAnswer"
QT_MOC_LITERAL(440, 11166, 22), // "onHelpGetSupportAnswer"
QT_MOC_LITERAL(441, 11189, 27), // "onHelpGetAppChangelogAnswer"
QT_MOC_LITERAL(442, 11217, 27), // "onMessagesGetMessagesAnswer"
QT_MOC_LITERAL(443, 11245, 26), // "onMessagesGetDialogsAnswer"
QT_MOC_LITERAL(444, 11272, 26), // "onMessagesGetHistoryAnswer"
QT_MOC_LITERAL(445, 11299, 22), // "onMessagesSearchAnswer"
QT_MOC_LITERAL(446, 11322, 27), // "onMessagesReadHistoryAnswer"
QT_MOC_LITERAL(447, 11350, 29), // "onMessagesDeleteHistoryAnswer"
QT_MOC_LITERAL(448, 11380, 30), // "onMessagesDeleteMessagesAnswer"
QT_MOC_LITERAL(449, 11411, 32), // "onMessagesReceivedMessagesAnswer"
QT_MOC_LITERAL(450, 11444, 25), // "onMessagesSetTypingAnswer"
QT_MOC_LITERAL(451, 11470, 27), // "onMessagesSendMessageAnswer"
QT_MOC_LITERAL(452, 11498, 25), // "onMessagesSendMediaAnswer"
QT_MOC_LITERAL(453, 11524, 31), // "onMessagesForwardMessagesAnswer"
QT_MOC_LITERAL(454, 11556, 26), // "onMessagesReportSpamAnswer"
QT_MOC_LITERAL(455, 11583, 24), // "onMessagesGetChatsAnswer"
QT_MOC_LITERAL(456, 11608, 27), // "onMessagesGetFullChatAnswer"
QT_MOC_LITERAL(457, 11636, 29), // "onMessagesEditChatTitleAnswer"
QT_MOC_LITERAL(458, 11666, 29), // "onMessagesEditChatPhotoAnswer"
QT_MOC_LITERAL(459, 11696, 27), // "onMessagesAddChatUserAnswer"
QT_MOC_LITERAL(460, 11724, 30), // "onMessagesDeleteChatUserAnswer"
QT_MOC_LITERAL(461, 11755, 26), // "onMessagesCreateChatAnswer"
QT_MOC_LITERAL(462, 11782, 30), // "onMessagesForwardMessageAnswer"
QT_MOC_LITERAL(463, 11813, 29), // "onMessagesSendBroadcastAnswer"
QT_MOC_LITERAL(464, 11843, 27), // "onMessagesGetDhConfigAnswer"
QT_MOC_LITERAL(465, 11871, 33), // "onMessagesRequestEncryptionAn..."
QT_MOC_LITERAL(466, 11905, 32), // "onMessagesAcceptEncryptionAnswer"
QT_MOC_LITERAL(467, 11938, 33), // "onMessagesDiscardEncryptionAn..."
QT_MOC_LITERAL(468, 11972, 34), // "onMessagesSetEncryptedTypingA..."
QT_MOC_LITERAL(469, 12007, 36), // "onMessagesReadEncryptedHistor..."
QT_MOC_LITERAL(470, 12044, 29), // "onMessagesSendEncryptedAnswer"
QT_MOC_LITERAL(471, 12074, 33), // "onMessagesSendEncryptedFileAn..."
QT_MOC_LITERAL(472, 12108, 36), // "onMessagesSendEncryptedServic..."
QT_MOC_LITERAL(473, 12145, 29), // "onMessagesReceivedQueueAnswer"
QT_MOC_LITERAL(474, 12175, 35), // "onMessagesReadMessageContents..."
QT_MOC_LITERAL(475, 12211, 27), // "onMessagesGetStickersAnswer"
QT_MOC_LITERAL(476, 12239, 30), // "onMessagesGetAllStickersAnswer"
QT_MOC_LITERAL(477, 12270, 33), // "onMessagesGetWebPagePreviewAn..."
QT_MOC_LITERAL(478, 12304, 32), // "onMessagesExportChatInviteAnswer"
QT_MOC_LITERAL(479, 12337, 31), // "onMessagesCheckChatInviteAnswer"
QT_MOC_LITERAL(480, 12369, 32), // "onMessagesImportChatInviteAnswer"
QT_MOC_LITERAL(481, 12402, 29), // "onMessagesGetStickerSetAnswer"
QT_MOC_LITERAL(482, 12432, 33), // "onMessagesInstallStickerSetAn..."
QT_MOC_LITERAL(483, 12466, 35), // "onMessagesUninstallStickerSet..."
QT_MOC_LITERAL(484, 12502, 24), // "onMessagesStartBotAnswer"
QT_MOC_LITERAL(485, 12527, 32), // "onMessagesGetMessagesViewsAnswer"
QT_MOC_LITERAL(486, 12560, 32), // "onMessagesToggleChatAdminsAnswer"
QT_MOC_LITERAL(487, 12593, 29), // "onMessagesEditChatAdminAnswer"
QT_MOC_LITERAL(488, 12623, 30), // "onMessagesDeactivateChatAnswer"
QT_MOC_LITERAL(489, 12654, 27), // "onMessagesMigrateChatAnswer"
QT_MOC_LITERAL(490, 12682, 28), // "onMessagesSearchGlobalAnswer"
QT_MOC_LITERAL(491, 12711, 32), // "onPhotosUpdateProfilePhotoAnswer"
QT_MOC_LITERAL(492, 12744, 32), // "onPhotosUploadProfilePhotoAnswer"
QT_MOC_LITERAL(493, 12777, 26), // "onPhotosDeletePhotosAnswer"
QT_MOC_LITERAL(494, 12804, 27), // "onPhotosGetUserPhotosAnswer"
QT_MOC_LITERAL(495, 12832, 23), // "onUpdatesGetStateAnswer"
QT_MOC_LITERAL(496, 12856, 28), // "onUpdatesGetDifferenceAnswer"
QT_MOC_LITERAL(497, 12885, 35), // "onUpdatesGetChannelDifference..."
QT_MOC_LITERAL(498, 12921, 26), // "onUploadSaveFilePartAnswer"
QT_MOC_LITERAL(499, 12948, 21), // "onUploadGetFileAnswer"
QT_MOC_LITERAL(500, 12970, 29), // "onUploadSaveBigFilePartAnswer"
QT_MOC_LITERAL(501, 13000, 21), // "onUsersGetUsersAnswer"
QT_MOC_LITERAL(502, 13022, 24), // "onUsersGetFullUserAnswer"
QT_MOC_LITERAL(503, 13047, 28), // "onAccountRegisterDeviceError"
QT_MOC_LITERAL(504, 13076, 30), // "onAccountUnregisterDeviceError"
QT_MOC_LITERAL(505, 13107, 34), // "onAccountUpdateNotifySettings..."
QT_MOC_LITERAL(506, 13142, 31), // "onAccountGetNotifySettingsError"
QT_MOC_LITERAL(507, 13174, 33), // "onAccountResetNotifySettingsE..."
QT_MOC_LITERAL(508, 13208, 27), // "onAccountUpdateProfileError"
QT_MOC_LITERAL(509, 13236, 26), // "onAccountUpdateStatusError"
QT_MOC_LITERAL(510, 13263, 27), // "onAccountGetWallPapersError"
QT_MOC_LITERAL(511, 13291, 27), // "onAccountCheckUsernameError"
QT_MOC_LITERAL(512, 13319, 28), // "onAccountUpdateUsernameError"
QT_MOC_LITERAL(513, 13348, 24), // "onAccountGetPrivacyError"
QT_MOC_LITERAL(514, 13373, 24), // "onAccountSetPrivacyError"
QT_MOC_LITERAL(515, 13398, 27), // "onAccountDeleteAccountError"
QT_MOC_LITERAL(516, 13426, 27), // "onAccountGetAccountTTLError"
QT_MOC_LITERAL(517, 13454, 27), // "onAccountSetAccountTTLError"
QT_MOC_LITERAL(518, 13482, 33), // "onAccountSendChangePhoneCodeE..."
QT_MOC_LITERAL(519, 13516, 25), // "onAccountChangePhoneError"
QT_MOC_LITERAL(520, 13542, 32), // "onAccountUpdateDeviceLockedError"
QT_MOC_LITERAL(521, 13575, 31), // "onAccountGetAuthorizationsError"
QT_MOC_LITERAL(522, 13607, 32), // "onAccountResetAuthorizationError"
QT_MOC_LITERAL(523, 13640, 25), // "onAccountGetPasswordError"
QT_MOC_LITERAL(524, 13666, 33), // "onAccountGetPasswordSettingsE..."
QT_MOC_LITERAL(525, 13700, 36), // "onAccountUpdatePasswordSettin..."
QT_MOC_LITERAL(526, 13737, 21), // "onAuthCheckPhoneError"
QT_MOC_LITERAL(527, 13759, 19), // "onAuthSendCodeError"
QT_MOC_LITERAL(528, 13779, 19), // "onAuthSendCallError"
QT_MOC_LITERAL(529, 13799, 17), // "onAuthSignUpError"
QT_MOC_LITERAL(530, 13817, 17), // "onAuthSignInError"
QT_MOC_LITERAL(531, 13835, 17), // "onAuthLogOutError"
QT_MOC_LITERAL(532, 13853, 30), // "onAuthResetAuthorizationsError"
QT_MOC_LITERAL(533, 13884, 22), // "onAuthSendInvitesError"
QT_MOC_LITERAL(534, 13907, 30), // "onAuthExportAuthorizationError"
QT_MOC_LITERAL(535, 13938, 30), // "onAuthImportAuthorizationError"
QT_MOC_LITERAL(536, 13969, 26), // "onAuthBindTempAuthKeyError"
QT_MOC_LITERAL(537, 13996, 18), // "onAuthSendSmsError"
QT_MOC_LITERAL(538, 14015, 33), // "onAuthImportBotAuthorizationE..."
QT_MOC_LITERAL(539, 14049, 24), // "onAuthCheckPasswordError"
QT_MOC_LITERAL(540, 14074, 34), // "onAuthRequestPasswordRecovery..."
QT_MOC_LITERAL(541, 14109, 26), // "onAuthRecoverPasswordError"
QT_MOC_LITERAL(542, 14136, 25), // "onChannelsGetDialogsError"
QT_MOC_LITERAL(543, 14162, 34), // "onChannelsGetImportantHistory..."
QT_MOC_LITERAL(544, 14197, 26), // "onChannelsReadHistoryError"
QT_MOC_LITERAL(545, 14224, 29), // "onChannelsDeleteMessagesError"
QT_MOC_LITERAL(546, 14254, 32), // "onChannelsDeleteUserHistoryError"
QT_MOC_LITERAL(547, 14287, 25), // "onChannelsReportSpamError"
QT_MOC_LITERAL(548, 14313, 26), // "onChannelsGetMessagesError"
QT_MOC_LITERAL(549, 14340, 30), // "onChannelsGetParticipantsError"
QT_MOC_LITERAL(550, 14371, 29), // "onChannelsGetParticipantError"
QT_MOC_LITERAL(551, 14401, 26), // "onChannelsGetChannelsError"
QT_MOC_LITERAL(552, 14428, 29), // "onChannelsGetFullChannelError"
QT_MOC_LITERAL(553, 14458, 28), // "onChannelsCreateChannelError"
QT_MOC_LITERAL(554, 14487, 24), // "onChannelsEditAboutError"
QT_MOC_LITERAL(555, 14512, 24), // "onChannelsEditAdminError"
QT_MOC_LITERAL(556, 14537, 24), // "onChannelsEditTitleError"
QT_MOC_LITERAL(557, 14562, 24), // "onChannelsEditPhotoError"
QT_MOC_LITERAL(558, 14587, 29), // "onChannelsToggleCommentsError"
QT_MOC_LITERAL(559, 14617, 28), // "onChannelsCheckUsernameError"
QT_MOC_LITERAL(560, 14646, 29), // "onChannelsUpdateUsernameError"
QT_MOC_LITERAL(561, 14676, 26), // "onChannelsJoinChannelError"
QT_MOC_LITERAL(562, 14703, 27), // "onChannelsLeaveChannelError"
QT_MOC_LITERAL(563, 14731, 30), // "onChannelsInviteToChannelError"
QT_MOC_LITERAL(564, 14762, 30), // "onChannelsKickFromChannelError"
QT_MOC_LITERAL(565, 14793, 27), // "onChannelsExportInviteError"
QT_MOC_LITERAL(566, 14821, 28), // "onChannelsDeleteChannelError"
QT_MOC_LITERAL(567, 14850, 26), // "onContactsGetStatusesError"
QT_MOC_LITERAL(568, 14877, 26), // "onContactsGetContactsError"
QT_MOC_LITERAL(569, 14904, 29), // "onContactsImportContactsError"
QT_MOC_LITERAL(570, 14934, 27), // "onContactsGetSuggestedError"
QT_MOC_LITERAL(571, 14962, 28), // "onContactsDeleteContactError"
QT_MOC_LITERAL(572, 14991, 29), // "onContactsDeleteContactsError"
QT_MOC_LITERAL(573, 15021, 20), // "onContactsBlockError"
QT_MOC_LITERAL(574, 15042, 22), // "onContactsUnblockError"
QT_MOC_LITERAL(575, 15065, 25), // "onContactsGetBlockedError"
QT_MOC_LITERAL(576, 15091, 25), // "onContactsExportCardError"
QT_MOC_LITERAL(577, 15117, 25), // "onContactsImportCardError"
QT_MOC_LITERAL(578, 15143, 21), // "onContactsSearchError"
QT_MOC_LITERAL(579, 15165, 30), // "onContactsResolveUsernameError"
QT_MOC_LITERAL(580, 15196, 20), // "onHelpGetConfigError"
QT_MOC_LITERAL(581, 15217, 23), // "onHelpGetNearestDcError"
QT_MOC_LITERAL(582, 15241, 23), // "onHelpGetAppUpdateError"
QT_MOC_LITERAL(583, 15265, 21), // "onHelpSaveAppLogError"
QT_MOC_LITERAL(584, 15287, 24), // "onHelpGetInviteTextError"
QT_MOC_LITERAL(585, 15312, 21), // "onHelpGetSupportError"
QT_MOC_LITERAL(586, 15334, 26), // "onHelpGetAppChangelogError"
QT_MOC_LITERAL(587, 15361, 26), // "onMessagesGetMessagesError"
QT_MOC_LITERAL(588, 15388, 25), // "onMessagesGetDialogsError"
QT_MOC_LITERAL(589, 15414, 25), // "onMessagesGetHistoryError"
QT_MOC_LITERAL(590, 15440, 21), // "onMessagesSearchError"
QT_MOC_LITERAL(591, 15462, 26), // "onMessagesReadHistoryError"
QT_MOC_LITERAL(592, 15489, 28), // "onMessagesDeleteHistoryError"
QT_MOC_LITERAL(593, 15518, 29), // "onMessagesDeleteMessagesError"
QT_MOC_LITERAL(594, 15548, 31), // "onMessagesReceivedMessagesError"
QT_MOC_LITERAL(595, 15580, 24), // "onMessagesSetTypingError"
QT_MOC_LITERAL(596, 15605, 26), // "onMessagesSendMessageError"
QT_MOC_LITERAL(597, 15632, 24), // "onMessagesSendMediaError"
QT_MOC_LITERAL(598, 15657, 30), // "onMessagesForwardMessagesError"
QT_MOC_LITERAL(599, 15688, 25), // "onMessagesReportSpamError"
QT_MOC_LITERAL(600, 15714, 23), // "onMessagesGetChatsError"
QT_MOC_LITERAL(601, 15738, 26), // "onMessagesGetFullChatError"
QT_MOC_LITERAL(602, 15765, 28), // "onMessagesEditChatTitleError"
QT_MOC_LITERAL(603, 15794, 28), // "onMessagesEditChatPhotoError"
QT_MOC_LITERAL(604, 15823, 26), // "onMessagesAddChatUserError"
QT_MOC_LITERAL(605, 15850, 29), // "onMessagesDeleteChatUserError"
QT_MOC_LITERAL(606, 15880, 25), // "onMessagesCreateChatError"
QT_MOC_LITERAL(607, 15906, 29), // "onMessagesForwardMessageError"
QT_MOC_LITERAL(608, 15936, 28), // "onMessagesSendBroadcastError"
QT_MOC_LITERAL(609, 15965, 26), // "onMessagesGetDhConfigError"
QT_MOC_LITERAL(610, 15992, 32), // "onMessagesRequestEncryptionError"
QT_MOC_LITERAL(611, 16025, 31), // "onMessagesAcceptEncryptionError"
QT_MOC_LITERAL(612, 16057, 32), // "onMessagesDiscardEncryptionError"
QT_MOC_LITERAL(613, 16090, 33), // "onMessagesSetEncryptedTypingE..."
QT_MOC_LITERAL(614, 16124, 35), // "onMessagesReadEncryptedHistor..."
QT_MOC_LITERAL(615, 16160, 28), // "onMessagesSendEncryptedError"
QT_MOC_LITERAL(616, 16189, 32), // "onMessagesSendEncryptedFileError"
QT_MOC_LITERAL(617, 16222, 35), // "onMessagesSendEncryptedServic..."
QT_MOC_LITERAL(618, 16258, 28), // "onMessagesReceivedQueueError"
QT_MOC_LITERAL(619, 16287, 34), // "onMessagesReadMessageContents..."
QT_MOC_LITERAL(620, 16322, 26), // "onMessagesGetStickersError"
QT_MOC_LITERAL(621, 16349, 29), // "onMessagesGetAllStickersError"
QT_MOC_LITERAL(622, 16379, 32), // "onMessagesGetWebPagePreviewError"
QT_MOC_LITERAL(623, 16412, 31), // "onMessagesExportChatInviteError"
QT_MOC_LITERAL(624, 16444, 30), // "onMessagesCheckChatInviteError"
QT_MOC_LITERAL(625, 16475, 31), // "onMessagesImportChatInviteError"
QT_MOC_LITERAL(626, 16507, 28), // "onMessagesGetStickerSetError"
QT_MOC_LITERAL(627, 16536, 32), // "onMessagesInstallStickerSetError"
QT_MOC_LITERAL(628, 16569, 34), // "onMessagesUninstallStickerSet..."
QT_MOC_LITERAL(629, 16604, 23), // "onMessagesStartBotError"
QT_MOC_LITERAL(630, 16628, 31), // "onMessagesGetMessagesViewsError"
QT_MOC_LITERAL(631, 16660, 31), // "onMessagesToggleChatAdminsError"
QT_MOC_LITERAL(632, 16692, 28), // "onMessagesEditChatAdminError"
QT_MOC_LITERAL(633, 16721, 29), // "onMessagesDeactivateChatError"
QT_MOC_LITERAL(634, 16751, 26), // "onMessagesMigrateChatError"
QT_MOC_LITERAL(635, 16778, 27), // "onMessagesSearchGlobalError"
QT_MOC_LITERAL(636, 16806, 31), // "onPhotosUpdateProfilePhotoError"
QT_MOC_LITERAL(637, 16838, 31), // "onPhotosUploadProfilePhotoError"
QT_MOC_LITERAL(638, 16870, 25), // "onPhotosDeletePhotosError"
QT_MOC_LITERAL(639, 16896, 26), // "onPhotosGetUserPhotosError"
QT_MOC_LITERAL(640, 16923, 22), // "onUpdatesGetStateError"
QT_MOC_LITERAL(641, 16946, 27), // "onUpdatesGetDifferenceError"
QT_MOC_LITERAL(642, 16974, 34), // "onUpdatesGetChannelDifference..."
QT_MOC_LITERAL(643, 17009, 25), // "onUploadSaveFilePartError"
QT_MOC_LITERAL(644, 17035, 20), // "onUploadGetFileError"
QT_MOC_LITERAL(645, 17056, 28), // "onUploadSaveBigFilePartError"
QT_MOC_LITERAL(646, 17085, 20), // "onUsersGetUsersError"
QT_MOC_LITERAL(647, 17106, 23), // "onUsersGetFullUserError"
QT_MOC_LITERAL(648, 17130, 7), // "onError"
QT_MOC_LITERAL(649, 17138, 5), // "bool&"
QT_MOC_LITERAL(650, 17144, 8) // "accepted"

    },
    "TelegramCore\0accountRegisterDeviceAnswer\0"
    "\0msgId\0result\0accountUnregisterDeviceAnswer\0"
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
    "error\0id\0functionName\0"
    "onAccountRegisterDeviceAnswer\0"
    "attachedData\0onAccountUnregisterDeviceAnswer\0"
    "onAccountUpdateNotifySettingsAnswer\0"
    "onAccountGetNotifySettingsAnswer\0"
    "onAccountResetNotifySettingsAnswer\0"
    "onAccountUpdateProfileAnswer\0"
    "onAccountUpdateStatusAnswer\0"
    "onAccountGetWallPapersAnswer\0"
    "onAccountCheckUsernameAnswer\0"
    "onAccountUpdateUsernameAnswer\0"
    "onAccountGetPrivacyAnswer\0"
    "onAccountSetPrivacyAnswer\0"
    "onAccountDeleteAccountAnswer\0"
    "onAccountGetAccountTTLAnswer\0"
    "onAccountSetAccountTTLAnswer\0"
    "onAccountSendChangePhoneCodeAnswer\0"
    "onAccountChangePhoneAnswer\0"
    "onAccountUpdateDeviceLockedAnswer\0"
    "onAccountGetAuthorizationsAnswer\0"
    "onAccountResetAuthorizationAnswer\0"
    "onAccountGetPasswordAnswer\0"
    "onAccountGetPasswordSettingsAnswer\0"
    "onAccountUpdatePasswordSettingsAnswer\0"
    "onAuthCheckPhoneAnswer\0onAuthSendCodeAnswer\0"
    "onAuthSendCallAnswer\0onAuthSignUpAnswer\0"
    "onAuthSignInAnswer\0onAuthLogOutAnswer\0"
    "onAuthResetAuthorizationsAnswer\0"
    "onAuthSendInvitesAnswer\0"
    "onAuthExportAuthorizationAnswer\0"
    "onAuthImportAuthorizationAnswer\0"
    "onAuthBindTempAuthKeyAnswer\0"
    "onAuthSendSmsAnswer\0"
    "onAuthImportBotAuthorizationAnswer\0"
    "onAuthCheckPasswordAnswer\0"
    "onAuthRequestPasswordRecoveryAnswer\0"
    "onAuthRecoverPasswordAnswer\0"
    "onChannelsGetDialogsAnswer\0"
    "onChannelsGetImportantHistoryAnswer\0"
    "onChannelsReadHistoryAnswer\0"
    "onChannelsDeleteMessagesAnswer\0"
    "onChannelsDeleteUserHistoryAnswer\0"
    "onChannelsReportSpamAnswer\0"
    "onChannelsGetMessagesAnswer\0"
    "onChannelsGetParticipantsAnswer\0"
    "onChannelsGetParticipantAnswer\0"
    "onChannelsGetChannelsAnswer\0"
    "onChannelsGetFullChannelAnswer\0"
    "onChannelsCreateChannelAnswer\0"
    "onChannelsEditAboutAnswer\0"
    "onChannelsEditAdminAnswer\0"
    "onChannelsEditTitleAnswer\0"
    "onChannelsEditPhotoAnswer\0"
    "onChannelsToggleCommentsAnswer\0"
    "onChannelsCheckUsernameAnswer\0"
    "onChannelsUpdateUsernameAnswer\0"
    "onChannelsJoinChannelAnswer\0"
    "onChannelsLeaveChannelAnswer\0"
    "onChannelsInviteToChannelAnswer\0"
    "onChannelsKickFromChannelAnswer\0"
    "onChannelsExportInviteAnswer\0"
    "onChannelsDeleteChannelAnswer\0"
    "onContactsGetStatusesAnswer\0"
    "onContactsGetContactsAnswer\0"
    "onContactsImportContactsAnswer\0"
    "onContactsGetSuggestedAnswer\0"
    "onContactsDeleteContactAnswer\0"
    "onContactsDeleteContactsAnswer\0"
    "onContactsBlockAnswer\0onContactsUnblockAnswer\0"
    "onContactsGetBlockedAnswer\0"
    "onContactsExportCardAnswer\0"
    "onContactsImportCardAnswer\0"
    "onContactsSearchAnswer\0"
    "onContactsResolveUsernameAnswer\0"
    "onHelpGetConfigAnswer\0onHelpGetNearestDcAnswer\0"
    "onHelpGetAppUpdateAnswer\0"
    "onHelpSaveAppLogAnswer\0onHelpGetInviteTextAnswer\0"
    "onHelpGetSupportAnswer\0"
    "onHelpGetAppChangelogAnswer\0"
    "onMessagesGetMessagesAnswer\0"
    "onMessagesGetDialogsAnswer\0"
    "onMessagesGetHistoryAnswer\0"
    "onMessagesSearchAnswer\0"
    "onMessagesReadHistoryAnswer\0"
    "onMessagesDeleteHistoryAnswer\0"
    "onMessagesDeleteMessagesAnswer\0"
    "onMessagesReceivedMessagesAnswer\0"
    "onMessagesSetTypingAnswer\0"
    "onMessagesSendMessageAnswer\0"
    "onMessagesSendMediaAnswer\0"
    "onMessagesForwardMessagesAnswer\0"
    "onMessagesReportSpamAnswer\0"
    "onMessagesGetChatsAnswer\0"
    "onMessagesGetFullChatAnswer\0"
    "onMessagesEditChatTitleAnswer\0"
    "onMessagesEditChatPhotoAnswer\0"
    "onMessagesAddChatUserAnswer\0"
    "onMessagesDeleteChatUserAnswer\0"
    "onMessagesCreateChatAnswer\0"
    "onMessagesForwardMessageAnswer\0"
    "onMessagesSendBroadcastAnswer\0"
    "onMessagesGetDhConfigAnswer\0"
    "onMessagesRequestEncryptionAnswer\0"
    "onMessagesAcceptEncryptionAnswer\0"
    "onMessagesDiscardEncryptionAnswer\0"
    "onMessagesSetEncryptedTypingAnswer\0"
    "onMessagesReadEncryptedHistoryAnswer\0"
    "onMessagesSendEncryptedAnswer\0"
    "onMessagesSendEncryptedFileAnswer\0"
    "onMessagesSendEncryptedServiceAnswer\0"
    "onMessagesReceivedQueueAnswer\0"
    "onMessagesReadMessageContentsAnswer\0"
    "onMessagesGetStickersAnswer\0"
    "onMessagesGetAllStickersAnswer\0"
    "onMessagesGetWebPagePreviewAnswer\0"
    "onMessagesExportChatInviteAnswer\0"
    "onMessagesCheckChatInviteAnswer\0"
    "onMessagesImportChatInviteAnswer\0"
    "onMessagesGetStickerSetAnswer\0"
    "onMessagesInstallStickerSetAnswer\0"
    "onMessagesUninstallStickerSetAnswer\0"
    "onMessagesStartBotAnswer\0"
    "onMessagesGetMessagesViewsAnswer\0"
    "onMessagesToggleChatAdminsAnswer\0"
    "onMessagesEditChatAdminAnswer\0"
    "onMessagesDeactivateChatAnswer\0"
    "onMessagesMigrateChatAnswer\0"
    "onMessagesSearchGlobalAnswer\0"
    "onPhotosUpdateProfilePhotoAnswer\0"
    "onPhotosUploadProfilePhotoAnswer\0"
    "onPhotosDeletePhotosAnswer\0"
    "onPhotosGetUserPhotosAnswer\0"
    "onUpdatesGetStateAnswer\0"
    "onUpdatesGetDifferenceAnswer\0"
    "onUpdatesGetChannelDifferenceAnswer\0"
    "onUploadSaveFilePartAnswer\0"
    "onUploadGetFileAnswer\0"
    "onUploadSaveBigFilePartAnswer\0"
    "onUsersGetUsersAnswer\0onUsersGetFullUserAnswer\0"
    "onAccountRegisterDeviceError\0"
    "onAccountUnregisterDeviceError\0"
    "onAccountUpdateNotifySettingsError\0"
    "onAccountGetNotifySettingsError\0"
    "onAccountResetNotifySettingsError\0"
    "onAccountUpdateProfileError\0"
    "onAccountUpdateStatusError\0"
    "onAccountGetWallPapersError\0"
    "onAccountCheckUsernameError\0"
    "onAccountUpdateUsernameError\0"
    "onAccountGetPrivacyError\0"
    "onAccountSetPrivacyError\0"
    "onAccountDeleteAccountError\0"
    "onAccountGetAccountTTLError\0"
    "onAccountSetAccountTTLError\0"
    "onAccountSendChangePhoneCodeError\0"
    "onAccountChangePhoneError\0"
    "onAccountUpdateDeviceLockedError\0"
    "onAccountGetAuthorizationsError\0"
    "onAccountResetAuthorizationError\0"
    "onAccountGetPasswordError\0"
    "onAccountGetPasswordSettingsError\0"
    "onAccountUpdatePasswordSettingsError\0"
    "onAuthCheckPhoneError\0onAuthSendCodeError\0"
    "onAuthSendCallError\0onAuthSignUpError\0"
    "onAuthSignInError\0onAuthLogOutError\0"
    "onAuthResetAuthorizationsError\0"
    "onAuthSendInvitesError\0"
    "onAuthExportAuthorizationError\0"
    "onAuthImportAuthorizationError\0"
    "onAuthBindTempAuthKeyError\0"
    "onAuthSendSmsError\0onAuthImportBotAuthorizationError\0"
    "onAuthCheckPasswordError\0"
    "onAuthRequestPasswordRecoveryError\0"
    "onAuthRecoverPasswordError\0"
    "onChannelsGetDialogsError\0"
    "onChannelsGetImportantHistoryError\0"
    "onChannelsReadHistoryError\0"
    "onChannelsDeleteMessagesError\0"
    "onChannelsDeleteUserHistoryError\0"
    "onChannelsReportSpamError\0"
    "onChannelsGetMessagesError\0"
    "onChannelsGetParticipantsError\0"
    "onChannelsGetParticipantError\0"
    "onChannelsGetChannelsError\0"
    "onChannelsGetFullChannelError\0"
    "onChannelsCreateChannelError\0"
    "onChannelsEditAboutError\0"
    "onChannelsEditAdminError\0"
    "onChannelsEditTitleError\0"
    "onChannelsEditPhotoError\0"
    "onChannelsToggleCommentsError\0"
    "onChannelsCheckUsernameError\0"
    "onChannelsUpdateUsernameError\0"
    "onChannelsJoinChannelError\0"
    "onChannelsLeaveChannelError\0"
    "onChannelsInviteToChannelError\0"
    "onChannelsKickFromChannelError\0"
    "onChannelsExportInviteError\0"
    "onChannelsDeleteChannelError\0"
    "onContactsGetStatusesError\0"
    "onContactsGetContactsError\0"
    "onContactsImportContactsError\0"
    "onContactsGetSuggestedError\0"
    "onContactsDeleteContactError\0"
    "onContactsDeleteContactsError\0"
    "onContactsBlockError\0onContactsUnblockError\0"
    "onContactsGetBlockedError\0"
    "onContactsExportCardError\0"
    "onContactsImportCardError\0"
    "onContactsSearchError\0"
    "onContactsResolveUsernameError\0"
    "onHelpGetConfigError\0onHelpGetNearestDcError\0"
    "onHelpGetAppUpdateError\0onHelpSaveAppLogError\0"
    "onHelpGetInviteTextError\0onHelpGetSupportError\0"
    "onHelpGetAppChangelogError\0"
    "onMessagesGetMessagesError\0"
    "onMessagesGetDialogsError\0"
    "onMessagesGetHistoryError\0"
    "onMessagesSearchError\0onMessagesReadHistoryError\0"
    "onMessagesDeleteHistoryError\0"
    "onMessagesDeleteMessagesError\0"
    "onMessagesReceivedMessagesError\0"
    "onMessagesSetTypingError\0"
    "onMessagesSendMessageError\0"
    "onMessagesSendMediaError\0"
    "onMessagesForwardMessagesError\0"
    "onMessagesReportSpamError\0"
    "onMessagesGetChatsError\0"
    "onMessagesGetFullChatError\0"
    "onMessagesEditChatTitleError\0"
    "onMessagesEditChatPhotoError\0"
    "onMessagesAddChatUserError\0"
    "onMessagesDeleteChatUserError\0"
    "onMessagesCreateChatError\0"
    "onMessagesForwardMessageError\0"
    "onMessagesSendBroadcastError\0"
    "onMessagesGetDhConfigError\0"
    "onMessagesRequestEncryptionError\0"
    "onMessagesAcceptEncryptionError\0"
    "onMessagesDiscardEncryptionError\0"
    "onMessagesSetEncryptedTypingError\0"
    "onMessagesReadEncryptedHistoryError\0"
    "onMessagesSendEncryptedError\0"
    "onMessagesSendEncryptedFileError\0"
    "onMessagesSendEncryptedServiceError\0"
    "onMessagesReceivedQueueError\0"
    "onMessagesReadMessageContentsError\0"
    "onMessagesGetStickersError\0"
    "onMessagesGetAllStickersError\0"
    "onMessagesGetWebPagePreviewError\0"
    "onMessagesExportChatInviteError\0"
    "onMessagesCheckChatInviteError\0"
    "onMessagesImportChatInviteError\0"
    "onMessagesGetStickerSetError\0"
    "onMessagesInstallStickerSetError\0"
    "onMessagesUninstallStickerSetError\0"
    "onMessagesStartBotError\0"
    "onMessagesGetMessagesViewsError\0"
    "onMessagesToggleChatAdminsError\0"
    "onMessagesEditChatAdminError\0"
    "onMessagesDeactivateChatError\0"
    "onMessagesMigrateChatError\0"
    "onMessagesSearchGlobalError\0"
    "onPhotosUpdateProfilePhotoError\0"
    "onPhotosUploadProfilePhotoError\0"
    "onPhotosDeletePhotosError\0"
    "onPhotosGetUserPhotosError\0"
    "onUpdatesGetStateError\0"
    "onUpdatesGetDifferenceError\0"
    "onUpdatesGetChannelDifferenceError\0"
    "onUploadSaveFilePartError\0"
    "onUploadGetFileError\0onUploadSaveBigFilePartError\0"
    "onUsersGetUsersError\0onUsersGetFullUserError\0"
    "onError\0bool&\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelegramCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     582,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     291,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 2924,    2, 0x06 /* Public */,
       5,    2, 2929,    2, 0x06 /* Public */,
       6,    2, 2934,    2, 0x06 /* Public */,
       7,    2, 2939,    2, 0x06 /* Public */,
       9,    2, 2944,    2, 0x06 /* Public */,
      10,    2, 2949,    2, 0x06 /* Public */,
      12,    2, 2954,    2, 0x06 /* Public */,
      13,    2, 2959,    2, 0x06 /* Public */,
      15,    2, 2964,    2, 0x06 /* Public */,
      16,    2, 2969,    2, 0x06 /* Public */,
      17,    2, 2974,    2, 0x06 /* Public */,
      19,    2, 2979,    2, 0x06 /* Public */,
      20,    2, 2984,    2, 0x06 /* Public */,
      21,    2, 2989,    2, 0x06 /* Public */,
      23,    2, 2994,    2, 0x06 /* Public */,
      24,    2, 2999,    2, 0x06 /* Public */,
      26,    2, 3004,    2, 0x06 /* Public */,
      27,    2, 3009,    2, 0x06 /* Public */,
      28,    2, 3014,    2, 0x06 /* Public */,
      30,    2, 3019,    2, 0x06 /* Public */,
      31,    2, 3024,    2, 0x06 /* Public */,
      33,    2, 3029,    2, 0x06 /* Public */,
      35,    2, 3034,    2, 0x06 /* Public */,
      36,    2, 3039,    2, 0x06 /* Public */,
      38,    2, 3044,    2, 0x06 /* Public */,
      40,    2, 3049,    2, 0x06 /* Public */,
      41,    2, 3054,    2, 0x06 /* Public */,
      43,    2, 3059,    2, 0x06 /* Public */,
      44,    2, 3064,    2, 0x06 /* Public */,
      45,    2, 3069,    2, 0x06 /* Public */,
      46,    2, 3074,    2, 0x06 /* Public */,
      47,    2, 3079,    2, 0x06 /* Public */,
      49,    2, 3084,    2, 0x06 /* Public */,
      50,    2, 3089,    2, 0x06 /* Public */,
      51,    2, 3094,    2, 0x06 /* Public */,
      52,    2, 3099,    2, 0x06 /* Public */,
      53,    2, 3104,    2, 0x06 /* Public */,
      54,    2, 3109,    2, 0x06 /* Public */,
      56,    2, 3114,    2, 0x06 /* Public */,
      57,    2, 3119,    2, 0x06 /* Public */,
      59,    2, 3124,    2, 0x06 /* Public */,
      61,    2, 3129,    2, 0x06 /* Public */,
      62,    2, 3134,    2, 0x06 /* Public */,
      64,    2, 3139,    2, 0x06 /* Public */,
      66,    2, 3144,    2, 0x06 /* Public */,
      67,    2, 3149,    2, 0x06 /* Public */,
      68,    2, 3154,    2, 0x06 /* Public */,
      70,    2, 3159,    2, 0x06 /* Public */,
      72,    2, 3164,    2, 0x06 /* Public */,
      74,    2, 3169,    2, 0x06 /* Public */,
      76,    2, 3174,    2, 0x06 /* Public */,
      78,    2, 3179,    2, 0x06 /* Public */,
      79,    2, 3184,    2, 0x06 /* Public */,
      80,    2, 3189,    2, 0x06 /* Public */,
      81,    2, 3194,    2, 0x06 /* Public */,
      82,    2, 3199,    2, 0x06 /* Public */,
      83,    2, 3204,    2, 0x06 /* Public */,
      84,    2, 3209,    2, 0x06 /* Public */,
      85,    2, 3214,    2, 0x06 /* Public */,
      86,    2, 3219,    2, 0x06 /* Public */,
      87,    2, 3224,    2, 0x06 /* Public */,
      88,    2, 3229,    2, 0x06 /* Public */,
      89,    2, 3234,    2, 0x06 /* Public */,
      91,    2, 3239,    2, 0x06 /* Public */,
      92,    2, 3244,    2, 0x06 /* Public */,
      94,    2, 3249,    2, 0x06 /* Public */,
      96,    2, 3254,    2, 0x06 /* Public */,
      98,    2, 3259,    2, 0x06 /* Public */,
     100,    2, 3264,    2, 0x06 /* Public */,
     102,    2, 3269,    2, 0x06 /* Public */,
     103,    2, 3274,    2, 0x06 /* Public */,
     104,    2, 3279,    2, 0x06 /* Public */,
     105,    2, 3284,    2, 0x06 /* Public */,
     107,    2, 3289,    2, 0x06 /* Public */,
     109,    2, 3294,    2, 0x06 /* Public */,
     110,    2, 3299,    2, 0x06 /* Public */,
     112,    2, 3304,    2, 0x06 /* Public */,
     114,    2, 3309,    2, 0x06 /* Public */,
     116,    2, 3314,    2, 0x06 /* Public */,
     118,    2, 3319,    2, 0x06 /* Public */,
     120,    2, 3324,    2, 0x06 /* Public */,
     121,    2, 3329,    2, 0x06 /* Public */,
     123,    2, 3334,    2, 0x06 /* Public */,
     125,    2, 3339,    2, 0x06 /* Public */,
     127,    2, 3344,    2, 0x06 /* Public */,
     128,    2, 3349,    2, 0x06 /* Public */,
     129,    2, 3354,    2, 0x06 /* Public */,
     130,    2, 3359,    2, 0x06 /* Public */,
     131,    2, 3364,    2, 0x06 /* Public */,
     132,    2, 3369,    2, 0x06 /* Public */,
     133,    2, 3374,    2, 0x06 /* Public */,
     134,    2, 3379,    2, 0x06 /* Public */,
     136,    2, 3384,    2, 0x06 /* Public */,
     137,    2, 3389,    2, 0x06 /* Public */,
     138,    2, 3394,    2, 0x06 /* Public */,
     139,    2, 3399,    2, 0x06 /* Public */,
     140,    2, 3404,    2, 0x06 /* Public */,
     141,    2, 3409,    2, 0x06 /* Public */,
     142,    2, 3414,    2, 0x06 /* Public */,
     143,    2, 3419,    2, 0x06 /* Public */,
     144,    2, 3424,    2, 0x06 /* Public */,
     145,    2, 3429,    2, 0x06 /* Public */,
     146,    2, 3434,    2, 0x06 /* Public */,
     147,    2, 3439,    2, 0x06 /* Public */,
     148,    2, 3444,    2, 0x06 /* Public */,
     149,    2, 3449,    2, 0x06 /* Public */,
     150,    2, 3454,    2, 0x06 /* Public */,
     152,    2, 3459,    2, 0x06 /* Public */,
     154,    2, 3464,    2, 0x06 /* Public */,
     155,    2, 3469,    2, 0x06 /* Public */,
     156,    2, 3474,    2, 0x06 /* Public */,
     157,    2, 3479,    2, 0x06 /* Public */,
     158,    2, 3484,    2, 0x06 /* Public */,
     160,    2, 3489,    2, 0x06 /* Public */,
     161,    2, 3494,    2, 0x06 /* Public */,
     162,    2, 3499,    2, 0x06 /* Public */,
     164,    2, 3504,    2, 0x06 /* Public */,
     165,    2, 3509,    2, 0x06 /* Public */,
     167,    2, 3514,    2, 0x06 /* Public */,
     169,    2, 3519,    2, 0x06 /* Public */,
     171,    2, 3524,    2, 0x06 /* Public */,
     172,    2, 3529,    2, 0x06 /* Public */,
     174,    2, 3534,    2, 0x06 /* Public */,
     175,    2, 3539,    2, 0x06 /* Public */,
     177,    2, 3544,    2, 0x06 /* Public */,
     178,    2, 3549,    2, 0x06 /* Public */,
     179,    2, 3554,    2, 0x06 /* Public */,
     180,    2, 3559,    2, 0x06 /* Public */,
     181,    2, 3564,    2, 0x06 /* Public */,
     182,    2, 3569,    2, 0x06 /* Public */,
     183,    2, 3574,    2, 0x06 /* Public */,
     184,    2, 3579,    2, 0x06 /* Public */,
     185,    2, 3584,    2, 0x06 /* Public */,
     186,    2, 3589,    2, 0x06 /* Public */,
     188,    2, 3594,    2, 0x06 /* Public */,
     190,    2, 3599,    2, 0x06 /* Public */,
     191,    2, 3604,    2, 0x06 /* Public */,
     193,    2, 3609,    2, 0x06 /* Public */,
     195,    2, 3614,    2, 0x06 /* Public */,
     197,    2, 3619,    2, 0x06 /* Public */,
     199,    2, 3624,    2, 0x06 /* Public */,
     200,    2, 3629,    2, 0x06 /* Public */,
     202,    2, 3634,    2, 0x06 /* Public */,
     203,    2, 3639,    2, 0x06 /* Public */,
     205,    2, 3644,    2, 0x06 /* Public */,
     207,    3, 3649,    2, 0x06 /* Public */,
     210,    3, 3656,    2, 0x06 /* Public */,
     211,    3, 3663,    2, 0x06 /* Public */,
     212,    3, 3670,    2, 0x06 /* Public */,
     213,    3, 3677,    2, 0x06 /* Public */,
     214,    3, 3684,    2, 0x06 /* Public */,
     215,    3, 3691,    2, 0x06 /* Public */,
     216,    3, 3698,    2, 0x06 /* Public */,
     217,    3, 3705,    2, 0x06 /* Public */,
     218,    3, 3712,    2, 0x06 /* Public */,
     219,    3, 3719,    2, 0x06 /* Public */,
     220,    3, 3726,    2, 0x06 /* Public */,
     221,    3, 3733,    2, 0x06 /* Public */,
     222,    3, 3740,    2, 0x06 /* Public */,
     223,    3, 3747,    2, 0x06 /* Public */,
     224,    3, 3754,    2, 0x06 /* Public */,
     225,    3, 3761,    2, 0x06 /* Public */,
     226,    3, 3768,    2, 0x06 /* Public */,
     227,    3, 3775,    2, 0x06 /* Public */,
     228,    3, 3782,    2, 0x06 /* Public */,
     229,    3, 3789,    2, 0x06 /* Public */,
     230,    3, 3796,    2, 0x06 /* Public */,
     231,    3, 3803,    2, 0x06 /* Public */,
     232,    3, 3810,    2, 0x06 /* Public */,
     233,    3, 3817,    2, 0x06 /* Public */,
     234,    3, 3824,    2, 0x06 /* Public */,
     235,    3, 3831,    2, 0x06 /* Public */,
     236,    3, 3838,    2, 0x06 /* Public */,
     237,    3, 3845,    2, 0x06 /* Public */,
     238,    3, 3852,    2, 0x06 /* Public */,
     239,    3, 3859,    2, 0x06 /* Public */,
     240,    3, 3866,    2, 0x06 /* Public */,
     241,    3, 3873,    2, 0x06 /* Public */,
     242,    3, 3880,    2, 0x06 /* Public */,
     243,    3, 3887,    2, 0x06 /* Public */,
     244,    3, 3894,    2, 0x06 /* Public */,
     245,    3, 3901,    2, 0x06 /* Public */,
     246,    3, 3908,    2, 0x06 /* Public */,
     247,    3, 3915,    2, 0x06 /* Public */,
     248,    3, 3922,    2, 0x06 /* Public */,
     249,    3, 3929,    2, 0x06 /* Public */,
     250,    3, 3936,    2, 0x06 /* Public */,
     251,    3, 3943,    2, 0x06 /* Public */,
     252,    3, 3950,    2, 0x06 /* Public */,
     253,    3, 3957,    2, 0x06 /* Public */,
     254,    3, 3964,    2, 0x06 /* Public */,
     255,    3, 3971,    2, 0x06 /* Public */,
     256,    3, 3978,    2, 0x06 /* Public */,
     257,    3, 3985,    2, 0x06 /* Public */,
     258,    3, 3992,    2, 0x06 /* Public */,
     259,    3, 3999,    2, 0x06 /* Public */,
     260,    3, 4006,    2, 0x06 /* Public */,
     261,    3, 4013,    2, 0x06 /* Public */,
     262,    3, 4020,    2, 0x06 /* Public */,
     263,    3, 4027,    2, 0x06 /* Public */,
     264,    3, 4034,    2, 0x06 /* Public */,
     265,    3, 4041,    2, 0x06 /* Public */,
     266,    3, 4048,    2, 0x06 /* Public */,
     267,    3, 4055,    2, 0x06 /* Public */,
     268,    3, 4062,    2, 0x06 /* Public */,
     269,    3, 4069,    2, 0x06 /* Public */,
     270,    3, 4076,    2, 0x06 /* Public */,
     271,    3, 4083,    2, 0x06 /* Public */,
     272,    3, 4090,    2, 0x06 /* Public */,
     273,    3, 4097,    2, 0x06 /* Public */,
     274,    3, 4104,    2, 0x06 /* Public */,
     275,    3, 4111,    2, 0x06 /* Public */,
     276,    3, 4118,    2, 0x06 /* Public */,
     277,    3, 4125,    2, 0x06 /* Public */,
     278,    3, 4132,    2, 0x06 /* Public */,
     279,    3, 4139,    2, 0x06 /* Public */,
     280,    3, 4146,    2, 0x06 /* Public */,
     281,    3, 4153,    2, 0x06 /* Public */,
     282,    3, 4160,    2, 0x06 /* Public */,
     283,    3, 4167,    2, 0x06 /* Public */,
     284,    3, 4174,    2, 0x06 /* Public */,
     285,    3, 4181,    2, 0x06 /* Public */,
     286,    3, 4188,    2, 0x06 /* Public */,
     287,    3, 4195,    2, 0x06 /* Public */,
     288,    3, 4202,    2, 0x06 /* Public */,
     289,    3, 4209,    2, 0x06 /* Public */,
     290,    3, 4216,    2, 0x06 /* Public */,
     291,    3, 4223,    2, 0x06 /* Public */,
     292,    3, 4230,    2, 0x06 /* Public */,
     293,    3, 4237,    2, 0x06 /* Public */,
     294,    3, 4244,    2, 0x06 /* Public */,
     295,    3, 4251,    2, 0x06 /* Public */,
     296,    3, 4258,    2, 0x06 /* Public */,
     297,    3, 4265,    2, 0x06 /* Public */,
     298,    3, 4272,    2, 0x06 /* Public */,
     299,    3, 4279,    2, 0x06 /* Public */,
     300,    3, 4286,    2, 0x06 /* Public */,
     301,    3, 4293,    2, 0x06 /* Public */,
     302,    3, 4300,    2, 0x06 /* Public */,
     303,    3, 4307,    2, 0x06 /* Public */,
     304,    3, 4314,    2, 0x06 /* Public */,
     305,    3, 4321,    2, 0x06 /* Public */,
     306,    3, 4328,    2, 0x06 /* Public */,
     307,    3, 4335,    2, 0x06 /* Public */,
     308,    3, 4342,    2, 0x06 /* Public */,
     309,    3, 4349,    2, 0x06 /* Public */,
     310,    3, 4356,    2, 0x06 /* Public */,
     311,    3, 4363,    2, 0x06 /* Public */,
     312,    3, 4370,    2, 0x06 /* Public */,
     313,    3, 4377,    2, 0x06 /* Public */,
     314,    3, 4384,    2, 0x06 /* Public */,
     315,    3, 4391,    2, 0x06 /* Public */,
     316,    3, 4398,    2, 0x06 /* Public */,
     317,    3, 4405,    2, 0x06 /* Public */,
     318,    3, 4412,    2, 0x06 /* Public */,
     319,    3, 4419,    2, 0x06 /* Public */,
     320,    3, 4426,    2, 0x06 /* Public */,
     321,    3, 4433,    2, 0x06 /* Public */,
     322,    3, 4440,    2, 0x06 /* Public */,
     323,    3, 4447,    2, 0x06 /* Public */,
     324,    3, 4454,    2, 0x06 /* Public */,
     325,    3, 4461,    2, 0x06 /* Public */,
     326,    3, 4468,    2, 0x06 /* Public */,
     327,    3, 4475,    2, 0x06 /* Public */,
     328,    3, 4482,    2, 0x06 /* Public */,
     329,    3, 4489,    2, 0x06 /* Public */,
     330,    3, 4496,    2, 0x06 /* Public */,
     331,    3, 4503,    2, 0x06 /* Public */,
     332,    3, 4510,    2, 0x06 /* Public */,
     333,    3, 4517,    2, 0x06 /* Public */,
     334,    3, 4524,    2, 0x06 /* Public */,
     335,    3, 4531,    2, 0x06 /* Public */,
     336,    3, 4538,    2, 0x06 /* Public */,
     337,    3, 4545,    2, 0x06 /* Public */,
     338,    3, 4552,    2, 0x06 /* Public */,
     339,    3, 4559,    2, 0x06 /* Public */,
     340,    3, 4566,    2, 0x06 /* Public */,
     341,    3, 4573,    2, 0x06 /* Public */,
     342,    3, 4580,    2, 0x06 /* Public */,
     343,    3, 4587,    2, 0x06 /* Public */,
     344,    3, 4594,    2, 0x06 /* Public */,
     345,    3, 4601,    2, 0x06 /* Public */,
     346,    3, 4608,    2, 0x06 /* Public */,
     347,    3, 4615,    2, 0x06 /* Public */,
     348,    3, 4622,    2, 0x06 /* Public */,
     349,    3, 4629,    2, 0x06 /* Public */,
     350,    3, 4636,    2, 0x06 /* Public */,
     351,    3, 4643,    2, 0x06 /* Public */,
     352,    3, 4650,    2, 0x06 /* Public */,
     353,    3, 4657,    2, 0x06 /* Public */,
     354,    4, 4664,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     357,    3, 4673,    2, 0x09 /* Protected */,
     359,    3, 4680,    2, 0x09 /* Protected */,
     360,    3, 4687,    2, 0x09 /* Protected */,
     361,    3, 4694,    2, 0x09 /* Protected */,
     362,    3, 4701,    2, 0x09 /* Protected */,
     363,    3, 4708,    2, 0x09 /* Protected */,
     364,    3, 4715,    2, 0x09 /* Protected */,
     365,    3, 4722,    2, 0x09 /* Protected */,
     366,    3, 4729,    2, 0x09 /* Protected */,
     367,    3, 4736,    2, 0x09 /* Protected */,
     368,    3, 4743,    2, 0x09 /* Protected */,
     369,    3, 4750,    2, 0x09 /* Protected */,
     370,    3, 4757,    2, 0x09 /* Protected */,
     371,    3, 4764,    2, 0x09 /* Protected */,
     372,    3, 4771,    2, 0x09 /* Protected */,
     373,    3, 4778,    2, 0x09 /* Protected */,
     374,    3, 4785,    2, 0x09 /* Protected */,
     375,    3, 4792,    2, 0x09 /* Protected */,
     376,    3, 4799,    2, 0x09 /* Protected */,
     377,    3, 4806,    2, 0x09 /* Protected */,
     378,    3, 4813,    2, 0x09 /* Protected */,
     379,    3, 4820,    2, 0x09 /* Protected */,
     380,    3, 4827,    2, 0x09 /* Protected */,
     381,    3, 4834,    2, 0x09 /* Protected */,
     382,    3, 4841,    2, 0x09 /* Protected */,
     383,    3, 4848,    2, 0x09 /* Protected */,
     384,    3, 4855,    2, 0x09 /* Protected */,
     385,    3, 4862,    2, 0x09 /* Protected */,
     386,    3, 4869,    2, 0x09 /* Protected */,
     387,    3, 4876,    2, 0x09 /* Protected */,
     388,    3, 4883,    2, 0x09 /* Protected */,
     389,    3, 4890,    2, 0x09 /* Protected */,
     390,    3, 4897,    2, 0x09 /* Protected */,
     391,    3, 4904,    2, 0x09 /* Protected */,
     392,    3, 4911,    2, 0x09 /* Protected */,
     393,    3, 4918,    2, 0x09 /* Protected */,
     394,    3, 4925,    2, 0x09 /* Protected */,
     395,    3, 4932,    2, 0x09 /* Protected */,
     396,    3, 4939,    2, 0x09 /* Protected */,
     397,    3, 4946,    2, 0x09 /* Protected */,
     398,    3, 4953,    2, 0x09 /* Protected */,
     399,    3, 4960,    2, 0x09 /* Protected */,
     400,    3, 4967,    2, 0x09 /* Protected */,
     401,    3, 4974,    2, 0x09 /* Protected */,
     402,    3, 4981,    2, 0x09 /* Protected */,
     403,    3, 4988,    2, 0x09 /* Protected */,
     404,    3, 4995,    2, 0x09 /* Protected */,
     405,    3, 5002,    2, 0x09 /* Protected */,
     406,    3, 5009,    2, 0x09 /* Protected */,
     407,    3, 5016,    2, 0x09 /* Protected */,
     408,    3, 5023,    2, 0x09 /* Protected */,
     409,    3, 5030,    2, 0x09 /* Protected */,
     410,    3, 5037,    2, 0x09 /* Protected */,
     411,    3, 5044,    2, 0x09 /* Protected */,
     412,    3, 5051,    2, 0x09 /* Protected */,
     413,    3, 5058,    2, 0x09 /* Protected */,
     414,    3, 5065,    2, 0x09 /* Protected */,
     415,    3, 5072,    2, 0x09 /* Protected */,
     416,    3, 5079,    2, 0x09 /* Protected */,
     417,    3, 5086,    2, 0x09 /* Protected */,
     418,    3, 5093,    2, 0x09 /* Protected */,
     419,    3, 5100,    2, 0x09 /* Protected */,
     420,    3, 5107,    2, 0x09 /* Protected */,
     421,    3, 5114,    2, 0x09 /* Protected */,
     422,    3, 5121,    2, 0x09 /* Protected */,
     423,    3, 5128,    2, 0x09 /* Protected */,
     424,    3, 5135,    2, 0x09 /* Protected */,
     425,    3, 5142,    2, 0x09 /* Protected */,
     426,    3, 5149,    2, 0x09 /* Protected */,
     427,    3, 5156,    2, 0x09 /* Protected */,
     428,    3, 5163,    2, 0x09 /* Protected */,
     429,    3, 5170,    2, 0x09 /* Protected */,
     430,    3, 5177,    2, 0x09 /* Protected */,
     431,    3, 5184,    2, 0x09 /* Protected */,
     432,    3, 5191,    2, 0x09 /* Protected */,
     433,    3, 5198,    2, 0x09 /* Protected */,
     434,    3, 5205,    2, 0x09 /* Protected */,
     435,    3, 5212,    2, 0x09 /* Protected */,
     436,    3, 5219,    2, 0x09 /* Protected */,
     437,    3, 5226,    2, 0x09 /* Protected */,
     438,    3, 5233,    2, 0x09 /* Protected */,
     439,    3, 5240,    2, 0x09 /* Protected */,
     440,    3, 5247,    2, 0x09 /* Protected */,
     441,    3, 5254,    2, 0x09 /* Protected */,
     442,    3, 5261,    2, 0x09 /* Protected */,
     443,    3, 5268,    2, 0x09 /* Protected */,
     444,    3, 5275,    2, 0x09 /* Protected */,
     445,    3, 5282,    2, 0x09 /* Protected */,
     446,    3, 5289,    2, 0x09 /* Protected */,
     447,    3, 5296,    2, 0x09 /* Protected */,
     448,    3, 5303,    2, 0x09 /* Protected */,
     449,    3, 5310,    2, 0x09 /* Protected */,
     450,    3, 5317,    2, 0x09 /* Protected */,
     451,    3, 5324,    2, 0x09 /* Protected */,
     452,    3, 5331,    2, 0x09 /* Protected */,
     453,    3, 5338,    2, 0x09 /* Protected */,
     454,    3, 5345,    2, 0x09 /* Protected */,
     455,    3, 5352,    2, 0x09 /* Protected */,
     456,    3, 5359,    2, 0x09 /* Protected */,
     457,    3, 5366,    2, 0x09 /* Protected */,
     458,    3, 5373,    2, 0x09 /* Protected */,
     459,    3, 5380,    2, 0x09 /* Protected */,
     460,    3, 5387,    2, 0x09 /* Protected */,
     461,    3, 5394,    2, 0x09 /* Protected */,
     462,    3, 5401,    2, 0x09 /* Protected */,
     463,    3, 5408,    2, 0x09 /* Protected */,
     464,    3, 5415,    2, 0x09 /* Protected */,
     465,    3, 5422,    2, 0x09 /* Protected */,
     466,    3, 5429,    2, 0x09 /* Protected */,
     467,    3, 5436,    2, 0x09 /* Protected */,
     468,    3, 5443,    2, 0x09 /* Protected */,
     469,    3, 5450,    2, 0x09 /* Protected */,
     470,    3, 5457,    2, 0x09 /* Protected */,
     471,    3, 5464,    2, 0x09 /* Protected */,
     472,    3, 5471,    2, 0x09 /* Protected */,
     473,    3, 5478,    2, 0x09 /* Protected */,
     474,    3, 5485,    2, 0x09 /* Protected */,
     475,    3, 5492,    2, 0x09 /* Protected */,
     476,    3, 5499,    2, 0x09 /* Protected */,
     477,    3, 5506,    2, 0x09 /* Protected */,
     478,    3, 5513,    2, 0x09 /* Protected */,
     479,    3, 5520,    2, 0x09 /* Protected */,
     480,    3, 5527,    2, 0x09 /* Protected */,
     481,    3, 5534,    2, 0x09 /* Protected */,
     482,    3, 5541,    2, 0x09 /* Protected */,
     483,    3, 5548,    2, 0x09 /* Protected */,
     484,    3, 5555,    2, 0x09 /* Protected */,
     485,    3, 5562,    2, 0x09 /* Protected */,
     486,    3, 5569,    2, 0x09 /* Protected */,
     487,    3, 5576,    2, 0x09 /* Protected */,
     488,    3, 5583,    2, 0x09 /* Protected */,
     489,    3, 5590,    2, 0x09 /* Protected */,
     490,    3, 5597,    2, 0x09 /* Protected */,
     491,    3, 5604,    2, 0x09 /* Protected */,
     492,    3, 5611,    2, 0x09 /* Protected */,
     493,    3, 5618,    2, 0x09 /* Protected */,
     494,    3, 5625,    2, 0x09 /* Protected */,
     495,    3, 5632,    2, 0x09 /* Protected */,
     496,    3, 5639,    2, 0x09 /* Protected */,
     497,    3, 5646,    2, 0x09 /* Protected */,
     498,    3, 5653,    2, 0x09 /* Protected */,
     499,    3, 5660,    2, 0x09 /* Protected */,
     500,    3, 5667,    2, 0x09 /* Protected */,
     501,    3, 5674,    2, 0x09 /* Protected */,
     502,    3, 5681,    2, 0x09 /* Protected */,
     503,    4, 5688,    2, 0x09 /* Protected */,
     504,    4, 5697,    2, 0x09 /* Protected */,
     505,    4, 5706,    2, 0x09 /* Protected */,
     506,    4, 5715,    2, 0x09 /* Protected */,
     507,    4, 5724,    2, 0x09 /* Protected */,
     508,    4, 5733,    2, 0x09 /* Protected */,
     509,    4, 5742,    2, 0x09 /* Protected */,
     510,    4, 5751,    2, 0x09 /* Protected */,
     511,    4, 5760,    2, 0x09 /* Protected */,
     512,    4, 5769,    2, 0x09 /* Protected */,
     513,    4, 5778,    2, 0x09 /* Protected */,
     514,    4, 5787,    2, 0x09 /* Protected */,
     515,    4, 5796,    2, 0x09 /* Protected */,
     516,    4, 5805,    2, 0x09 /* Protected */,
     517,    4, 5814,    2, 0x09 /* Protected */,
     518,    4, 5823,    2, 0x09 /* Protected */,
     519,    4, 5832,    2, 0x09 /* Protected */,
     520,    4, 5841,    2, 0x09 /* Protected */,
     521,    4, 5850,    2, 0x09 /* Protected */,
     522,    4, 5859,    2, 0x09 /* Protected */,
     523,    4, 5868,    2, 0x09 /* Protected */,
     524,    4, 5877,    2, 0x09 /* Protected */,
     525,    4, 5886,    2, 0x09 /* Protected */,
     526,    4, 5895,    2, 0x09 /* Protected */,
     527,    4, 5904,    2, 0x09 /* Protected */,
     528,    4, 5913,    2, 0x09 /* Protected */,
     529,    4, 5922,    2, 0x09 /* Protected */,
     530,    4, 5931,    2, 0x09 /* Protected */,
     531,    4, 5940,    2, 0x09 /* Protected */,
     532,    4, 5949,    2, 0x09 /* Protected */,
     533,    4, 5958,    2, 0x09 /* Protected */,
     534,    4, 5967,    2, 0x09 /* Protected */,
     535,    4, 5976,    2, 0x09 /* Protected */,
     536,    4, 5985,    2, 0x09 /* Protected */,
     537,    4, 5994,    2, 0x09 /* Protected */,
     538,    4, 6003,    2, 0x09 /* Protected */,
     539,    4, 6012,    2, 0x09 /* Protected */,
     540,    4, 6021,    2, 0x09 /* Protected */,
     541,    4, 6030,    2, 0x09 /* Protected */,
     542,    4, 6039,    2, 0x09 /* Protected */,
     543,    4, 6048,    2, 0x09 /* Protected */,
     544,    4, 6057,    2, 0x09 /* Protected */,
     545,    4, 6066,    2, 0x09 /* Protected */,
     546,    4, 6075,    2, 0x09 /* Protected */,
     547,    4, 6084,    2, 0x09 /* Protected */,
     548,    4, 6093,    2, 0x09 /* Protected */,
     549,    4, 6102,    2, 0x09 /* Protected */,
     550,    4, 6111,    2, 0x09 /* Protected */,
     551,    4, 6120,    2, 0x09 /* Protected */,
     552,    4, 6129,    2, 0x09 /* Protected */,
     553,    4, 6138,    2, 0x09 /* Protected */,
     554,    4, 6147,    2, 0x09 /* Protected */,
     555,    4, 6156,    2, 0x09 /* Protected */,
     556,    4, 6165,    2, 0x09 /* Protected */,
     557,    4, 6174,    2, 0x09 /* Protected */,
     558,    4, 6183,    2, 0x09 /* Protected */,
     559,    4, 6192,    2, 0x09 /* Protected */,
     560,    4, 6201,    2, 0x09 /* Protected */,
     561,    4, 6210,    2, 0x09 /* Protected */,
     562,    4, 6219,    2, 0x09 /* Protected */,
     563,    4, 6228,    2, 0x09 /* Protected */,
     564,    4, 6237,    2, 0x09 /* Protected */,
     565,    4, 6246,    2, 0x09 /* Protected */,
     566,    4, 6255,    2, 0x09 /* Protected */,
     567,    4, 6264,    2, 0x09 /* Protected */,
     568,    4, 6273,    2, 0x09 /* Protected */,
     569,    4, 6282,    2, 0x09 /* Protected */,
     570,    4, 6291,    2, 0x09 /* Protected */,
     571,    4, 6300,    2, 0x09 /* Protected */,
     572,    4, 6309,    2, 0x09 /* Protected */,
     573,    4, 6318,    2, 0x09 /* Protected */,
     574,    4, 6327,    2, 0x09 /* Protected */,
     575,    4, 6336,    2, 0x09 /* Protected */,
     576,    4, 6345,    2, 0x09 /* Protected */,
     577,    4, 6354,    2, 0x09 /* Protected */,
     578,    4, 6363,    2, 0x09 /* Protected */,
     579,    4, 6372,    2, 0x09 /* Protected */,
     580,    4, 6381,    2, 0x09 /* Protected */,
     581,    4, 6390,    2, 0x09 /* Protected */,
     582,    4, 6399,    2, 0x09 /* Protected */,
     583,    4, 6408,    2, 0x09 /* Protected */,
     584,    4, 6417,    2, 0x09 /* Protected */,
     585,    4, 6426,    2, 0x09 /* Protected */,
     586,    4, 6435,    2, 0x09 /* Protected */,
     587,    4, 6444,    2, 0x09 /* Protected */,
     588,    4, 6453,    2, 0x09 /* Protected */,
     589,    4, 6462,    2, 0x09 /* Protected */,
     590,    4, 6471,    2, 0x09 /* Protected */,
     591,    4, 6480,    2, 0x09 /* Protected */,
     592,    4, 6489,    2, 0x09 /* Protected */,
     593,    4, 6498,    2, 0x09 /* Protected */,
     594,    4, 6507,    2, 0x09 /* Protected */,
     595,    4, 6516,    2, 0x09 /* Protected */,
     596,    4, 6525,    2, 0x09 /* Protected */,
     597,    4, 6534,    2, 0x09 /* Protected */,
     598,    4, 6543,    2, 0x09 /* Protected */,
     599,    4, 6552,    2, 0x09 /* Protected */,
     600,    4, 6561,    2, 0x09 /* Protected */,
     601,    4, 6570,    2, 0x09 /* Protected */,
     602,    4, 6579,    2, 0x09 /* Protected */,
     603,    4, 6588,    2, 0x09 /* Protected */,
     604,    4, 6597,    2, 0x09 /* Protected */,
     605,    4, 6606,    2, 0x09 /* Protected */,
     606,    4, 6615,    2, 0x09 /* Protected */,
     607,    4, 6624,    2, 0x09 /* Protected */,
     608,    4, 6633,    2, 0x09 /* Protected */,
     609,    4, 6642,    2, 0x09 /* Protected */,
     610,    4, 6651,    2, 0x09 /* Protected */,
     611,    4, 6660,    2, 0x09 /* Protected */,
     612,    4, 6669,    2, 0x09 /* Protected */,
     613,    4, 6678,    2, 0x09 /* Protected */,
     614,    4, 6687,    2, 0x09 /* Protected */,
     615,    4, 6696,    2, 0x09 /* Protected */,
     616,    4, 6705,    2, 0x09 /* Protected */,
     617,    4, 6714,    2, 0x09 /* Protected */,
     618,    4, 6723,    2, 0x09 /* Protected */,
     619,    4, 6732,    2, 0x09 /* Protected */,
     620,    4, 6741,    2, 0x09 /* Protected */,
     621,    4, 6750,    2, 0x09 /* Protected */,
     622,    4, 6759,    2, 0x09 /* Protected */,
     623,    4, 6768,    2, 0x09 /* Protected */,
     624,    4, 6777,    2, 0x09 /* Protected */,
     625,    4, 6786,    2, 0x09 /* Protected */,
     626,    4, 6795,    2, 0x09 /* Protected */,
     627,    4, 6804,    2, 0x09 /* Protected */,
     628,    4, 6813,    2, 0x09 /* Protected */,
     629,    4, 6822,    2, 0x09 /* Protected */,
     630,    4, 6831,    2, 0x09 /* Protected */,
     631,    4, 6840,    2, 0x09 /* Protected */,
     632,    4, 6849,    2, 0x09 /* Protected */,
     633,    4, 6858,    2, 0x09 /* Protected */,
     634,    4, 6867,    2, 0x09 /* Protected */,
     635,    4, 6876,    2, 0x09 /* Protected */,
     636,    4, 6885,    2, 0x09 /* Protected */,
     637,    4, 6894,    2, 0x09 /* Protected */,
     638,    4, 6903,    2, 0x09 /* Protected */,
     639,    4, 6912,    2, 0x09 /* Protected */,
     640,    4, 6921,    2, 0x09 /* Protected */,
     641,    4, 6930,    2, 0x09 /* Protected */,
     642,    4, 6939,    2, 0x09 /* Protected */,
     643,    4, 6948,    2, 0x09 /* Protected */,
     644,    4, 6957,    2, 0x09 /* Protected */,
     645,    4, 6966,    2, 0x09 /* Protected */,
     646,    4, 6975,    2, 0x09 /* Protected */,
     647,    4, 6984,    2, 0x09 /* Protected */,
     648,    6, 6993,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 8,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 18,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 18,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 22,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 25,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 29,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 32,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 34,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 37,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 39,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 48,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 55,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 58,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 65,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 69,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 71,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 73,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 75,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 90,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 93,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 95,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 97,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 99,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 101,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 106,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 108,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 111,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 113,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 115,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 117,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 119,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 122,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 124,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 126,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 58,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 65,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 135,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 73,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 75,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 151,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 163,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 166,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 168,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 170,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 90,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 173,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 176,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 108,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 187,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 189,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 163,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 192,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 194,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 196,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 198,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 201,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 204,    3,    4,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 206,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,    3,  208,  209,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString,  355,  208,  209,  356,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 8, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 18, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 18, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 22, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 25, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 29, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 32, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 34, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 37, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 39, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 48, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 55, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 42, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 58, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 65, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 69, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 71, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 73, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 75, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 90, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 93, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 95, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 97, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 99, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 101, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 106, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 108, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 11, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 111, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 113, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 115, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 117, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 119, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 122, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 124, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 126, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 58, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 65, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 135, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 73, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 75, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 151, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 153, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 159, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 163, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 63, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 166, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 168, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 170, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 90, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 173, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 176, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 108, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 77, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 60, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 187, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 189, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 163, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 192, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 194, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 196, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 198, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 201, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 204, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 206, QMetaType::QVariant,    3,    4,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,  208,  209,  358,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, 0x80000000 | 649,  355,  208,  209,  356,  358,  650,

       0        // eod
};

void TelegramCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelegramCore *_t = static_cast<TelegramCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountRegisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->accountUnregisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->accountUpdateNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->accountGetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PeerNotifySettings(*)>(_a[2]))); break;
        case 4: _t->accountResetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->accountUpdateProfileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 6: _t->accountUpdateStatusAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->accountGetWallPapersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<WallPaper>(*)>(_a[2]))); break;
        case 8: _t->accountCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->accountUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 10: _t->accountGetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2]))); break;
        case 11: _t->accountSetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2]))); break;
        case 12: _t->accountDeleteAccountAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->accountGetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountDaysTTL(*)>(_a[2]))); break;
        case 14: _t->accountSetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->accountSendChangePhoneCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountSentChangePhoneCode(*)>(_a[2]))); break;
        case 16: _t->accountChangePhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 17: _t->accountUpdateDeviceLockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->accountGetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountAuthorizations(*)>(_a[2]))); break;
        case 19: _t->accountResetAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->accountGetPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPassword(*)>(_a[2]))); break;
        case 21: _t->accountGetPasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPasswordSettings(*)>(_a[2]))); break;
        case 22: _t->accountUpdatePasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->authCheckPhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthCheckedPhone(*)>(_a[2]))); break;
        case 24: _t->authSendCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthSentCode(*)>(_a[2]))); break;
        case 25: _t->authSendCallAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->authSignUpAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 27: _t->authSignInAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 28: _t->authLogOutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->authResetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->authSendInvitesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->authExportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthExportedAuthorization(*)>(_a[2]))); break;
        case 32: _t->authImportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 33: _t->authBindTempAuthKeyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->authSendSmsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->authImportBotAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 36: _t->authCheckPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 37: _t->authRequestPasswordRecoveryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthPasswordRecovery(*)>(_a[2]))); break;
        case 38: _t->authRecoverPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2]))); break;
        case 39: _t->channelsGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2]))); break;
        case 40: _t->channelsGetImportantHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 41: _t->channelsReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->channelsDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 43: _t->channelsDeleteUserHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2]))); break;
        case 44: _t->channelsReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->channelsGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 46: _t->channelsGetParticipantsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipants(*)>(_a[2]))); break;
        case 47: _t->channelsGetParticipantAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipant(*)>(_a[2]))); break;
        case 48: _t->channelsGetChannelsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2]))); break;
        case 49: _t->channelsGetFullChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2]))); break;
        case 50: _t->channelsCreateChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 51: _t->channelsEditAboutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->channelsEditAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->channelsEditTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 54: _t->channelsEditPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 55: _t->channelsToggleCommentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 56: _t->channelsCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 57: _t->channelsUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->channelsJoinChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 59: _t->channelsLeaveChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 60: _t->channelsInviteToChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 61: _t->channelsKickFromChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 62: _t->channelsExportInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2]))); break;
        case 63: _t->channelsDeleteChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 64: _t->contactsGetStatusesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ContactStatus>(*)>(_a[2]))); break;
        case 65: _t->contactsGetContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsContacts(*)>(_a[2]))); break;
        case 66: _t->contactsImportContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsImportedContacts(*)>(_a[2]))); break;
        case 67: _t->contactsGetSuggestedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsSuggested(*)>(_a[2]))); break;
        case 68: _t->contactsDeleteContactAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsLink(*)>(_a[2]))); break;
        case 69: _t->contactsDeleteContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 70: _t->contactsBlockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 71: _t->contactsUnblockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 72: _t->contactsGetBlockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsBlocked(*)>(_a[2]))); break;
        case 73: _t->contactsExportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2]))); break;
        case 74: _t->contactsImportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 75: _t->contactsSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsFound(*)>(_a[2]))); break;
        case 76: _t->contactsResolveUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsResolvedPeer(*)>(_a[2]))); break;
        case 77: _t->helpGetConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const Config(*)>(_a[2]))); break;
        case 78: _t->helpGetNearestDcAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const NearestDc(*)>(_a[2]))); break;
        case 79: _t->helpGetAppUpdateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppUpdate(*)>(_a[2]))); break;
        case 80: _t->helpSaveAppLogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 81: _t->helpGetInviteTextAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpInviteText(*)>(_a[2]))); break;
        case 82: _t->helpGetSupportAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpSupport(*)>(_a[2]))); break;
        case 83: _t->helpGetAppChangelogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppChangelog(*)>(_a[2]))); break;
        case 84: _t->messagesGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 85: _t->messagesGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2]))); break;
        case 86: _t->messagesGetHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 87: _t->messagesSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 88: _t->messagesReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 89: _t->messagesDeleteHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2]))); break;
        case 90: _t->messagesDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 91: _t->messagesReceivedMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ReceivedNotifyMessage>(*)>(_a[2]))); break;
        case 92: _t->messagesSetTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 93: _t->messagesSendMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 94: _t->messagesSendMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 95: _t->messagesForwardMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 96: _t->messagesReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 97: _t->messagesGetChatsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2]))); break;
        case 98: _t->messagesGetFullChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2]))); break;
        case 99: _t->messagesEditChatTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 100: _t->messagesEditChatPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 101: _t->messagesAddChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 102: _t->messagesDeleteChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 103: _t->messagesCreateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 104: _t->messagesForwardMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 105: _t->messagesSendBroadcastAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 106: _t->messagesGetDhConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDhConfig(*)>(_a[2]))); break;
        case 107: _t->messagesRequestEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2]))); break;
        case 108: _t->messagesAcceptEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2]))); break;
        case 109: _t->messagesDiscardEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 110: _t->messagesSetEncryptedTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 111: _t->messagesReadEncryptedHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 112: _t->messagesSendEncryptedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2]))); break;
        case 113: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2]))); break;
        case 114: _t->messagesSendEncryptedServiceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2]))); break;
        case 115: _t->messagesReceivedQueueAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2]))); break;
        case 116: _t->messagesReadMessageContentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2]))); break;
        case 117: _t->messagesGetStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickers(*)>(_a[2]))); break;
        case 118: _t->messagesGetAllStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAllStickers(*)>(_a[2]))); break;
        case 119: _t->messagesGetWebPagePreviewAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessageMedia(*)>(_a[2]))); break;
        case 120: _t->messagesExportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2]))); break;
        case 121: _t->messagesCheckChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChatInvite(*)>(_a[2]))); break;
        case 122: _t->messagesImportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 123: _t->messagesGetStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickerSet(*)>(_a[2]))); break;
        case 124: _t->messagesInstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 125: _t->messagesUninstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 126: _t->messagesStartBotAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 127: _t->messagesGetMessagesViewsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2]))); break;
        case 128: _t->messagesToggleChatAdminsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 129: _t->messagesEditChatAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 130: _t->messagesDeactivateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 131: _t->messagesMigrateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 132: _t->messagesSearchGlobalAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2]))); break;
        case 133: _t->photosUpdateProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserProfilePhoto(*)>(_a[2]))); break;
        case 134: _t->photosUploadProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhoto(*)>(_a[2]))); break;
        case 135: _t->photosDeletePhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2]))); break;
        case 136: _t->photosGetUserPhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhotos(*)>(_a[2]))); break;
        case 137: _t->updatesGetStateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesState(*)>(_a[2]))); break;
        case 138: _t->updatesGetDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesDifference(*)>(_a[2]))); break;
        case 139: _t->updatesGetChannelDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesChannelDifference(*)>(_a[2]))); break;
        case 140: _t->uploadSaveFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 141: _t->uploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UploadFile(*)>(_a[2]))); break;
        case 142: _t->uploadSaveBigFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 143: _t->usersGetUsersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2]))); break;
        case 144: _t->usersGetFullUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserFull(*)>(_a[2]))); break;
        case 145: _t->accountRegisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 146: _t->accountUnregisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 147: _t->accountUpdateNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 148: _t->accountGetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 149: _t->accountResetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 150: _t->accountUpdateProfileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 151: _t->accountUpdateStatusError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 152: _t->accountGetWallPapersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 153: _t->accountCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 154: _t->accountUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 155: _t->accountGetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 156: _t->accountSetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 157: _t->accountDeleteAccountError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 158: _t->accountGetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 159: _t->accountSetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 160: _t->accountSendChangePhoneCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 161: _t->accountChangePhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 162: _t->accountUpdateDeviceLockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 163: _t->accountGetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 164: _t->accountResetAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 165: _t->accountGetPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 166: _t->accountGetPasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 167: _t->accountUpdatePasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 168: _t->authCheckPhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 169: _t->authSendCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 170: _t->authSendCallError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 171: _t->authSignUpError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 172: _t->authSignInError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 173: _t->authLogOutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 174: _t->authResetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 175: _t->authSendInvitesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 176: _t->authExportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 177: _t->authImportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 178: _t->authBindTempAuthKeyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 179: _t->authSendSmsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 180: _t->authImportBotAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 181: _t->authCheckPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 182: _t->authRequestPasswordRecoveryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 183: _t->authRecoverPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 184: _t->channelsGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 185: _t->channelsGetImportantHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 186: _t->channelsReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 187: _t->channelsDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 188: _t->channelsDeleteUserHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 189: _t->channelsReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 190: _t->channelsGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 191: _t->channelsGetParticipantsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 192: _t->channelsGetParticipantError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 193: _t->channelsGetChannelsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 194: _t->channelsGetFullChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 195: _t->channelsCreateChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 196: _t->channelsEditAboutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 197: _t->channelsEditAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 198: _t->channelsEditTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 199: _t->channelsEditPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 200: _t->channelsToggleCommentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 201: _t->channelsCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 202: _t->channelsUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 203: _t->channelsJoinChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 204: _t->channelsLeaveChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 205: _t->channelsInviteToChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 206: _t->channelsKickFromChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 207: _t->channelsExportInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 208: _t->channelsDeleteChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 209: _t->contactsGetStatusesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 210: _t->contactsGetContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 211: _t->contactsImportContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 212: _t->contactsGetSuggestedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 213: _t->contactsDeleteContactError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 214: _t->contactsDeleteContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 215: _t->contactsBlockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 216: _t->contactsUnblockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 217: _t->contactsGetBlockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 218: _t->contactsExportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 219: _t->contactsImportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 220: _t->contactsSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 221: _t->contactsResolveUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 222: _t->helpGetConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 223: _t->helpGetNearestDcError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 224: _t->helpGetAppUpdateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 225: _t->helpSaveAppLogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 226: _t->helpGetInviteTextError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 227: _t->helpGetSupportError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 228: _t->helpGetAppChangelogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 229: _t->messagesGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 230: _t->messagesGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 231: _t->messagesGetHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 232: _t->messagesSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 233: _t->messagesReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 234: _t->messagesDeleteHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 235: _t->messagesDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 236: _t->messagesReceivedMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 237: _t->messagesSetTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 238: _t->messagesSendMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 239: _t->messagesSendMediaError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 240: _t->messagesForwardMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 241: _t->messagesReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 242: _t->messagesGetChatsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 243: _t->messagesGetFullChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 244: _t->messagesEditChatTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 245: _t->messagesEditChatPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 246: _t->messagesAddChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 247: _t->messagesDeleteChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 248: _t->messagesCreateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 249: _t->messagesForwardMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 250: _t->messagesSendBroadcastError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 251: _t->messagesGetDhConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 252: _t->messagesRequestEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 253: _t->messagesAcceptEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 254: _t->messagesDiscardEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 255: _t->messagesSetEncryptedTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 256: _t->messagesReadEncryptedHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 257: _t->messagesSendEncryptedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 258: _t->messagesSendEncryptedFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 259: _t->messagesSendEncryptedServiceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 260: _t->messagesReceivedQueueError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 261: _t->messagesReadMessageContentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 262: _t->messagesGetStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 263: _t->messagesGetAllStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 264: _t->messagesGetWebPagePreviewError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 265: _t->messagesExportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 266: _t->messagesCheckChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 267: _t->messagesImportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 268: _t->messagesGetStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 269: _t->messagesInstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 270: _t->messagesUninstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 271: _t->messagesStartBotError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 272: _t->messagesGetMessagesViewsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 273: _t->messagesToggleChatAdminsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 274: _t->messagesEditChatAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 275: _t->messagesDeactivateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 276: _t->messagesMigrateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 277: _t->messagesSearchGlobalError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 278: _t->photosUpdateProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 279: _t->photosUploadProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 280: _t->photosDeletePhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 281: _t->photosGetUserPhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 282: _t->updatesGetStateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 283: _t->updatesGetDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 284: _t->updatesGetChannelDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 285: _t->uploadSaveFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 286: _t->uploadGetFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 287: _t->uploadSaveBigFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 288: _t->usersGetUsersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 289: _t->usersGetFullUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 290: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 291: _t->onAccountRegisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 292: _t->onAccountUnregisterDeviceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 293: _t->onAccountUpdateNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 294: _t->onAccountGetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PeerNotifySettings(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 295: _t->onAccountResetNotifySettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 296: _t->onAccountUpdateProfileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 297: _t->onAccountUpdateStatusAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 298: _t->onAccountGetWallPapersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<WallPaper>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 299: _t->onAccountCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 300: _t->onAccountUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 301: _t->onAccountGetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 302: _t->onAccountSetPrivacyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPrivacyRules(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 303: _t->onAccountDeleteAccountAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 304: _t->onAccountGetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountDaysTTL(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 305: _t->onAccountSetAccountTTLAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 306: _t->onAccountSendChangePhoneCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountSentChangePhoneCode(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 307: _t->onAccountChangePhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 308: _t->onAccountUpdateDeviceLockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 309: _t->onAccountGetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountAuthorizations(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 310: _t->onAccountResetAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 311: _t->onAccountGetPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPassword(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 312: _t->onAccountGetPasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AccountPasswordSettings(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 313: _t->onAccountUpdatePasswordSettingsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 314: _t->onAuthCheckPhoneAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthCheckedPhone(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 315: _t->onAuthSendCodeAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthSentCode(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 316: _t->onAuthSendCallAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 317: _t->onAuthSignUpAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 318: _t->onAuthSignInAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 319: _t->onAuthLogOutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 320: _t->onAuthResetAuthorizationsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 321: _t->onAuthSendInvitesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 322: _t->onAuthExportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthExportedAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 323: _t->onAuthImportAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 324: _t->onAuthBindTempAuthKeyAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 325: _t->onAuthSendSmsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 326: _t->onAuthImportBotAuthorizationAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 327: _t->onAuthCheckPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 328: _t->onAuthRequestPasswordRecoveryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthPasswordRecovery(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 329: _t->onAuthRecoverPasswordAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const AuthAuthorization(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 330: _t->onChannelsGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 331: _t->onChannelsGetImportantHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 332: _t->onChannelsReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 333: _t->onChannelsDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 334: _t->onChannelsDeleteUserHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 335: _t->onChannelsReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 336: _t->onChannelsGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 337: _t->onChannelsGetParticipantsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipants(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 338: _t->onChannelsGetParticipantAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChannelsChannelParticipant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 339: _t->onChannelsGetChannelsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 340: _t->onChannelsGetFullChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 341: _t->onChannelsCreateChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 342: _t->onChannelsEditAboutAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 343: _t->onChannelsEditAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 344: _t->onChannelsEditTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 345: _t->onChannelsEditPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 346: _t->onChannelsToggleCommentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 347: _t->onChannelsCheckUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 348: _t->onChannelsUpdateUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 349: _t->onChannelsJoinChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 350: _t->onChannelsLeaveChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 351: _t->onChannelsInviteToChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 352: _t->onChannelsKickFromChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 353: _t->onChannelsExportInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 354: _t->onChannelsDeleteChannelAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 355: _t->onContactsGetStatusesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ContactStatus>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 356: _t->onContactsGetContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsContacts(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 357: _t->onContactsImportContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsImportedContacts(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 358: _t->onContactsGetSuggestedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsSuggested(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 359: _t->onContactsDeleteContactAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsLink(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 360: _t->onContactsDeleteContactsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 361: _t->onContactsBlockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 362: _t->onContactsUnblockAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 363: _t->onContactsGetBlockedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsBlocked(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 364: _t->onContactsExportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 365: _t->onContactsImportCardAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 366: _t->onContactsSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsFound(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 367: _t->onContactsResolveUsernameAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ContactsResolvedPeer(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 368: _t->onHelpGetConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const Config(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 369: _t->onHelpGetNearestDcAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const NearestDc(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 370: _t->onHelpGetAppUpdateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppUpdate(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 371: _t->onHelpSaveAppLogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 372: _t->onHelpGetInviteTextAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpInviteText(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 373: _t->onHelpGetSupportAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpSupport(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 374: _t->onHelpGetAppChangelogAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const HelpAppChangelog(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 375: _t->onMessagesGetMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 376: _t->onMessagesGetDialogsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDialogs(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 377: _t->onMessagesGetHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 378: _t->onMessagesSearchAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 379: _t->onMessagesReadHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 380: _t->onMessagesDeleteHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedHistory(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 381: _t->onMessagesDeleteMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 382: _t->onMessagesReceivedMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<ReceivedNotifyMessage>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 383: _t->onMessagesSetTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 384: _t->onMessagesSendMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 385: _t->onMessagesSendMediaAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 386: _t->onMessagesForwardMessagesAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 387: _t->onMessagesReportSpamAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 388: _t->onMessagesGetChatsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChats(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 389: _t->onMessagesGetFullChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesChatFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 390: _t->onMessagesEditChatTitleAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 391: _t->onMessagesEditChatPhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 392: _t->onMessagesAddChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 393: _t->onMessagesDeleteChatUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 394: _t->onMessagesCreateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 395: _t->onMessagesForwardMessageAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 396: _t->onMessagesSendBroadcastAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 397: _t->onMessagesGetDhConfigAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesDhConfig(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 398: _t->onMessagesRequestEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 399: _t->onMessagesAcceptEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const EncryptedChat(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 400: _t->onMessagesDiscardEncryptionAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 401: _t->onMessagesSetEncryptedTypingAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 402: _t->onMessagesReadEncryptedHistoryAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 403: _t->onMessagesSendEncryptedAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 404: _t->onMessagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 405: _t->onMessagesSendEncryptedServiceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesSentEncryptedMessage(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 406: _t->onMessagesReceivedQueueAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 407: _t->onMessagesReadMessageContentsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAffectedMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 408: _t->onMessagesGetStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickers(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 409: _t->onMessagesGetAllStickersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesAllStickers(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 410: _t->onMessagesGetWebPagePreviewAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessageMedia(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 411: _t->onMessagesExportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ExportedChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 412: _t->onMessagesCheckChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const ChatInvite(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 413: _t->onMessagesImportChatInviteAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 414: _t->onMessagesGetStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesStickerSet(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 415: _t->onMessagesInstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 416: _t->onMessagesUninstallStickerSetAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 417: _t->onMessagesStartBotAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 418: _t->onMessagesGetMessagesViewsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint32>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 419: _t->onMessagesToggleChatAdminsAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 420: _t->onMessagesEditChatAdminAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 421: _t->onMessagesDeactivateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 422: _t->onMessagesMigrateChatAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 423: _t->onMessagesSearchGlobalAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const MessagesMessages(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 424: _t->onPhotosUpdateProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserProfilePhoto(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 425: _t->onPhotosUploadProfilePhotoAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhoto(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 426: _t->onPhotosDeletePhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<qint64>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 427: _t->onPhotosGetUserPhotosAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const PhotosPhotos(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 428: _t->onUpdatesGetStateAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesState(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 429: _t->onUpdatesGetDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesDifference(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 430: _t->onUpdatesGetChannelDifferenceAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesChannelDifference(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 431: _t->onUploadSaveFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 432: _t->onUploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UploadFile(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 433: _t->onUploadSaveBigFilePartAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 434: _t->onUsersGetUsersAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 435: _t->onUsersGetFullUserAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UserFull(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 436: _t->onAccountRegisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 437: _t->onAccountUnregisterDeviceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 438: _t->onAccountUpdateNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 439: _t->onAccountGetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 440: _t->onAccountResetNotifySettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 441: _t->onAccountUpdateProfileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 442: _t->onAccountUpdateStatusError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 443: _t->onAccountGetWallPapersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 444: _t->onAccountCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 445: _t->onAccountUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 446: _t->onAccountGetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 447: _t->onAccountSetPrivacyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 448: _t->onAccountDeleteAccountError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 449: _t->onAccountGetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 450: _t->onAccountSetAccountTTLError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 451: _t->onAccountSendChangePhoneCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 452: _t->onAccountChangePhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 453: _t->onAccountUpdateDeviceLockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 454: _t->onAccountGetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 455: _t->onAccountResetAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 456: _t->onAccountGetPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 457: _t->onAccountGetPasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 458: _t->onAccountUpdatePasswordSettingsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 459: _t->onAuthCheckPhoneError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 460: _t->onAuthSendCodeError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 461: _t->onAuthSendCallError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 462: _t->onAuthSignUpError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 463: _t->onAuthSignInError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 464: _t->onAuthLogOutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 465: _t->onAuthResetAuthorizationsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 466: _t->onAuthSendInvitesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 467: _t->onAuthExportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 468: _t->onAuthImportAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 469: _t->onAuthBindTempAuthKeyError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 470: _t->onAuthSendSmsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 471: _t->onAuthImportBotAuthorizationError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 472: _t->onAuthCheckPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 473: _t->onAuthRequestPasswordRecoveryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 474: _t->onAuthRecoverPasswordError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 475: _t->onChannelsGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 476: _t->onChannelsGetImportantHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 477: _t->onChannelsReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 478: _t->onChannelsDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 479: _t->onChannelsDeleteUserHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 480: _t->onChannelsReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 481: _t->onChannelsGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 482: _t->onChannelsGetParticipantsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 483: _t->onChannelsGetParticipantError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 484: _t->onChannelsGetChannelsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 485: _t->onChannelsGetFullChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 486: _t->onChannelsCreateChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 487: _t->onChannelsEditAboutError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 488: _t->onChannelsEditAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 489: _t->onChannelsEditTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 490: _t->onChannelsEditPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 491: _t->onChannelsToggleCommentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 492: _t->onChannelsCheckUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 493: _t->onChannelsUpdateUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 494: _t->onChannelsJoinChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 495: _t->onChannelsLeaveChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 496: _t->onChannelsInviteToChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 497: _t->onChannelsKickFromChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 498: _t->onChannelsExportInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 499: _t->onChannelsDeleteChannelError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 500: _t->onContactsGetStatusesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 501: _t->onContactsGetContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 502: _t->onContactsImportContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 503: _t->onContactsGetSuggestedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 504: _t->onContactsDeleteContactError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 505: _t->onContactsDeleteContactsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 506: _t->onContactsBlockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 507: _t->onContactsUnblockError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 508: _t->onContactsGetBlockedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 509: _t->onContactsExportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 510: _t->onContactsImportCardError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 511: _t->onContactsSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 512: _t->onContactsResolveUsernameError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 513: _t->onHelpGetConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 514: _t->onHelpGetNearestDcError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 515: _t->onHelpGetAppUpdateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 516: _t->onHelpSaveAppLogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 517: _t->onHelpGetInviteTextError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 518: _t->onHelpGetSupportError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 519: _t->onHelpGetAppChangelogError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 520: _t->onMessagesGetMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 521: _t->onMessagesGetDialogsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 522: _t->onMessagesGetHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 523: _t->onMessagesSearchError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 524: _t->onMessagesReadHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 525: _t->onMessagesDeleteHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 526: _t->onMessagesDeleteMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 527: _t->onMessagesReceivedMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 528: _t->onMessagesSetTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 529: _t->onMessagesSendMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 530: _t->onMessagesSendMediaError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 531: _t->onMessagesForwardMessagesError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 532: _t->onMessagesReportSpamError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 533: _t->onMessagesGetChatsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 534: _t->onMessagesGetFullChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 535: _t->onMessagesEditChatTitleError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 536: _t->onMessagesEditChatPhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 537: _t->onMessagesAddChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 538: _t->onMessagesDeleteChatUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 539: _t->onMessagesCreateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 540: _t->onMessagesForwardMessageError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 541: _t->onMessagesSendBroadcastError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 542: _t->onMessagesGetDhConfigError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 543: _t->onMessagesRequestEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 544: _t->onMessagesAcceptEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 545: _t->onMessagesDiscardEncryptionError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 546: _t->onMessagesSetEncryptedTypingError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 547: _t->onMessagesReadEncryptedHistoryError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 548: _t->onMessagesSendEncryptedError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 549: _t->onMessagesSendEncryptedFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 550: _t->onMessagesSendEncryptedServiceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 551: _t->onMessagesReceivedQueueError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 552: _t->onMessagesReadMessageContentsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 553: _t->onMessagesGetStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 554: _t->onMessagesGetAllStickersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 555: _t->onMessagesGetWebPagePreviewError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 556: _t->onMessagesExportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 557: _t->onMessagesCheckChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 558: _t->onMessagesImportChatInviteError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 559: _t->onMessagesGetStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 560: _t->onMessagesInstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 561: _t->onMessagesUninstallStickerSetError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 562: _t->onMessagesStartBotError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 563: _t->onMessagesGetMessagesViewsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 564: _t->onMessagesToggleChatAdminsError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 565: _t->onMessagesEditChatAdminError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 566: _t->onMessagesDeactivateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 567: _t->onMessagesMigrateChatError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 568: _t->onMessagesSearchGlobalError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 569: _t->onPhotosUpdateProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 570: _t->onPhotosUploadProfilePhotoError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 571: _t->onPhotosDeletePhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 572: _t->onPhotosGetUserPhotosError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 573: _t->onUpdatesGetStateError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 574: _t->onUpdatesGetDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 575: _t->onUpdatesGetChannelDifferenceError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 576: _t->onUploadSaveFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 577: _t->onUploadGetFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 578: _t->onUploadSaveBigFilePartError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 579: _t->onUsersGetUsersError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 580: _t->onUsersGetFullUserError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 581: _t->onError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
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
        case 294:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PeerNotifySettings >(); break;
            }
            break;
        case 296:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 298:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<WallPaper> >(); break;
            }
            break;
        case 300:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 301:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPrivacyRules >(); break;
            }
            break;
        case 302:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPrivacyRules >(); break;
            }
            break;
        case 304:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountDaysTTL >(); break;
            }
            break;
        case 306:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountSentChangePhoneCode >(); break;
            }
            break;
        case 307:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 309:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountAuthorizations >(); break;
            }
            break;
        case 311:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPassword >(); break;
            }
            break;
        case 312:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountPasswordSettings >(); break;
            }
            break;
        case 314:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthCheckedPhone >(); break;
            }
            break;
        case 315:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthSentCode >(); break;
            }
            break;
        case 317:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 318:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 322:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthExportedAuthorization >(); break;
            }
            break;
        case 323:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 326:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 327:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 328:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthPasswordRecovery >(); break;
            }
            break;
        case 329:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AuthAuthorization >(); break;
            }
            break;
        case 330:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDialogs >(); break;
            }
            break;
        case 331:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 333:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 334:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedHistory >(); break;
            }
            break;
        case 336:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 337:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelsChannelParticipants >(); break;
            }
            break;
        case 338:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelsChannelParticipant >(); break;
            }
            break;
        case 339:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChats >(); break;
            }
            break;
        case 340:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChatFull >(); break;
            }
            break;
        case 341:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 344:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 345:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 346:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 349:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 350:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 351:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 352:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 353:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExportedChatInvite >(); break;
            }
            break;
        case 354:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 355:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ContactStatus> >(); break;
            }
            break;
        case 356:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsContacts >(); break;
            }
            break;
        case 357:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsImportedContacts >(); break;
            }
            break;
        case 358:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsSuggested >(); break;
            }
            break;
        case 359:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsLink >(); break;
            }
            break;
        case 363:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsBlocked >(); break;
            }
            break;
        case 364:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 365:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        case 366:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsFound >(); break;
            }
            break;
        case 367:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactsResolvedPeer >(); break;
            }
            break;
        case 368:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Config >(); break;
            }
            break;
        case 369:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NearestDc >(); break;
            }
            break;
        case 370:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpAppUpdate >(); break;
            }
            break;
        case 372:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpInviteText >(); break;
            }
            break;
        case 373:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpSupport >(); break;
            }
            break;
        case 374:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HelpAppChangelog >(); break;
            }
            break;
        case 375:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 376:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDialogs >(); break;
            }
            break;
        case 377:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 378:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 379:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 380:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedHistory >(); break;
            }
            break;
        case 381:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 382:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ReceivedNotifyMessage> >(); break;
            }
            break;
        case 384:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 385:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 386:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 388:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChats >(); break;
            }
            break;
        case 389:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesChatFull >(); break;
            }
            break;
        case 390:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 391:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 392:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 393:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 394:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 395:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 396:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 397:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesDhConfig >(); break;
            }
            break;
        case 398:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        case 399:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedChat >(); break;
            }
            break;
        case 403:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 404:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 405:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesSentEncryptedMessage >(); break;
            }
            break;
        case 406:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 407:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAffectedMessages >(); break;
            }
            break;
        case 408:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickers >(); break;
            }
            break;
        case 409:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesAllStickers >(); break;
            }
            break;
        case 410:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageMedia >(); break;
            }
            break;
        case 411:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExportedChatInvite >(); break;
            }
            break;
        case 412:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatInvite >(); break;
            }
            break;
        case 413:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 414:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesStickerSet >(); break;
            }
            break;
        case 417:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 418:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 419:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 421:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 422:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 423:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessagesMessages >(); break;
            }
            break;
        case 424:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserProfilePhoto >(); break;
            }
            break;
        case 425:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PhotosPhoto >(); break;
            }
            break;
        case 426:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint64> >(); break;
            }
            break;
        case 427:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PhotosPhotos >(); break;
            }
            break;
        case 428:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesState >(); break;
            }
            break;
        case 429:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesDifference >(); break;
            }
            break;
        case 430:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesChannelDifference >(); break;
            }
            break;
        case 432:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UploadFile >(); break;
            }
            break;
        case 434:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 435:
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
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountRegisterDeviceAnswer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUnregisterDeviceAnswer)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateNotifySettingsAnswer)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const PeerNotifySettings & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetNotifySettingsAnswer)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountResetNotifySettingsAnswer)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateProfileAnswer)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateStatusAnswer)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<WallPaper> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetWallPapersAnswer)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountCheckUsernameAnswer)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateUsernameAnswer)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountPrivacyRules & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPrivacyAnswer)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountPrivacyRules & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSetPrivacyAnswer)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountDeleteAccountAnswer)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountDaysTTL & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetAccountTTLAnswer)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSetAccountTTLAnswer)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountSentChangePhoneCode & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSendChangePhoneCodeAnswer)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountChangePhoneAnswer)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateDeviceLockedAnswer)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountAuthorizations & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetAuthorizationsAnswer)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountResetAuthorizationAnswer)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountPassword & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPasswordAnswer)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AccountPasswordSettings & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPasswordSettingsAnswer)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdatePasswordSettingsAnswer)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthCheckedPhone & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authCheckPhoneAnswer)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthSentCode & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendCodeAnswer)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendCallAnswer)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSignUpAnswer)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSignInAnswer)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authLogOutAnswer)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authResetAuthorizationsAnswer)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendInvitesAnswer)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthExportedAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authExportAuthorizationAnswer)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authImportAuthorizationAnswer)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authBindTempAuthKeyAnswer)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendSmsAnswer)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authImportBotAuthorizationAnswer)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authCheckPasswordAnswer)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthPasswordRecovery & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authRequestPasswordRecoveryAnswer)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const AuthAuthorization & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authRecoverPasswordAnswer)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesDialogs & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetDialogsAnswer)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetImportantHistoryAnswer)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsReadHistoryAnswer)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteMessagesAnswer)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedHistory & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteUserHistoryAnswer)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsReportSpamAnswer)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetMessagesAnswer)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ChannelsChannelParticipants & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetParticipantsAnswer)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ChannelsChannelParticipant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetParticipantAnswer)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesChats & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetChannelsAnswer)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesChatFull & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetFullChannelAnswer)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsCreateChannelAnswer)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditAboutAnswer)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditAdminAnswer)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditTitleAnswer)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditPhotoAnswer)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsToggleCommentsAnswer)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsCheckUsernameAnswer)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsUpdateUsernameAnswer)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsJoinChannelAnswer)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsLeaveChannelAnswer)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsInviteToChannelAnswer)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsKickFromChannelAnswer)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ExportedChatInvite & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsExportInviteAnswer)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteChannelAnswer)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<ContactStatus> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetStatusesAnswer)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsContacts & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetContactsAnswer)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsImportedContacts & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsImportContactsAnswer)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsSuggested & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetSuggestedAnswer)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsLink & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsDeleteContactAnswer)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsDeleteContactsAnswer)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsBlockAnswer)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsUnblockAnswer)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsBlocked & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetBlockedAnswer)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<qint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsExportCardAnswer)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const User & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsImportCardAnswer)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsFound & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsSearchAnswer)) {
                *result = 75;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ContactsResolvedPeer & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsResolveUsernameAnswer)) {
                *result = 76;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const Config & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetConfigAnswer)) {
                *result = 77;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const NearestDc & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetNearestDcAnswer)) {
                *result = 78;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const HelpAppUpdate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetAppUpdateAnswer)) {
                *result = 79;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpSaveAppLogAnswer)) {
                *result = 80;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const HelpInviteText & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetInviteTextAnswer)) {
                *result = 81;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const HelpSupport & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetSupportAnswer)) {
                *result = 82;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const HelpAppChangelog & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetAppChangelogAnswer)) {
                *result = 83;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetMessagesAnswer)) {
                *result = 84;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesDialogs & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetDialogsAnswer)) {
                *result = 85;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetHistoryAnswer)) {
                *result = 86;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSearchAnswer)) {
                *result = 87;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadHistoryAnswer)) {
                *result = 88;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedHistory & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteHistoryAnswer)) {
                *result = 89;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteMessagesAnswer)) {
                *result = 90;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<ReceivedNotifyMessage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReceivedMessagesAnswer)) {
                *result = 91;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSetTypingAnswer)) {
                *result = 92;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendMessageAnswer)) {
                *result = 93;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendMediaAnswer)) {
                *result = 94;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesForwardMessagesAnswer)) {
                *result = 95;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReportSpamAnswer)) {
                *result = 96;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesChats & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetChatsAnswer)) {
                *result = 97;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesChatFull & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetFullChatAnswer)) {
                *result = 98;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatTitleAnswer)) {
                *result = 99;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatPhotoAnswer)) {
                *result = 100;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesAddChatUserAnswer)) {
                *result = 101;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteChatUserAnswer)) {
                *result = 102;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesCreateChatAnswer)) {
                *result = 103;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesForwardMessageAnswer)) {
                *result = 104;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendBroadcastAnswer)) {
                *result = 105;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesDhConfig & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetDhConfigAnswer)) {
                *result = 106;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const EncryptedChat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesRequestEncryptionAnswer)) {
                *result = 107;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const EncryptedChat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesAcceptEncryptionAnswer)) {
                *result = 108;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDiscardEncryptionAnswer)) {
                *result = 109;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSetEncryptedTypingAnswer)) {
                *result = 110;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadEncryptedHistoryAnswer)) {
                *result = 111;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesSentEncryptedMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedAnswer)) {
                *result = 112;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesSentEncryptedMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedFileAnswer)) {
                *result = 113;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesSentEncryptedMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedServiceAnswer)) {
                *result = 114;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<qint64> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReceivedQueueAnswer)) {
                *result = 115;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAffectedMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadMessageContentsAnswer)) {
                *result = 116;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesStickers & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetStickersAnswer)) {
                *result = 117;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesAllStickers & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetAllStickersAnswer)) {
                *result = 118;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessageMedia & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetWebPagePreviewAnswer)) {
                *result = 119;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ExportedChatInvite & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesExportChatInviteAnswer)) {
                *result = 120;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const ChatInvite & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesCheckChatInviteAnswer)) {
                *result = 121;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesImportChatInviteAnswer)) {
                *result = 122;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesStickerSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetStickerSetAnswer)) {
                *result = 123;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesInstallStickerSetAnswer)) {
                *result = 124;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesUninstallStickerSetAnswer)) {
                *result = 125;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesStartBotAnswer)) {
                *result = 126;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<qint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetMessagesViewsAnswer)) {
                *result = 127;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesToggleChatAdminsAnswer)) {
                *result = 128;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatAdminAnswer)) {
                *result = 129;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeactivateChatAnswer)) {
                *result = 130;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesMigrateChatAnswer)) {
                *result = 131;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const MessagesMessages & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSearchGlobalAnswer)) {
                *result = 132;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UserProfilePhoto & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosUpdateProfilePhotoAnswer)) {
                *result = 133;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const PhotosPhoto & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosUploadProfilePhotoAnswer)) {
                *result = 134;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<qint64> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosDeletePhotosAnswer)) {
                *result = 135;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const PhotosPhotos & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosGetUserPhotosAnswer)) {
                *result = 136;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetStateAnswer)) {
                *result = 137;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesDifference & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetDifferenceAnswer)) {
                *result = 138;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UpdatesChannelDifference & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetChannelDifferenceAnswer)) {
                *result = 139;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadSaveFilePartAnswer)) {
                *result = 140;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UploadFile & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadGetFileAnswer)) {
                *result = 141;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadSaveBigFilePartAnswer)) {
                *result = 142;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const QList<User> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::usersGetUsersAnswer)) {
                *result = 143;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , const UserFull & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::usersGetFullUserAnswer)) {
                *result = 144;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountRegisterDeviceError)) {
                *result = 145;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUnregisterDeviceError)) {
                *result = 146;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateNotifySettingsError)) {
                *result = 147;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetNotifySettingsError)) {
                *result = 148;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountResetNotifySettingsError)) {
                *result = 149;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateProfileError)) {
                *result = 150;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateStatusError)) {
                *result = 151;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetWallPapersError)) {
                *result = 152;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountCheckUsernameError)) {
                *result = 153;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateUsernameError)) {
                *result = 154;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPrivacyError)) {
                *result = 155;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSetPrivacyError)) {
                *result = 156;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountDeleteAccountError)) {
                *result = 157;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetAccountTTLError)) {
                *result = 158;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSetAccountTTLError)) {
                *result = 159;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountSendChangePhoneCodeError)) {
                *result = 160;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountChangePhoneError)) {
                *result = 161;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdateDeviceLockedError)) {
                *result = 162;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetAuthorizationsError)) {
                *result = 163;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountResetAuthorizationError)) {
                *result = 164;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPasswordError)) {
                *result = 165;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountGetPasswordSettingsError)) {
                *result = 166;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::accountUpdatePasswordSettingsError)) {
                *result = 167;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authCheckPhoneError)) {
                *result = 168;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendCodeError)) {
                *result = 169;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendCallError)) {
                *result = 170;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSignUpError)) {
                *result = 171;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSignInError)) {
                *result = 172;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authLogOutError)) {
                *result = 173;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authResetAuthorizationsError)) {
                *result = 174;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendInvitesError)) {
                *result = 175;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authExportAuthorizationError)) {
                *result = 176;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authImportAuthorizationError)) {
                *result = 177;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authBindTempAuthKeyError)) {
                *result = 178;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authSendSmsError)) {
                *result = 179;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authImportBotAuthorizationError)) {
                *result = 180;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authCheckPasswordError)) {
                *result = 181;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authRequestPasswordRecoveryError)) {
                *result = 182;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::authRecoverPasswordError)) {
                *result = 183;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetDialogsError)) {
                *result = 184;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetImportantHistoryError)) {
                *result = 185;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsReadHistoryError)) {
                *result = 186;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteMessagesError)) {
                *result = 187;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteUserHistoryError)) {
                *result = 188;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsReportSpamError)) {
                *result = 189;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetMessagesError)) {
                *result = 190;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetParticipantsError)) {
                *result = 191;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetParticipantError)) {
                *result = 192;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetChannelsError)) {
                *result = 193;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsGetFullChannelError)) {
                *result = 194;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsCreateChannelError)) {
                *result = 195;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditAboutError)) {
                *result = 196;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditAdminError)) {
                *result = 197;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditTitleError)) {
                *result = 198;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsEditPhotoError)) {
                *result = 199;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsToggleCommentsError)) {
                *result = 200;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsCheckUsernameError)) {
                *result = 201;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsUpdateUsernameError)) {
                *result = 202;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsJoinChannelError)) {
                *result = 203;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsLeaveChannelError)) {
                *result = 204;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsInviteToChannelError)) {
                *result = 205;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsKickFromChannelError)) {
                *result = 206;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsExportInviteError)) {
                *result = 207;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::channelsDeleteChannelError)) {
                *result = 208;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetStatusesError)) {
                *result = 209;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetContactsError)) {
                *result = 210;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsImportContactsError)) {
                *result = 211;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetSuggestedError)) {
                *result = 212;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsDeleteContactError)) {
                *result = 213;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsDeleteContactsError)) {
                *result = 214;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsBlockError)) {
                *result = 215;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsUnblockError)) {
                *result = 216;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsGetBlockedError)) {
                *result = 217;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsExportCardError)) {
                *result = 218;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsImportCardError)) {
                *result = 219;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsSearchError)) {
                *result = 220;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::contactsResolveUsernameError)) {
                *result = 221;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetConfigError)) {
                *result = 222;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetNearestDcError)) {
                *result = 223;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetAppUpdateError)) {
                *result = 224;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpSaveAppLogError)) {
                *result = 225;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetInviteTextError)) {
                *result = 226;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetSupportError)) {
                *result = 227;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::helpGetAppChangelogError)) {
                *result = 228;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetMessagesError)) {
                *result = 229;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetDialogsError)) {
                *result = 230;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetHistoryError)) {
                *result = 231;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSearchError)) {
                *result = 232;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadHistoryError)) {
                *result = 233;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteHistoryError)) {
                *result = 234;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteMessagesError)) {
                *result = 235;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReceivedMessagesError)) {
                *result = 236;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSetTypingError)) {
                *result = 237;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendMessageError)) {
                *result = 238;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendMediaError)) {
                *result = 239;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesForwardMessagesError)) {
                *result = 240;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReportSpamError)) {
                *result = 241;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetChatsError)) {
                *result = 242;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetFullChatError)) {
                *result = 243;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatTitleError)) {
                *result = 244;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatPhotoError)) {
                *result = 245;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesAddChatUserError)) {
                *result = 246;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeleteChatUserError)) {
                *result = 247;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesCreateChatError)) {
                *result = 248;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesForwardMessageError)) {
                *result = 249;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendBroadcastError)) {
                *result = 250;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetDhConfigError)) {
                *result = 251;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesRequestEncryptionError)) {
                *result = 252;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesAcceptEncryptionError)) {
                *result = 253;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDiscardEncryptionError)) {
                *result = 254;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSetEncryptedTypingError)) {
                *result = 255;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadEncryptedHistoryError)) {
                *result = 256;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedError)) {
                *result = 257;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedFileError)) {
                *result = 258;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSendEncryptedServiceError)) {
                *result = 259;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReceivedQueueError)) {
                *result = 260;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesReadMessageContentsError)) {
                *result = 261;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetStickersError)) {
                *result = 262;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetAllStickersError)) {
                *result = 263;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetWebPagePreviewError)) {
                *result = 264;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesExportChatInviteError)) {
                *result = 265;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesCheckChatInviteError)) {
                *result = 266;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesImportChatInviteError)) {
                *result = 267;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetStickerSetError)) {
                *result = 268;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesInstallStickerSetError)) {
                *result = 269;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesUninstallStickerSetError)) {
                *result = 270;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesStartBotError)) {
                *result = 271;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesGetMessagesViewsError)) {
                *result = 272;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesToggleChatAdminsError)) {
                *result = 273;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesEditChatAdminError)) {
                *result = 274;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesDeactivateChatError)) {
                *result = 275;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesMigrateChatError)) {
                *result = 276;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::messagesSearchGlobalError)) {
                *result = 277;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosUpdateProfilePhotoError)) {
                *result = 278;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosUploadProfilePhotoError)) {
                *result = 279;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosDeletePhotosError)) {
                *result = 280;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::photosGetUserPhotosError)) {
                *result = 281;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetStateError)) {
                *result = 282;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetDifferenceError)) {
                *result = 283;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::updatesGetChannelDifferenceError)) {
                *result = 284;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadSaveFilePartError)) {
                *result = 285;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadGetFileError)) {
                *result = 286;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::uploadSaveBigFilePartError)) {
                *result = 287;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::usersGetUsersError)) {
                *result = 288;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::usersGetFullUserError)) {
                *result = 289;
                return;
            }
        }
        {
            typedef void (TelegramCore::*_t)(qint64 , qint32 , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelegramCore::error)) {
                *result = 290;
                return;
            }
        }
    }
}

const QMetaObject TelegramCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelegramCore.data,
      qt_meta_data_TelegramCore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelegramCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelegramCore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelegramCore.stringdata0))
        return static_cast<void*>(const_cast< TelegramCore*>(this));
    return QObject::qt_metacast(_clname);
}

int TelegramCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 582)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 582;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 582)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 582;
    }
    return _id;
}

// SIGNAL 0
void TelegramCore::accountRegisterDeviceAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelegramCore::accountUnregisterDeviceAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TelegramCore::accountUpdateNotifySettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TelegramCore::accountGetNotifySettingsAnswer(qint64 _t1, const PeerNotifySettings & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TelegramCore::accountResetNotifySettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TelegramCore::accountUpdateProfileAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TelegramCore::accountUpdateStatusAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TelegramCore::accountGetWallPapersAnswer(qint64 _t1, const QList<WallPaper> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TelegramCore::accountCheckUsernameAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TelegramCore::accountUpdateUsernameAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TelegramCore::accountGetPrivacyAnswer(qint64 _t1, const AccountPrivacyRules & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TelegramCore::accountSetPrivacyAnswer(qint64 _t1, const AccountPrivacyRules & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TelegramCore::accountDeleteAccountAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TelegramCore::accountGetAccountTTLAnswer(qint64 _t1, const AccountDaysTTL & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TelegramCore::accountSetAccountTTLAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TelegramCore::accountSendChangePhoneCodeAnswer(qint64 _t1, const AccountSentChangePhoneCode & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TelegramCore::accountChangePhoneAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TelegramCore::accountUpdateDeviceLockedAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TelegramCore::accountGetAuthorizationsAnswer(qint64 _t1, const AccountAuthorizations & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TelegramCore::accountResetAuthorizationAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void TelegramCore::accountGetPasswordAnswer(qint64 _t1, const AccountPassword & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void TelegramCore::accountGetPasswordSettingsAnswer(qint64 _t1, const AccountPasswordSettings & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void TelegramCore::accountUpdatePasswordSettingsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void TelegramCore::authCheckPhoneAnswer(qint64 _t1, const AuthCheckedPhone & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void TelegramCore::authSendCodeAnswer(qint64 _t1, const AuthSentCode & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void TelegramCore::authSendCallAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void TelegramCore::authSignUpAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void TelegramCore::authSignInAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void TelegramCore::authLogOutAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void TelegramCore::authResetAuthorizationsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void TelegramCore::authSendInvitesAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void TelegramCore::authExportAuthorizationAnswer(qint64 _t1, const AuthExportedAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void TelegramCore::authImportAuthorizationAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void TelegramCore::authBindTempAuthKeyAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void TelegramCore::authSendSmsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void TelegramCore::authImportBotAuthorizationAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void TelegramCore::authCheckPasswordAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void TelegramCore::authRequestPasswordRecoveryAnswer(qint64 _t1, const AuthPasswordRecovery & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void TelegramCore::authRecoverPasswordAnswer(qint64 _t1, const AuthAuthorization & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void TelegramCore::channelsGetDialogsAnswer(qint64 _t1, const MessagesDialogs & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void TelegramCore::channelsGetImportantHistoryAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void TelegramCore::channelsReadHistoryAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void TelegramCore::channelsDeleteMessagesAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void TelegramCore::channelsDeleteUserHistoryAnswer(qint64 _t1, const MessagesAffectedHistory & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void TelegramCore::channelsReportSpamAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void TelegramCore::channelsGetMessagesAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void TelegramCore::channelsGetParticipantsAnswer(qint64 _t1, const ChannelsChannelParticipants & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void TelegramCore::channelsGetParticipantAnswer(qint64 _t1, const ChannelsChannelParticipant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void TelegramCore::channelsGetChannelsAnswer(qint64 _t1, const MessagesChats & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void TelegramCore::channelsGetFullChannelAnswer(qint64 _t1, const MessagesChatFull & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void TelegramCore::channelsCreateChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void TelegramCore::channelsEditAboutAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void TelegramCore::channelsEditAdminAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void TelegramCore::channelsEditTitleAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void TelegramCore::channelsEditPhotoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void TelegramCore::channelsToggleCommentsAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void TelegramCore::channelsCheckUsernameAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void TelegramCore::channelsUpdateUsernameAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void TelegramCore::channelsJoinChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void TelegramCore::channelsLeaveChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void TelegramCore::channelsInviteToChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void TelegramCore::channelsKickFromChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void TelegramCore::channelsExportInviteAnswer(qint64 _t1, const ExportedChatInvite & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void TelegramCore::channelsDeleteChannelAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void TelegramCore::contactsGetStatusesAnswer(qint64 _t1, const QList<ContactStatus> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void TelegramCore::contactsGetContactsAnswer(qint64 _t1, const ContactsContacts & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void TelegramCore::contactsImportContactsAnswer(qint64 _t1, const ContactsImportedContacts & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void TelegramCore::contactsGetSuggestedAnswer(qint64 _t1, const ContactsSuggested & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void TelegramCore::contactsDeleteContactAnswer(qint64 _t1, const ContactsLink & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void TelegramCore::contactsDeleteContactsAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void TelegramCore::contactsBlockAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void TelegramCore::contactsUnblockAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void TelegramCore::contactsGetBlockedAnswer(qint64 _t1, const ContactsBlocked & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void TelegramCore::contactsExportCardAnswer(qint64 _t1, const QList<qint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void TelegramCore::contactsImportCardAnswer(qint64 _t1, const User & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void TelegramCore::contactsSearchAnswer(qint64 _t1, const ContactsFound & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void TelegramCore::contactsResolveUsernameAnswer(qint64 _t1, const ContactsResolvedPeer & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void TelegramCore::helpGetConfigAnswer(qint64 _t1, const Config & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void TelegramCore::helpGetNearestDcAnswer(qint64 _t1, const NearestDc & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void TelegramCore::helpGetAppUpdateAnswer(qint64 _t1, const HelpAppUpdate & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void TelegramCore::helpSaveAppLogAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void TelegramCore::helpGetInviteTextAnswer(qint64 _t1, const HelpInviteText & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void TelegramCore::helpGetSupportAnswer(qint64 _t1, const HelpSupport & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void TelegramCore::helpGetAppChangelogAnswer(qint64 _t1, const HelpAppChangelog & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void TelegramCore::messagesGetMessagesAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void TelegramCore::messagesGetDialogsAnswer(qint64 _t1, const MessagesDialogs & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void TelegramCore::messagesGetHistoryAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void TelegramCore::messagesSearchAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void TelegramCore::messagesReadHistoryAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void TelegramCore::messagesDeleteHistoryAnswer(qint64 _t1, const MessagesAffectedHistory & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void TelegramCore::messagesDeleteMessagesAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void TelegramCore::messagesReceivedMessagesAnswer(qint64 _t1, const QList<ReceivedNotifyMessage> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void TelegramCore::messagesSetTypingAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void TelegramCore::messagesSendMessageAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void TelegramCore::messagesSendMediaAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void TelegramCore::messagesForwardMessagesAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void TelegramCore::messagesReportSpamAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void TelegramCore::messagesGetChatsAnswer(qint64 _t1, const MessagesChats & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void TelegramCore::messagesGetFullChatAnswer(qint64 _t1, const MessagesChatFull & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void TelegramCore::messagesEditChatTitleAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void TelegramCore::messagesEditChatPhotoAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void TelegramCore::messagesAddChatUserAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void TelegramCore::messagesDeleteChatUserAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void TelegramCore::messagesCreateChatAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void TelegramCore::messagesForwardMessageAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void TelegramCore::messagesSendBroadcastAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void TelegramCore::messagesGetDhConfigAnswer(qint64 _t1, const MessagesDhConfig & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void TelegramCore::messagesRequestEncryptionAnswer(qint64 _t1, const EncryptedChat & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void TelegramCore::messagesAcceptEncryptionAnswer(qint64 _t1, const EncryptedChat & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void TelegramCore::messagesDiscardEncryptionAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void TelegramCore::messagesSetEncryptedTypingAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void TelegramCore::messagesReadEncryptedHistoryAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void TelegramCore::messagesSendEncryptedAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void TelegramCore::messagesSendEncryptedFileAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void TelegramCore::messagesSendEncryptedServiceAnswer(qint64 _t1, const MessagesSentEncryptedMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void TelegramCore::messagesReceivedQueueAnswer(qint64 _t1, const QList<qint64> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void TelegramCore::messagesReadMessageContentsAnswer(qint64 _t1, const MessagesAffectedMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void TelegramCore::messagesGetStickersAnswer(qint64 _t1, const MessagesStickers & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void TelegramCore::messagesGetAllStickersAnswer(qint64 _t1, const MessagesAllStickers & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void TelegramCore::messagesGetWebPagePreviewAnswer(qint64 _t1, const MessageMedia & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void TelegramCore::messagesExportChatInviteAnswer(qint64 _t1, const ExportedChatInvite & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void TelegramCore::messagesCheckChatInviteAnswer(qint64 _t1, const ChatInvite & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void TelegramCore::messagesImportChatInviteAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void TelegramCore::messagesGetStickerSetAnswer(qint64 _t1, const MessagesStickerSet & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void TelegramCore::messagesInstallStickerSetAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void TelegramCore::messagesUninstallStickerSetAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void TelegramCore::messagesStartBotAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void TelegramCore::messagesGetMessagesViewsAnswer(qint64 _t1, const QList<qint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void TelegramCore::messagesToggleChatAdminsAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void TelegramCore::messagesEditChatAdminAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void TelegramCore::messagesDeactivateChatAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void TelegramCore::messagesMigrateChatAnswer(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void TelegramCore::messagesSearchGlobalAnswer(qint64 _t1, const MessagesMessages & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void TelegramCore::photosUpdateProfilePhotoAnswer(qint64 _t1, const UserProfilePhoto & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void TelegramCore::photosUploadProfilePhotoAnswer(qint64 _t1, const PhotosPhoto & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void TelegramCore::photosDeletePhotosAnswer(qint64 _t1, const QList<qint64> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void TelegramCore::photosGetUserPhotosAnswer(qint64 _t1, const PhotosPhotos & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void TelegramCore::updatesGetStateAnswer(qint64 _t1, const UpdatesState & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void TelegramCore::updatesGetDifferenceAnswer(qint64 _t1, const UpdatesDifference & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void TelegramCore::updatesGetChannelDifferenceAnswer(qint64 _t1, const UpdatesChannelDifference & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void TelegramCore::uploadSaveFilePartAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void TelegramCore::uploadGetFileAnswer(qint64 _t1, const UploadFile & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void TelegramCore::uploadSaveBigFilePartAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void TelegramCore::usersGetUsersAnswer(qint64 _t1, const QList<User> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void TelegramCore::usersGetFullUserAnswer(qint64 _t1, const UserFull & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void TelegramCore::accountRegisterDeviceError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void TelegramCore::accountUnregisterDeviceError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void TelegramCore::accountUpdateNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void TelegramCore::accountGetNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void TelegramCore::accountResetNotifySettingsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void TelegramCore::accountUpdateProfileError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void TelegramCore::accountUpdateStatusError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void TelegramCore::accountGetWallPapersError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void TelegramCore::accountCheckUsernameError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void TelegramCore::accountUpdateUsernameError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void TelegramCore::accountGetPrivacyError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void TelegramCore::accountSetPrivacyError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void TelegramCore::accountDeleteAccountError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void TelegramCore::accountGetAccountTTLError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void TelegramCore::accountSetAccountTTLError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void TelegramCore::accountSendChangePhoneCodeError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void TelegramCore::accountChangePhoneError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void TelegramCore::accountUpdateDeviceLockedError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void TelegramCore::accountGetAuthorizationsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void TelegramCore::accountResetAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void TelegramCore::accountGetPasswordError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void TelegramCore::accountGetPasswordSettingsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void TelegramCore::accountUpdatePasswordSettingsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void TelegramCore::authCheckPhoneError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void TelegramCore::authSendCodeError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}

// SIGNAL 170
void TelegramCore::authSendCallError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 170, _a);
}

// SIGNAL 171
void TelegramCore::authSignUpError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 171, _a);
}

// SIGNAL 172
void TelegramCore::authSignInError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 172, _a);
}

// SIGNAL 173
void TelegramCore::authLogOutError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 173, _a);
}

// SIGNAL 174
void TelegramCore::authResetAuthorizationsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 174, _a);
}

// SIGNAL 175
void TelegramCore::authSendInvitesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 175, _a);
}

// SIGNAL 176
void TelegramCore::authExportAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 176, _a);
}

// SIGNAL 177
void TelegramCore::authImportAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 177, _a);
}

// SIGNAL 178
void TelegramCore::authBindTempAuthKeyError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 178, _a);
}

// SIGNAL 179
void TelegramCore::authSendSmsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 179, _a);
}

// SIGNAL 180
void TelegramCore::authImportBotAuthorizationError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 180, _a);
}

// SIGNAL 181
void TelegramCore::authCheckPasswordError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 181, _a);
}

// SIGNAL 182
void TelegramCore::authRequestPasswordRecoveryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 182, _a);
}

// SIGNAL 183
void TelegramCore::authRecoverPasswordError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 183, _a);
}

// SIGNAL 184
void TelegramCore::channelsGetDialogsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 184, _a);
}

// SIGNAL 185
void TelegramCore::channelsGetImportantHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 185, _a);
}

// SIGNAL 186
void TelegramCore::channelsReadHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 186, _a);
}

// SIGNAL 187
void TelegramCore::channelsDeleteMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 187, _a);
}

// SIGNAL 188
void TelegramCore::channelsDeleteUserHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 188, _a);
}

// SIGNAL 189
void TelegramCore::channelsReportSpamError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 189, _a);
}

// SIGNAL 190
void TelegramCore::channelsGetMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 190, _a);
}

// SIGNAL 191
void TelegramCore::channelsGetParticipantsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 191, _a);
}

// SIGNAL 192
void TelegramCore::channelsGetParticipantError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 192, _a);
}

// SIGNAL 193
void TelegramCore::channelsGetChannelsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 193, _a);
}

// SIGNAL 194
void TelegramCore::channelsGetFullChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 194, _a);
}

// SIGNAL 195
void TelegramCore::channelsCreateChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 195, _a);
}

// SIGNAL 196
void TelegramCore::channelsEditAboutError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 196, _a);
}

// SIGNAL 197
void TelegramCore::channelsEditAdminError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 197, _a);
}

// SIGNAL 198
void TelegramCore::channelsEditTitleError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 198, _a);
}

// SIGNAL 199
void TelegramCore::channelsEditPhotoError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 199, _a);
}

// SIGNAL 200
void TelegramCore::channelsToggleCommentsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 200, _a);
}

// SIGNAL 201
void TelegramCore::channelsCheckUsernameError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 201, _a);
}

// SIGNAL 202
void TelegramCore::channelsUpdateUsernameError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 202, _a);
}

// SIGNAL 203
void TelegramCore::channelsJoinChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 203, _a);
}

// SIGNAL 204
void TelegramCore::channelsLeaveChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 204, _a);
}

// SIGNAL 205
void TelegramCore::channelsInviteToChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 205, _a);
}

// SIGNAL 206
void TelegramCore::channelsKickFromChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 206, _a);
}

// SIGNAL 207
void TelegramCore::channelsExportInviteError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 207, _a);
}

// SIGNAL 208
void TelegramCore::channelsDeleteChannelError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 208, _a);
}

// SIGNAL 209
void TelegramCore::contactsGetStatusesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 209, _a);
}

// SIGNAL 210
void TelegramCore::contactsGetContactsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 210, _a);
}

// SIGNAL 211
void TelegramCore::contactsImportContactsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 211, _a);
}

// SIGNAL 212
void TelegramCore::contactsGetSuggestedError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 212, _a);
}

// SIGNAL 213
void TelegramCore::contactsDeleteContactError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 213, _a);
}

// SIGNAL 214
void TelegramCore::contactsDeleteContactsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 214, _a);
}

// SIGNAL 215
void TelegramCore::contactsBlockError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 215, _a);
}

// SIGNAL 216
void TelegramCore::contactsUnblockError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 216, _a);
}

// SIGNAL 217
void TelegramCore::contactsGetBlockedError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 217, _a);
}

// SIGNAL 218
void TelegramCore::contactsExportCardError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 218, _a);
}

// SIGNAL 219
void TelegramCore::contactsImportCardError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 219, _a);
}

// SIGNAL 220
void TelegramCore::contactsSearchError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 220, _a);
}

// SIGNAL 221
void TelegramCore::contactsResolveUsernameError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 221, _a);
}

// SIGNAL 222
void TelegramCore::helpGetConfigError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 222, _a);
}

// SIGNAL 223
void TelegramCore::helpGetNearestDcError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 223, _a);
}

// SIGNAL 224
void TelegramCore::helpGetAppUpdateError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 224, _a);
}

// SIGNAL 225
void TelegramCore::helpSaveAppLogError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 225, _a);
}

// SIGNAL 226
void TelegramCore::helpGetInviteTextError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 226, _a);
}

// SIGNAL 227
void TelegramCore::helpGetSupportError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 227, _a);
}

// SIGNAL 228
void TelegramCore::helpGetAppChangelogError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 228, _a);
}

// SIGNAL 229
void TelegramCore::messagesGetMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 229, _a);
}

// SIGNAL 230
void TelegramCore::messagesGetDialogsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 230, _a);
}

// SIGNAL 231
void TelegramCore::messagesGetHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 231, _a);
}

// SIGNAL 232
void TelegramCore::messagesSearchError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 232, _a);
}

// SIGNAL 233
void TelegramCore::messagesReadHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 233, _a);
}

// SIGNAL 234
void TelegramCore::messagesDeleteHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 234, _a);
}

// SIGNAL 235
void TelegramCore::messagesDeleteMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 235, _a);
}

// SIGNAL 236
void TelegramCore::messagesReceivedMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 236, _a);
}

// SIGNAL 237
void TelegramCore::messagesSetTypingError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 237, _a);
}

// SIGNAL 238
void TelegramCore::messagesSendMessageError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 238, _a);
}

// SIGNAL 239
void TelegramCore::messagesSendMediaError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 239, _a);
}

// SIGNAL 240
void TelegramCore::messagesForwardMessagesError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 240, _a);
}

// SIGNAL 241
void TelegramCore::messagesReportSpamError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 241, _a);
}

// SIGNAL 242
void TelegramCore::messagesGetChatsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 242, _a);
}

// SIGNAL 243
void TelegramCore::messagesGetFullChatError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 243, _a);
}

// SIGNAL 244
void TelegramCore::messagesEditChatTitleError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 244, _a);
}

// SIGNAL 245
void TelegramCore::messagesEditChatPhotoError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 245, _a);
}

// SIGNAL 246
void TelegramCore::messagesAddChatUserError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 246, _a);
}

// SIGNAL 247
void TelegramCore::messagesDeleteChatUserError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 247, _a);
}

// SIGNAL 248
void TelegramCore::messagesCreateChatError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 248, _a);
}

// SIGNAL 249
void TelegramCore::messagesForwardMessageError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 249, _a);
}

// SIGNAL 250
void TelegramCore::messagesSendBroadcastError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 250, _a);
}

// SIGNAL 251
void TelegramCore::messagesGetDhConfigError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 251, _a);
}

// SIGNAL 252
void TelegramCore::messagesRequestEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 252, _a);
}

// SIGNAL 253
void TelegramCore::messagesAcceptEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 253, _a);
}

// SIGNAL 254
void TelegramCore::messagesDiscardEncryptionError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 254, _a);
}

// SIGNAL 255
void TelegramCore::messagesSetEncryptedTypingError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 255, _a);
}

// SIGNAL 256
void TelegramCore::messagesReadEncryptedHistoryError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 256, _a);
}

// SIGNAL 257
void TelegramCore::messagesSendEncryptedError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 257, _a);
}

// SIGNAL 258
void TelegramCore::messagesSendEncryptedFileError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 258, _a);
}

// SIGNAL 259
void TelegramCore::messagesSendEncryptedServiceError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 259, _a);
}

// SIGNAL 260
void TelegramCore::messagesReceivedQueueError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 260, _a);
}

// SIGNAL 261
void TelegramCore::messagesReadMessageContentsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 261, _a);
}

// SIGNAL 262
void TelegramCore::messagesGetStickersError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 262, _a);
}

// SIGNAL 263
void TelegramCore::messagesGetAllStickersError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 263, _a);
}

// SIGNAL 264
void TelegramCore::messagesGetWebPagePreviewError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 264, _a);
}

// SIGNAL 265
void TelegramCore::messagesExportChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 265, _a);
}

// SIGNAL 266
void TelegramCore::messagesCheckChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 266, _a);
}

// SIGNAL 267
void TelegramCore::messagesImportChatInviteError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 267, _a);
}

// SIGNAL 268
void TelegramCore::messagesGetStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 268, _a);
}

// SIGNAL 269
void TelegramCore::messagesInstallStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 269, _a);
}

// SIGNAL 270
void TelegramCore::messagesUninstallStickerSetError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 270, _a);
}

// SIGNAL 271
void TelegramCore::messagesStartBotError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 271, _a);
}

// SIGNAL 272
void TelegramCore::messagesGetMessagesViewsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 272, _a);
}

// SIGNAL 273
void TelegramCore::messagesToggleChatAdminsError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 273, _a);
}

// SIGNAL 274
void TelegramCore::messagesEditChatAdminError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 274, _a);
}

// SIGNAL 275
void TelegramCore::messagesDeactivateChatError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 275, _a);
}

// SIGNAL 276
void TelegramCore::messagesMigrateChatError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 276, _a);
}

// SIGNAL 277
void TelegramCore::messagesSearchGlobalError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 277, _a);
}

// SIGNAL 278
void TelegramCore::photosUpdateProfilePhotoError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 278, _a);
}

// SIGNAL 279
void TelegramCore::photosUploadProfilePhotoError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 279, _a);
}

// SIGNAL 280
void TelegramCore::photosDeletePhotosError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 280, _a);
}

// SIGNAL 281
void TelegramCore::photosGetUserPhotosError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 281, _a);
}

// SIGNAL 282
void TelegramCore::updatesGetStateError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 282, _a);
}

// SIGNAL 283
void TelegramCore::updatesGetDifferenceError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 283, _a);
}

// SIGNAL 284
void TelegramCore::updatesGetChannelDifferenceError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 284, _a);
}

// SIGNAL 285
void TelegramCore::uploadSaveFilePartError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 285, _a);
}

// SIGNAL 286
void TelegramCore::uploadGetFileError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 286, _a);
}

// SIGNAL 287
void TelegramCore::uploadSaveBigFilePartError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 287, _a);
}

// SIGNAL 288
void TelegramCore::usersGetUsersError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 288, _a);
}

// SIGNAL 289
void TelegramCore::usersGetFullUserError(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 289, _a);
}

// SIGNAL 290
void TelegramCore::error(qint64 _t1, qint32 _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 290, _a);
}
QT_END_MOC_NAMESPACE
