#include "mainwindow.h"
#include <iostream>
#include "./ui_mainwindow.h"

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




void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_eight_clicked(bool checked)
{

}

