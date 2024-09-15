/********************************************************************************
** Form generated from reading UI file 'page_5.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_5_H
#define UI_PAGE_5_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_5
{
public:
    QWidget *widget;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *GaucheTo4_pushButton;
    QPushButton *DroiteTo6_pushButton;
    QLabel *label_9;
    QRadioButton *Q5_R1_radioButton;
    QRadioButton *Q5_R2_radioButton_2;
    QRadioButton *Q5_R3_radioButton;
    QRadioButton *Q5_R4_radioButton;
    QLabel *label_10;

    void setupUi(QDialog *page_5)
    {
        if (page_5->objectName().isEmpty())
            page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->resize(990, 629);
        widget = new QWidget(page_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 951, 581));
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 106, 255), stop:1 rgba(41, 184, 255, 255));\n"
"	color: rgba(255, 255, 255, 210);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(41, 184, 255, 255), stop:1 rgba(0, 0, 106, 255));\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left: 5px;\n"
"	padding-top: 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 106, 255), stop:1 rgba(41, 184, 255, 255));\n"
"}\n"
"\n"
"\n"
""));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 40, 771, 501));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 66, 124);\n"
"border-radius: 30px;"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 90, 670, 2));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 210);\n"
"border-radius: 50px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 480, 670, 2));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 210);\n"
"border-radius: 50px;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(325, 190, 321, 48));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-radius: 7px;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(325, 250, 321, 48));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-radius: 7px;"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(325, 310, 321, 48));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-radius: 7px;"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(325, 370, 321, 48));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);\n"
"border-radius: 7px;"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 500, 241, 17));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color : white;"));
        GaucheTo4_pushButton = new QPushButton(widget);
        GaucheTo4_pushButton->setObjectName(QString::fromUtf8("GaucheTo4_pushButton"));
        GaucheTo4_pushButton->setEnabled(true);
        GaucheTo4_pushButton->setGeometry(QRect(420, 430, 41, 41));
        GaucheTo4_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        GaucheTo4_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        GaucheTo4_pushButton->setIcon(icon);
        GaucheTo4_pushButton->setIconSize(QSize(40, 40));
        DroiteTo6_pushButton = new QPushButton(widget);
        DroiteTo6_pushButton->setObjectName(QString::fromUtf8("DroiteTo6_pushButton"));
        DroiteTo6_pushButton->setGeometry(QRect(510, 430, 41, 41));
        DroiteTo6_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        DroiteTo6_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        DroiteTo6_pushButton->setIcon(icon1);
        DroiteTo6_pushButton->setIconSize(QSize(40, 40));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(462, 441, 51, 17));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));
        Q5_R1_radioButton = new QRadioButton(widget);
        Q5_R1_radioButton->setObjectName(QString::fromUtf8("Q5_R1_radioButton"));
        Q5_R1_radioButton->setGeometry(QRect(335, 205, 251, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        Q5_R1_radioButton->setFont(font2);
        Q5_R2_radioButton_2 = new QRadioButton(widget);
        Q5_R2_radioButton_2->setObjectName(QString::fromUtf8("Q5_R2_radioButton_2"));
        Q5_R2_radioButton_2->setGeometry(QRect(335, 265, 231, 21));
        Q5_R2_radioButton_2->setFont(font2);
        Q5_R3_radioButton = new QRadioButton(widget);
        Q5_R3_radioButton->setObjectName(QString::fromUtf8("Q5_R3_radioButton"));
        Q5_R3_radioButton->setGeometry(QRect(335, 325, 241, 21));
        Q5_R3_radioButton->setFont(font2);
        Q5_R4_radioButton = new QRadioButton(widget);
        Q5_R4_radioButton->setObjectName(QString::fromUtf8("Q5_R4_radioButton"));
        Q5_R4_radioButton->setGeometry(QRect(335, 385, 211, 21));
        Q5_R4_radioButton->setFont(font2);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(345, 90, 281, 111));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_5->raise();
        label_8->raise();
        GaucheTo4_pushButton->raise();
        DroiteTo6_pushButton->raise();
        label->raise();
        label_2->raise();
        label_9->raise();
        label_7->raise();
        label_6->raise();
        label_4->raise();
        label_3->raise();
        label_10->raise();
        Q5_R1_radioButton->raise();
        Q5_R2_radioButton_2->raise();
        Q5_R3_radioButton->raise();
        Q5_R4_radioButton->raise();

        retranslateUi(page_5);

        QMetaObject::connectSlotsByName(page_5);
    } // setupUi

    void retranslateUi(QDialog *page_5)
    {
        page_5->setWindowTitle(QApplication::translate("page_5", "Dialog", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("page_5", "S\303\251lectionner la bonne r\303\251ponse", nullptr));
        GaucheTo4_pushButton->setText(QString());
        DroiteTo6_pushButton->setText(QString());
        label_9->setText(QApplication::translate("page_5", "5 / 10", nullptr));
        Q5_R1_radioButton->setText(QApplication::translate("page_5", "Un r\303\251seau local", nullptr));
        Q5_R2_radioButton_2->setText(QApplication::translate("page_5", "Un ordinateur portable", nullptr));
        Q5_R3_radioButton->setText(QApplication::translate("page_5", "Un type de virus informatique", nullptr));
        Q5_R4_radioButton->setText(QApplication::translate("page_5", "Un logiciel de messagerie", nullptr));
        label_10->setText(QApplication::translate("page_5", "Qu'est-ce qu'un \"LAN\" dans\n"
"  le domaine informatique?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_5: public Ui_page_5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_5_H
