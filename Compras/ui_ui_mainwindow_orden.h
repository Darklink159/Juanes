/********************************************************************************
** Form generated from reading UI file 'ui_mainwindow_orden.ui'
**
** Created: Sun 10. Mar 17:35:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAINWINDOW_ORDEN_H
#define UI_UI_MAINWINDOW_ORDEN_H

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

class Ui_Ui_MainWindow_Orden
{
public:
    QAction *actionNuevo;
    QAction *actionEditar;
    QAction *actionBorrar;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Ui_MainWindow_Orden)
    {
        if (Ui_MainWindow_Orden->objectName().isEmpty())
            Ui_MainWindow_Orden->setObjectName(QString::fromUtf8("Ui_MainWindow_Orden"));
        Ui_MainWindow_Orden->resize(800, 600);
        actionNuevo = new QAction(Ui_MainWindow_Orden);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEditar = new QAction(Ui_MainWindow_Orden);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionBorrar = new QAction(Ui_MainWindow_Orden);
        actionBorrar->setObjectName(QString::fromUtf8("actionBorrar"));
        centralwidget = new QWidget(Ui_MainWindow_Orden);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Ui_MainWindow_Orden->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Ui_MainWindow_Orden);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ui_MainWindow_Orden->setStatusBar(statusbar);
        toolBar = new QToolBar(Ui_MainWindow_Orden);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Ui_MainWindow_Orden->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionBorrar);

        retranslateUi(Ui_MainWindow_Orden);

        QMetaObject::connectSlotsByName(Ui_MainWindow_Orden);
    } // setupUi

    void retranslateUi(QMainWindow *Ui_MainWindow_Orden)
    {
        Ui_MainWindow_Orden->setWindowTitle(QApplication::translate("Ui_MainWindow_Orden", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("Ui_MainWindow_Orden", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("Ui_MainWindow_Orden", "Editar", 0, QApplication::UnicodeUTF8));
        actionBorrar->setText(QApplication::translate("Ui_MainWindow_Orden", "Borrar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Ui_MainWindow_Orden", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ui_MainWindow_Orden: public Ui_Ui_MainWindow_Orden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAINWINDOW_ORDEN_H
