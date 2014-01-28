#include <QApplication>
#include "mainwindow.h"
#include "QSqlDatabase"

int main(int argc, char *argv[])
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setUserName("root");
    db.setPassword("ini01");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("TCout");
    if(!db.open())
    {
        qDebug("Pas marche");


    }
    else
    {
        qDebug("CoREUSSI");

    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
