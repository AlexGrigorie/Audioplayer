#include "inputuserthread.h"

void InputUserThread::run() {
    qDebug() << "Thread InputUser a inceput..." << "\n";
    QTextStream inputUser(stdin);

    while (true) {
        QString text = inputUser.readLine();

        if (text == "exit") {
            return;
        }

        mutex.lock();
        songQueue.enqueue(text);
        mutex.unlock();
    }
}

void InputUserThread::displaySongs() {
    while (!songQueue.isEmpty()) {
        qDebug() << songQueue.dequeue();
    }
}
