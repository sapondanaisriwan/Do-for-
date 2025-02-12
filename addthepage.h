#ifndef ADDTHEPAGE_H
#define ADDTHEPAGE_H

#include <QWidget>

namespace Ui {
class addthepage;
}

class addthepage : public QWidget
{
    Q_OBJECT

public:
    explicit addthepage(QWidget *parent = nullptr);
    ~addthepage();

private slots:
    void on_pushButton_2_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButton_Remove_clicked();

    void on_listWidget_Meaning_currentRowChanged(int currentRow);

    void on_pushButton_clicked();

private:
    Ui::addthepage *ui;

    int mnSelected = -1;
};

#endif // ADDTHEPAGE_H
