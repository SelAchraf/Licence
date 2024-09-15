#ifndef PAGE_10_H
#define PAGE_10_H

#include <QDialog>
#include <QMessageBox>


namespace Ui {
class page_10;
}

class page_10 : public QDialog
{
    Q_OBJECT

public:
    explicit page_10(QWidget *parent = nullptr);
    ~page_10();

private slots:
    void on_GaucheTo9_pushButton_clicked();

    void on_pushButton_clicked();

    void on_Q10_R1_checkBox_stateChanged(int arg1);

    void on_Q10_R2_checkBox_stateChanged(int arg1);

    void on_Q10_R3_checkBox_stateChanged(int arg1);

    void on_Q10_R4_checkBox_stateChanged(int arg1);

private:
    Ui::page_10 *ui;
};

#endif // PAGE_10_H
