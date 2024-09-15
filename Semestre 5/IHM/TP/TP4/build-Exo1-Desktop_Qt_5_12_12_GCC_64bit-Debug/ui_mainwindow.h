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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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
    QLineEdit *Nom;
    QLineEdit *Prenom;
    QLabel *label;
    QLabel *label_2;
    QComboBox *Sexe;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(441, 483);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Nom = new QLineEdit(centralwidget);
        Nom->setObjectName(QString::fromUtf8("Nom"));
        Nom->setGeometry(QRect(70, 50, 301, 41));
        Prenom = new QLineEdit(centralwidget);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));
        Prenom->setGeometry(QRect(70, 140, 301, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 67, 17));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 81, 17));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        Sexe = new QComboBox(centralwidget);
        Sexe->addItem(QString());
        Sexe->addItem(QString());
        Sexe->addItem(QString());
        Sexe->setObjectName(QString::fromUtf8("Sexe"));
        Sexe->setGeometry(QRect(70, 230, 301, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 200, 81, 17));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 290, 181, 17));
        label_4->setFont(font1);
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 320, 301, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 380, 111, 41));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(260, 380, 111, 41));
        pushButton_2->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 441, 22));
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
        label->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        Sexe->setItemText(0, QApplication::translate("MainWindow", "Choisir le sexe", nullptr));
        Sexe->setItemText(1, QApplication::translate("MainWindow", "Homme", nullptr));
        Sexe->setItemText(2, QApplication::translate("MainWindow", "Femme", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Sexe", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Date de naissance", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Enregistrer", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
