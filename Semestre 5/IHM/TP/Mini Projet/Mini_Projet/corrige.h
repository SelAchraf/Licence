#ifndef CORRIGE_H
#define CORRIGE_H

#include <QDialog>

namespace Ui {
class Corrige;
}

class Corrige : public QDialog
{
    Q_OBJECT

public:
    explicit Corrige(QWidget *parent = nullptr);
    ~Corrige();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Corrige *ui;
};

#endif // CORRIGE_H
