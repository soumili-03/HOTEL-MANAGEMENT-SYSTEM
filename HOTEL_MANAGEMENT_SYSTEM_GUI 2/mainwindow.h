#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "roominfodialog.h"
#include "bookroom.h"
#include "revenuewindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_singleinfo_clicked();
    void on_doubleinfo_clicked();
    void on_deluxeinfo_clicked();
    void on_familyinfo_clicked();
    void on_suiteinfo_clicked();
    void on_penthouseinfo_clicked();

    // New slot for handling room button clicks
    void onRoomButtonClicked(int roomNumber);

    void on_revenuebutton_clicked();

private:
    Ui::MainWindow *ui;
    RevenueWindow* r;

    // Method to open the room booking dialog
    void openRoomBooking(int roomNumber, const QString& roomType, int maxGuests);

    // Method to open the room info dialog
    void openRoomInfoDialog(const QString &name, const QString &info);
};



#endif // MAINWINDOW_H
