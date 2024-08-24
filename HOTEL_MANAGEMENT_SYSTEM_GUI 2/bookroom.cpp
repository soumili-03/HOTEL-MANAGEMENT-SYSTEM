#include "bookroom.h"
#include "ui_bookroom.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

bookroom::bookroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookroom)
{
    ui->setupUi(this);
    setReadOnly(false);  // Set fields editable by default

    // Connect signals for date changes
    connect(ui->checkin, &QDateEdit::dateChanged, this, &bookroom::on_checkin_dateChanged);
    connect(ui->checkout, &QDateEdit::dateChanged, this, &bookroom::on_checkout_dateChanged);
}

bookroom::~bookroom()
{
    delete ui;
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

    if (!isValidMobileNumber(mobileNumber)) {
        QMessageBox::warning(this, "Invalid Mobile Number", "Please enter a valid 10-digit mobile number.");
        return;
    }

    calculateTotalDays();
    setReadOnly(true);
}

void bookroom::on_edit_clicked()
{
    setReadOnly(false);
}

void bookroom::on_delete_2_clicked()
{
    ui->roomno->clear();
    ui->bookname->clear();
    ui->mobile->clear();
    ui->countguest->clear();
    ui->checkin->clear();
    ui->checkout->clear();
    ui->totaldays->clear();
    setReadOnly(false);
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

