#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "cal.h"
#include "pcapop.h"

Cal* f;
Pcapop* g;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    f = new Cal();
    g = new Pcapop();
    connect(ui->pushCAL,SIGNAL(clicked()),this,SLOT(Showwcal()));
    connect(ui->actionCAL,SIGNAL(triggered()),this,SLOT(Showwcal()));
    connect(ui->actionPcap,SIGNAL(triggered()),this,SLOT(Showpcapop()));
    connect(ui->pushPcap,SIGNAL(clicked()),this,SLOT(Showpcapop()));
}

void MainWindow::Showwcal()
{
    f->show();
}
void MainWindow::Showpcapop()
{
    g->show();
}
MainWindow::~MainWindow()
{
    delete ui;
}
