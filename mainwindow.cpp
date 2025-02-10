#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Flash Card");  // Set the new title
    this->setFixedSize(800, 600);  // set dufaulf window to 800*600
}

MainWindow::~MainWindow()
{
    delete ui;
}
