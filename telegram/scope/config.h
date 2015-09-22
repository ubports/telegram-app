#pragma once

#include "i18n.h"

const bool DEBUG = false;

const QString CONFIG_PATH       = "/home/phablet/.config/com.ubuntu.telegram";
const QString CACHE_PATH        = "/home/phablet/.cache/com.ubuntu.telegram";
const QString PROFILES_PATH     = CONFIG_PATH + "/profiles.sqlite";
const QString DATABASE_PATH_FMT = CONFIG_PATH + "/%1/database.db";

const QString PROFILE_PATH_FMT          = "file://" + CACHE_PATH + "/%1/downloads/%2/profile/%3.jpeg";
const QString PHOTO_PATH_FMT            = "file://" + CACHE_PATH + "/%1/downloads/%2/%3.jpeg";
const QString VIDEO_PATH_FMT            = "file://" + CACHE_PATH + "/%1/downloads/%2/%3.mp4";
const QString VIDEO_THUMB_PATH_FMT      = "file://" + CACHE_PATH + "/%1/downloads/%2/%3.mp4.jpeg";
const QString VIDEO_THUMB2_PATH_FMT     = "file://" + CACHE_PATH + "/%1/downloads/%2/thumb/%3.mp4.jpg";
// TRANSLATORS: Time format for items displayed in the scope.
const QString TIME_FORMAT = N_("h:mm ddd, dd-MM-yy");

const int LIMIT_UNREAD  = 10;
const int LIMIT_SURFACE = 10;
const int LIMIT_MEDIA   =  9;
const int LIMIT_SEARCH  = 30;

enum PeerType {
    typePeerUser = 0x9db1bc6d,
    typePeerChat = 0xbad0e5bb
};

enum MessageMedia {
   typeMessageMediaDocument = 0x2fda2204,
   typeMessageMediaContact = 0x5e7d2f39,
   typeMessageMediaEmpty = 0x3ded6320,
   typeMessageMediaVideo = 0xa2d24290,
   typeMessageMediaUnsupported = 0x29632a36,
   typeMessageMediaAudio = 0xc6b68300,
   typeMessageMediaPhoto = 0xc8c45a2a,
   typeMessageMediaGeo = 0x56e0d474
};