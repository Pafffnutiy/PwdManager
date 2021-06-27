#include "mainwindow.hpp"

#include <QInputDialog>
#include <QWidget>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("PwdManager");
    w.show();
    return a.exec();
}
