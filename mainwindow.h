#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool isUserTyping = false;
    double firstNum = 0.0;
    QString lastPressed;
    QString lastOperation;

private slots:
    double calculate(double x1, double x2, QString op);
    void digit_pressed();
    void on_pushButton_clear_released();
    void on_pushButton_clearEntry_released();
    void on_pushButton_sign_released();
    void on_pushButton_decimal_released();
    void on_pushButton_percent_released();
    void arithmetic_operation_pressed();
    void on_pushButton_equals_released();
    void on_pushButton_square_released();
    void on_pushButton_delete_released();
};

#endif // MAINWINDOW_H
