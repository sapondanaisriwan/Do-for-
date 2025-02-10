#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Flash Card");  // Set title
    this->setFixedSize(800, 600);  // set dufaulf window to 800*600
    this->setWindowIcon(QIcon(":/icon/icon.png")); // set icon from image in qt resources file

}

MainWindow::~MainWindow()
{
    delete ui;
}
