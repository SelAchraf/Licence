#include "page_4.h"
#include "ui_page_4.h"
#include "page_3.h"
#include "page_5.h"
extern double note;
bool R4;

page_4::page_4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_4)
{
    ui->setupUi(this);
}

page_4::~page_4()
{
    delete ui;
}

void page_4::on_DroiteTo5_pushButton_clicked()
{
    this->hide();
    page_5 E;
    E.setModal(true);
    E.exec();
}


void page_4::on_GaucheTo3_pushButton_clicked()
{
    this->hide();
    page_3 C;
    C.setModal(true);
    C.exec();
}


void page_4::on_Q4_R1_radioButton_clicked()
{
    R4 = false;
}


void page_4::on_Q4_R2_radioButton_clicked()
{
    R4 = false;
}


void page_4::on_Q4_R4_radioButton_clicked()
{
    R4 = false;
}


void page_4::on_Q4_R3_radioButton_clicked()
{
    R4 = true;
}

