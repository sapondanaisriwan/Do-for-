#include "edit.h"
#include "ui_edit.h"

Edit::Edit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
}

Edit::~Edit()
{
    delete ui;
}



void Edit::on_pushButton_clicked()
{
    this-> close();
}

