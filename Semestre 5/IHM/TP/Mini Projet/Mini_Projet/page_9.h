#ifndef PAGE_9_H
#define PAGE_9_H

#include <QDialog>


namespace Ui {
class page_9;
}

class page_9 : public QDialog
{
    Q_OBJECT

public:
    explicit page_9(QWidget *parent = nullptr);
    ~page_9();

private slots:
    void on_DroiteTo10_pushButton_clicked();

    void on_GaucheTo8_pushButton_clicked();

    void on_Q9_R1_checkBox_stateChanged(int arg1);

    void on_Q9_R2_checkBox_stateChanged(int arg1);

    void on_Q9_R3_checkBox_stateChanged(int arg1);

    void on_Q9_R4_checkBox_stateChanged(int arg1);

private:
    Ui::page_9 *ui;
};

#endif // PAGE_9_H
