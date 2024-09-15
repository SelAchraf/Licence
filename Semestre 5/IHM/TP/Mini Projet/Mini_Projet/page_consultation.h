#ifndef PAGE_CONSULTATION_H
#define PAGE_CONSULTATION_H

#include <QDialog>

namespace Ui {
class page_consultation;
}

class page_consultation : public QDialog
{
    Q_OBJECT

public:
    explicit page_consultation(QWidget *parent = nullptr);
    ~page_consultation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::page_consultation *ui;
};

#endif // PAGE_CONSULTATION_H
