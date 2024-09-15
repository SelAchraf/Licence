#include "page_10.h"
#include "ui_page_10.h"
#include "page_9.h"
#include "page_consultation.h"
extern double note;
extern bool R1,R2,R3,R4,R5;
extern bool Q6_1,Q6_2,Q6_3,Q6_4;
extern bool Q7_1,Q7_2,Q7_3,Q7_4;
extern bool Q8_1,Q8_2,Q8_3,Q8_4;
extern bool Q9_1,Q9_2,Q9_3,Q9_4;
bool Q10_1=false,Q10_2=false,Q10_3=true,Q10_4=true;

page_10::page_10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_10)
{
    ui->setupUi(this);
    ui->DroiteNon_pushButton->setVisible(0);
}

page_10::~page_10()
{
    delete ui;
}

void page_10::on_GaucheTo9_pushButton_clicked()
{
    this->hide();
    page_9 I;
    I.setModal(true);
    I.exec();
}


void page_10::on_pushButton_clicked()
{

    int rep = QMessageBox::warning(this, "Avertissement", "etes-vous sûr de vouloir valider vos informations ?, une fois que vous l'aurez validé vous ne pourrez plus les modifier par la suite",QMessageBox::Yes | QMessageBox::No);
    if (rep == QMessageBox::Yes){
        if(R1 == true)
            note = note +2;
        if(R2 == true)
            note = note +2;
        if(R3 == true)
            note = note +2;
        if(R4 == true)
            note = note +2;
        if(R5 == true)
            note = note +2;
        if(Q6_1 == true && Q6_2 == true && Q6_3 == true && Q6_4 == true)
            note = note +2;
        if(Q7_1 == true && Q7_2 == true && Q7_3 == true && Q7_4 == true)
            note = note +2;
        if(Q8_1 == true && Q8_2 == true && Q8_3 == true && Q8_4 == true)
            note = note +2;
        if(Q9_1 == true && Q9_2 == true && Q9_3 == true && Q9_4 == true)
            note = note +2;
        if(Q10_1 == true && Q10_2 == true && Q10_3 == true && Q10_4 == true)
            note = note +2;
        this->hide();
        page_consultation fin;
        fin.setModal(true);
        fin.exec();
    }
}


void page_10::on_Q10_R1_checkBox_stateChanged(int arg1)
{
    if(Q10_1 == false)
        Q10_1=true;
    else
        Q10_1=false;
}


void page_10::on_Q10_R2_checkBox_stateChanged(int arg1)
{
    if(Q10_2 == false)
        Q10_2=true;
    else
        Q10_2=false;
}


void page_10::on_Q10_R3_checkBox_stateChanged(int arg1)
{
    if(Q10_3 == false)
        Q10_3=true;
    else
        Q10_3=false;
}


void page_10::on_Q10_R4_checkBox_stateChanged(int arg1)
{
    if(Q10_4 == false)
        Q10_4=true;
    else
        Q10_4=false;
}

