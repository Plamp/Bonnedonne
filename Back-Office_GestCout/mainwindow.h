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

private slots:


    void on_pushButton_Ajout_Prod_clicked();

    void on_tableView_Mod_Prod_clicked();

    void on_pushButton_Switch_clicked();

    void on_pushButton_Retour_Fourni_clicked();

    void on_pushButton_Retour_Prod_clicked();

    void on_pushButton_Mod_Fourni_clicked();

    void on_pushButton_Ajout_Fourni_clicked();

    void on_tableView_Mod_Fourni_clicked();

    void on_pushButton_Mod_Prod_clicked();

    void on_pushButton_Suppr_Prod_clicked();

    void on_pushButton_Suppr_Fourni_clicked();

    void on_pushButton_Fourni_page_suppr_clicked();

    void on_tableView_Fourni_Supr_clicked();

    void on_pushButton_Prod_suppr_clicked();

    void on_tableView_Prod_Supr_clicked();

    void on_pushButton_Retour_Suppr_P_clicked();

    void on_pushButton_Retour_Suppr_F_clicked();

    void on_comboBox_Fourni_Prod_Actu_currentIndexChanged();

    void on_comboBox_Type_Prod_Actu_currentIndexChanged();

private:
    Ui::MainWindow *ui;
    void ChargeProduit(QString fourni, QString type);
    void ChargeFourni();
    void ChargeUi();
    void ChargeUM(QString um);
    void ChargeFourniSuppr();
    void ChargeProduitSuppr();
};

#endif // MAINWINDOW_H
