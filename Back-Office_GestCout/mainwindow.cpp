#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "QSqlQueryModel"
#include "QSqlQuery"
#include "QDebug"
#include "QModelIndex"
#include "QString"
#include "QStatusBar"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ChargeUi();
    this->ChargeFourni();
    this->ChargeProduit("%","%");

    ui->stackedWidget->setCurrentIndex(2);
    ui->tabWidget->setCurrentIndex(0);
    ui->label_Num_Fourni->setHidden(true);
    ui->label_Num_Produit->setHidden(true);
    ui->comboBox_Num_Fourni->setHidden(true);
    ui->comboBox_Num_Fourni_New_Prod->setHidden(true);

}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::ChargeProduit(QString fourni,QString type)
{
    //qDebug()<< fourni+" "+type;
    if (type=="Tout les types")
    {
        type="%";
    }
    if (fourni==0)
    {
        fourni="%";
    }
    QSqlQueryModel *modelProduit = new QSqlQueryModel;
    modelProduit->setQuery("Select num_Produit,num_Fourni,nom_Fourni,ref_Produit,nom_Produit,pu_Produit,lib_typeProduit,um_Produit FROM Produit inner join TypeProduit on Produit.type_Produit=TypeProduit.num_TypeProduit natural join Fournisseur where active=1 and num_Fourni like '"+fourni+"' and lib_typeProduit like '"+type+"'; ");

    modelProduit->setHeaderData(2, Qt::Horizontal, tr("nom du fournisseur"));
    modelProduit->setHeaderData(3, Qt::Horizontal, tr("Reference"));
    modelProduit->setHeaderData(4, Qt::Horizontal, tr("Nom commercial"));
    modelProduit->setHeaderData(5, Qt::Horizontal, tr("Prix unitaire"));
    modelProduit->setHeaderData(6, Qt::Horizontal, tr("Type"));
    modelProduit->setHeaderData(7, Qt::Horizontal, trUtf8("Unité de mesure"));
    ui->tableView_Mod_Prod->setModel(modelProduit);
    ui->tableView_Mod_Prod->show();
    ui->tableView_Mod_Prod->resizeColumnsToContents();
    ui->tableView_Mod_Prod->setColumnHidden(0,true);
    ui->tableView_Mod_Prod->setColumnHidden(1,true);
}

void MainWindow::ChargeProduitSuppr()
{
    QSqlQueryModel *modelProduit = new QSqlQueryModel;
    modelProduit->setQuery("Select num_Produit,num_Fourni,nom_Fourni,ref_Produit,nom_Produit,pu_Produit,lib_typeProduit,um_Produit FROM Produit inner join TypeProduit on Produit.type_Produit=TypeProduit.num_TypeProduit natural join Fournisseur where active=0");

    modelProduit->setHeaderData(2, Qt::Horizontal, tr("nom du fournisseur"));
    modelProduit->setHeaderData(3, Qt::Horizontal, tr("Reference"));
    modelProduit->setHeaderData(4, Qt::Horizontal, tr("Nom commercial"));
    modelProduit->setHeaderData(5, Qt::Horizontal, tr("Prix unitaire"));
    modelProduit->setHeaderData(6, Qt::Horizontal, tr("Type"));
    modelProduit->setHeaderData(7, Qt::Horizontal, trUtf8("Unité de mesure"));
    ui->tableView_Prod_Supr->setModel(modelProduit);
    ui->tableView_Prod_Supr->show();
    ui->tableView_Prod_Supr->resizeColumnsToContents();
    ui->tableView_Prod_Supr->setColumnHidden(0,true);
    ui->tableView_Prod_Supr->setColumnHidden(1,true);
}



