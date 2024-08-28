#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "roominfodialog.h"
#include "bookroom.h"
#include "revenuewindow.h"
#include "ui_revenuewindow.h"

#include <QMainWindow>
#include <QSqlDatabase>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QFile>

bool saveBookingToDatabase(int roomNumber, const QString &bookingName, const QString &identityProofPath,
                           int mobileNo, int noOfPeople, const QString &checkInDate,
                           const QString &checkOutDate, int noOfDays) {

    QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection", false);
    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QMYSQL", "qt_sql_default_connection");
        db.setHostName("localhost");
        db.setDatabaseName("hms");
        db.setUserName("root");
        db.setPassword("shruti2004");
    }
    if (db.open()) {
        qDebug() << "Database connection successful.";
    } else {
        qDebug() << "Database connection failed.";
    }

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        return false;
    }

    // QString fileName = getFileNameFromDatabase(); // Ensure this returns a valid path
    // if (!fileName.isEmpty()) {
    //     QFile file(fileName);
    //     if (file.open(QIODevice::ReadOnly)) {
    //         qDebug() << "File opened successfully.";
    //         // Handle the file
    //     } else {
    //         qDebug() << "Failed to open file: " << file.errorString();
    //     }
    // } else {
    //     qDebug() << "No file name specified";
    // }

    QFile file(identityProofPath);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open identity proof file:" << file.errorString();
        qDebug() << "Available drivers:" << QSqlDatabase::drivers();
        return false;
    }

    QByteArray identityProofData = file.readAll();
    file.close();

    QSqlQuery query;
    query.prepare("INSERT INTO bookings (room_number, bookingname, identityproof, mobileno, noofpeople, check_in_date, check_out_date, noofdays) "
                  "VALUES (:room_number, :bookingname, :identityproof, :mobileno, :noofpeople, :check_in_date, :check_out_date, :noofdays)");
    query.bindValue(":room_number", roomNumber);
    query.bindValue(":bookingname", bookingName);
    query.bindValue(":identityproof", identityProofData);
    query.bindValue(":mobileno", mobileNo);
    query.bindValue(":noofpeople", noOfPeople);
    query.bindValue(":check_in_date", checkInDate);
    query.bindValue(":check_out_date", checkOutDate);
    query.bindValue(":noofdays", noOfDays);

    if (!query.exec()) {
        qDebug() << "Insert error:" << query.lastError().text();
        return false;
    }

    qDebug() << "Booking successfully saved to the database.";
    return true;
}





