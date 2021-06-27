/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *Service;
    QLineEdit *Password;
    QPushButton *GetPassword;
    QPushButton *Add;
    QLabel *Exist;
    QLabel *Empty;
    QLabel *FieldSRV;
    QLabel *FieldPWD;
    QLabel *Unable;
    QLabel *ExistSRV;
    QPushButton *Quit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(564, 329);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Service = new QLineEdit(centralwidget);
        Service->setObjectName(QString::fromUtf8("Service"));
        Service->setEnabled(true);
        Service->setGeometry(QRect(60, 90, 171, 31));
        Service->setFrame(true);
        Service->setCursorPosition(0);
        Service->setDragEnabled(false);
        Service->setClearButtonEnabled(false);
        Password = new QLineEdit(centralwidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(310, 90, 171, 31));
        Password->setReadOnly(false);
        GetPassword = new QPushButton(centralwidget);
        GetPassword->setObjectName(QString::fromUtf8("GetPassword"));
        GetPassword->setGeometry(QRect(230, 170, 91, 34));
        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(230, 220, 91, 34));
        Exist = new QLabel(centralwidget);
        Exist->setObjectName(QString::fromUtf8("Exist"));
        Exist->setGeometry(QRect(210, 270, 151, 31));
        Empty = new QLabel(centralwidget);
        Empty->setObjectName(QString::fromUtf8("Empty"));
        Empty->setGeometry(QRect(220, 280, 121, 18));
        FieldSRV = new QLabel(centralwidget);
        FieldSRV->setObjectName(QString::fromUtf8("FieldSRV"));
        FieldSRV->setGeometry(QRect(90, 70, 91, 18));
        FieldPWD = new QLabel(centralwidget);
        FieldPWD->setObjectName(QString::fromUtf8("FieldPWD"));
        FieldPWD->setGeometry(QRect(340, 70, 91, 18));
        Unable = new QLabel(centralwidget);
        Unable->setObjectName(QString::fromUtf8("Unable"));
        Unable->setGeometry(QRect(180, 150, 191, 18));
        ExistSRV = new QLabel(centralwidget);
        ExistSRV->setObjectName(QString::fromUtf8("ExistSRV"));
        ExistSRV->setGeometry(QRect(60, 130, 171, 18));
        Quit = new QPushButton(centralwidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));
        Quit->setGeometry(QRect(10, 280, 71, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Service->setText(QString());
        Service->setPlaceholderText(QCoreApplication::translate("MainWindow", "Service", nullptr));
        Password->setText(QString());
        Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        GetPassword->setText(QCoreApplication::translate("MainWindow", "Get password", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "Add password", nullptr));
        Exist->setText(QCoreApplication::translate("MainWindow", "File List.txt doesn't exiist", nullptr));
        Empty->setText(QCoreApplication::translate("MainWindow", "File List.txt is empty", nullptr));
        FieldSRV->setText(QCoreApplication::translate("MainWindow", "Field is empty", nullptr));
        FieldPWD->setText(QCoreApplication::translate("MainWindow", "Field is empty", nullptr));
        Unable->setText(QCoreApplication::translate("MainWindow", "Unable to open the file List.txt", nullptr));
        ExistSRV->setText(QCoreApplication::translate("MainWindow", "This service does not exist", nullptr));
        Quit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
