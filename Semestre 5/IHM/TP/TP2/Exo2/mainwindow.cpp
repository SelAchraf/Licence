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


void MainWindow::on_pushButton_Cancel_clicked()
{
    close();
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString Username=ui->lineEdit_User->text();
    QString Password=ui->lineEdit_Pass->text();
    if (Username=="Achraf" && Password=="23"){
        QMessageBox::information(this, "Authentification result", "Login Success");
    }
    if (Username=="Achraf" && Password==""){
        QMessageBox::warning(this, "Authentification result", "Required field is empty :\nPlease enter the password");
    }
    if (Username=="" && Password!=""){
        QMessageBox::warning(this, "Authentification result", "Required field is empty :\nPlease enter the user name");
    }
    if (Username=="" && Password==""){
        QMessageBox::warning(this, "Authentification result", "Required field is empty :\nPlease enter the user name and password");
    }
    if (Username=="Achraf" && Password!="23" && Password!=""){
        QMessageBox::warning(this, "Authentification result", "The password is incorrect :\nPlease enter the validate password");
    }
    if (Username!="Achraf" && Username!=""){
        QMessageBox::warning(this, "Authentification result", "The user name is incorrect :\nPlease enter the validate user name");
    }
}

