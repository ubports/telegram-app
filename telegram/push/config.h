#pragma once

// TODO This is shared with scope and should be put to a shared class.

#include "i18n.h"

const bool DEBUG = false;

const QString CONFIG_PATH       = "/home/phablet/.config/com.ubuntu.telegram";
const QString CACHE_PATH        = "/home/phablet/.cache/com.ubuntu.telegram";
const QString PROFILES_PATH     = CONFIG_PATH + "/profiles.sqlite";
const QString DATABASE_PATH_FMT = CONFIG_PATH + "/%1/database.db";

const QString PROFILE_DIR_FMT   = CACHE_PATH + "/%1/downloads/%2/profile";
const QString PROFILE_FILE_FMT  = "file://" + CACHE_PATH + "/%1/downloads/%2/profile/%3";