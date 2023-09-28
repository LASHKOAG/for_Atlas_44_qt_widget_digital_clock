#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QTimerEvent>
#include "mainwindow.h"

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    void timerEvent(QTimerEvent* event);
    ~Controller();

    void run_app();

    MainWindow* mainwindow{nullptr};

private:
    int id_timer_one_sec{-1};
    int count_sec{0};

signals:
    void signalOneSec();

public slots:
};

#endif // CONTROLLER_H
