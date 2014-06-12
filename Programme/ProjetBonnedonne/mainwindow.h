#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QModelIndex"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    void login(QString login);
private slots:
    void on_pushButtonSwitchPage_clicked();
    void afficheDetail();
    void on_pushButton_AjouterProduit_clicked();

    void on_pushButton_clicked();

    void on_comboBox_Fourni_Commande_currentIndexChanged();

    void on_comboBox_Entree_Type_activated(const QString &arg1);

    void on_comboBox_Produit_Commande_currentIndexChanged();

private:
    void ChargeUIAppli();
    void ChargeProduit(QString fourni, QString type);

    void ChargeMontant();
    void modificationQuantite();
    QString recupQuant(int row);
    float recupPU(int row);

};

#endif // MAINWINDOW_H
