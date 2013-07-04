/********************************************************************************
** Form generated from reading UI file 'ui_mainwindow_compra.ui'
**
** Created: Sun 10. Mar 16:05:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAINWINDOW_COMPRA_H
#define UI_UI_MAINWINDOW_COMPRA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ui_MainWindow_Compra
{
public:
    QAction *actionCompras;
    QAction *actionVentas;
    QAction *actionAlmacen;
    QAction *actionColaboradores;
    QAction *actionSistema;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Ui_MainWindow_Compra)
    {
        if (Ui_MainWindow_Compra->objectName().isEmpty())
            Ui_MainWindow_Compra->setObjectName(QString::fromUtf8("Ui_MainWindow_Compra"));
        Ui_MainWindow_Compra->resize(746, 360);
        actionCompras = new QAction(Ui_MainWindow_Compra);
        actionCompras->setObjectName(QString::fromUtf8("actionCompras"));
        actionVentas = new QAction(Ui_MainWindow_Compra);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionAlmacen = new QAction(Ui_MainWindow_Compra);
        actionAlmacen->setObjectName(QString::fromUtf8("actionAlmacen"));
        actionColaboradores = new QAction(Ui_MainWindow_Compra);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionSistema = new QAction(Ui_MainWindow_Compra);
        actionSistema->setObjectName(QString::fromUtf8("actionSistema"));
        centralwidget = new QWidget(Ui_MainWindow_Compra);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Ui_MainWindow_Compra->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Ui_MainWindow_Compra);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ui_MainWindow_Compra->setStatusBar(statusbar);
        toolBar = new QToolBar(Ui_MainWindow_Compra);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Ui_MainWindow_Compra->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionCompras);
        toolBar->addAction(actionVentas);
        toolBar->addAction(actionAlmacen);
        toolBar->addAction(actionColaboradores);
        toolBar->addAction(actionSistema);

        retranslateUi(Ui_MainWindow_Compra);

        QMetaObject::connectSlotsByName(Ui_MainWindow_Compra);
    } // setupUi

    void retranslateUi(QMainWindow *Ui_MainWindow_Compra)
    {
        Ui_MainWindow_Compra->setWindowTitle(QApplication::translate("Ui_MainWindow_Compra", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCompras->setText(QApplication::translate("Ui_MainWindow_Compra", "Compras", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("Ui_MainWindow_Compra", "Ventas", 0, QApplication::UnicodeUTF8));
        actionAlmacen->setText(QApplication::translate("Ui_MainWindow_Compra", "Almacen", 0, QApplication::UnicodeUTF8));
        actionColaboradores->setText(QApplication::translate("Ui_MainWindow_Compra", "Colaboradores", 0, QApplication::UnicodeUTF8));
        actionSistema->setText(QApplication::translate("Ui_MainWindow_Compra", "Sistema", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Ui_MainWindow_Compra", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ui_MainWindow_Compra: public Ui_Ui_MainWindow_Compra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAINWINDOW_COMPRA_H
