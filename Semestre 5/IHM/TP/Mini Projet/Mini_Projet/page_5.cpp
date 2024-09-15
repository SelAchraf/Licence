#include "page_5.h"
#include "ui_page_5.h"
#include "page_4.h"
#include "page_6.h"
extern double note;
bool R5;

page_5::page_5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_5)
{
    ui->setupUi(this);
}

page_5::~page_5()
{
    delete ui;
}

void page_5::on_DroiteTo6_pushButton_clicked()
{
    this->hide();
    page_6 F;
    F.setModal(true);
    F.exec();
}


void page_5::on_GaucheTo4_pushButton_clicked()
{
    this->hide();
    page_4 D;
    D.setModal(true);
    D.exec();
}


void page_5::on_Q5_R1_radioButton_clicked()
{
    R5 = true;
}


void page_5::on_Q5_R2_radioButton_2_clicked()
{
    R5 = false;
}


void page_5::on_Q5_R3_radioButton_clicked()
{
    R5 = false;
}


void page_5::on_Q5_R4_radioButton_clicked()
{
    R5 = false;
}

