#include "roominfodialog.h"
#include "ui_roominfodialog.h"

RoomInfoDialog::RoomInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoomInfoDialog)
{
    ui->setupUi(this);
    connect(ui->close, &QPushButton::clicked, this, &RoomInfoDialog::on_close_clicked);
}

RoomInfoDialog::~RoomInfoDialog()
{
    delete ui;
}

void RoomInfoDialog::setRoomName(const QString &name)
{
    ui->roomname->setText(name);
}

void RoomInfoDialog::setRoomInfo(const QString &info)
{
    ui->aboutroom->setText(info);
}

void RoomInfoDialog::on_close_clicked()
{
    accept();
}
