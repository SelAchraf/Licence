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
    close();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->setText("Salut, je suis selougha mohamed achraf du G11\nC'est mon premier TP en QT");
    ui->pushButton_3->setEnabled(0);
    ui->pushButton_2->setEnabled(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    ui->pushButton_2->setEnabled(0);
    ui->pushButton_3->setEnabled(1);
}

