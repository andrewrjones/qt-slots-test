#include "worker.h"

Worker::Worker(QObject *parent) :
    QObject(parent)
{
}

void Worker::doWork()
{
    // Doing some work. May take a while.

    // Done. Emit signal.
    emit workDone();
}
