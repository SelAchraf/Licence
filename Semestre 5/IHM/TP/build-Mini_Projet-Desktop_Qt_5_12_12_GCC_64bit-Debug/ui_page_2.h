/********************************************************************************
** Form generated from reading UI file 'page_2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_2_H
#define UI_PAGE_2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_2
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
    QPushButton *GaucheTo1_pushButton;
    QPushButton *DroiteTo3_pushButton;
    QLabel *label_9;
    QRadioButton *Q2_R1_radioButton;
    QRadioButton *Q2_R2_radioButton;
    QRadioButton *Q2_R3_radioButton;
    QRadioButton *Q2_R4_radioButton;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *page_2)
    {
        if (page_2->objectName().isEmpty())
            page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->resize(990, 629);
        widget = new QWidget(page_2);
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
        GaucheTo1_pushButton = new QPushButton(widget);
        GaucheTo1_pushButton->setObjectName(QString::fromUtf8("GaucheTo1_pushButton"));
        GaucheTo1_pushButton->setEnabled(true);
        GaucheTo1_pushButton->setGeometry(QRect(420, 430, 41, 41));
        GaucheTo1_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        GaucheTo1_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        GaucheTo1_pushButton->setIcon(icon);
        GaucheTo1_pushButton->setIconSize(QSize(40, 40));
        DroiteTo3_pushButton = new QPushButton(widget);
        DroiteTo3_pushButton->setObjectName(QString::fromUtf8("DroiteTo3_pushButton"));
        DroiteTo3_pushButton->setGeometry(QRect(510, 430, 41, 41));
        DroiteTo3_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        DroiteTo3_pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        DroiteTo3_pushButton->setIcon(icon1);
        DroiteTo3_pushButton->setIconSize(QSize(40, 40));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(462, 441, 51, 17));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));
        Q2_R1_radioButton = new QRadioButton(widget);
        Q2_R1_radioButton->setObjectName(QString::fromUtf8("Q2_R1_radioButton"));
        Q2_R1_radioButton->setGeometry(QRect(335, 205, 251, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        Q2_R1_radioButton->setFont(font1);
        Q2_R2_radioButton = new QRadioButton(widget);
        Q2_R2_radioButton->setObjectName(QString::fromUtf8("Q2_R2_radioButton"));
        Q2_R2_radioButton->setGeometry(QRect(335, 265, 231, 21));
        Q2_R2_radioButton->setFont(font1);
        Q2_R3_radioButton = new QRadioButton(widget);
        Q2_R3_radioButton->setObjectName(QString::fromUtf8("Q2_R3_radioButton"));
        Q2_R3_radioButton->setGeometry(QRect(335, 325, 201, 21));
        Q2_R3_radioButton->setFont(font1);
        Q2_R4_radioButton = new QRadioButton(widget);
        Q2_R4_radioButton->setObjectName(QString::fromUtf8("Q2_R4_radioButton"));
        Q2_R4_radioButton->setGeometry(QRect(335, 385, 191, 21));
        Q2_R4_radioButton->setFont(font1);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(296, 105, 391, 71));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(370, 500, 241, 17));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color : white;"));
        label_5->raise();
        label->raise();
        label_2->raise();
        label_7->raise();
        label_6->raise();
        label_4->raise();
        label_3->raise();
        label_10->raise();
        Q2_R1_radioButton->raise();
        Q2_R2_radioButton->raise();
        Q2_R3_radioButton->raise();
        Q2_R4_radioButton->raise();
        DroiteTo3_pushButton->raise();
        GaucheTo1_pushButton->raise();
        label_9->raise();
        label_11->raise();

        retranslateUi(page_2);

        QMetaObject::connectSlotsByName(page_2);
    } // setupUi

    void retranslateUi(QDialog *page_2)
    {
        page_2->setWindowTitle(QApplication::translate("page_2", "Dialog", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        GaucheTo1_pushButton->setText(QString());
        DroiteTo3_pushButton->setText(QString());
        label_9->setText(QApplication::translate("page_2", "2 / 10", nullptr));
        Q2_R1_radioButton->setText(QApplication::translate("page_2", "Java", nullptr));
        Q2_R2_radioButton->setText(QApplication::translate("page_2", "Swift", nullptr));
        Q2_R3_radioButton->setText(QApplication::translate("page_2", "C++", nullptr));
        Q2_R4_radioButton->setText(QApplication::translate("page_2", "Kotlin", nullptr));
        label_10->setText(QApplication::translate("page_2", "Quel est le langage de programmation\n"
"     principalement utilis\303\251 pour cr\303\251er\n"
"                des application iOS ?", nullptr));
        label_11->setText(QApplication::translate("page_2", "S\303\251lectionner la bonne r\303\251ponse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_2: public Ui_page_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_H
