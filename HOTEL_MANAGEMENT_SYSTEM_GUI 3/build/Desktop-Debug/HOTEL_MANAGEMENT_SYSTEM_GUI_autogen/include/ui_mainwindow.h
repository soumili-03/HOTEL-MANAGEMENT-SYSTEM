/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *heading;
    QLabel *revenueheading;
    QLabel *searchheading;
    QLabel *vacancyheading;
    QPushButton *revenuebutton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QPushButton *singleinfo;
    QPushButton *doubleinfo;
    QPushButton *suiteinfo;
    QPushButton *familyinfo;
    QPushButton *deluxeinfo;
    QPushButton *penthouseinfo;
    QPushButton *r101;
    QPushButton *r102;
    QPushButton *r103;
    QPushButton *r104;
    QPushButton *r105;
    QPushButton *r106;
    QPushButton *r107;
    QPushButton *r108;
    QPushButton *r109;
    QPushButton *r110;
    QPushButton *r201;
    QPushButton *r202;
    QPushButton *r203;
    QPushButton *r204;
    QPushButton *r205;
    QPushButton *r206;
    QPushButton *r207;
    QPushButton *r208;
    QPushButton *r209;
    QPushButton *r210;
    QPushButton *r301;
    QPushButton *r302;
    QPushButton *r303;
    QPushButton *r304;
    QPushButton *r305;
    QPushButton *r306;
    QPushButton *r307;
    QPushButton *r308;
    QPushButton *r309;
    QPushButton *r310;
    QPushButton *r401;
    QPushButton *r402;
    QPushButton *r403;
    QPushButton *r404;
    QPushButton *r405;
    QPushButton *r406;
    QPushButton *r407;
    QPushButton *r408;
    QPushButton *r409;
    QPushButton *r410;
    QPushButton *r501;
    QPushButton *r502;
    QPushButton *r503;
    QPushButton *r504;
    QPushButton *r505;
    QPushButton *r506;
    QPushButton *r507;
    QPushButton *r508;
    QPushButton *r509;
    QPushButton *r510;
    QLabel *label;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLineEdit *searchbyname;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1161, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QFont font;
        font.setPointSize(19);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(190, 120, 911, 571));
        tableWidget->setLineWidth(15);
        tableWidget->setShowGrid(true);
        tableWidget->setRowCount(5);
        tableWidget->setColumnCount(10);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setDefaultSectionSize(90);
        tableWidget->verticalHeader()->setDefaultSectionSize(110);
        heading = new QLabel(centralwidget);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(50, 40, 181, 61));
        heading->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Times New Roman\";"));
        revenueheading = new QLabel(centralwidget);
        revenueheading->setObjectName("revenueheading");
        revenueheading->setGeometry(QRect(50, 130, 63, 20));
        searchheading = new QLabel(centralwidget);
        searchheading->setObjectName("searchheading");
        searchheading->setGeometry(QRect(40, 260, 63, 20));
        vacancyheading = new QLabel(centralwidget);
        vacancyheading->setObjectName("vacancyheading");
        vacancyheading->setGeometry(QRect(50, 380, 63, 20));
        revenuebutton = new QPushButton(centralwidget);
        revenuebutton->setObjectName("revenuebutton");
        revenuebutton->setGeometry(QRect(40, 160, 81, 51));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(230, 170, 40, 40));
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setLineWidth(5);
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 170, 40, 40));
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setLineWidth(5);
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(770, 170, 40, 40));
        label_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_8->setLineWidth(5);
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(680, 170, 40, 40));
        label_9->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_9->setLineWidth(5);
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(590, 170, 40, 40));
        label_10->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_10->setLineWidth(5);
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(500, 170, 40, 40));
        label_11->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_11->setLineWidth(5);
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(410, 170, 40, 40));
        label_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_12->setLineWidth(5);
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1040, 170, 40, 40));
        label_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_13->setLineWidth(5);
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(950, 170, 40, 40));
        label_14->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_14->setLineWidth(5);
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(860, 170, 40, 40));
        label_15->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_15->setLineWidth(5);
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40-2.png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(230, 380, 41, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(580, 380, 41, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(490, 380, 41, 51));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(410, 380, 41, 51));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(320, 380, 41, 51));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(950, 380, 41, 51));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(860, 380, 41, 51));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(770, 380, 41, 51));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(680, 380, 41, 51));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1040, 380, 41, 51));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-48.png")));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(590, 260, 41, 51));
        label_25->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(500, 260, 41, 51));
        label_26->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(410, 260, 41, 51));
        label_27->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(330, 260, 41, 51));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(230, 270, 41, 41));
        label_29->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(950, 260, 41, 51));
        label_30->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(860, 260, 41, 51));
        label_31->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_32 = new QLabel(centralwidget);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(770, 260, 41, 51));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(680, 260, 41, 51));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1040, 260, 41, 51));
        label_34->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-door-40.png")));
        label_35 = new QLabel(centralwidget);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(230, 480, 51, 51));
        label_35->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_36 = new QLabel(centralwidget);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(860, 480, 51, 51));
        label_36->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_37 = new QLabel(centralwidget);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(770, 480, 51, 51));
        label_37->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_38 = new QLabel(centralwidget);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(680, 480, 51, 51));
        label_38->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_39 = new QLabel(centralwidget);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(580, 480, 51, 51));
        label_39->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(500, 480, 51, 51));
        label_40->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_41 = new QLabel(centralwidget);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(410, 480, 51, 51));
        label_41->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_42 = new QLabel(centralwidget);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(320, 480, 51, 51));
        label_42->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(1040, 480, 51, 51));
        label_43->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        label_44 = new QLabel(centralwidget);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(950, 480, 51, 51));
        label_44->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-old-door-48.png")));
        singleinfo = new QPushButton(centralwidget);
        singleinfo->setObjectName("singleinfo");
        singleinfo->setGeometry(QRect(610, 140, 101, 21));
        singleinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        doubleinfo = new QPushButton(centralwidget);
        doubleinfo->setObjectName("doubleinfo");
        doubleinfo->setGeometry(QRect(610, 240, 91, 21));
        doubleinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        suiteinfo = new QPushButton(centralwidget);
        suiteinfo->setObjectName("suiteinfo");
        suiteinfo->setGeometry(QRect(360, 570, 51, 21));
        suiteinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        familyinfo = new QPushButton(centralwidget);
        familyinfo->setObjectName("familyinfo");
        familyinfo->setGeometry(QRect(620, 460, 81, 21));
        familyinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        deluxeinfo = new QPushButton(centralwidget);
        deluxeinfo->setObjectName("deluxeinfo");
        deluxeinfo->setGeometry(QRect(620, 350, 81, 21));
        deluxeinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        penthouseinfo = new QPushButton(centralwidget);
        penthouseinfo->setObjectName("penthouseinfo");
        penthouseinfo->setGeometry(QRect(800, 570, 71, 21));
        penthouseinfo->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        r101 = new QPushButton(centralwidget);
        r101->setObjectName("r101");
        r101->setGeometry(QRect(230, 210, 41, 31));
        r101->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r102 = new QPushButton(centralwidget);
        r102->setObjectName("r102");
        r102->setGeometry(QRect(330, 210, 41, 31));
        r102->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r103 = new QPushButton(centralwidget);
        r103->setObjectName("r103");
        r103->setGeometry(QRect(410, 210, 41, 31));
        r103->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r104 = new QPushButton(centralwidget);
        r104->setObjectName("r104");
        r104->setGeometry(QRect(500, 210, 41, 31));
        r104->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r105 = new QPushButton(centralwidget);
        r105->setObjectName("r105");
        r105->setGeometry(QRect(590, 210, 41, 31));
        r105->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r106 = new QPushButton(centralwidget);
        r106->setObjectName("r106");
        r106->setGeometry(QRect(680, 210, 41, 31));
        r106->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r107 = new QPushButton(centralwidget);
        r107->setObjectName("r107");
        r107->setGeometry(QRect(770, 210, 41, 31));
        r107->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r108 = new QPushButton(centralwidget);
        r108->setObjectName("r108");
        r108->setGeometry(QRect(860, 210, 41, 31));
        r108->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r109 = new QPushButton(centralwidget);
        r109->setObjectName("r109");
        r109->setGeometry(QRect(950, 210, 41, 31));
        r109->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r110 = new QPushButton(centralwidget);
        r110->setObjectName("r110");
        r110->setGeometry(QRect(1040, 210, 41, 31));
        r110->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r201 = new QPushButton(centralwidget);
        r201->setObjectName("r201");
        r201->setGeometry(QRect(230, 310, 41, 31));
        r201->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r202 = new QPushButton(centralwidget);
        r202->setObjectName("r202");
        r202->setGeometry(QRect(330, 310, 41, 31));
        r202->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r203 = new QPushButton(centralwidget);
        r203->setObjectName("r203");
        r203->setGeometry(QRect(410, 310, 41, 31));
        r203->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r204 = new QPushButton(centralwidget);
        r204->setObjectName("r204");
        r204->setGeometry(QRect(500, 310, 41, 31));
        r204->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r205 = new QPushButton(centralwidget);
        r205->setObjectName("r205");
        r205->setGeometry(QRect(590, 310, 41, 31));
        r205->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r206 = new QPushButton(centralwidget);
        r206->setObjectName("r206");
        r206->setGeometry(QRect(680, 310, 41, 31));
        r206->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r207 = new QPushButton(centralwidget);
        r207->setObjectName("r207");
        r207->setGeometry(QRect(770, 310, 41, 31));
        r207->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r208 = new QPushButton(centralwidget);
        r208->setObjectName("r208");
        r208->setGeometry(QRect(860, 310, 41, 31));
        r208->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r209 = new QPushButton(centralwidget);
        r209->setObjectName("r209");
        r209->setGeometry(QRect(950, 310, 41, 31));
        r209->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r210 = new QPushButton(centralwidget);
        r210->setObjectName("r210");
        r210->setGeometry(QRect(1040, 310, 41, 31));
        r210->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r301 = new QPushButton(centralwidget);
        r301->setObjectName("r301");
        r301->setGeometry(QRect(230, 430, 41, 31));
        r301->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r302 = new QPushButton(centralwidget);
        r302->setObjectName("r302");
        r302->setGeometry(QRect(320, 430, 41, 31));
        r302->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r303 = new QPushButton(centralwidget);
        r303->setObjectName("r303");
        r303->setGeometry(QRect(410, 430, 41, 31));
        r303->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r304 = new QPushButton(centralwidget);
        r304->setObjectName("r304");
        r304->setGeometry(QRect(490, 430, 41, 31));
        r304->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r305 = new QPushButton(centralwidget);
        r305->setObjectName("r305");
        r305->setGeometry(QRect(580, 430, 41, 31));
        r305->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r306 = new QPushButton(centralwidget);
        r306->setObjectName("r306");
        r306->setGeometry(QRect(680, 430, 41, 31));
        r306->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r307 = new QPushButton(centralwidget);
        r307->setObjectName("r307");
        r307->setGeometry(QRect(770, 430, 41, 31));
        r307->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r308 = new QPushButton(centralwidget);
        r308->setObjectName("r308");
        r308->setGeometry(QRect(860, 430, 41, 31));
        r308->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r309 = new QPushButton(centralwidget);
        r309->setObjectName("r309");
        r309->setGeometry(QRect(950, 430, 41, 31));
        r309->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r310 = new QPushButton(centralwidget);
        r310->setObjectName("r310");
        r310->setGeometry(QRect(1040, 430, 41, 31));
        r310->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r401 = new QPushButton(centralwidget);
        r401->setObjectName("r401");
        r401->setGeometry(QRect(230, 530, 41, 31));
        r401->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r402 = new QPushButton(centralwidget);
        r402->setObjectName("r402");
        r402->setGeometry(QRect(320, 530, 41, 31));
        r402->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r403 = new QPushButton(centralwidget);
        r403->setObjectName("r403");
        r403->setGeometry(QRect(410, 530, 41, 31));
        r403->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r404 = new QPushButton(centralwidget);
        r404->setObjectName("r404");
        r404->setGeometry(QRect(500, 530, 41, 31));
        r404->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r405 = new QPushButton(centralwidget);
        r405->setObjectName("r405");
        r405->setGeometry(QRect(580, 530, 41, 31));
        r405->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r406 = new QPushButton(centralwidget);
        r406->setObjectName("r406");
        r406->setGeometry(QRect(680, 530, 41, 31));
        r406->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r407 = new QPushButton(centralwidget);
        r407->setObjectName("r407");
        r407->setGeometry(QRect(770, 530, 41, 31));
        r407->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r408 = new QPushButton(centralwidget);
        r408->setObjectName("r408");
        r408->setGeometry(QRect(860, 530, 41, 31));
        r408->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r409 = new QPushButton(centralwidget);
        r409->setObjectName("r409");
        r409->setGeometry(QRect(950, 530, 41, 31));
        r409->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r410 = new QPushButton(centralwidget);
        r410->setObjectName("r410");
        r410->setGeometry(QRect(1040, 530, 41, 31));
        r410->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r501 = new QPushButton(centralwidget);
        r501->setObjectName("r501");
        r501->setGeometry(QRect(230, 650, 41, 31));
        r501->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r502 = new QPushButton(centralwidget);
        r502->setObjectName("r502");
        r502->setGeometry(QRect(320, 650, 41, 31));
        r502->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r503 = new QPushButton(centralwidget);
        r503->setObjectName("r503");
        r503->setGeometry(QRect(410, 650, 41, 31));
        r503->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r504 = new QPushButton(centralwidget);
        r504->setObjectName("r504");
        r504->setGeometry(QRect(500, 650, 41, 31));
        r504->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r505 = new QPushButton(centralwidget);
        r505->setObjectName("r505");
        r505->setGeometry(QRect(590, 650, 41, 31));
        r505->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r506 = new QPushButton(centralwidget);
        r506->setObjectName("r506");
        r506->setGeometry(QRect(680, 650, 41, 31));
        r506->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r507 = new QPushButton(centralwidget);
        r507->setObjectName("r507");
        r507->setGeometry(QRect(770, 650, 41, 31));
        r507->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r508 = new QPushButton(centralwidget);
        r508->setObjectName("r508");
        r508->setGeometry(QRect(860, 650, 41, 31));
        r508->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r509 = new QPushButton(centralwidget);
        r509->setObjectName("r509");
        r509->setGeometry(QRect(950, 650, 41, 31));
        r509->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        r510 = new QPushButton(centralwidget);
        r510->setObjectName("r510");
        r510->setGeometry(QRect(1040, 650, 41, 31));
        r510->setStyleSheet(QString::fromUtf8("color:rgb(255, 62, 48)"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 590, 71, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-suite-64-2.png")));
        label_45 = new QLabel(centralwidget);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(300, 590, 71, 71));
        label_45->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-suite-64-2.png")));
        label_46 = new QLabel(centralwidget);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(400, 590, 71, 71));
        label_46->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-suite-64-2.png")));
        label_47 = new QLabel(centralwidget);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(480, 590, 71, 71));
        label_47->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-suite-64-2.png")));
        label_48 = new QLabel(centralwidget);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(570, 590, 71, 71));
        label_48->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-suite-64-2.png")));
        label_49 = new QLabel(centralwidget);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(670, 590, 71, 71));
        label_49->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-bungalow-60.png")));
        label_50 = new QLabel(centralwidget);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(760, 590, 71, 71));
        label_50->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-bungalow-60.png")));
        label_51 = new QLabel(centralwidget);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(850, 590, 71, 71));
        label_51->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-bungalow-60.png")));
        label_52 = new QLabel(centralwidget);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(940, 590, 71, 71));
        label_52->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-bungalow-60.png")));
        label_53 = new QLabel(centralwidget);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(1030, 590, 71, 71));
        label_53->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/icons8-bungalow-60.png")));
        searchbyname = new QLineEdit(centralwidget);
        searchbyname->setObjectName("searchbyname");
        searchbyname->setGeometry(QRect(40, 300, 113, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        heading->setText(QCoreApplication::translate("MainWindow", "Suite Master", nullptr));
        revenueheading->setText(QCoreApplication::translate("MainWindow", "REVENUE", nullptr));
        searchheading->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        vacancyheading->setText(QCoreApplication::translate("MainWindow", "Vacancy", nullptr));
        revenuebutton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
#if QT_CONFIG(accessibility)
        label_10->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_10->setText(QString());
#if QT_CONFIG(accessibility)
        label_11->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_11->setText(QString());
#if QT_CONFIG(accessibility)
        label_12->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_12->setText(QString());
#if QT_CONFIG(accessibility)
        label_13->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_13->setText(QString());
#if QT_CONFIG(accessibility)
        label_14->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_14->setText(QString());
#if QT_CONFIG(accessibility)
        label_15->setAccessibleDescription(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(accessibility)
        label_15->setText(QString());
        label_5->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QString());
        label_31->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        label_40->setText(QString());
        label_41->setText(QString());
        label_42->setText(QString());
        label_43->setText(QString());
        label_44->setText(QString());
        singleinfo->setText(QCoreApplication::translate("MainWindow", "Single room", nullptr));
        doubleinfo->setText(QCoreApplication::translate("MainWindow", "Double room", nullptr));
        suiteinfo->setText(QCoreApplication::translate("MainWindow", "Suite", nullptr));
        familyinfo->setText(QCoreApplication::translate("MainWindow", "Family room", nullptr));
        deluxeinfo->setText(QCoreApplication::translate("MainWindow", "Deluxe room", nullptr));
        penthouseinfo->setText(QCoreApplication::translate("MainWindow", "Penthouse", nullptr));
        r101->setText(QCoreApplication::translate("MainWindow", "101", nullptr));
        r102->setText(QCoreApplication::translate("MainWindow", "102", nullptr));
        r103->setText(QCoreApplication::translate("MainWindow", "103", nullptr));
        r104->setText(QCoreApplication::translate("MainWindow", "104", nullptr));
        r105->setText(QCoreApplication::translate("MainWindow", "105", nullptr));
        r106->setText(QCoreApplication::translate("MainWindow", "106", nullptr));
        r107->setText(QCoreApplication::translate("MainWindow", "107", nullptr));
        r108->setText(QCoreApplication::translate("MainWindow", "108", nullptr));
        r109->setText(QCoreApplication::translate("MainWindow", "109", nullptr));
        r110->setText(QCoreApplication::translate("MainWindow", "110", nullptr));
        r201->setText(QCoreApplication::translate("MainWindow", "201", nullptr));
        r202->setText(QCoreApplication::translate("MainWindow", "202", nullptr));
        r203->setText(QCoreApplication::translate("MainWindow", "203", nullptr));
        r204->setText(QCoreApplication::translate("MainWindow", "204", nullptr));
        r205->setText(QCoreApplication::translate("MainWindow", "205", nullptr));
        r206->setText(QCoreApplication::translate("MainWindow", "206", nullptr));
        r207->setText(QCoreApplication::translate("MainWindow", "207", nullptr));
        r208->setText(QCoreApplication::translate("MainWindow", "208", nullptr));
        r209->setText(QCoreApplication::translate("MainWindow", "209", nullptr));
        r210->setText(QCoreApplication::translate("MainWindow", "210", nullptr));
        r301->setText(QCoreApplication::translate("MainWindow", "301", nullptr));
        r302->setText(QCoreApplication::translate("MainWindow", "302", nullptr));
        r303->setText(QCoreApplication::translate("MainWindow", "303", nullptr));
        r304->setText(QCoreApplication::translate("MainWindow", "304", nullptr));
        r305->setText(QCoreApplication::translate("MainWindow", "305", nullptr));
        r306->setText(QCoreApplication::translate("MainWindow", "306", nullptr));
        r307->setText(QCoreApplication::translate("MainWindow", "307", nullptr));
        r308->setText(QCoreApplication::translate("MainWindow", "308", nullptr));
        r309->setText(QCoreApplication::translate("MainWindow", "309", nullptr));
        r310->setText(QCoreApplication::translate("MainWindow", "310", nullptr));
        r401->setText(QCoreApplication::translate("MainWindow", "401", nullptr));
        r402->setText(QCoreApplication::translate("MainWindow", "402", nullptr));
        r403->setText(QCoreApplication::translate("MainWindow", "403", nullptr));
        r404->setText(QCoreApplication::translate("MainWindow", "404", nullptr));
        r405->setText(QCoreApplication::translate("MainWindow", "405", nullptr));
        r406->setText(QCoreApplication::translate("MainWindow", "406", nullptr));
        r407->setText(QCoreApplication::translate("MainWindow", "407", nullptr));
        r408->setText(QCoreApplication::translate("MainWindow", "408", nullptr));
        r409->setText(QCoreApplication::translate("MainWindow", "409", nullptr));
        r410->setText(QCoreApplication::translate("MainWindow", "410", nullptr));
        r501->setText(QCoreApplication::translate("MainWindow", "501", nullptr));
        r502->setText(QCoreApplication::translate("MainWindow", "502", nullptr));
        r503->setText(QCoreApplication::translate("MainWindow", "503", nullptr));
        r504->setText(QCoreApplication::translate("MainWindow", "504", nullptr));
        r505->setText(QCoreApplication::translate("MainWindow", "505", nullptr));
        r506->setText(QCoreApplication::translate("MainWindow", "506", nullptr));
        r507->setText(QCoreApplication::translate("MainWindow", "507", nullptr));
        r508->setText(QCoreApplication::translate("MainWindow", "508", nullptr));
        r509->setText(QCoreApplication::translate("MainWindow", "509", nullptr));
        r510->setText(QCoreApplication::translate("MainWindow", "510", nullptr));
        label->setText(QString());
        label_45->setText(QString());
        label_46->setText(QString());
        label_47->setText(QString());
        label_48->setText(QString());
        label_49->setText(QString());
        label_50->setText(QString());
        label_51->setText(QString());
        label_52->setText(QString());
        label_53->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
