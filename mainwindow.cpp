#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QtMath>>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect Digits
    connect(ui->pushButton_0, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()),this,SLOT(digit_pressed()));

    // Connect +,-,*,/
    connect(ui->pushButton_plus, SIGNAL(released()),this,SLOT(arithmetic_operation_pressed()));
    connect(ui->pushButton_minus, SIGNAL(released()),this,SLOT(arithmetic_operation_pressed()));
    connect(ui->pushButton_multiply, SIGNAL(released()),this,SLOT(arithmetic_operation_pressed()));
    connect(ui->pushButton_divide, SIGNAL(released()),this,SLOT(arithmetic_operation_pressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton*)sender();
    QString labelName;
    double labelNumber = 0.0;


    if (((lastPressed == "+") || (lastPressed == "-") ||
            (lastPressed == "*") || (lastPressed == "/") ||
            (lastPressed == "=")) && (!isUserTyping))
    {
        labelNumber = (button->text()).toDouble();
        isUserTyping = true;
        labelName = QString::number(labelNumber, 'g', 15);
    }
    else
    {
        if (ui->label->text().contains(".") && button->text()=='0')
        {
            labelName = ui->label->text() + button->text();
        }
        else
        {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            labelName = QString::number(labelNumber,'g',15);
        }

    }
    ui->label->setText(labelName);
    lastPressed = button->text();
}

void MainWindow::on_pushButton_clear_released()
{
    ui->label_stack->setText("");
    ui->label->setText("0");
    firstNum = 0.0;
    isUserTyping = false;
    lastPressed = ui->pushButton_clear->text();
}

void MainWindow::on_pushButton_clearEntry_released()
{
    ui->label->setText("0");
    lastPressed = ui->pushButton_clearEntry->text();
}

void MainWindow::on_pushButton_sign_released()
{
    double mDouble = ui->label->text().toDouble();
    mDouble = -mDouble;
    ui->label->setText(QString::number(mDouble,'g',15));
    lastPressed = ui->pushButton_sign->text();
}

void MainWindow::on_pushButton_decimal_released()
{
    if (!(ui->label->text().contains(".")))
    {
        QString newLabel = ui->label->text();
        newLabel.append(".");
        ui->label->setText(newLabel);
    }
    lastPressed = ui->pushButton_decimal->text();
}

void MainWindow::on_pushButton_percent_released()
{
    double mDouble = ui->label->text().toDouble();
    mDouble *= 0.01;
    ui->label->setText(QString::number(mDouble,'g',15));

    lastPressed = ui->pushButton_percent->text();
}

void MainWindow::arithmetic_operation_pressed()
{
    QPushButton *button = (QPushButton*)sender();

    if ( (lastPressed == "+") || (lastPressed == "-") ||
         (lastPressed == "*") || (lastPressed == "/"))
    {

        // update ui
        QString lblStack = ui->label_stack->text();
        lblStack.remove(lblStack.size()-1,1);
        lblStack.append(button->text());
        ui->label_stack->setText(lblStack);
        qDebug() << lblStack;
    }
    else
    {


        if (firstNum == 0)
        {
            firstNum = ui->label->text().toDouble();
        }
        else
        {
            double secondNum = 0.0;
            secondNum = ui->label->text().toDouble();
            firstNum = calculate(firstNum, secondNum, lastOperation);
        }

        // update ui calculator history
        QString lblStack = ui->label_stack->text();
        lblStack += ui->label->text();
        lblStack += button->text();
        ui->label_stack->setText(lblStack);

        // update ui main
        QString lblMain = QString::number(firstNum,'g',15);
        ui->label->setText(lblMain);

    }

    lastPressed = button->text();
    lastOperation = lastPressed;
    isUserTyping = false;
}

void MainWindow::on_pushButton_equals_released()
{

    QString lblStack = ui->label_stack->text();
    lblStack += ui->label->text();

    QString stackText = ui->label_stack->text();
    double secondNum = ui->label->text().toDouble();
    double answer = calculate(firstNum, secondNum, stackText.at(stackText.size()-1));

    ui->label_stack->setText(lblStack);
    ui->label->setText(QString::number(answer,'g',15));

    lastPressed = ui->pushButton_equals->text();

    // reset stack
    ui->label_stack->setText("");
    firstNum = 0.0;
    answer = 0.0;
    isUserTyping = false;
}


double MainWindow::calculate(double x1, double x2, QString op)
{
    if (op == "+")
    {
        return x1 + x2;
    }
    else if (op == "-")
    {
        return x1 - x2;
    }
    else if (op == "*")
    {
        return x1 * x2;
    }
    else if (op == "/")
    {
        return x1 / x2;
    }
    else if (op == "^")
    {
        return qPow(x1,x2);
    }
    return 0.0;
}




void MainWindow::on_pushButton_square_released()
{
    if (firstNum == 0)
    {
        firstNum = calculate(ui->label->text().toDouble(),2,"^");
    }
    else
    {
        firstNum = calculate(firstNum,2,"^");
    }

    qDebug() << firstNum;

    // update ui calculator history
    QString lblStack = ui->label_stack->text();
    QString square = ui->pushButton_square->text();
    square = square.remove(0,1);
    lblStack += ui->label->text();
    lblStack += square;
    ui->label_stack->setText(lblStack);

    // update ui main
    QString lblMain = QString::number(firstNum,'g',15);
    ui->label->setText(lblMain);

    lastPressed = ui->pushButton_square->text();
    lastOperation = lastPressed;
    isUserTyping = false;
}

void MainWindow::on_pushButton_delete_released()
{
    QString lblNumber = ui->label->text();
    lblNumber.remove(lblNumber.size()-1,1);
    if (lblNumber.size()==0)
    {
        ui->label->setText("0");
    }
    else
    {
        ui->label->setText(lblNumber);
    }

}
