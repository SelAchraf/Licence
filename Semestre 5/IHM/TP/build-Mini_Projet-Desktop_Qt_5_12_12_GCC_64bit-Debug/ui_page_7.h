/********************************************************************************
** Form generated from reading UI file 'page_7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_7_H
#define UI_PAGE_7_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_7
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
    QPushButton *GaucheTo6_pushButton;
    QPushButton *DroiteTo8_pushButton;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *Q7_R2_checkBox;
    QCheckBox *Q7_R3_checkBox;
    QCheckBox *Q7_R1_checkBox;
    QCheckBox *Q7_R4_checkBox;

    void setupUi(QDialog *page_7)
    {
        if (page_7->objectName().isEmpty())
            page_7->setObjectName(QString::fromUtf8("page_7"));
        page_7->resize(990, 629);
        widget = new QWidget(page_7);
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
        label_8->setGeometry(QRect(330, 500, 311, 17));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color : white;"));
        GaucheTo6_pushButton = new QPushButton(widget);
        GaucheTo6_pushButton->setObjectName(QString::fromUtf8("GaucheTo6_pushButton"));
        GaucheTo6_pushButton->setEnabled(true);
        GaucheTo6_pushButton->setGeometry(QRect(420, 430, 41, 41));
        GaucheTo6_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        GaucheTo6_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        GaucheTo6_pushButton->setIcon(icon);
        GaucheTo6_pushButton->setIconSize(QSize(40, 40));
        DroiteTo8_pushButton = new QPushButton(widget);
        DroiteTo8_pushButton->setObjectName(QString::fromUtf8("DroiteTo8_pushButton"));
        DroiteTo8_pushButton->setGeometry(QRect(510, 430, 41, 41));
        DroiteTo8_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        DroiteTo8_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        DroiteTo8_pushButton->setIcon(icon1);
        DroiteTo8_pushButton->setIconSize(QSize(40, 40));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(462, 441, 51, 17));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(315, 90, 401, 111));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        Q7_R2_checkBox = new QCheckBox(widget);
        Q7_R2_checkBox->setObjectName(QString::fromUtf8("Q7_R2_checkBox"));
        Q7_R2_checkBox->setGeometry(QRect(335, 265, 281, 23));
        QFont font3;
        font3.setPointSize(12);
        Q7_R2_checkBox->setFont(font3);
        Q7_R3_checkBox = new QCheckBox(widget);
        Q7_R3_checkBox->setObjectName(QString::fromUtf8("Q7_R3_checkBox"));
        Q7_R3_checkBox->setGeometry(QRect(335, 325, 291, 23));
        Q7_R3_checkBox->setFont(font3);
        Q7_R1_checkBox = new QCheckBox(widget);
        Q7_R1_checkBox->setObjectName(QString::fromUtf8("Q7_R1_checkBox"));
        Q7_R1_checkBox->setGeometry(QRect(335, 205, 281, 23));
        Q7_R1_checkBox->setFont(font3);
        Q7_R4_checkBox = new QCheckBox(widget);
        Q7_R4_checkBox->setObjectName(QString::fromUtf8("Q7_R4_checkBox"));
        Q7_R4_checkBox->setGeometry(QRect(335, 385, 281, 23));
        Q7_R4_checkBox->setFont(font3);
        label_5->raise();
        label_8->raise();
        GaucheTo6_pushButton->raise();
        DroiteTo8_pushButton->raise();
        label->raise();
        label_2->raise();
        label_9->raise();
        label_7->raise();
        label_6->raise();
        label_4->raise();
        label_3->raise();
        label_10->raise();
        Q7_R2_checkBox->raise();
        Q7_R3_checkBox->raise();
        Q7_R1_checkBox->raise();
        Q7_R4_checkBox->raise();

        retranslateUi(page_7);

        QMetaObject::connectSlotsByName(page_7);
    } // setupUi

    void retranslateUi(QDialog *page_7)
    {
        page_7->setWindowTitle(QApplication::translate("page_7", "Dialog", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("page_7", "S\303\251lectionner toutes les bonnes r\303\251ponses", nullptr));
        GaucheTo6_pushButton->setText(QString());
        DroiteTo8_pushButton->setText(QString());
        label_9->setText(QApplication::translate("page_7", "7 / 10", nullptr));
        label_10->setText(QApplication::translate("page_7", "        Quels sont des syst\303\251mes \n"
"d'\303\251xploitation pour smartphones ?", nullptr));
        Q7_R2_checkBox->setText(QApplication::translate("page_7", "iOS", nullptr));
        Q7_R3_checkBox->setText(QApplication::translate("page_7", "Windows", nullptr));
        Q7_R1_checkBox->setText(QApplication::translate("page_7", "Android", nullptr));
        Q7_R4_checkBox->setText(QApplication::translate("page_7", "Linux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_7: public Ui_page_7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_7_H
