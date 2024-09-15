#ifndef PAGE_3_H
#define PAGE_3_H

#include <QDialog>


namespace Ui {
class page_3;
}

class page_3 : public QDialog
{
    Q_OBJECT

public:
    explicit page_3(QWidget *parent = nullptr);
    ~page_3();

private slots:
    void on_DroiteTo4_pushButton_clicked();
    void on_GaucheTo2_pushButton_clicked();

    void on_Q3_R1_radioButton_clicked();

    void on_Q3_R2_radioButton_clicked();

    void on_Q3_R4_radioButton_clicked();

    void on_Q3_R3_radioButton_clicked();

private:
    Ui::page_3 *ui;
};

#endif // PAGE_3_H
