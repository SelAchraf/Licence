#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "page_1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->hide_Button->setVisible(0);
    ui->show_Button->setVisible(0);
    ui->Erreur_label->setVisible(0);
    ui->Vide_label->setVisible(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_show_Button_clicked()
{
    ui->hide_Button->setVisible(1);
    ui->show_Button->setVisible(0);
    ui->Mdp_lineEdit->setEchoMode(QLineEdit::Normal);
}




void MainWindow::on_hide_Button_clicked()
{
    ui->show_Button->setVisible(1);
    ui->hide_Button->setVisible(0);
    ui->Mdp_lineEdit->setEchoMode(QLineEdit::Password);
}


void MainWindow::on_pushButton_clicked()
{
    QLineEdit* Nom_lineEdit = findChild<QLineEdit*>("Nom_lineEdit");
    QString lower_Nom = Nom_lineEdit->text().toLower();

    QLineEdit* Prenom_lineEdit = findChild<QLineEdit*>("Prenom_lineEdit");
    QString lower_Prenom = Prenom_lineEdit->text().toLower();

    QLineEdit* Num_lineEdit = findChild<QLineEdit*>("Num_lineEdit");
    QString Num = Num_lineEdit->text();

    QLineEdit* Mdp_lineEdit = findChild<QLineEdit*>("Mdp_lineEdit");
    QString Mdp = Mdp_lineEdit->text();


    if(Nom_lineEdit->text() != "" && Prenom_lineEdit->text() != "" && Num != "" && Mdp != ""){
        ui->Vide_label->setVisible(0);


        if((lower_Nom == "selougha" && lower_Prenom == "achraf" && Num == "202136019893" && Mdp == "ZKqEzr8F") || (lower_Nom == "saifi" && lower_Prenom == "tarek" && Num == "202036024991" && Mdp == "rPeDp975") || (lower_Nom == "saci" && lower_Prenom == "siraj" && Num == "202136026926" && Mdp == "556TNtZ5")){
            ui->Erreur_label->setVisible(0);
            ui->Nom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");
            ui->Prenom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");
            ui->Num_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");
            ui->Mdp_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");
            this->hide();
            Page_1 A;
            A.setModal(true);
            A.exec();
        }
        else{
            ui->Erreur_label->setVisible(1);
            ui->Nom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
            ui->Prenom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
            ui->Num_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
            ui->Mdp_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
        }
    }
    else{
        ui->Vide_label->setVisible(1);
        ui->Erreur_label->setVisible(0);
        if(Nom_lineEdit->text() == "")
            ui->Nom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
        else
            ui->Nom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");

        if(Prenom_lineEdit->text() == "")
            ui->Prenom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
        else
            ui->Prenom_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");

        if(Num == "")
            ui->Num_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
        else
            ui->Num_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");

        if(Mdp == "")
            ui->Mdp_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid red;""padding-bottom: 7px;");
        else
            ui->Mdp_lineEdit->setStyleSheet("border: none;""border-bottom: 2px solid rgba(46, 82, 101, 200);""padding-bottom: 7px;");
    }

}


void MainWindow::on_Mdp_lineEdit_textChanged(const QString &arg1)
{
    ui->show_Button->setVisible(1);
}

