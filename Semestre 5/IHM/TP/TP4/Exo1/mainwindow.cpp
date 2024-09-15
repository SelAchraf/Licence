#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString nom=ui->Nom->text();
    QString prenom=ui->Prenom->text();
    QString sexe=ui->Sexe->currentText();
    QString Date = ui->dateEdit->text();
    if (nom=="" || prenom=="" || sexe=="Choisir le sexe"){
        QMessageBox::warning(this, "Enregistrement result", "Required field is empty :\nPlease enter all fields");
    }
    else {
        QMessageBox::information(this, "Information", nom + " " + prenom + " " + sexe + " " + Date +"\n vos données sont enregistrées");
        ui->pushButton_2->setEnabled(0);
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->Nom->setText("");
    ui->Prenom->setText("");
    ui->Sexe->setCurrentText("Choisir le sexe");
}

