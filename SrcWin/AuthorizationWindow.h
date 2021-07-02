#pragma once

#include <QWidget>
#include "ui_AuthorizationWindow.h"
#include "PwdManagerVS.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AuthorizationWindow; }
QT_END_NAMESPACE

class AuthorizationWindow : public QWidget
{
	Q_OBJECT

public:
	AuthorizationWindow(QWidget *parent = nullptr);
	~AuthorizationWindow();
	void display();

private slots:
	void on_LogIn_clicked();

	void on_Register_clicked();

	void on_Quit_clicked();

private:
	MainWindow w;
	void HideAll();
	Ui::AuthorizationWindow* ui;
};
