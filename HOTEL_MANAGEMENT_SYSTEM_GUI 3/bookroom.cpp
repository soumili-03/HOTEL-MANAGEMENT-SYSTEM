#include "bookroom.h"
#include "ui_bookroom.h"
#include "mainwindow.h"
#include <QMessageBox>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QFile>
#include <QMainWindow>
#include <QSqlDatabase>

bookroom::bookroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookroom),
    isEditMode(false)  // Initialize edit mode flag
{
    ui->setupUi(this);
    setReadOnly(false);  // Set fields editable by default

    // Connect signals for date changes
    connect(ui->checkin, &QDateEdit::dateChanged, this, &bookroom::on_checkin_dateChanged);
    connect(ui->checkout, &QDateEdit::dateChanged, this, &bookroom::on_checkout_dateChanged);

    // Establish database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("hms");
    db.setUserName("root");
    db.setPassword("shruti2004");

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database.");
        return;
    } else {
        qDebug() << "Database connection successful.";
    }
}

bookroom::~bookroom()
{
    delete ui;
    QSqlDatabase::removeDatabase("QMYSQL");  // Clean up the database connection
}

void bookroom::setReadOnly(bool readOnly)
{
    ui->roomno->setReadOnly(readOnly);
    ui->bookname->setReadOnly(readOnly);
    ui->mobile->setReadOnly(readOnly);
    ui->countguest->setEnabled(!readOnly);
    ui->checkin->setReadOnly(readOnly);
    ui->checkout->setReadOnly(readOnly);
    ui->totaldays->setReadOnly(readOnly);
}

void bookroom::calculateTotalDays()
{
    QDate checkinDate = ui->checkin->date();
    QDate checkoutDate = ui->checkout->date();
    int totalDays = checkinDate.daysTo(checkoutDate);
    if (totalDays < 0) {
        QMessageBox::warning(this, "Invalid Date", "Check-out date must be after check-in date.");
        ui->totaldays->clear();
    } else {
        ui->totaldays->setText(QString::number(totalDays));
    }
}

bool bookroom::isValidMobileNumber(const QString &mobileNumber)
{
    return mobileNumber.length() == 10 && mobileNumber.toULongLong();
}

void bookroom::on_save_clicked()
{
    QString roomNumber = ui->roomno->toPlainText();
    QString bookingName = ui->bookname->text();
    QString mobileNumber = ui->mobile->text();
    QString checkInDate = ui->checkin->date().toString("yyyy-MM-dd");
    QString checkOutDate = ui->checkout->date().toString("yyyy-MM-dd");
    int noOfPeople = ui->countguest->currentText().toInt();
    int noOfDays = ui->totaldays->text().toInt();
    QString identityProofPath = ""; // Set this to the appropriate file path

    if (!isValidMobileNumber(mobileNumber)) {
        QMessageBox::warning(this, "Invalid Mobile Number", "Please enter a valid 10-digit mobile number.");
        return;
    }

    calculateTotalDays();

    QSqlQuery query;
    if (isEditMode) {
        query.prepare("UPDATE bookings SET bookingname=:bookingname, mobileno=:mobileno, noofpeople=:noofpeople, "
                      "check_in_date=:check_in_date, check_out_date=:check_out_date, noofdays=:noofdays "
                      "WHERE room_number=:room_number");
    } else {
        query.prepare("INSERT INTO bookings (room_number, bookingname, identityproof, mobileno, noofpeople, check_in_date, check_out_date, noofdays) "
                      "VALUES (:room_number, :bookingname, :identityproof, :mobileno, :noofpeople, :check_in_date, :check_out_date, :noofdays)");
    }

    query.bindValue(":room_number", roomNumber);
    query.bindValue(":bookingname", bookingName);
    query.bindValue(":mobileno", mobileNumber);
    query.bindValue(":noofpeople", noOfPeople);
    query.bindValue(":check_in_date", checkInDate);
    query.bindValue(":check_out_date", checkOutDate);
    query.bindValue(":noofdays", noOfDays);

    if (!isEditMode) {
        // Load identity proof image file for new booking
        QFile file(identityProofPath);
        if (!file.open(QIODevice::ReadOnly)) {
            qDebug() << "Failed to open identity proof file:" << file.errorString();
            return;
        }
        QByteArray identityProofData = file.readAll();
        file.close();

        query.bindValue(":identityproof", identityProofData);
    }

    if (!query.exec()) {
        qDebug() << "Database error:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to save booking.");
    } else {
        qDebug() << "Booking successfully saved.";
        QMessageBox::information(this, "Success", "Booking successfully saved.");
        setReadOnly(true);
    }
}

void bookroom::on_edit_clicked()
{
    isEditMode = true;  // Set edit mode to true
    setReadOnly(false);
}

void bookroom::on_delete_2_clicked()
{
    QString roomNumber = ui->roomno->toPlainText();

    QSqlQuery query;
    query.prepare("DELETE FROM bookings WHERE room_number = :room_number");
    query.bindValue(":room_number", roomNumber);

    if (!query.exec()) {
        qDebug() << "Database error:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to delete booking.");
    } else {
        qDebug() << "Booking successfully deleted.";
        QMessageBox::information(this, "Success", "Booking successfully deleted.");

        ui->roomno->clear();
        ui->bookname->clear();
        ui->mobile->clear();
        ui->countguest->clear();
        ui->checkin->clear();
        ui->checkout->clear();
        ui->totaldays->clear();
        setReadOnly(false);
    }
}

void bookroom::on_checkin_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    calculateTotalDays();
}

void bookroom::on_checkout_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    calculateTotalDays();
}

void bookroom::setRoomDetails(const QString &roomType, int maxGuests)
{
    ui->message->setText("Room Type: " + roomType + "\nMax Guests: " + QString::number(maxGuests));
    ui->countguest->setCurrentText(QString::number(maxGuests));
}

void bookroom::on_backbutton_clicked()
{
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
    this->hide();
}
