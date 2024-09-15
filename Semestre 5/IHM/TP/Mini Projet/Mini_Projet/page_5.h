#ifndef PAGE_5_H
#define PAGE_5_H

#include <QDialog>

namespace Ui {
class page_5;
}

class page_5 : public QDialog
{
    Q_OBJECT

public:
    explicit page_5(QWidget *parent = nullptr);
    ~page_5();

private slots:
    void on_DroiteTo6_pushButton_clicked();

    void on_GaucheTo4_pushButton_clicked();

    void on_Q5_R1_radioButton_clicked();

    void on_Q5_R2_radioButton_2_clicked();

    void on_Q5_R3_radioButton_clicked();

    void on_Q5_R4_radioButton_clicked();

private:
    Ui::page_5 *ui;
};

#endif // PAGE_5_H
