#include <QApplication>
#include "mainwindow.h"
#include "dialog.h"
#include "QtSql/QSqlDatabase"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog connexion;
    connexion.show();

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
