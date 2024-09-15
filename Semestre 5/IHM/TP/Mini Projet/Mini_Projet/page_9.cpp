#include "page_9.h"
#include "ui_page_9.h"
#include "page_8.h"
#include "page_10.h"
extern double note;
bool Q9_1=false,Q9_2=false,Q9_3=false,Q9_4=true;

page_9::page_9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_9)
{
    ui->setupUi(this);
}

page_9::~page_9()
{
    delete ui;
}

void page_9::on_DroiteTo10_pushButton_clicked()
{
    this->hide();
    page_10 J;
    J.setModal(true);
    J.exec();
}


void page_9::on_GaucheTo8_pushButton_clicked()
{
    this->hide();
    page_8 H;
    H.setModal(true);
    H.exec();
}


void page_9::on_Q9_R1_checkBox_stateChanged(int arg1)
{
    if(Q9_1 == false)
        Q9_1=true;
    else
        Q9_1=false;
}


void page_9::on_Q9_R2_checkBox_stateChanged(int arg1)
{
    if(Q9_2 == false)
        Q9_2=true;
    else
        Q9_2=false;
}


void page_9::on_Q9_R3_checkBox_stateChanged(int arg1)
{
    if(Q9_3 == false)
        Q9_3=true;
    else
        Q9_3=false;
}


void page_9::on_Q9_R4_checkBox_stateChanged(int arg1)
{
    if(Q9_4 == false)
        Q9_4=true;
    else
        Q9_4=false;
}

