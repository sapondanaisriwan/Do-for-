#include "addthepage.h"
#include "ui_addthepage.h"

addthepage::addthepage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addthepage)
{
    ui->setupUi(this);
}

addthepage::~addthepage()
{
    delete ui;
}

void addthepage::on_pushButton_2_clicked()
{
    QString str = ui->lineEdit->text();
    if(str =="") return;

    ui->listWidget->addItem(str);



    QString str_meaning = ui->lineEdit_Meaning->text();
    if(str_meaning =="") return;

    ui->listWidget_Meaning->addItem(str_meaning);

}


void addthepage::on_pushButton_Remove_clicked()
{
    if(mnSelected != -1){
        QListWidgetItem *it = ui->listWidget->takeItem(mnSelected);
        delete it;
    }
    ui->listWidget->setCurrentRow(-1);



    if(mnSelected != -1){
        QListWidgetItem *that = ui->listWidget_Meaning->takeItem(mnSelected);
        delete that;
    }
    ui->listWidget_Meaning->setCurrentRow(-1);
}



void addthepage::on_listWidget_currentRowChanged(int currentRow)
{
    mnSelected = currentRow;
}



void addthepage::on_listWidget_Meaning_currentRowChanged(int currentRow)
{
    mnSelected = currentRow;
}


void addthepage::on_pushButton_clicked()
{
    this->close();
}

