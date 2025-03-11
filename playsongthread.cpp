#include "playsongthread.h"
#include "utils.h"
#include <QCoreApplication>
#include <QMetaObject>

void PlaySongThread::run() {
    qDebug() << "Thread PlaySong a inceput..." << "\n";

    while (true) {
        mutex.lock();

        if (!songQueue.isEmpty()) {
            QString song = songQueue.dequeue();
            QString extension = ".mp3";
            QString buildSongPath = QString("D:/Project/LearningQT/AudioPlayer/%1%2").arg(song).arg(extension);

            emit playSongSignal(buildSongPath);
              qDebug() << "Semnalul a fost emis cu calea melodiei: " << buildSongPath;
//            QThread::sleep(12);
        }
            mutex.unlock();

    }
}
