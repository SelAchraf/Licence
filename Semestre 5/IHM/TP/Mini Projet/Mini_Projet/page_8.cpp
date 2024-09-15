#include "page_8.h"
#include "ui_page_8.h"
#include "page_7.h"
#include "page_9.h"
extern double note;
bool Q8_1=false,Q8_2=false,Q8_3=false,Q8_4=true;

page_8::page_8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_8)
{
    ui->setupUi(this);
}

page_8::~page_8()
{
    delete ui;
}

void page_8::on_DroiteTo9_pushButton_clicked()
{
    this->hide();
    page_9 I;
    I.setModal(true);
    I.exec();
}


void page_8::on_GaucheTo7_pushButton_clicked()
{
    this->hide();
    page_7 G;
    G.setModal(true);
    G.exec();
}


void page_8::on_Q8_R1_checkBox_stateChanged(int arg1)
{
    if(Q8_1 == false)
        Q8_1=true;
    else
        Q8_1=false;
}


void page_8::on_Q8_R2_checkBox_stateChanged(int arg1)
{
    if(Q8_2 == false)
        Q8_2=true;
    else
        Q8_2=false;
}


void page_8::on_Q8_R3_checkBox_stateChanged(int arg1)
{
    if(Q8_3 == false)
        Q8_3=true;
    else
        Q8_3=false;
}


void page_8::on_Q8_R4_checkBox_stateChanged(int arg1)
{
    if(Q8_4 == false)
        Q8_4=true;
    else
        Q8_4=false;
}

