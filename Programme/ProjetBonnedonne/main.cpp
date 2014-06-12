#include <QApplication>
#include "mainwindow.h"
#include "QSqlDatabase"
#include "ui_dialog.h"
#include "dialog.h"
#include "ui_mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Dialog connexion;
    connexion.show();
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setUserName("root");
    db.setPassword("");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("tcout");
    if(!db.open())
    {
        qDebug("Pas marche");


    }
    else
    {
        qDebug("CoREUSSI");


    }
    if (connexion.exec()== QDialog::Accepted )
    {
        QString login=connexion.ui->label_login->text();
    MainWindow w;
    w.show();
    w.ui->label_Num_User->setText(login);

    
    return a.exec();
    }
}
