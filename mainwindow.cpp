#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "qscreen.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //setFixedSize(1280,720);
    showFullScreen();

    delete ui;

}
