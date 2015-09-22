#pragma once

#include <libintl.h>

#include <QString>

const QString GETTEXT_DOMAIN   = "com.ubuntu.telegram";

#define _(value) gettext(value)
#define N_(value) gettext(value)
