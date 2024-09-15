#ifndef PAGE_1_H
#define PAGE_1_H

#include <QDialog>

namespace Ui {
class Page_1;
}

class Page_1 : public QDialog
{
    Q_OBJECT

public:
    explicit Page_1(QWidget *parent = nullptr);
    ~Page_1();

private slots:
    void on_DroiteTo2_pushButton_clicked();

    void on_Q1_R2_radioButton_2_clicked();

    void on_Q1_R1_radioButton_clicked();

    void on_Q1_R3_radioButton_clicked();

    void on_Q1_R4_radioButton_clicked();

private:
    Ui::Page_1 *ui;


};

#endif // PAGE_1_H
