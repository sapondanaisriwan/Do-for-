#ifndef EDIT_H
#define EDIT_H

#include <QWidget>

namespace Ui {
class Edit;
}

class Edit : public QWidget
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Edit *ui;
};

#endif // EDIT_H
