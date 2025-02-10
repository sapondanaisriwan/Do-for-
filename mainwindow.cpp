#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QIcon> // for icon

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Flash Card");  // set title
    this->setFixedSize(800, 600);  // set dufaulf window to 800*600
    this->setWindowIcon(QIcon(":/icon/icon.png")); // set icon from image in qt resources file

    ui->picture_display->setScaledContents(true); // fill picture
    ui->picture_display->setPixmap(QPixmap(":/icon/icon.png")); // insert picture in label from resource
}

MainWindow::~MainWindow()
{
    delete ui;
}
