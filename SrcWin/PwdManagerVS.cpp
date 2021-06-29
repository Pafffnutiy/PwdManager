#include "PwdManagerVS.h"
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QString>
#include <QAction>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->Password->setVisible(false);
    //ui->Service->setVisible(false);
    //ui->GetPassword->setVisible(false);

    ui->Service->setToolTip("Input service's name");

    HideAll();
    ui->FieldSRV->setStyleSheet("QLabel {color : red; }");
    ui->FieldPWD->setStyleSheet("QLabel {color : red; }");
    ui->Exist->setStyleSheet("QLabel {color : red; }");
    ui->Unable->setStyleSheet("QLabel {color : red; }");
    ui->Empty->setStyleSheet("QLabel {color : red; }");
    ui->ExistSRV->setStyleSheet("QLabel {color : red; }");
    ui->Quit->setShortcut(tr("CTRL+Q"));
    //QObject::connect(&(ui->Quit), SIGNAL(clicked()), &app, SLOT(quit()));
    //connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HideAll()
{
    ui->Empty->setVisible(false);
    ui->Exist->setVisible(false);
    ui->FieldSRV->setVisible(false);
    ui->FieldPWD->setVisible(false);
    ui->Unable->setVisible(false);
    ui->ExistSRV->setVisible(false);
}

void MainWindow::on_GetPassword_clicked()
{
    HideAll();
    if (ui->Service->text().size() != 0)
    {
        ui->Password->setText("");
        QFile file("List.txt");
        QString pwd, srv;
        if (file.open(QIODevice::ReadOnly))
        {
            if (file.size())
            {
                QTextStream in(&file);
                while (!in.atEnd())
                {
                    QString line = in.readLine();
                    qint64 f = line.indexOf("Password: ");
                    if (f != -1)
                    {
                        srv = line.mid(0, f - 1);
                        pwd = line.mid(f + 10, line.size());
                    }
                    if (srv == ui->Service->text().toLower())
                        break;
                }

                if (srv == ui->Service->text().toLower())
                {
                    //decipher(pwd);
                    ui->Password->setText(pwd);
                }
                else
                {
                    ui->ExistSRV->setVisible(true);
                }

            }
            else {
                ui->Empty->setVisible(true);
            }
        }
        else {
            ui->Exist->setVisible(true);
        }
        file.close();
    }
    else {
        ui->FieldSRV->setVisible(true);
    }
}

static
void decipher(QString& obj);

static
void cipher(QString& obj);

void MainWindow::on_Add_clicked()
{
    HideAll();
    QFile file("List.txt");
    QTextStream in(&file);
    QTextStream out(&file);
    QString srv;
    if (ui->Service->text().size() != 0)
    {
        if (ui->Password->text().size() != 0)
        {
            if (file.open(QIODevice::Append))
            {
                QString pwd = ui->Password->text();
                //cipher(pwd);
                out << ui->Service->text().toLower() << " Password: " << pwd << '\n';
                ui->Service->setText("");
            }
            else {
                ui->Unable->setVisible(true);
            }
            /*QString pwd = ui->Password->text();
            //cipher(pwd);
            out << ui->Service->text().toLower() << " Password: "  << pwd << '\n';
            ui->Service->setText("");*/

        }
        else {
            ui->FieldPWD->setVisible(true);
        }
    }
    else {
        ui->FieldSRV->setVisible(true);
    }

    ui->Password->setText("");
    file.close();
}

void MainWindow::on_Quit_clicked()
{
    QApplication::quit();
}