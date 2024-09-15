/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Nom_lineEdit;
    QLineEdit *Prenom_lineEdit;
    QLineEdit *Num_lineEdit;
    QLineEdit *Mdp_lineEdit;
    QPushButton *pushButton;
    QLabel *Erreur_label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *hide_Button;
    QPushButton *show_Button;
    QLabel *Vide_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(990, 665);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 931, 581));
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(20, 66, 124), stop:1 rgba(41, 184, 255, 255));\n"
"	color: rgba(255, 255, 255, 255);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(41, 184, 255, 255), stop:1 rgb(20, 66, 124));\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left: 5px;\n"
"	padding-top: 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(20, 66, 124), stop:1 rgba(41, 184, 255, 255));\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 321, 501));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 66, 124);\n"
"border-top-left-radius: 70px;"));
        label->setScaledContents(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 40, 450, 501));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-bottom-right-radius: 70px;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 80, 211, 40));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 200);"));
        Nom_lineEdit = new QLineEdit(widget);
        Nom_lineEdit->setObjectName(QString::fromUtf8("Nom_lineEdit"));
        Nom_lineEdit->setGeometry(QRect(420, 160, 171, 41));
        QFont font1;
        font1.setPointSize(15);
        Nom_lineEdit->setFont(font1);
        Nom_lineEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid rgb(20, 66, 124);\n"
"padding-bottom: 7px; "));
        Prenom_lineEdit = new QLineEdit(widget);
        Prenom_lineEdit->setObjectName(QString::fromUtf8("Prenom_lineEdit"));
        Prenom_lineEdit->setGeometry(QRect(650, 160, 171, 41));
        Prenom_lineEdit->setFont(font1);
        Prenom_lineEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid rgb(20, 66, 124);\n"
"padding-bottom: 7px; "));
        Num_lineEdit = new QLineEdit(widget);
        Num_lineEdit->setObjectName(QString::fromUtf8("Num_lineEdit"));
        Num_lineEdit->setGeometry(QRect(420, 260, 401, 41));
        Num_lineEdit->setFont(font1);
        Num_lineEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid rgb(20, 66, 124);\n"
"padding-bottom: 7px; "));
        Mdp_lineEdit = new QLineEdit(widget);
        Mdp_lineEdit->setObjectName(QString::fromUtf8("Mdp_lineEdit"));
        Mdp_lineEdit->setGeometry(QRect(420, 360, 401, 41));
        Mdp_lineEdit->setFont(font1);
        Mdp_lineEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid rgb(20, 66, 124);\n"
"padding-bottom: 7px; "));
        Mdp_lineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(424, 450, 401, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        Erreur_label = new QLabel(widget);
        Erreur_label->setObjectName(QString::fromUtf8("Erreur_label"));
        Erreur_label->setGeometry(QRect(450, 500, 351, 17));
        Erreur_label->setStyleSheet(QString::fromUtf8("color: red;"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 120, 320, 141));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 65);"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 130, 251, 41));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 210);"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 180, 291, 71));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 210);\n"
""));
        hide_Button = new QPushButton(widget);
        hide_Button->setObjectName(QString::fromUtf8("hide_Button"));
        hide_Button->setGeometry(QRect(780, 365, 35, 35));
        hide_Button->setCursor(QCursor(Qt::PointingHandCursor));
        hide_Button->setTabletTracking(false);
        hide_Button->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide_Button->setIcon(icon);
        hide_Button->setIconSize(QSize(35, 35));
        hide_Button->setCheckable(false);
        show_Button = new QPushButton(widget);
        show_Button->setObjectName(QString::fromUtf8("show_Button"));
        show_Button->setEnabled(true);
        show_Button->setGeometry(QRect(780, 365, 35, 35));
        show_Button->setCursor(QCursor(Qt::PointingHandCursor));
        show_Button->setTabletTracking(false);
        show_Button->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        show_Button->setIcon(icon1);
        show_Button->setIconSize(QSize(35, 35));
        show_Button->setCheckable(false);
        Vide_label = new QLabel(widget);
        Vide_label->setObjectName(QString::fromUtf8("Vide_label"));
        Vide_label->setGeometry(QRect(540, 500, 161, 17));
        Vide_label->setStyleSheet(QString::fromUtf8("color: red;"));
        label->raise();
        label_3->raise();
        label_4->raise();
        Nom_lineEdit->raise();
        Prenom_lineEdit->raise();
        Num_lineEdit->raise();
        Mdp_lineEdit->raise();
        pushButton->raise();
        Erreur_label->raise();
        label_6->raise();
        hide_Button->raise();
        Vide_label->raise();
        label_8->raise();
        label_7->raise();
        show_Button->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 990, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Se Connecter", nullptr));
        Nom_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Nom", nullptr));
        Prenom_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Prenom", nullptr));
        Num_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Numero d'inscription", nullptr));
        Mdp_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Mot de pass", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Se Connecter", nullptr));
        Erreur_label->setText(QApplication::translate("MainWindow", "Ces informations ne sont pas associ\303\251es \303\240 un compte", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Atomic Code", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Salut,\n"
"Pour passer l'examen du QCM il\n"
"est oblig\303\251 de connecter ", nullptr));
        hide_Button->setText(QString());
        show_Button->setText(QString());
        Vide_label->setText(QApplication::translate("MainWindow", "Champ obligatoire vide ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
