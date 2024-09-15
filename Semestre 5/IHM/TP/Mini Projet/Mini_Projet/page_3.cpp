#include "page_3.h"
#include "ui_page_3.h"
#include "page_2.h"
#include "page_4.h"
extern double note;
bool R3;

page_3::page_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_3)
{
    ui->setupUi(this);
}

page_3::~page_3()
{
    delete ui;
}

void page_3::on_DroiteTo4_pushButton_clicked()
{
    this->hide();
    page_4 D;
    D.setModal(true);
    D.exec();
}


void page_3::on_GaucheTo2_pushButton_clicked()
{
    this->hide();
    page_2 B;
    B.setModal(true);
    B.exec();
}


void page_3::on_Q3_R1_radioButton_clicked()
{
    R3 = false;
}


void page_3::on_Q3_R2_radioButton_clicked()
{
    R3 = false;
}


void page_3::on_Q3_R4_radioButton_clicked()
{
    R3 = false;
}


void page_3::on_Q3_R3_radioButton_clicked()
{
    R3 = true;
}

