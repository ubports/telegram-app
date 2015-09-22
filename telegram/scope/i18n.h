#pragma once

#include <libintl.h>

#include <QString>

const QString GETTEXT_DOMAIN   = "com.ubuntu.telegram";

// This is a trick to force qmake project pick up strings for translation.
#define N_(value) gettext(value)
