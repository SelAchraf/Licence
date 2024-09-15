#ifndef PAGE_4_H
#define PAGE_4_H

#include <QDialog>


namespace Ui {
class page_4;
}

class page_4 : public QDialog
{
    Q_OBJECT

public:
    explicit page_4(QWidget *parent = nullptr);
    ~page_4();

private slots:
    void on_DroiteTo5_pushButton_clicked();

    void on_GaucheTo3_pushButton_clicked();

    void on_Q4_R1_radioButton_clicked();

    void on_Q4_R2_radioButton_clicked();

    void on_Q4_R4_radioButton_clicked();

    void on_Q4_R3_radioButton_clicked();

private:
    Ui::page_4 *ui;
};

#endif // PAGE_4_H
