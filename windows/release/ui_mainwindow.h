/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_stack;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_square;
    QPushButton *pushButton_inverse;
    QPushButton *pushButton_clearEntry;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_equals;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(417, 494);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_stack = new QLabel(centralWidget);
        label_stack->setObjectName(QStringLiteral("label_stack"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(label_stack->sizePolicy().hasHeightForWidth());
        label_stack->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(12);
        label_stack->setFont(font);
        label_stack->setLayoutDirection(Qt::LeftToRight);
        label_stack->setScaledContents(false);
        label_stack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_stack->setMargin(5);

        verticalLayout->addWidget(label_stack);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(16);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(5);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_percent, 0, 0, 1, 1);

        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        sizePolicy1.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_sqrt, 0, 1, 1, 1);

        pushButton_square = new QPushButton(centralWidget);
        pushButton_square->setObjectName(QStringLiteral("pushButton_square"));
        sizePolicy1.setHeightForWidth(pushButton_square->sizePolicy().hasHeightForWidth());
        pushButton_square->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_square, 0, 2, 1, 1);

        pushButton_inverse = new QPushButton(centralWidget);
        pushButton_inverse->setObjectName(QStringLiteral("pushButton_inverse"));
        sizePolicy1.setHeightForWidth(pushButton_inverse->sizePolicy().hasHeightForWidth());
        pushButton_inverse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_inverse, 0, 3, 1, 1);

        pushButton_clearEntry = new QPushButton(centralWidget);
        pushButton_clearEntry->setObjectName(QStringLiteral("pushButton_clearEntry"));
        sizePolicy1.setHeightForWidth(pushButton_clearEntry->sizePolicy().hasHeightForWidth());
        pushButton_clearEntry->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_clearEntry, 1, 0, 1, 1);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        sizePolicy1.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_clear, 1, 1, 1, 1);

        pushButton_delete = new QPushButton(centralWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy1.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_delete, 1, 2, 1, 1);

        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        sizePolicy1.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_divide, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QLatin1String(".enjoy-css {\n"
"  display: inline-block;\n"
"  -webkit-box-sizing: content-box;\n"
"  -moz-box-sizing: content-box;\n"
"  box-sizing: content-box;\n"
"  cursor: pointer;\n"
"  padding: 10px 20px;\n"
"  border: 1px solid #018dc4;\n"
"  -webkit-border-radius: 3px;\n"
"  border-radius: 3px;\n"
"  font: normal 16px/normal \"Times New Roman\", Times, serif;\n"
"  color: rgba(255,255,255,0.9);\n"
"  -o-text-overflow: clip;\n"
"  text-overflow: clip;\n"
"  background: #0199d9;\n"
"  -webkit-box-shadow: 2px 2px 2px 0 rgba(0,0,0,0.2) ;\n"
"  box-shadow: 2px 2px 2px 0 rgba(0,0,0,0.2) ;\n"
"  text-shadow: -1px -1px 0 rgba(15,73,168,0.66) ;\n"
"  -webkit-transition: all 300ms cubic-bezier(0.42, 0, 0.58, 1);\n"
"  -moz-transition: all 300ms cubic-bezier(0.42, 0, 0.58, 1);\n"
"  -o-transition: all 300ms cubic-bezier(0.42, 0, 0.58, 1);\n"
"  transition: all 300ms cubic-bezier(0.42, 0, 0.58, 1);\n"
"}"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        sizePolicy1.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_multiply, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        sizePolicy1.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_minus, 3, 3, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_plus, 4, 3, 1, 1);

        pushButton_sign = new QPushButton(centralWidget);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        sizePolicy1.setHeightForWidth(pushButton_sign->sizePolicy().hasHeightForWidth());
        pushButton_sign->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_sign, 5, 0, 1, 1);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_decimal = new QPushButton(centralWidget);
        pushButton_decimal->setObjectName(QStringLiteral("pushButton_decimal"));
        sizePolicy1.setHeightForWidth(pushButton_decimal->sizePolicy().hasHeightForWidth());
        pushButton_decimal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_decimal, 5, 2, 1, 1);

        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        sizePolicy1.setHeightForWidth(pushButton_equals->sizePolicy().hasHeightForWidth());
        pushButton_equals->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_equals, 5, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_stack->setText(QString());
        label->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "\342\210\232	", nullptr));
        pushButton_square->setText(QApplication::translate("MainWindow", "x\302\262", nullptr));
        pushButton_inverse->setText(QApplication::translate("MainWindow", "1/x", nullptr));
        pushButton_clearEntry->setText(QApplication::translate("MainWindow", "CE", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_delete->setText(QApplication::translate("MainWindow", "<-", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_delete->setShortcut(QApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_divide->setShortcut(QApplication::translate("MainWindow", "/", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_7->setShortcut(QApplication::translate("MainWindow", "7", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_8->setShortcut(QApplication::translate("MainWindow", "8", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_9->setShortcut(QApplication::translate("MainWindow", "9", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_multiply->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("MainWindow", "4", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_5->setShortcut(QApplication::translate("MainWindow", "5", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_6->setShortcut(QApplication::translate("MainWindow", "6", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_minus->setShortcut(QApplication::translate("MainWindow", "-", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_1->setShortcut(QApplication::translate("MainWindow", "1", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "2", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "3", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_plus->setShortcut(QApplication::translate("MainWindow", "+", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_sign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_0->setShortcut(QApplication::translate("MainWindow", "0", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_decimal->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_decimal->setShortcut(QApplication::translate("MainWindow", ".", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_equals->setText(QApplication::translate("MainWindow", "=", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_equals->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
