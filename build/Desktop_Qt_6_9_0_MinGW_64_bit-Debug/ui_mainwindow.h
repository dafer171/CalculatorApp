/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_01;
    QPushButton *pushButton_02;
    QPushButton *pushButton_03;
    QPushButton *pushButton_06;
    QPushButton *pushButton_05;
    QPushButton *pushButton_04;
    QPushButton *pushButton_09;
    QPushButton *pushButton_08;
    QPushButton *pushButton_07;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_coma;
    QPushButton *pushButton_00;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_save;
    QPushButton *pushButton_load;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(232, 234);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 141, 24));
        pushButton_01 = new QPushButton(centralwidget);
        pushButton_01->setObjectName("pushButton_01");
        pushButton_01->setGeometry(QRect(20, 50, 41, 21));
        pushButton_02 = new QPushButton(centralwidget);
        pushButton_02->setObjectName("pushButton_02");
        pushButton_02->setGeometry(QRect(70, 50, 41, 21));
        pushButton_03 = new QPushButton(centralwidget);
        pushButton_03->setObjectName("pushButton_03");
        pushButton_03->setGeometry(QRect(120, 50, 41, 21));
        pushButton_06 = new QPushButton(centralwidget);
        pushButton_06->setObjectName("pushButton_06");
        pushButton_06->setGeometry(QRect(120, 80, 41, 21));
        pushButton_05 = new QPushButton(centralwidget);
        pushButton_05->setObjectName("pushButton_05");
        pushButton_05->setGeometry(QRect(70, 80, 41, 21));
        pushButton_04 = new QPushButton(centralwidget);
        pushButton_04->setObjectName("pushButton_04");
        pushButton_04->setGeometry(QRect(20, 80, 41, 21));
        pushButton_09 = new QPushButton(centralwidget);
        pushButton_09->setObjectName("pushButton_09");
        pushButton_09->setGeometry(QRect(120, 110, 41, 21));
        pushButton_08 = new QPushButton(centralwidget);
        pushButton_08->setObjectName("pushButton_08");
        pushButton_08->setGeometry(QRect(70, 110, 41, 21));
        pushButton_07 = new QPushButton(centralwidget);
        pushButton_07->setObjectName("pushButton_07");
        pushButton_07->setGeometry(QRect(20, 110, 41, 21));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(170, 110, 41, 21));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(170, 80, 41, 21));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(170, 50, 41, 21));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(120, 140, 41, 21));
        pushButton_coma = new QPushButton(centralwidget);
        pushButton_coma->setObjectName("pushButton_coma");
        pushButton_coma->setGeometry(QRect(20, 140, 41, 21));
        pushButton_00 = new QPushButton(centralwidget);
        pushButton_00->setObjectName("pushButton_00");
        pushButton_00->setGeometry(QRect(70, 140, 41, 21));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(170, 140, 41, 21));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(170, 20, 41, 21));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(70, 170, 41, 21));
        pushButton_load = new QPushButton(centralwidget);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(120, 170, 41, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 232, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_01->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_02->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_03->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_06->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_05->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_04->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_09->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_08->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_07->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_coma->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        pushButton_00->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_load->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
