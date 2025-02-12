#include "mainwindow.h"

#include <QApplication>
#include "addthepage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}



/*int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    addthepage addPage;  // Open addthepage.ui instead of mainwindow.ui
    addPage.show();

    return app.exec();
}*/
