#include <QCoreApplication>
#include "inputuserthread.h"
#include "playsongthread.h"
#include "winap.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    InputUserThread textFromUser;
    PlaySongThread playlist;
    Winap winap;

    bool connected = QObject::connect(&playlist, &PlaySongThread::playSongSignal, &winap, &Winap::playSong, Qt::QueuedConnection);
    qDebug() << "Conectare semnal la slot: " << connected;

    textFromUser.start();
    playlist.start();
    textFromUser.wait();
    playlist.wait();
    return a.exec();
}
