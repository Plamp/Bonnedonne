/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QLabel *label_Titre;
    QPushButton *pushButtonSwitchPage;
    QFrame *line;
    QFrame *frame_Logo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *page_Appli;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidgetStat;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_Mois_Statistique;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QWidget *page_Stat;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_Num_Produit_Entree;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_test;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *comboBox_Num_Fourni_Entree;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_Fourni_Commande;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QComboBox *comboBox_Entree_Type;
    QLabel *label_7;
    QComboBox *comboBox_Produit_Commande;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_Quantit_Commande;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_AjouterProduit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLabel *label_Montant;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButton_ValiderCommande;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QComboBox *comboBox_Type_ProduitAfficher;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_18;
    QTableView *tableView_Stock;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_12;
    QWidget *page_Details;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_Detail;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_Detail;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_Num_User;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1028, 552);
        MainWindow->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Logo"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_Titre = new QLabel(centralWidget);
        label_Titre->setObjectName(QStringLiteral("label_Titre"));
        QPalette palette1;
        QBrush brush5(QColor(170, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        label_Titre->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Gentium Book Basic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        label_Titre->setFont(font);

        gridLayout_6->addWidget(label_Titre, 0, 2, 1, 1);

        pushButtonSwitchPage = new QPushButton(centralWidget);
        pushButtonSwitchPage->setObjectName(QStringLiteral("pushButtonSwitchPage"));
        pushButtonSwitchPage->setMinimumSize(QSize(154, 102));
        pushButtonSwitchPage->setMaximumSize(QSize(154, 102));

        gridLayout_6->addWidget(pushButtonSwitchPage, 0, 4, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 2, 0, 1, 5);

        frame_Logo = new QFrame(centralWidget);
        frame_Logo->setObjectName(QStringLiteral("frame_Logo"));
        frame_Logo->setMinimumSize(QSize(154, 102));
        frame_Logo->setMaximumSize(QSize(154, 102));
        frame_Logo->setAutoFillBackground(false);
        frame_Logo->setStyleSheet(QStringLiteral("QFrame {border-image:url(:/image/Logo)};"));
        frame_Logo->setFrameShape(QFrame::StyledPanel);
        frame_Logo->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(frame_Logo, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_Appli = new QWidget();
        page_Appli->setObjectName(QStringLiteral("page_Appli"));
        gridLayout_8 = new QGridLayout(page_Appli);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableWidgetStat = new QTableWidget(page_Appli);
        if (tableWidgetStat->columnCount() < 4)
            tableWidgetStat->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetStat->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetStat->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetStat->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetStat->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetStat->setObjectName(QStringLiteral("tableWidgetStat"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidgetStat->sizePolicy().hasHeightForWidth());
        tableWidgetStat->setSizePolicy(sizePolicy);
        tableWidgetStat->setMinimumSize(QSize(500, 160));
        tableWidgetStat->setAutoFillBackground(true);
        tableWidgetStat->setStyleSheet(QStringLiteral("QTableWidget { alignment: center;}"));
        tableWidgetStat->setAlternatingRowColors(true);
        tableWidgetStat->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetStat->setShowGrid(false);
        tableWidgetStat->setGridStyle(Qt::SolidLine);
        tableWidgetStat->setWordWrap(true);
        tableWidgetStat->setCornerButtonEnabled(false);
        tableWidgetStat->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetStat->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetStat->verticalHeader()->setVisible(false);

        gridLayout_8->addWidget(tableWidgetStat, 2, 1, 2, 1);

        horizontalSpacer_7 = new QSpacerItem(215, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(page_Appli);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        comboBox_Mois_Statistique = new QComboBox(page_Appli);
        comboBox_Mois_Statistique->setObjectName(QStringLiteral("comboBox_Mois_Statistique"));

        gridLayout_3->addWidget(comboBox_Mois_Statistique, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(page_Appli);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(214, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer, 1, 1, 1, 1);

        stackedWidget->addWidget(page_Appli);
        page_Stat = new QWidget();
        page_Stat->setObjectName(QStringLiteral("page_Stat"));
        gridLayout_9 = new QGridLayout(page_Stat);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        tabWidget = new QTabWidget(page_Stat);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(207, 207, 207, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush7(QColor(231, 231, 231, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(103, 103, 103, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(138, 138, 138, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette2);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        comboBox_Num_Produit_Entree = new QComboBox(tab);
        comboBox_Num_Produit_Entree->setObjectName(QStringLiteral("comboBox_Num_Produit_Entree"));

        horizontalLayout_4->addWidget(comboBox_Num_Produit_Entree);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        label_test = new QLabel(tab);
        label_test->setObjectName(QStringLiteral("label_test"));
        label_test->setFont(font1);

        horizontalLayout_4->addWidget(label_test);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        comboBox_Num_Fourni_Entree = new QComboBox(tab);
        comboBox_Num_Fourni_Entree->setObjectName(QStringLiteral("comboBox_Num_Fourni_Entree"));

        horizontalLayout_4->addWidget(comboBox_Num_Fourni_Entree);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_Fourni_Commande = new QComboBox(tab);
        comboBox_Fourni_Commande->setObjectName(QStringLiteral("comboBox_Fourni_Commande"));
        comboBox_Fourni_Commande->setMinimumSize(QSize(200, 0));
        comboBox_Fourni_Commande->setMaxVisibleItems(15);

        horizontalLayout_5->addWidget(comboBox_Fourni_Commande);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        comboBox_Entree_Type = new QComboBox(tab);
        comboBox_Entree_Type->setObjectName(QStringLiteral("comboBox_Entree_Type"));
        comboBox_Entree_Type->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(comboBox_Entree_Type);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_Produit_Commande = new QComboBox(tab);
        comboBox_Produit_Commande->setObjectName(QStringLiteral("comboBox_Produit_Commande"));
        comboBox_Produit_Commande->setMinimumSize(QSize(140, 0));

        horizontalLayout_6->addWidget(comboBox_Produit_Commande);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        doubleSpinBox_Quantit_Commande = new QDoubleSpinBox(tab);
        doubleSpinBox_Quantit_Commande->setObjectName(QStringLiteral("doubleSpinBox_Quantit_Commande"));

        horizontalLayout_8->addWidget(doubleSpinBox_Quantit_Commande);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        pushButton_AjouterProduit = new QPushButton(tab);
        pushButton_AjouterProduit->setObjectName(QStringLiteral("pushButton_AjouterProduit"));

        horizontalLayout_8->addWidget(pushButton_AjouterProduit);


        verticalLayout_2->addLayout(horizontalLayout_8);

        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        label_Montant = new QLabel(tab);
        label_Montant->setObjectName(QStringLiteral("label_Montant"));

        horizontalLayout_9->addWidget(label_Montant);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);

        pushButton_ValiderCommande = new QPushButton(tab);
        pushButton_ValiderCommande->setObjectName(QStringLiteral("pushButton_ValiderCommande"));

        horizontalLayout_10->addWidget(pushButton_ValiderCommande);


        verticalLayout_3->addLayout(horizontalLayout_10);


        gridLayout_2->addLayout(verticalLayout_3, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_12->addWidget(label_11);

        comboBox_Type_ProduitAfficher = new QComboBox(tab_2);
        comboBox_Type_ProduitAfficher->setObjectName(QStringLiteral("comboBox_Type_ProduitAfficher"));

        horizontalLayout_12->addWidget(comboBox_Type_ProduitAfficher);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        horizontalSpacer_19 = new QSpacerItem(20, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);


        gridLayout_10->addLayout(horizontalLayout_13, 2, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_11->addWidget(label_10);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_18);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        tableView_Stock = new QTableView(tab_2);
        tableView_Stock->setObjectName(QStringLiteral("tableView_Stock"));

        gridLayout_10->addWidget(tableView_Stock, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_4, 1, 1, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_10->addWidget(label_12, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_9->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Stat);
        page_Details = new QWidget();
        page_Details->setObjectName(QStringLiteral("page_Details"));
        gridLayout = new QGridLayout(page_Details);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_9 = new QSpacerItem(185, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_Detail = new QLabel(page_Details);
        label_Detail->setObjectName(QStringLiteral("label_Detail"));
        QFont font2;
        font2.setPointSize(14);
        label_Detail->setFont(font2);

        gridLayout->addWidget(label_Detail, 0, 1, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(184, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        label_4 = new QLabel(page_Details);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(page_Details);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox_Detail = new QComboBox(page_Details);
        comboBox_Detail->setObjectName(QStringLiteral("comboBox_Detail"));

        horizontalLayout_3->addWidget(comboBox_Detail);


        gridLayout->addLayout(horizontalLayout_3, 3, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(page_Details);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_11 = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        pushButton = new QPushButton(page_Details);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_12 = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 4, 2, 1, 1);

        stackedWidget->addWidget(page_Details);

        gridLayout_6->addWidget(stackedWidget, 3, 0, 1, 5);

        label_Num_User = new QLabel(centralWidget);
        label_Num_User->setObjectName(QStringLiteral("label_Num_User"));

        gridLayout_6->addWidget(label_Num_User, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1028, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GestCout", 0));
        label_Titre->setText(QApplication::translate("MainWindow", "Gestcout", 0));
        pushButtonSwitchPage->setText(QApplication::translate("MainWindow", "Statistique", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetStat->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Fournisseur", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetStat->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "nombre de commande", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetStat->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Montant total", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetStat->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Action", 0));
        label_2->setText(QApplication::translate("MainWindow", "Choisissez le mois \303\240 \303\251tudier:", 0));
        comboBox_Mois_Statistique->clear();
        comboBox_Mois_Statistique->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "06/12", 0)
         << QApplication::translate("MainWindow", "07/12", 0)
        );
        label->setText(QApplication::translate("MainWindow", "Statistiques mensuelles:", 0));
        label_test->setText(QApplication::translate("MainWindow", "Nouvelle entr\303\251e :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Fournisseur :", 0));
        label_13->setText(QApplication::translate("MainWindow", "Type de produit :", 0));
        label_7->setText(QApplication::translate("MainWindow", "Produit :", 0));
        label_9->setText(QApplication::translate("MainWindow", "Quantit\303\251 :", 0));
        pushButton_AjouterProduit->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Fournisseur", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "PU", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Montant", 0));
        label_8->setText(QApplication::translate("MainWindow", "Montant total:", 0));
        label_Montant->setText(QString());
        pushButton_ValiderCommande->setText(QApplication::translate("MainWindow", "Valider", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Entr\303\251e de stock", 0));
        label_11->setText(QApplication::translate("MainWindow", "Type de produit \303\240 afficher:", 0));
        comboBox_Type_ProduitAfficher->clear();
        comboBox_Type_ProduitAfficher->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Tout afficher", 0)
         << QApplication::translate("MainWindow", "Produit frais", 0)
        );
        label_10->setText(QApplication::translate("MainWindow", "Stock actuel:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Modifiez les quantit\303\251s de produits sorties du stock dans le tableau ci-dessus.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Sortie de stock", 0));
        label_Detail->setText(QApplication::translate("MainWindow", "Commande effectu\303\251 chez brake Frais durant le mois courant:", 0));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Commande effectu\303\251 par :", 0));
        comboBox_Detail->clear();
        comboBox_Detail->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sylvie le 03/01/2014", 0)
         << QApplication::translate("MainWindow", "Lulu le 05/01/2014", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "retour", 0));
        label_Num_User->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
