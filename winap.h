#ifndef WINAP_H
#define WINAP_H
#include<QObject>
#include<QMediaPlayer>

class Winap: public QObject {
     Q_OBJECT
public slots:
    void playSong(const QString &songPath);
};

#endif // WINAP_H
