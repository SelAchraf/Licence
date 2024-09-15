#include "page_7.h"
#include "ui_page_7.h"
#include "page_6.h"
#include "page_8.h"
extern double note;
bool Q7_1=false,Q7_2=false,Q7_3=true,Q7_4=true;

page_7::page_7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_7)
{
    ui->setupUi(this);
}

page_7::~page_7()
{
    delete ui;
}

void page_7::on_DroiteTo8_pushButton_clicked()
{
    this->hide();
    page_8 H;
    H.setModal(true);
    H.exec();
}


void page_7::on_GaucheTo6_pushButton_clicked()
{
    this->hide();
    page_6 F;
    F.setModal(true);
    F.exec();
}


void page_7::on_Q7_R1_checkBox_stateChanged(int arg1)
{
    if(Q7_1 == false)
        Q7_1=true;
    else
        Q7_1=false;
}


void page_7::on_Q7_R2_checkBox_stateChanged(int arg1)
{
    if(Q7_2 == false)
        Q7_2=true;
    else
        Q7_2=false;
}


void page_7::on_Q7_R3_checkBox_stateChanged(int arg1)
{
    if(Q7_3 == false)
        Q7_3=true;
    else
        Q7_3=false;
}


void page_7::on_Q7_R4_checkBox_stateChanged(int arg1)
{
    if(Q7_4 == false)
        Q7_4=true;
    else
        Q7_4=false;
}

