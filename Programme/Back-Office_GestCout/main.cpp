#include <QApplication>
#include "mainwindow.h"
#include "dialog.h"
#include "QSqlDatabase"
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

        MainWindow w;
        w.show();


        return a.exec();
    }
    else
    {
        a.quit();
    }
}
