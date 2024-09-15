/********************************************************************************
** Form generated from reading UI file 'page_consultation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_CONSULTATION_H
#define UI_PAGE_CONSULTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_consultation
{
public:
    QWidget *widget;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *page_consultation)
    {
        if (page_consultation->objectName().isEmpty())
            page_consultation->setObjectName(QString::fromUtf8("page_consultation"));
        page_consultation->resize(990, 629);
        widget = new QWidget(page_consultation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 951, 581));
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background: none;\n"
"	color: white;\n"
"	border: 2px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_3{\n"
"	background: none;\n"
"	color: white;\n"
"	border: 2px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton#pushButton_3:pressed{\n"
"	padding-left: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"\n"
"QPushButton#pushButton{\n"
"	background: none;\n"
"	border: 2px solid white;\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"\n"
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
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 490, 131, 35));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(355, 340, 261, 31));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(355, 380, 261, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 235, 131, 35));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 190, 531, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 180, 561, 101));
        label_4->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 3px;"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 290, 561, 181));
        label_6->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 3px;"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 425, 131, 35));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(225, 300, 511, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(410, 110, 151, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 3px;\n"
"color: white;"));
        label_5->raise();
        label->raise();
        label_2->raise();
        pushButton_2->raise();
        label_4->raise();
        pushButton->raise();
        label_3->raise();
        label_6->raise();
        comboBox->raise();
        comboBox_2->raise();
        pushButton_3->raise();
        label_7->raise();
        label_8->raise();

        retranslateUi(page_consultation);

        QMetaObject::connectSlotsByName(page_consultation);
    } // setupUi

    void retranslateUi(QDialog *page_consultation)
    {
        page_consultation->setWindowTitle(QApplication::translate("page_consultation", "Dialog", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("page_consultation", "Terminer", nullptr));
        comboBox->setItemText(0, QApplication::translate("page_consultation", "Professeur", nullptr));
        comboBox->setItemText(1, QApplication::translate("page_consultation", "Debbah Amina", nullptr));
        comboBox->setItemText(2, QApplication::translate("page_consultation", "Kahya Noudjoud", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("page_consultation", "Dates disponibles", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("page_consultation", "2024/01/27 14:30", nullptr));

        pushButton->setText(QApplication::translate("page_consultation", "Corrig\303\251", nullptr));
        label_3->setText(QApplication::translate("page_consultation", "Pour pouvoir voir le corrig\303\251 type appuyez sur le button \"Corrig\303\251\"", nullptr));
        label_4->setText(QString());
        label_6->setText(QString());
        pushButton_3->setText(QApplication::translate("page_consultation", "Envoyer", nullptr));
        label_7->setText(QApplication::translate("page_consultation", "Vous pouvez consulter un prefesseur si vous avez un probl\303\251me", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page_consultation: public Ui_page_consultation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_CONSULTATION_H
