/********************************************************************************
** Form generated from reading UI file 'ui_mainwindow_factura.ui'
**
** Created: Sun 10. Mar 17:35:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAINWINDOW_FACTURA_H
#define UI_UI_MAINWINDOW_FACTURA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ui_MainWindow_Factura
{
public:
    QAction *actionNuevo;
    QAction *actionEditar;
    QAction *actionEliminar;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Ui_MainWindow_Factura)
    {
        if (Ui_MainWindow_Factura->objectName().isEmpty())
            Ui_MainWindow_Factura->setObjectName(QString::fromUtf8("Ui_MainWindow_Factura"));
        Ui_MainWindow_Factura->resize(800, 600);
        actionNuevo = new QAction(Ui_MainWindow_Factura);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEditar = new QAction(Ui_MainWindow_Factura);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionEliminar = new QAction(Ui_MainWindow_Factura);
        actionEliminar->setObjectName(QString::fromUtf8("actionEliminar"));
        centralwidget = new QWidget(Ui_MainWindow_Factura);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Ui_MainWindow_Factura->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Ui_MainWindow_Factura);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ui_MainWindow_Factura->setStatusBar(statusbar);
        toolBar = new QToolBar(Ui_MainWindow_Factura);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Ui_MainWindow_Factura->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionEliminar);

        retranslateUi(Ui_MainWindow_Factura);

        QMetaObject::connectSlotsByName(Ui_MainWindow_Factura);
    } // setupUi

    void retranslateUi(QMainWindow *Ui_MainWindow_Factura)
    {
        Ui_MainWindow_Factura->setWindowTitle(QApplication::translate("Ui_MainWindow_Factura", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("Ui_MainWindow_Factura", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("Ui_MainWindow_Factura", "Editar", 0, QApplication::UnicodeUTF8));
        actionEliminar->setText(QApplication::translate("Ui_MainWindow_Factura", "Eliminar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Ui_MainWindow_Factura", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ui_MainWindow_Factura: public Ui_Ui_MainWindow_Factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAINWINDOW_FACTURA_H
