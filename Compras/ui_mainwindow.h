/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 10. Mar 16:05:10 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOrden;
    QAction *actionFactura;
    QAction *actionFlete;
    QAction *actionG_Remision_R;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(357, 259);
        actionOrden = new QAction(MainWindow);
        actionOrden->setObjectName(QString::fromUtf8("actionOrden"));
        actionFactura = new QAction(MainWindow);
        actionFactura->setObjectName(QString::fromUtf8("actionFactura"));
        actionFlete = new QAction(MainWindow);
        actionFlete->setObjectName(QString::fromUtf8("actionFlete"));
        actionG_Remision_R = new QAction(MainWindow);
        actionG_Remision_R->setObjectName(QString::fromUtf8("actionG_Remision_R"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOrden->setText(QApplication::translate("MainWindow", "Orden", 0, QApplication::UnicodeUTF8));
        actionFactura->setText(QApplication::translate("MainWindow", "Factura", 0, QApplication::UnicodeUTF8));
        actionFlete->setText(QApplication::translate("MainWindow", "Flete", 0, QApplication::UnicodeUTF8));
        actionG_Remision_R->setText(QApplication::translate("MainWindow", "G. Remision R.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
