#ifndef PAGE_2_H
#define PAGE_2_H

#include <QDialog>

namespace Ui {
class page_2;
}

class page_2 : public QDialog
{
    Q_OBJECT

public:
    explicit page_2(QWidget *parent = nullptr);
    ~page_2();

private slots:
    void on_DroiteTo3_pushButton_clicked();

    void on_GaucheTo1_pushButton_clicked();

    void on_Q2_R1_radioButton_clicked();

    void on_Q2_R3_radioButton_clicked();

    void on_Q2_R4_radioButton_clicked();

    void on_Q2_R2_radioButton_clicked();

private:
    Ui::page_2 *ui;
};

#endif // PAGE_2_H
