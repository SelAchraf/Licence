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
#include <QtWidgets/QGroupBox>
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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User;
    QLineEdit *lineEdit_Pass;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Cancel;
    QGroupBox *groupBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(542, 318);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 161, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 141, 61));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_User = new QLineEdit(centralwidget);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));
        lineEdit_User->setGeometry(QRect(200, 40, 300, 51));
        lineEdit_User->setFont(font);
        lineEdit_Pass = new QLineEdit(centralwidget);
        lineEdit_Pass->setObjectName(QString::fromUtf8("lineEdit_Pass"));
        lineEdit_Pass->setGeometry(QRect(200, 130, 300, 51));
        lineEdit_Pass->setFont(font);
        lineEdit_Pass->setEchoMode(QLineEdit::Password);
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(200, 200, 131, 41));
        pushButton_Login->setFont(font);
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(370, 200, 131, 41));
        pushButton_Cancel->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 521, 261));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        label->raise();
        label_2->raise();
        lineEdit_User->raise();
        lineEdit_Pass->raise();
        pushButton_Login->raise();
        pushButton_Cancel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 542, 22));
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
        label->setText(QApplication::translate("MainWindow", "User Name :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password :", nullptr));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Cancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
