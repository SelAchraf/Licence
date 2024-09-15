#ifndef PAGE_8_H
#define PAGE_8_H

#include <QDialog>


namespace Ui {
class page_8;
}

class page_8 : public QDialog
{
    Q_OBJECT

public:
    explicit page_8(QWidget *parent = nullptr);
    ~page_8();

private slots:
    void on_DroiteTo9_pushButton_clicked();

    void on_GaucheTo7_pushButton_clicked();

    void on_Q8_R1_checkBox_stateChanged(int arg1);

    void on_Q8_R2_checkBox_stateChanged(int arg1);

    void on_Q8_R3_checkBox_stateChanged(int arg1);

    void on_Q8_R4_checkBox_stateChanged(int arg1);

private:
    Ui::page_8 *ui;

};

#endif // PAGE_8_H
