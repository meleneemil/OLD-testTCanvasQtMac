#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer_update = new QTimer();
    connect(timer_update,SIGNAL(timeout()),this,SLOT(updatePads()));
    timer_fill = new QTimer();
    connect(timer_fill,SIGNAL(timeout()),this,SLOT(fill()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_released()
{
    c1=new TCanvas("myCanvas");
//    c1->Divide(2,1);
    h=new TH1D("dsadsa","dsadsa",20,-2,2);
//    c1->cd(1);
    h->Draw();

    timer_update->start(100);
    timer_fill->start(1);


}
void MainWindow::fill()
{

    qDebug("filling");
    h->FillRandom("gaus",100);
}

void MainWindow::updatePads()
{
//    fill();

    qDebug("updating");
//    c1->cd(1);
//    gPad->Modified();
//    gPad->Update();
    c1->Modified();
    c1->Update();
    gSystem->ProcessEvents();
}
