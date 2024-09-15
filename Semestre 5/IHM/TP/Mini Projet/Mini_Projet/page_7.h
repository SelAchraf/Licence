#ifndef PAGE_7_H
#define PAGE_7_H

#include <QDialog>


namespace Ui {
class page_7;
}

class page_7 : public QDialog
{
    Q_OBJECT

public:
    explicit page_7(QWidget *parent = nullptr);
    ~page_7();

private slots:
    void on_DroiteTo8_pushButton_clicked();

    void on_GaucheTo6_pushButton_clicked();

    void on_Q7_R1_checkBox_stateChanged(int arg1);

    void on_Q7_R2_checkBox_stateChanged(int arg1);

    void on_Q7_R3_checkBox_stateChanged(int arg1);

    void on_Q7_R4_checkBox_stateChanged(int arg1);

private:
    Ui::page_7 *ui;

};

#endif // PAGE_7_H
