#ifndef REVENUEWINDOW_H
#define REVENUEWINDOW_H

#include <QMainWindow>

namespace Ui {
class RevenueWindow;
}

class RevenueWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RevenueWindow(QWidget *parent = nullptr);
    ~RevenueWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RevenueWindow *ui;
};

#endif // REVENUEWINDOW_H
