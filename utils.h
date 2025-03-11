#ifndef UTILS_H
#define UTILS_H
#include <QQueue>
#include <QMutex>
extern QQueue<QString> songQueue;
extern QMutex mutex;
#endif // UTILS_H
