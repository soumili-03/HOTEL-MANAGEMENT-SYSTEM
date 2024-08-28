#ifndef BOOKROOM_H
#define BOOKROOM_H

#include <QMainWindow>
#include <QString>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QFile>

namespace Ui {
class bookroom;
}

class bookroom : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookroom(QWidget *parent = nullptr);
    ~bookroom();

    // Declaration of setRoomDetails
    void setRoomDetails(const QString &roomType, int maxGuests);

private slots:
    void on_save_clicked();
    void on_edit_clicked();
    void on_delete_2_clicked();
    void on_checkin_dateChanged(const QDate &date);
    void on_checkout_dateChanged(const QDate &date);

    void on_backbutton_clicked();

private:
    Ui::bookroom *ui;
    void setReadOnly(bool readOnly);
    void calculateTotalDays();
    bool isValidMobileNumber(const QString &mobileNumber);

    QString roomType;
    int maxGuests;
    bool isEditMode;  // Flag to check if we are in edit mode
};

#endif // BOOKROOM_H
