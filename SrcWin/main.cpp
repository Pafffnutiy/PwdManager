#include "PwdManagerVS.h"
#include "AuthorizationWindow.h"

#include <QInputDialog>
#include <QWidget>
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    AuthorizationWindow w1;
    //w.setWindowTitle("PwdManager");
    w1.setWindowTitle("Authorization");
    //w.show();
    w1.show();
    //wq.show();
    return a.exec();
}
