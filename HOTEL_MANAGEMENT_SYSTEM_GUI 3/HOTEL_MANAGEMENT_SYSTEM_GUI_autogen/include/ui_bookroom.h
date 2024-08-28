/********************************************************************************
** Form generated from reading UI file 'bookroom.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKROOM_H
#define UI_BOOKROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookroom
{
public:
    QWidget *centralwidget;
    QPushButton *save;
    QPushButton *edit;
    QPushButton *delete_2;
    QTextEdit *message;
    QTextEdit *roomno;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *bookname;
    QLineEdit *mobile;
    QDateEdit *checkin;
    QDateEdit *checkout;
    QLineEdit *totaldays;
    QComboBox *countguest;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookroom)
    {
        if (bookroom->objectName().isEmpty())
            bookroom->setObjectName("bookroom");
        bookroom->resize(800, 600);
        centralwidget = new QWidget(bookroom);
        centralwidget->setObjectName("centralwidget");
        save = new QPushButton(centralwidget);
        save->setObjectName("save");
        save->setGeometry(QRect(200, 390, 81, 32));
        edit = new QPushButton(centralwidget);
        edit->setObjectName("edit");
        edit->setGeometry(QRect(340, 390, 100, 32));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(500, 390, 100, 32));
        message = new QTextEdit(centralwidget);
        message->setObjectName("message");
        message->setGeometry(QRect(220, 430, 361, 41));
        roomno = new QTextEdit(centralwidget);
        roomno->setObjectName("roomno");
        roomno->setGeometry(QRect(250, 50, 291, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 120, 91, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 160, 131, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 200, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 240, 101, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 280, 111, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 320, 111, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 350, 111, 16));
        bookname = new QLineEdit(centralwidget);
        bookname->setObjectName("bookname");
        bookname->setGeometry(QRect(450, 120, 113, 21));
        mobile = new QLineEdit(centralwidget);
        mobile->setObjectName("mobile");
        mobile->setGeometry(QRect(450, 200, 113, 21));
        checkin = new QDateEdit(centralwidget);
        checkin->setObjectName("checkin");
        checkin->setGeometry(QRect(450, 270, 110, 22));
        checkout = new QDateEdit(centralwidget);
        checkout->setObjectName("checkout");
        checkout->setGeometry(QRect(450, 320, 110, 22));
        totaldays = new QLineEdit(centralwidget);
        totaldays->setObjectName("totaldays");
        totaldays->setGeometry(QRect(450, 360, 113, 21));
        countguest = new QComboBox(centralwidget);
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->addItem(QString());
        countguest->setObjectName("countguest");
        countguest->setGeometry(QRect(450, 230, 103, 32));
        bookroom->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookroom);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        bookroom->setMenuBar(menubar);
        statusbar = new QStatusBar(bookroom);
        statusbar->setObjectName("statusbar");
        bookroom->setStatusBar(statusbar);

        retranslateUi(bookroom);

        QMetaObject::connectSlotsByName(bookroom);
    } // setupUi

    void retranslateUi(QMainWindow *bookroom)
    {
        bookroom->setWindowTitle(QCoreApplication::translate("bookroom", "MainWindow", nullptr));
        save->setText(QCoreApplication::translate("bookroom", "Save", nullptr));
        edit->setText(QCoreApplication::translate("bookroom", "Edit", nullptr));
        delete_2->setText(QCoreApplication::translate("bookroom", "Delete", nullptr));
        label->setText(QCoreApplication::translate("bookroom", "Booking Name", nullptr));
        label_2->setText(QCoreApplication::translate("bookroom", "Upload Identity proof", nullptr));
        label_3->setText(QCoreApplication::translate("bookroom", "Mobile number", nullptr));
        label_4->setText(QCoreApplication::translate("bookroom", "No. of people", nullptr));
        label_5->setText(QCoreApplication::translate("bookroom", "Check-in date", nullptr));
        label_6->setText(QCoreApplication::translate("bookroom", "Check-out date", nullptr));
        label_7->setText(QCoreApplication::translate("bookroom", "No. of days", nullptr));
        countguest->setItemText(0, QCoreApplication::translate("bookroom", "1", nullptr));
        countguest->setItemText(1, QCoreApplication::translate("bookroom", "2", nullptr));
        countguest->setItemText(2, QCoreApplication::translate("bookroom", "3", nullptr));
        countguest->setItemText(3, QCoreApplication::translate("bookroom", "4", nullptr));
        countguest->setItemText(4, QCoreApplication::translate("bookroom", "5", nullptr));
        countguest->setItemText(5, QCoreApplication::translate("bookroom", "6", nullptr));
        countguest->setItemText(6, QCoreApplication::translate("bookroom", "7", nullptr));
        countguest->setItemText(7, QCoreApplication::translate("bookroom", "8", nullptr));
        countguest->setItemText(8, QCoreApplication::translate("bookroom", "9", nullptr));
        countguest->setItemText(9, QCoreApplication::translate("bookroom", "10", nullptr));

    } // retranslateUi

};

namespace Ui {
    class bookroom: public Ui_bookroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKROOM_H