void MainWindow::ChargeFourni()
{
    QSqlQueryModel *modelFourni = new QSqlQueryModel;
    modelFourni->setQuery("Select num_Fourni,nom_Fourni,ville_Fourni,rue_Fourni,cp_Fourni,tel_Fourni,courriel_Fourni FROM Fournisseur where active=1");
    modelFourni->setHeaderData(1, Qt::Horizontal, tr("nom"));
    modelFourni->setHeaderData(2, Qt::Horizontal, tr("Ville"));
    modelFourni->setHeaderData(3, Qt::Horizontal, tr("Rue"));
    modelFourni->setHeaderData(4, Qt::Horizontal, tr("Code Postal"));
    modelFourni->setHeaderData(5, Qt::Horizontal, tr("Telephone"));
    modelFourni->setHeaderData(6, Qt::Horizontal, tr("Courriel"));
    ui->tableView_Mod_Fourni->setModel(modelFourni);
    ui->tableView_Mod_Fourni->show();
    ui->tableView_Mod_Fourni->resizeColumnsToContents();
    ui->tableView_Mod_Fourni->setColumnHidden(0,true);
}
void MainWindow::ChargeFourniSuppr()
{
    QSqlQueryModel *modelFourni = new QSqlQueryModel;
    modelFourni->setQuery("Select num_Fourni,nom_Fourni,ville_Fourni,rue_Fourni,cp_Fourni,tel_Fourni,courriel_Fourni FROM Fournisseur where active=0");
    modelFourni->setHeaderData(1, Qt::Horizontal, tr("nom"));
    modelFourni->setHeaderData(2, Qt::Horizontal, tr("Ville"));
    modelFourni->setHeaderData(3, Qt::Horizontal, tr("Rue"));
    modelFourni->setHeaderData(4, Qt::Horizontal, tr("Code Postal"));
    modelFourni->setHeaderData(5, Qt::Horizontal, tr("Telephone"));
    modelFourni->setHeaderData(6, Qt::Horizontal, tr("Courriel"));
    ui->tableView_Fourni_Supr->setModel(modelFourni);
    ui->tableView_Fourni_Supr->show();
    ui->tableView_Fourni_Supr->resizeColumnsToContents();
    ui->tableView_Fourni_Supr->setColumnHidden(0,true);
}
void MainWindow::ChargeUi()
{
    ui->comboBox_Ajout_Fourni_Prod->clear();
    ui->comboBox_Ajout_Type_Prod->clear();
    ui->comboBox_Ajout_UM_Prod->clear();
    ui->comboBox_Num_Fourni->clear();
    ui->comboBox_Fourni_Prod_Actu->clear();
    ui->comboBox_Type_Prod_Actu->clear();
    ui->comboBox_Fourni_Prod_Actu->addItem("Tout les fournisseurs");
    ui->comboBox_Type_Prod_Actu->addItem("Tout les types");
    //ajout des fournisseurs dans la comboBox(onglet Produit)
    QSqlQuery req;
    req.exec("select nom_Fourni,num_Fourni from Fournisseur where Active=1");
    while(req.next())
    {
        ui->comboBox_Ajout_Fourni_Prod->addItem(req.value(0).toString());
        ui->comboBox_Num_Fourni_New_Prod->addItem(req.value(1).toString());
        ui->comboBox_Fourni_Prod_Actu->addItem(req.value(0).toString());
        ui->comboBox_Num_Fourni->addItem(req.value(1).toString());
    }
    //Ajout des types de produits dans la comboBox(onglet Produit)
    req.exec("select lib_TypeProduit from TypeProduit");
    while(req.next())
    {
        ui->comboBox_Ajout_Type_Prod->addItem(req.value(0).toString());
        ui->comboBox_Type_Prod_Actu->addItem(req.value(0).toString());
    }
    ui->comboBox_Ajout_UM_Prod->addItem(trUtf8("pièce"));
    ui->comboBox_Ajout_UM_Prod->addItem("cm");
    ui->comboBox_Ajout_UM_Prod->addItem("l");
    ui->comboBox_Ajout_UM_Prod->addItem("kg");
}
void MainWindow::ChargeUM(QString um)
{
    QStringList umSup;

    if (um=="kg")
    {
        umSup << trUtf8("pièce") << "cm" << "L";
        ui->comboBox_UM_Mod_Prod->addItems(umSup);
    }
    else if(um=="cm")
    {
        umSup << trUtf8("pièce") << "kg" << "L";
        ui->comboBox_UM_Mod_Prod->addItems(umSup);
    }
    else if(um=="L")
    {
        umSup << trUtf8("pièce") << "kg" << "cm";
        ui->comboBox_UM_Mod_Prod->addItems(umSup);
    }
    else
    {
        umSup << "L" << "kg" << "cm";
        ui->comboBox_UM_Mod_Prod->addItems(umSup);
    }

}

