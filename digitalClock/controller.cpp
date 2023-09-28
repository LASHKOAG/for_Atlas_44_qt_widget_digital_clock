#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    mainwindow = new MainWindow();
    id_timer_one_sec = startTimer(1000);
    connect(this, &Controller::signalOneSec, mainwindow, &MainWindow::update_lbl_sec);
}

void Controller::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_one_sec)
    {
        ++count_sec;
        mainwindow->setCount_sec(count_sec);
        emit signalOneSec();
    }
}

Controller::~Controller()
{
    if (mainwindow != nullptr){delete mainwindow;}
}

void Controller::run_app()
{
    mainwindow->show();
}
