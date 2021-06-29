#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PwdManagerVS.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_GetPassword_clicked();

    void on_Add_clicked();

    void on_Quit_clicked();
private:
    Ui::MainWindow* ui;
    void HideAll();
};