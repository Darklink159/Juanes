/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 4. Mar 16:46:14 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_proFile;
    QPushButton *pushButton_examinar;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_aceptar;
    QPushButton *pushButton_salir;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(517, 135);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_proFile = new QLineEdit(centralWidget);
        lineEdit_proFile->setObjectName(QString::fromUtf8("lineEdit_proFile"));
        lineEdit_proFile->setReadOnly(true);

        gridLayout->addWidget(lineEdit_proFile, 0, 1, 1, 1);

        pushButton_examinar = new QPushButton(centralWidget);
        pushButton_examinar->setObjectName(QString::fromUtf8("pushButton_examinar"));

        gridLayout->addWidget(pushButton_examinar, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_aceptar = new QPushButton(centralWidget);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));

        gridLayout_2->addWidget(pushButton_aceptar, 0, 1, 1, 1);

        pushButton_salir = new QPushButton(centralWidget);
        pushButton_salir->setObjectName(QString::fromUtf8("pushButton_salir"));

        gridLayout_2->addWidget(pushButton_salir, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 517, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Qt PRO file:", 0, QApplication::UnicodeUTF8));
        pushButton_examinar->setText(QApplication::translate("MainWindow", "E&xaminar...", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar->setText(QApplication::translate("MainWindow", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_salir->setText(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
