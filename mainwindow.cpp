#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    this->setFixedSize(1600,1200);
}


void MainWindow::on_pushButton_clicked()
{
    this->setFixedSize(1280,720);
}





void MainWindow::on_pushButton_6_clicked()
{
    this->setFixedSize(1024,768);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->setFixedSize(800,600);
}


void MainWindow::on_pushButton_4_clicked()
{
    this->setFixedSize(640,480);
}


void MainWindow::on_pushButton_5_clicked()
{
    this->setFixedSize(320,200);
}

