#include "page_6.h"
#include "ui_page_6.h"
#include "page_5.h"
#include "page_7.h"
extern double note;
bool Q6_1=false,Q6_2=false,Q6_3=false,Q6_4=true;

page_6::page_6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_6)
{
    ui->setupUi(this);
}

page_6::~page_6()
{
    delete ui;
}

void page_6::on_DroiteTo7_pushButton_clicked()
{
    this->hide();
    page_7 G;
    G.setModal(true);
    G.exec();
}


void page_6::on_GaucheTo5_pushButton_clicked()
{
    this->hide();
    page_5 E;
    E.setModal(true);
    E.exec();
}


void page_6::on_Q6_R1_checkBox_stateChanged(int arg1)
{
    if(Q6_1 == false)
        Q6_1=true;
    else
        Q6_1=false;
}


void page_6::on_Q6_R2_checkBox_stateChanged(int arg1)
{
    if(Q6_2 == false)
        Q6_2=true;
    else
        Q6_2=false;
}


void page_6::on_Q6_R3_checkBox_stateChanged(int arg1)
{
    if(Q6_3 == false)
        Q6_3=true;
    else
        Q6_3=false;
}


void page_6::on_Q6_R4_checkBox_stateChanged(int arg1)
{
    if(Q6_4 == false)
        Q6_4=true;
    else
        Q6_4=false;
}

