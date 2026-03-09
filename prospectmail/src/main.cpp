#include <QGuiApplication>
#include <QObject>
#include <QString>
#include <QDir>
#include <QQmlApplicationEngine>
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QThread>

#include "pushclient.h"
#include <QDBusInterface>
#include <QDBusReply>
#include <QDBusConnectionInterface>

#include <QQuickView>
#include <QQmlContext>
#include <QScreen>


int main(int argc, char *argv[])
{

    PushClient notif;
    notif.send("Notification test");

    QCoreApplication::setOrganizationName("mathias");
    QCoreApplication::setApplicationName("prospectmail");

    QThread::sleep(10);
    notif.send("Notification test2");




    return 1;
}

