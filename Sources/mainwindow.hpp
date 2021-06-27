#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_GetPassword_clicked();

    void on_Add_clicked();

    void on_Quit_clicked();

    void on_Service_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    void HideAll();
};
#endif // MAINWINDOW_HPP
