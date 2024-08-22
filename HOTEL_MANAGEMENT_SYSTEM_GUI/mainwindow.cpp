#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "revenuewindow.h"
#include "ui_revenuewindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    r = new RevenueWindow(this);
    r->show();
    //this->close();
    //revenuewindow *r = new revenuewindow;  // Use a pointer to create a new window
    //r->show();
}


