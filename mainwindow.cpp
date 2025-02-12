#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "addthepage.h"
#include "edit.h"

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

void MainWindow::on_pushButton_clicked()
{

}




/*void MainWindow::on_pushAdd_clicked()
{



       addthepage *addthepage = new addthepage(); // Create an instance of AddThePage (correct class name)
        addthepage->show();  // Show the new window
        this->close();  // Close the main window


}*/


void MainWindow::on_pushAdd_clicked()
{
    addthepage *ch = new addthepage();
    ch->show();

}


void MainWindow::on_pushEdit_clicked()
{
    Edit *ed = new Edit();
    ed->show();

}

