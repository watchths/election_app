/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *radioButton_jp;
    QRadioButton *radioButton_na;
    QPushButton *pushButton_settle;
    QLabel *label_jp;
    QLabel *label_na;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        radioButton_jp = new QRadioButton(centralWidget);
        radioButton_jp->setObjectName(QString::fromUtf8("radioButton_jp"));
        radioButton_jp->setGeometry(QRect(30, 160, 161, 21));
        radioButton_na = new QRadioButton(centralWidget);
        radioButton_na->setObjectName(QString::fromUtf8("radioButton_na"));
        radioButton_na->setGeometry(QRect(230, 160, 151, 20));
        pushButton_settle = new QPushButton(centralWidget);
        pushButton_settle->setObjectName(QString::fromUtf8("pushButton_settle"));
        pushButton_settle->setGeometry(QRect(160, 190, 75, 23));
        label_jp = new QLabel(centralWidget);
        label_jp->setObjectName(QString::fromUtf8("label_jp"));
        label_jp->setGeometry(QRect(30, 20, 161, 131));
        label_na = new QLabel(centralWidget);
        label_na->setObjectName(QString::fromUtf8("label_na"));
        label_na->setGeometry(QRect(210, 20, 171, 131));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Choose", nullptr));
        radioButton_jp->setText(QApplication::translate("MainWindow", "<JOKOWI><PRABOWO>", nullptr));
        radioButton_na->setText(QApplication::translate("MainWindow", "<NURHADI><ALDO>", nullptr));
        pushButton_settle->setText(QApplication::translate("MainWindow", "SETTLE", nullptr));
        label_jp->setText(QString());
        label_na->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
