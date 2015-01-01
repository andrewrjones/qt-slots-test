#ifndef CONTROLLER_H
#define CONTROLLER_H

#import "worker.h"

#include <QObject>

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = 0);
    void init();

signals:

public slots:
    void clickAction();

    void workDone();

private:
    Worker _worker;
};

#endif // CONTROLLER_H
