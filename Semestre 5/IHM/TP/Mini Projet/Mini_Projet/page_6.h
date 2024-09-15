#ifndef PAGE_6_H
#define PAGE_6_H

#include <QDialog>

namespace Ui {
class page_6;
}

class page_6 : public QDialog
{
    Q_OBJECT

public:
    explicit page_6(QWidget *parent = nullptr);
    ~page_6();

private slots:
    void on_DroiteTo7_pushButton_clicked();

    void on_GaucheTo5_pushButton_clicked();

    void on_Q6_R1_checkBox_stateChanged(int arg1);

    void on_Q6_R2_checkBox_stateChanged(int arg1);

    void on_Q6_R3_checkBox_stateChanged(int arg1);

    void on_Q6_R4_checkBox_stateChanged(int arg1);

private:
    Ui::page_6 *ui;
};

#endif // PAGE_6_H
