#include "page_1.h"
#include "ui_page_1.h"
#include "page_2.h"
extern double note;
bool R1;

Page_1::Page_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page_1)
{
    ui->setupUi(this);
    ui->GaucheNon_pushButton->setVisible(0);
}

Page_1::~Page_1()
{
    delete ui;
}

void Page_1::on_DroiteTo2_pushButton_clicked()
{
    this->hide();
    page_2 B;
    B.setModal(true);
    B.exec();
}


void Page_1::on_Q1_R2_radioButton_2_clicked()
{
    R1 = true;
}


void Page_1::on_Q1_R1_radioButton_clicked()
{
    R1 = false;
}


void Page_1::on_Q1_R3_radioButton_clicked()
{
    R1 = false;
}


void Page_1::on_Q1_R4_radioButton_clicked()
{
    R1 = false;
}

