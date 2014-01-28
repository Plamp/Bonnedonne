#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QStatusBar"
#include "QString"
#include "QSqlQuery"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ChargeUIAppli();
    this->ChargeProduit("%","%");
    ui->comboBox_Num_Fourni_Entree->setHidden(true);
    ui->comboBox_Num_Produit_Entree->setHidden(true);


    ui->tableWidgetStat->insertRow(0);
    ui->tableWidgetStat->setItem(0,0,new QTableWidgetItem("Brake France"));
    ui->tableWidgetStat->setItem(0,1,new QTableWidgetItem("27"));
    ui->tableWidgetStat->setItem(0,2,new QTableWidgetItem(QString::fromUtf8("422 €")));
    QPushButton *boutonDetail = new QPushButton("details");
    connect(boutonDetail, SIGNAL(clicked()), this, SLOT(afficheDetail()));
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidgetStat->setCellWidget(0,3,boutonDetail);
    ui->tableWidgetStat->resizeRowsToContents();
    ui->tableWidgetStat->resizeColumnsToContents();
    ui->stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficheDetail()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::ChargeUIAppli()
{
    // Vidage des QComboBox
    ui->comboBox_Entree_Type->clear();
    ui->comboBox_Num_Fourni_Entree->clear();
    ui->comboBox_Num_Produit_Entree->clear();
    ui->comboBox_Fourni_Commande->clear();
    // Ajout des type de produit dans la liste déroulante
    QSqlQuery req;
    ui->comboBox_Entree_Type->addItem("tout les types");
    ui->comboBox_Num_Fourni_Entree->addItem("%");
    ui->comboBox_Num_Produit_Entree->addItem("%");
    ui->comboBox_Fourni_Commande->addItem("tout les Fournisseurs");
    req.exec("select lib_TypeProduit from TypeProduit");
    while (req.next())
    {
        ui->comboBox_Entree_Type->addItem(req.value(0).toString());
    }

    // Ajout des fournisseurs dans la liste déroulante
    req.exec("select num_Fourni,nom_Fourni from Fournisseur where active=1");
    while (req.next())
    {
        ui->comboBox_Num_Fourni_Entree->addItem(req.value(0).toString());
        ui->comboBox_Fourni_Commande->addItem(req.value(1).toString());
    }
}

void MainWindow::ChargeProduit(QString fourni, QString type)
{
    ui->comboBox_Produit_Commande->clear();
    ui->comboBox_Num_Produit_Entree->clear();
    if (type=="tout les types")
    {
        type="%";
    }
    //recuperation des produit selon le fournisseur et le type
    QSqlQuery req;
    req.exec("select num_Produit,nom_Produit from Produit inner join TypeProduit on Produit.type_Produit=TypeProduit.num_TypeProduit where num_Fourni like'"+fourni+"' and lib_TypeProduit like '"+type+"' ;");
    qDebug()<<"select num_Produit,nom_Produit from Produit inner join TypeProduit on Produit.type_Produit=TypeProduit.num_TypeProduit where num_Fourni like'"+fourni+"' and lib_TypeProduit like '"+type+"' ;";
    while(req.next())
    {
        ui->comboBox_Num_Produit_Entree->addItem(req.value(0).toString());
        ui->comboBox_Produit_Commande->addItem(req.value(1).toString());
    }
}

void MainWindow::on_pushButtonSwitchPage_clicked()
{
    if(ui->pushButtonSwitchPage->text()=="Statistique")
    {
        ui->stackedWidget->setCurrentIndex(0);
        ui->pushButtonSwitchPage->setText("Application");

    }
    else
    {
        ui->stackedWidget->setCurrentIndex(1);
        ui->pushButtonSwitchPage->setText("Statistique");
    }
}

void MainWindow::on_pushButton_AjouterProduit_clicked()
{


    //ajout des produit dans la liste

    QString numP=ui->comboBox_Num_Produit_Entree->currentText();
    //recupération du prix unitaire
    QSqlQuery req;
    req.exec("Select pu_Produit,nom_Fourni from Produit natural join Fournisseur where num_Produit="+numP+" ;");
    qDebug()<<"Select pu_Produit,nom_Fourni from Produit natural join Fournisseur where num_Produit="+numP+" ;";
    req.first();
    QString pu=req.value(0).toString();
    QString produit=ui->comboBox_Produit_Commande->currentText();
    QString fourni=req.value(1).toString();
    ui->tableWidget->insertRow(0);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem(fourni));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(produit));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem(pu));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem(ui->doubleSpinBox_Quantit_Commande->text()));
    ui->tableWidget->resizeColumnsToContents();
    //recupération du nombre de produit dans la liste;
    this->ChargeMontant();
}
QString MainWindow::recupQuant(int row)
{
    QTableWidgetItem * item = ui->tableWidget->item(row,2);
    QString quantite = item->text();
    return(quantite);

}

float MainWindow::recupPU(int row)
{
    QTableWidgetItem *item = ui->tableWidget->item(row,3);
    float pu = item->text().toFloat();
    return(pu);
}

void MainWindow::ChargeMontant()
{
    //recupération du nombre de produit dans la liste;
    float montant=0;
    int nbLigne=ui->tableWidget->rowCount();
    for (int no=0;no<=nbLigne-1;no++)
    {

        //recupération du montant selon la quantité et le PU
        float pu = recupPU(no);
        float quantite = recupQuant(no).toFloat();
        float total=pu*quantite;
        ui->tableWidget->setItem(no,4,new QTableWidgetItem(QString::number(total)));
        //incrementation du montant total
        QTableWidgetItem *item = ui->tableWidget->item(no,4);
        float value = item->text().toFloat();
        montant=montant+value;
    }
    ui->label_Montant->setText(QString::number(montant));
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_comboBox_Fourni_Commande_currentIndexChanged()
{
    int index=ui->comboBox_Fourni_Commande->currentIndex();
    ui->comboBox_Num_Fourni_Entree->setCurrentIndex(index);
    QString numF=ui->comboBox_Num_Fourni_Entree->currentText();
    QString type=ui->comboBox_Entree_Type->currentText();
    this->ChargeProduit(numF,type);

}

void MainWindow::on_comboBox_Entree_Type_activated(const QString &arg1)
{
    int index=ui->comboBox_Fourni_Commande->currentIndex();
    ui->comboBox_Num_Fourni_Entree->setCurrentIndex(index);
    QString numF=ui->comboBox_Num_Fourni_Entree->currentText();
    QString type=ui->comboBox_Entree_Type->currentText();
    this->ChargeProduit(numF,type);
}

void MainWindow::on_comboBox_Produit_Commande_currentIndexChanged()
{
    int index=ui->comboBox_Produit_Commande->currentIndex();
    ui->comboBox_Num_Produit_Entree->setCurrentIndex(index);
}
