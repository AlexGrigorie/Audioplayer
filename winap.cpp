#include "winap.h"
#include<QDebug>
#include<QSound>

void Winap::playSong(const QString &songPath)
{
    qDebug() << "Redare melodie: " << songPath;
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:/Project/LearningQT/AudioPlayer/drums.mp3"));
    player->setVolume(100);
    player->play();
}