void MainWindow::on_tableView_Mod_Fourni_clicked()
{
    int currentRow = ui->tableView_Mod_Fourni->currentIndex().row();
    QModelIndex id=ui->tableView_Mod_Fourni->currentIndex().sibling(currentRow, 0);
    QString numFourni=id.data().toString();
    ui->stackedWidget->setCurrentIndex(0);
    QSqlQuery req;
    req.exec("select nom_Fourni,ville_Fourni,rue_Fourni,cp_Fourni,courriel_Fourni,tel_Fourni FROM Fournisseur where num_Fourni="+numFourni+";");
    req.first();
    ui->lineEdit_Nom_Mod_Fourni->setText(req.value(0).toString());
    ui->lineEdit_Ville_Mod_Fourni->setText(req.value(1).toString());
    ui->lineEdit_Rue_Mod_Fourni->setText(req.value(2).toString());
    ui->lineEdit_CP_Mod_Fourni->setText(req.value(3).toString());
    ui->lineEdit_Courriel_Mode_Fourni->setText(req.value(4).toString());
    ui->lineEdit_Tel_Mod_Fourni->setText(req.value(5).toString());
    ui->label_Num_Fourni->setText(QString::number(currentRow+1));
}



void MainWindow::on_tableView_Mod_Prod_clicked()
{
    ui->comboBox_Fourni_Mod_Prod->clear();
    ui->comboBox_Type_Mod_Prod->clear();
    ui->comboBox_UM_Mod_Prod->clear();
    int currentRow = ui->tableView_Mod_Prod->currentIndex().row();
    QModelIndex idProd=ui->tableView_Mod_Prod->currentIndex().sibling(currentRow, 0);
    QModelIndex idFourni=ui->tableView_Mod_Prod->currentIndex().sibling(currentRow, 1);
    QString numProduit=idProd.data().toString();
    QString numFourni=idFourni.data().toString();
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQuery req;
    req.exec("Select nom_Fourni,ref_Produit,nom_Produit,pu_Produit,lib_TypeProduit,um_Produit FROM Fournisseur natural join Produit inner join TypeProduit on Produit.type_Produit=TypeProduit.num_TypeProduit where num_Produit="+numProduit+";");
    req.first();


    //implémentation des informations
    ui->label_Num_Produit->setText(QString::number(currentRow+1));
    ui->comboBox_Fourni_Mod_Prod->addItem(numFourni+","+req.value(0).toString());
    ui->lineEdit_Ref_Mod_Prod->setText(req.value(1).toString());
    ui->lineEdit_Nom_Mod_Prod->setText(req.value(2).toString());
    ui->lineEdit_PU_Mod_Prod->setText(req.value(3).toString());
    ui->comboBox_Type_Mod_Prod->addItem(req.value(4).toString());
    ui->comboBox_UM_Mod_Prod->addItem(req.value(5).toString());
    this->ChargeUM(req.value(5).toString());
    QString libType=req.value(4).toString();
    //ajout des informations complementaires dans les comboBox
    req.exec("select num_fourni,nom_Fourni from Fournisseur where num_Fourni!="+numFourni+" ;");
    //qDebug()<<"select num_fourni,nom_Fourni from Fournisseur where num_Fourni!="+numFourni+" ;";

    //Ajout des différents fournisseurs
    while(req.next())
    {
        ui->comboBox_Fourni_Mod_Prod->addItem(req.value(0).toString()+","+req.value(1).toString());
    }

    req.exec("select num_TypeProduit from TypeProduit where lib_TypeProduit='"+libType+"' ;");
    req.first();
    QString num_Type=req.value(0).toString();

    //Ajout des différents type de produits
    req.exec("select lib_TypeProduit from TypeProduit where num_TypeProduit!="+num_Type+" ;");
    //qDebug()<<"select lib_TypeProduit from TypeProduit where num_TypeProduit!="+num_Type+" ;";

    //Ajout des différents fournisseurs
    while(req.next())
    {
        ui->comboBox_Fourni_Mod_Prod->addItem(req.value(0).toString());
    }

}

