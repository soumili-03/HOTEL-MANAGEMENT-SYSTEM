/********************************************************************************
** Form generated from reading UI file 'revenuewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVENUEWINDOW_H
#define UI_REVENUEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RevenueWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *RevenueWindow)
    {
        if (RevenueWindow->objectName().isEmpty())
            RevenueWindow->setObjectName("RevenueWindow");
        RevenueWindow->resize(800, 600);
        centralwidget = new QWidget(RevenueWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 140, 241, 151));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 83, 29));
        RevenueWindow->setCentralWidget(centralwidget);

        retranslateUi(RevenueWindow);

        QMetaObject::connectSlotsByName(RevenueWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RevenueWindow)
    {
        RevenueWindow->setWindowTitle(QCoreApplication::translate("RevenueWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("RevenueWindow", "REVENUE", nullptr));
        pushButton->setText(QCoreApplication::translate("RevenueWindow", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RevenueWindow: public Ui_RevenueWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVENUEWINDOW_H
