#include "page_consultation.h"
#include "ui_page_consultation.h"
#include "corrige.h"

double note = 0;


page_consultation::page_consultation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page_consultation)
{
    ui->setupUi(this);
    ui->label_8->setText("     "+QString::number(note) + " / 20");
}

page_consultation::~page_consultation()
{
    delete ui;
}

void page_consultation::on_pushButton_clicked()
{
    this->hide();
    Corrige corr;
    corr.setModal(true);
    corr.exec();
}


void page_consultation::on_pushButton_2_clicked()
{
    this->hide();
}

