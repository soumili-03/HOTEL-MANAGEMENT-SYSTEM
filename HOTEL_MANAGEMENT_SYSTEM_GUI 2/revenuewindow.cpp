#include "revenuewindow.h"
#include "ui_revenuewindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

RevenueWindow::RevenueWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RevenueWindow)
{
    ui->setupUi(this);
}

RevenueWindow::~RevenueWindow()
{
    delete ui;
}

void RevenueWindow::on_pushButton_clicked()
{
    // Create a new instance of MainWindow
    MainWindow *mainWindow = new MainWindow(this);

    // Show the main window
    mainWindow->show();

    // Hide the current revenue window
    this->hide();
}