//////////////////////////

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i = 101; i <= 110; ++i) {
        connect(findChild<QPushButton*>(QString("r%1").arg(i)), &QPushButton::clicked, this, [=]() { onRoomButtonClicked(i); });
    }
    for (int i = 201; i <= 210; ++i) {
        connect(findChild<QPushButton*>(QString("r%1").arg(i)), &QPushButton::clicked, this, [=]() { onRoomButtonClicked(i); });
    }
    for (int i = 301; i <= 310; ++i) {
        connect(findChild<QPushButton*>(QString("r%1").arg(i)), &QPushButton::clicked, this, [=]() { onRoomButtonClicked(i); });
    }
    for (int i = 401; i <= 410; ++i) {
        connect(findChild<QPushButton*>(QString("r%1").arg(i)), &QPushButton::clicked, this, [=]() { onRoomButtonClicked(i); });
    }
    for (int i = 501; i <= 510; ++i) {
        connect(findChild<QPushButton*>(QString("r%1").arg(i)), &QPushButton::clicked, this, [=]() { onRoomButtonClicked(i); });
    }

    connect(ui->singleinfo, &QPushButton::clicked, this, &MainWindow::on_singleinfo_clicked);
    connect(ui->doubleinfo, &QPushButton::clicked, this, &MainWindow::on_doubleinfo_clicked);
    connect(ui->deluxeinfo, &QPushButton::clicked, this, &MainWindow::on_deluxeinfo_clicked);
    connect(ui->familyinfo, &QPushButton::clicked, this, &MainWindow::on_familyinfo_clicked);
    connect(ui->suiteinfo, &QPushButton::clicked, this, &MainWindow::on_suiteinfo_clicked);
    connect(ui->penthouseinfo, &QPushButton::clicked, this, &MainWindow::on_penthouseinfo_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openRoomInfoDialog(const QString &name, const QString &info)
{
    RoomInfoDialog dialog(this);
    dialog.setRoomName(name);
    dialog.setRoomInfo(info);
    dialog.exec();
}

void MainWindow::onRoomButtonClicked(int roomNumber)
{
    QString roomType;
    int maxGuests = 4;

    if (roomNumber >= 101 && roomNumber <= 110) {
        roomType = "Single Room";
        maxGuests = 1;
    } else if (roomNumber >= 201 && roomNumber <= 210) {
        roomType = "Double Room";
        maxGuests = 2;
    } else if (roomNumber >= 301 && roomNumber <= 310) {
        roomType = "Deluxe Room";
        maxGuests = 2;
    } else if (roomNumber >= 401 && roomNumber <= 410) {
        roomType = "Family Room";
        maxGuests = 4;
    } else if (roomNumber >= 501 && roomNumber <= 505) {
        roomType = "Suite";
        maxGuests = 6;
    } else if (roomNumber >= 506 && roomNumber <= 510) {
        roomType = "Penthouse";
        maxGuests = 10;
    }

    openRoomBooking(roomNumber, roomType, maxGuests);
}

void MainWindow::openRoomBooking(int roomNumber, const QString& roomType, int maxGuests)
{
    bookroom *booking = new bookroom();
    booking->setWindowTitle(roomType + " - Room " + QString::number(roomNumber));

    booking->setRoomDetails(roomType, maxGuests);

    booking->show();
}

void MainWindow::on_singleinfo_clicked()
{
    openRoomInfoDialog("Single Room", "Amenities:\n"
                                      "- Free WiFi\n"
                                      "- Air Conditioning\n"
                                      "- Television\n"
                                      "- Single Bed\n"
                                      "Cost per Night: Rs. 3000\n"
                                      "Number of People Allowed: 1");
}

void MainWindow::on_doubleinfo_clicked()
{
    openRoomInfoDialog("Double Room", "Amenities:\n"
                                      "- Free WiFi\n"
                                      "- Air Conditioning\n"
                                      "- Television\n"
                                      "- Double Bed\n"
                                      "- Mini Fridge\n"
                                      "Cost per Night: Rs. 5000\n"
                                      "Number of People Allowed: 2");
}

void MainWindow::on_deluxeinfo_clicked()
{
    openRoomInfoDialog("Deluxe Room", "Amenities:\n"
                                      "- Free WiFi\n"
                                      "- Air Conditioning\n"
                                      "- Television\n"
                                      "- King Size Bed\n"
                                      "- Mini Bar\n"
                                      "- Bathtub\n"
                                      "Cost per Night: Rs. 7000\n"
                                      "Number of People Allowed: 2");
}

void MainWindow::on_familyinfo_clicked()
{
    openRoomInfoDialog("Family Room", "Amenities:\n"
                                      "- Free WiFi\n"
                                      "- Air Conditioning\n"
                                      "- Television\n"
                                      "- Two Double Beds\n"
                                      "- Sofa Bed\n"
                                      "- Mini Fridge\n"
                                      "Cost per Night: Rs. 9000\n"
                                      "Number of People Allowed: 4");
}

void MainWindow::on_suiteinfo_clicked()
{
    openRoomInfoDialog("Suite Room", "Amenities:\n"
                                     "- Free WiFi\n"
                                     "- Air Conditioning\n"
                                     "- Television\n"
                                     "- King Size Bed\n"
                                     "- Living Area\n"
                                     "- Jacuzzi\n"
                                     "- Mini Bar\n"
                                     "Cost per Night: Rs. 14000\n"
                                     "Number of People Allowed: 6");
}

void MainWindow::on_penthouseinfo_clicked()
{
    openRoomInfoDialog("Penthouse", "Amenities:\n"
                                    "- Free WiFi\n"
                                    "- Air Conditioning\n"
                                    "- Television\n"
                                    "- Luxury King Size Bed\n"
                                    "- Private Balcony\n"
                                    "- Jacuzzi\n"
                                    "- Personal Chef\n"
                                    "- Mini Bar\n"
                                    "Cost per Night: Rs. 20000\n"
                                    "Number of People Allowed: 10");
}


void MainWindow::on_revenuebutton_clicked()
{
    r = new RevenueWindow(this);
    r->show();
}
