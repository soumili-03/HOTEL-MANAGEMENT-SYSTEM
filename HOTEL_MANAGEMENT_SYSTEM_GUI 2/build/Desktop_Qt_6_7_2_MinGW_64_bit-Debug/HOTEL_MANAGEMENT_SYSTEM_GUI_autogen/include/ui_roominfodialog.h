/********************************************************************************
** Form generated from reading UI file 'roominfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMINFODIALOG_H
#define UI_ROOMINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RoomInfoDialog
{
public:
    QTextEdit *aboutroom;
    QLineEdit *roomname;
    QPushButton *close;

    void setupUi(QDialog *RoomInfoDialog)
    {
        if (RoomInfoDialog->objectName().isEmpty())
            RoomInfoDialog->setObjectName("RoomInfoDialog");
        RoomInfoDialog->resize(478, 315);
        aboutroom = new QTextEdit(RoomInfoDialog);
        aboutroom->setObjectName("aboutroom");
        aboutroom->setGeometry(QRect(40, 50, 311, 201));
        aboutroom->setReadOnly(true);
        roomname = new QLineEdit(RoomInfoDialog);
        roomname->setObjectName("roomname");
        roomname->setGeometry(QRect(140, 10, 111, 21));
        roomname->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        roomname->setReadOnly(true);
        close = new QPushButton(RoomInfoDialog);
        close->setObjectName("close");
        close->setGeometry(QRect(260, 260, 100, 32));

        retranslateUi(RoomInfoDialog);

        QMetaObject::connectSlotsByName(RoomInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomInfoDialog)
    {
        RoomInfoDialog->setWindowTitle(QCoreApplication::translate("RoomInfoDialog", "Dialog", nullptr));
        close->setText(QCoreApplication::translate("RoomInfoDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomInfoDialog: public Ui_RoomInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMINFODIALOG_H
