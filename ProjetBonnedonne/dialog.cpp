#include "dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QDebug"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label_login->setHidden(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_Connexion_clicked()
{
    QString login=ui->lineEdit_Login->text();
    ui->label_login->setText(login);
    QString password=ui->lineEdit_Password->text();
    QSqlQuery req;

    req.exec("select count(*) from Utilisateur where login='"+login+"' and password='"+password+"' ;");
    req.first();
    QString connection=req.value(0).toString();
    if (connection=="1")
    {
        accept();
    }
    else
    {
        reject();
    }

}

