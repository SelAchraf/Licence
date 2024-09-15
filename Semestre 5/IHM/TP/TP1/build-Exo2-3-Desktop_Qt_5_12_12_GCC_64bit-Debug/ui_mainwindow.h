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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNouveau;
    QAction *actionEnregistrer;
    QAction *actionQuiter;
    QAction *actionGris;
    QAction *actionBlanc;
    QAction *actionAfficher;
    QAction *actionCopier;
    QAction *actionColler;
    QAction *actionA_propos;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuA_propos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1253, 674);
        actionNouveau = new QAction(MainWindow);
        actionNouveau->setObjectName(QString::fromUtf8("actionNouveau"));
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QString::fromUtf8("actionEnregistrer"));
        actionQuiter = new QAction(MainWindow);
        actionQuiter->setObjectName(QString::fromUtf8("actionQuiter"));
        actionGris = new QAction(MainWindow);
        actionGris->setObjectName(QString::fromUtf8("actionGris"));
        actionBlanc = new QAction(MainWindow);
        actionBlanc->setObjectName(QString::fromUtf8("actionBlanc"));
        actionAfficher = new QAction(MainWindow);
        actionAfficher->setObjectName(QString::fromUtf8("actionAfficher"));
        actionCopier = new QAction(MainWindow);
        actionCopier->setObjectName(QString::fromUtf8("actionCopier"));
        actionCopier->setEnabled(true);
        actionCopier->setVisible(true);
        actionCopier->setIconVisibleInMenu(true);
        actionColler = new QAction(MainWindow);
        actionColler->setObjectName(QString::fromUtf8("actionColler"));
        actionColler->setEnabled(false);
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 120, 291, 191));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);\n"
"color: rgb(255, 255, 255);\n"
"font: 18pt \"Comic Sans MS\";"));
        label->setTextFormat(Qt::RichText);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(480, 340, 121, 41));
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(650, 340, 121, 41));
        lineEdit_2->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1253, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEdition = new QMenu(menubar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuA_propos = new QMenu(menubar);
        menuA_propos->setObjectName(QString::fromUtf8("menuA_propos"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuEdition->menuAction());
        menubar->addAction(menuA_propos->menuAction());
        menuFichier->addAction(actionNouveau);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionQuiter);
        menuEdition->addAction(actionGris);
        menuEdition->addAction(actionBlanc);
        menuEdition->addAction(actionAfficher);
        menuEdition->addAction(actionCopier);
        menuEdition->addAction(actionColler);
        menuA_propos->addAction(actionA_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNouveau->setText(QApplication::translate("MainWindow", "Nouveau ", nullptr));
        actionEnregistrer->setText(QApplication::translate("MainWindow", "Enregistrer ", nullptr));
        actionQuiter->setText(QApplication::translate("MainWindow", "Quiter", nullptr));
        actionGris->setText(QApplication::translate("MainWindow", "Gris", nullptr));
        actionBlanc->setText(QApplication::translate("MainWindow", "Blanc", nullptr));
        actionAfficher->setText(QApplication::translate("MainWindow", "Afficher", nullptr));
        actionCopier->setText(QApplication::translate("MainWindow", "Copier", nullptr));
        actionColler->setText(QApplication::translate("MainWindow", "Coller", nullptr));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos ...", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier ", nullptr));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", nullptr));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "A propos ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
