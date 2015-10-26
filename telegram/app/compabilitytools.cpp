#include "compabilitytools.h"

#include <QDebug>
#include <QDir>
#include <QCoreApplication>
#include <QFileInfo>
#include <QFile>
#include <QIODevice>

#include <iostream>

#include "asemantools/asemanapplication.h"
#include "telegramqml_macros.h"
#include "upgradev2.h"

// Cutegram upgrade.
void CompabilityTools::version1()
{
    const QString & oldProfile = QDir::homePath() + "/.config/" + QCoreApplication::organizationDomain().toLower() + "." + QCoreApplication::applicationName().toLower();
    QFileInfo oldFile(oldProfile);

    const QString & newProfile = AsemanApplication::homePath();
    QFileInfo newFile(newProfile);
    if(!oldFile.exists() || newFile.exists())
        return;
    if(oldFile.isFile())
        return;

    QDir oldDir(oldProfile);
    oldDir.rename(oldProfile, newProfile);
}

void CompabilityTools::version2()
{
    UpgradeV2 *upgrader = new UpgradeV2();
    upgrader->upgrade();
    upgrader->deleteLater();
}
