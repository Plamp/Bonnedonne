/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Jan 29 10:45:08 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_Logo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Titre;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Login;
    QPushButton *pushButton_Connexion;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QLabel *label_login;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(517, 213);
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
        Dialog->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Logo"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_Logo = new QFrame(Dialog);
        frame_Logo->setObjectName(QString::fromUtf8("frame_Logo"));
        frame_Logo->setMinimumSize(QSize(154, 102));
        frame_Logo->setMaximumSize(QSize(154, 102));
        frame_Logo->setAutoFillBackground(false);
        frame_Logo->setStyleSheet(QString::fromUtf8("QFrame {border-image:url(:/image/Logo)};"));
        frame_Logo->setFrameShape(QFrame::StyledPanel);
        frame_Logo->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_Logo, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(113, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_Titre = new QLabel(Dialog);
        label_Titre->setObjectName(QString::fromUtf8("label_Titre"));
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
        font.setFamily(QString::fromUtf8("Gentium Book Basic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        label_Titre->setFont(font);

        gridLayout->addWidget(label_Titre, 0, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 5);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 2, 0, 1, 5);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEdit_Login = new QLineEdit(Dialog);
        lineEdit_Login->setObjectName(QString::fromUtf8("lineEdit_Login"));

        gridLayout->addWidget(lineEdit_Login, 3, 1, 1, 2);

        pushButton_Connexion = new QPushButton(Dialog);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));

        gridLayout->addWidget(pushButton_Connexion, 3, 3, 2, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_Password = new QLineEdit(Dialog);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 4, 1, 1, 2);

        label_login = new QLabel(Dialog);
        label_login->setObjectName(QString::fromUtf8("label_login"));

        gridLayout->addWidget(label_login, 4, 4, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Connexion", 0, QApplication::UnicodeUTF8));
        label_Titre->setText(QApplication::translate("Dialog", "Gestcout", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Veuillez rentrez vos identifiants pour acceder \303\240 ce service.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Nom d'utilisateur :", 0, QApplication::UnicodeUTF8));
        lineEdit_Login->setPlaceholderText(QApplication::translate("Dialog", "Login", 0, QApplication::UnicodeUTF8));
        pushButton_Connexion->setText(QApplication::translate("Dialog", "Connexion", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        lineEdit_Password->setPlaceholderText(QApplication::translate("Dialog", "Password", 0, QApplication::UnicodeUTF8));
        label_login->setText(QApplication::translate("Dialog", "login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
