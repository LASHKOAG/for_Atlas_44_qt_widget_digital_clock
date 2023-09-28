#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::getCount_sec() const
{
    return count_sec;
}

void MainWindow::setCount_sec(int value)
{
    if(value>59){value = 0;}
    count_sec = value;
}

void MainWindow::update_lbl_sec()
{

    ui->lblSecounds->setText(QString::number(count_sec));
}
