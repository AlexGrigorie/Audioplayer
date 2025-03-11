#ifndef PLAYSONGTHREAD_H
#define PLAYSONGTHREAD_H

#include <QThread>
#include <QSound>
#include <QDebug>

class PlaySongThread : public QThread {
    Q_OBJECT
  protected:
    void run() override;
signals:
    void playSongSignal(const QString &songPath);
  public slots:
};

#endif // PLAYSONGTHREAD_H
