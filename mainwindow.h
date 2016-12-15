#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include <TCanvas.h>
#include <TVirtualX.h>
#include <TSystem.h>
#include <TStyle.h>
#include <TFormula.h>
#include <TF1.h>
#include <TH1.h>
#include <TFrame.h>
#include <TTimer.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_3_released();
    void updatePads();
    void fill();

private:
    Ui::MainWindow *ui;
    TCanvas* c1;
    TH1D* h;
    QTimer* timer_update;
    QTimer* timer_fill;
};

#endif // MAINWINDOW_H
