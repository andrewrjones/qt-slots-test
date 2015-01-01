#include "controller.h"
#include <QDebug>

Controller::Controller(QObject *parent) :
    QObject(parent)
{
    Worker _worker(this);

    // creating the connection doesn't work here
//    connect(&_worker, SIGNAL(workDone()),
//            this, SLOT(workDone()));
}

void Controller::init()
{
    // but does here
    connect(&_worker, SIGNAL(workDone()),
            this, SLOT(workDone()));
}

void Controller::clickAction()
{
    qDebug() << "here";
    _worker.doWork();
}

void Controller::workDone()
{
    qDebug() << "work done";
}
