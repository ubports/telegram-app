#include <QCoreApplication>
#include <QStringList>
#include <QTimer>

#include "pushhelper.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        qFatal("Usage: %s infile outfile", argv[0]); // no-i18n
    }

    QCoreApplication app(argc, argv);
    QStringList args = app.arguments();

    PushHelper pushHelper("com.ubuntu.telegram_telegram", // no-i18n
                          QString(args.at(1)), QString(args.at(2)), &app);

    QObject::connect(&pushHelper, SIGNAL(done()), &app, SLOT(quit()));
    pushHelper.process();

    // TODO check why I need this and the connect above doesn't work.
    QTimer::singleShot(500, &app, SLOT(quit()));

    return app.exec();
}
