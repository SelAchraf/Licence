#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuiter_triggered();

    void on_actionA_propos_triggered();

    void on_actionGris_triggered();

    void on_actionBlanc_triggered();

    void on_actionAfficher_triggered();

    void on_actionCopier_triggered();

    void on_actionColler_triggered();

private:
    Ui::MainWindow *ui;
    QString Text_Copier;
};
#endif // MAINWINDOW_H