void MainWindow::on_pushButton_Ajout_Prod_clicked()
{    
    QSqlQuery req;
    //récupération des données
    int fourni=ui->comboBox_Ajout_Fourni_Prod->currentIndex();
    ui->comboBox_Num_Fourni_New_Prod->setCurrentIndex(fourni);
    QString numF=ui->comboBox_Num_Fourni_New_Prod->currentText();
    QString ref=ui->lineEdit_Ajout_Ref_Prod->text();
    QString nom=ui->lineEdit_Ajout_Nom_Prod->text();
    QString pu=ui->lineEdit_Ajout_PU_Prod->text();
    QString um=ui->comboBox_Ajout_UM_Prod->currentText();
    QString type=QString::number(ui->comboBox_Ajout_Type_Prod->currentIndex()+1);
    //recupération du numéro du fournisseur
    req.exec("select max(num_Produit)+1 from Produit;");
    req.first();
    QString num=req.value(0).toString();
    if(num=="")
    {
        num="1";
    }
    req.exec("insert into Produit(num_Fourni,num_Produit,ref_Produit,nom_Produit,pu_Produit,um_Produit,type_Produit) values("+numF+","+num+",'"+ref+"','"+nom+"',"+pu+",'"+um+"','"+type+"') ;");
    //qDebug()<<"insert into Produit(num_Fourni,num_Produit,ref_Produit,nom_Produit,pu_Produit,um_Produit,type_Produit) values("+numF+","+num+",'"+ref+"','"+nom+"',"+pu+",'"+um+"','"+type+"') ;";
    req.first();
    this->ChargeProduit("%","%");
}
void MainWindow::on_pushButton_Switch_clicked()
{

    if(ui->pushButton_Switch->text()=="Produits")
    {
        ui->stackedWidget->setCurrentIndex(3);
        ui->pushButton_Switch->setText("Fournisseurs");
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(2);
        ui->pushButton_Switch->setText("Produits");
    }
}

