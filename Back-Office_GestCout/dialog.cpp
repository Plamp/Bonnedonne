#include "dialog.h"
#include "ui_dialog.h"
#include "QSqlDatabase"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_Connexion_clicked()
{
    QString login=ui->lineEdit_Login->text();
    QString password=ui->lineEdit_Password->text();
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setUserName(login);
    db.setPassword(password);
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("TCout");
    if(!db.open())
    {
        qDebug("Pas marche");
        reject();

    }
    else
    {
        qDebug("CoREUSSI");
        accept();
    }
}
