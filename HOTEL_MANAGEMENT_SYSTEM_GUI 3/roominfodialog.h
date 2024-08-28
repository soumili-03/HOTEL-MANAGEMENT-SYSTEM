#ifndef ROOMINFODIALOG_H
#define ROOMINFODIALOG_H

#include <QDialog>

namespace Ui {
class RoomInfoDialog;
}

class RoomInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoomInfoDialog(QWidget *parent = nullptr);
    ~RoomInfoDialog();

    void setRoomName(const QString &name);
    void setRoomInfo(const QString &info);

private slots:
    void on_close_clicked();

private:
    Ui::RoomInfoDialog *ui;
};

#endif // ROOMINFODIALOG_H
