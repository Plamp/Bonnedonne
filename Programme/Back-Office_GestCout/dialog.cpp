#include "dialog.h"
#include "ui_dialog.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QDebug"

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
    QSqlQuery req ;
    req.exec("select count(*) from Utilisateur where login='"+login+"' and password='"+password+"' ;");
    qDebug()<<"select count(*) from Utilisateur where login='"+login+"' and password='"+password+"' ;";
    req.first();
    QString TestCo=req.value(0).toString();
    if (TestCo=="1")
    {
        accept();
    }
    else
    {
        reject();
    }
}
