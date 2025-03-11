#ifndef INPUTUSERTHREAD_H
#define INPUTUSERTHREAD_H

#include <QThread>
#include <QDebug>
#include <QTextStream>
#include "utils.h"

class InputUserThread : public QThread {
    Q_OBJECT
  protected:
    void run() override;
  public:
    void displaySongs();
  signals:

  public slots:
};

#endif // INPUTUSERTHREAD_H
