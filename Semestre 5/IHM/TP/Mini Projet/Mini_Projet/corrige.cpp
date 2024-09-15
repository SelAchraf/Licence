#include "corrige.h"
#include "ui_corrige.h"
#include "page_consultation.h"

Corrige::Corrige(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Corrige)
{
    ui->setupUi(this);
}

Corrige::~Corrige()
{
    delete ui;
}

void Corrige::on_pushButton_clicked()
{
    this->hide();
}


void Corrige::on_pushButton_2_clicked()
{
    this->hide();
    page_consultation fin;
    fin.setModal(true);
    fin.exec();
}

