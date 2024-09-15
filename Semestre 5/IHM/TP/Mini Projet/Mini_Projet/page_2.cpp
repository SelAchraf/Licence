#include "page_2.h"
#include "ui_page_2.h"
#include "page_1.h"
#include "page_3.h"
extern double note;
bool R2;

page_2::page_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_2)
{
    ui->setupUi(this);
}

page_2::~page_2()
{
    delete ui;
}

void page_2::on_DroiteTo3_pushButton_clicked()
{
    this->hide();
    page_3 C;
    C.setModal(true);
    C.exec();
}


void page_2::on_GaucheTo1_pushButton_clicked()
{
    this->hide();
    Page_1 A;
    A.setModal(true);
    A.exec();
}


void page_2::on_Q2_R1_radioButton_clicked()
{
    R2 = false;
}


void page_2::on_Q2_R3_radioButton_clicked()
{
    R2 = false;
}


void page_2::on_Q2_R4_radioButton_clicked()
{
    R2 = false;
}


void page_2::on_Q2_R2_radioButton_clicked()
{
    R2 = true;
}