void MainWindow::on_pushButton_Retour_Fourni_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_Retour_Prod_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_Mod_Fourni_clicked()
{
    //récupération des données
    QString nom=ui->lineEdit_Nom_Mod_Fourni->text();
    QString telephone=ui->lineEdit_Tel_Mod_Fourni->text();
    QString courriel=ui->lineEdit_Courriel_Mode_Fourni->text();
    QString rue=ui->lineEdit_Rue_Mod_Fourni->text();
    QString ville=ui->lineEdit_Ville_Mod_Fourni->text();
    QString cp=ui->lineEdit_CP_Mod_Fourni->text();
    QString num=ui->label_Num_Fourni->text();
    QSqlQuery req;
    //recherche du numéro de fournisseur

    req.exec("update Fournisseur set nom_Fourni='"+nom+"',tel_Fourni='"+telephone+"',courriel_Fourni='"+courriel+"',rue_Fourni='"+rue+"',cp_Fourni='"+cp+"',ville_Fourni='"+ville+"' where num_Fourni="+num+"");
    req.first();
    //qDebug()<<"update Fournisseur set nom_Fourni='"+nom+"',tel_Fourni='"+telephone+"',courriel_Fourni='"+courriel+"',rue_Fourni='"+rue+"',cp_Fourni='"+cp+"',ville_Fourni='"+ville+"' where num_Fourni="+num+";";
    this->ChargeFourni();
    this->ChargeUi();
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_Ajout_Fourni_clicked()
{
    //récupération des données
    QString nom=ui->lineEdit_Ajout_Nom_Fourni->text();
    QString telephone=ui->lineEdit_Ajout_Tel_Fourni->text();
    QString courriel=ui->lineEdit_Ajout_Courriel_Fourni->text();
    QString rue=ui->lineEdit_Ajout_Rue_Fourni->text();
    QString ville=ui->lineEdit_Ajout_Ville_Fourni->text();
    QString cp=ui->lineEdit_Ajout_CP_Fourni->text();
    QSqlQuery req;
    //recupération du numéro du fournisseur
    req.exec("select max(num_Fourni)+1 from Fournisseur");
    req.first();
    QString numFourni=req.value(0).toString();
    req.exec("insert into Fournisseur(num_Fourni,nom_Fourni,tel_Fourni,ville_Fourni,rue_Fourni,cp_Fourni,courriel_Fourni) values("+numFourni+",'"+nom+"','"+telephone+"','"+ville+"','"+rue+"','"+cp+"','"+courriel+"')");
    req.first();
    //qDebug()<<"insert into Fournisseur(num_Fourni,nom_Fourni,tel_Fourni,ville_Fourni,rue_Fourni,cp_Fourni,courriel_Fourni) values("+numFourni+",'"+nom+"','"+telephone+"','"+ville+"','"+rue+"','"+cp+"','"+courriel+"')";
    statusBar()->showMessage(trUtf8("fournisseur enregistré correctement."));
    this->ChargeFourni();
}


void MainWindow::on_pushButton_Mod_Prod_clicked()
{
    QString numProd=ui->label_Num_Produit->text();
    QStringList splitFourni=ui->comboBox_Fourni_Mod_Prod->currentText().split(",");
    QString num_Fourni=splitFourni[0];
    QString ref=ui->lineEdit_Ref_Mod_Prod->text();
    QString nom=ui->lineEdit_Nom_Mod_Prod->text();
    QString pu=ui->lineEdit_PU_Mod_Prod->text();
    QString type=ui->comboBox_Type_Mod_Prod->currentText();
    QString um=ui->comboBox_UM_Mod_Prod->currentText();

    //recuperation du num_Type_Produit
    QSqlQuery req;
    req.exec("select num_TypeProduit from TypeProduit where lib_TypeProduit='"+type+"' ;");
    req.first();
    QString num_Type=req.value(0).toString();

    //modification de la base
    req.exec("update Produit set num_Fourni="+num_Fourni+",ref_Produit='"+ref+"',nom_Produit='"+nom+"',pu_Produit="+pu+",um_Produit='"+um+"', type_Produit="+num_Type+" where num_Produit="+numProd+";");
    //qDebug()<<"update Produit set num_Fourni="+num_Fourni+",ref_Produit='"+ref+"',nom_Produit='"+nom+"',pu_Produit="+pu+",um_Produit='"+um+"', type_Produit="+num_Type+" where num_Produit="+numProd+";";
    req.first();
    this->ChargeProduit("%","%");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_Suppr_Prod_clicked()
{
    QString numProd=ui->label_Num_Produit->text();
    QSqlQuery req;
    req.exec("update Produit set active=0 where num_Produit="+numProd+" ;");
    //qDebug()<<"update Produit set active=0 where num_Produit="+numProd+" ;";
    this->ChargeProduit("%","%");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_Suppr_Fourni_clicked()
{
    QString numFourni=ui->label_Num_Fourni->text();
    QSqlQuery req;
    req.exec("update Fournisseur set active=0 where num_fourni="+numFourni+" ;");
    //qDebug()<<"update Fournisseur set active=0 where num_fourni="+numFourni+" ;";
    this->ChargeFourni();
    ui->stackedWidget->setCurrentIndex(2);
    this->ChargeProduit("%","%");
}

void MainWindow::on_pushButton_Fourni_page_suppr_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    this->ChargeFourniSuppr();
}

void MainWindow::on_tableView_Fourni_Supr_clicked()
{
    int currentRow = ui->tableView_Fourni_Supr->currentIndex().row();
    QModelIndex id=ui->tableView_Fourni_Supr->currentIndex().sibling(currentRow, 0);
    QString numFourni=id.data().toString();
    QSqlQuery req;
    req.exec("update Fournisseur set active=1 where num_Fourni="+numFourni+";");
    req.first();
    this->ChargeFourniSuppr();
    this->ChargeFourni();
    this->ChargeUi();
    this->ChargeProduit("%","%");
}


void MainWindow::on_pushButton_Prod_suppr_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    this->ChargeProduitSuppr();

}

void MainWindow::on_tableView_Prod_Supr_clicked()
{
    int currentRow = ui->tableView_Prod_Supr->currentIndex().row();
    QModelIndex idProd=ui->tableView_Prod_Supr->currentIndex().sibling(currentRow, 0);
    QString numProduit=idProd.data().toString();
    QSqlQuery req;
    req.exec("update Produit set active=1 where num_Produit="+numProduit+";");
    req.first();
    this->ChargeProduitSuppr();
    this->ChargeProduit("%","%");
}

void MainWindow::on_pushButton_Retour_Suppr_P_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_Retour_Suppr_F_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_comboBox_Fourni_Prod_Actu_currentIndexChanged()
{
    int indexFourni=ui->comboBox_Fourni_Prod_Actu->currentIndex();
    ui->comboBox_Num_Fourni->setCurrentIndex(indexFourni-1);
    QString numFourni=ui->comboBox_Num_Fourni->currentText();
    QString type=ui->comboBox_Type_Prod_Actu->currentText();
    this->ChargeProduit(numFourni,type);
}

void MainWindow::on_comboBox_Type_Prod_Actu_currentIndexChanged()
{
    int indexFourni=ui->comboBox_Fourni_Prod_Actu->currentIndex();
    ui->comboBox_Num_Fourni->setCurrentIndex(indexFourni-1);
    QString numFourni=ui->comboBox_Num_Fourni->currentText();
    QString type=ui->comboBox_Type_Prod_Actu->currentText();
    this->ChargeProduit(numFourni,type);
}

