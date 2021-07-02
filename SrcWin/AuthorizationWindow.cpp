#include "AuthorizationWindow.h"
#include <QString>
#include <QFile>

AuthorizationWindow::AuthorizationWindow(QWidget *parent)
	: QWidget(parent), ui(new Ui::AuthorizationWindow)
{
	ui->setupUi(this);
	ui->UserExist->setStyleSheet("QLabel {color : red; }");
	ui->FieldUsername->setStyleSheet("QLabel {color : red; }");
	ui->UserReg->setStyleSheet("QLabel {color : red; }");
	HideAll();
	ui->User->setToolTip("Input username");
	ui->Quit->setShortcut(tr("CTRL+Q"));
}

//MainWindow w;

AuthorizationWindow::~AuthorizationWindow()
{
	delete ui;
}

void AuthorizationWindow::display()
{
	w.show();
}

void AuthorizationWindow::on_Register_clicked()
{
	QString filename = ui->User->text() + ".txt";
	HideAll();
	QFile file(filename);
	if (ui->User->text().size() != 0)
	{
		if (file.open(QIODevice::WriteOnly))
		{}
		else {
			ui->UserReg->setVisible(true);
		}
	}
	else {
		ui->FieldUsername->setVisible(true);
	}
	//ui->User->setText("");
	file.close();
}

void AuthorizationWindow::on_LogIn_clicked()
{
	HideAll();
	QString filename = ui->User->text() + ".txt";
	QFile file(filename);
	if (ui->User->text().size() != 0)
	{
		w.SetFilename(filename);
		if (file.exists())
		{
			hide();
			display();
		}
		else{
			ui->UserExist->setVisible(true);
		}
	}
	else {
		ui->FieldUsername->setVisible(true);
	}
}

void AuthorizationWindow::on_Quit_clicked()
{
	QApplication::quit();
}

void AuthorizationWindow::HideAll()
{
	ui->UserExist->setVisible(false);
	ui->FieldUsername->setVisible(false);
	ui->UserReg->setVisible(false);
}
