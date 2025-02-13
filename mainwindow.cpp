#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addthepage.h"

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

void MainWindow::on_pushAddBtn_clicked()
{
    addthepage *ch = new addthepage();
    ch->show();
}

