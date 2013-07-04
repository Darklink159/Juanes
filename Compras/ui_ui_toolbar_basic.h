/********************************************************************************
** Form generated from reading UI file 'ui_toolbar_basic.ui'
**
** Created: Sun 10. Mar 16:05:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TOOLBAR_BASIC_H
#define UI_UI_TOOLBAR_BASIC_H

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

class Ui_ui_toolbar_basic
{
public:
    QAction *actionNew;
    QAction *actionEditar;
    QAction *actionDelete;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ui_toolbar_basic)
    {
        if (ui_toolbar_basic->objectName().isEmpty())
            ui_toolbar_basic->setObjectName(QString::fromUtf8("ui_toolbar_basic"));
        ui_toolbar_basic->resize(525, 133);
        actionNew = new QAction(ui_toolbar_basic);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionEditar = new QAction(ui_toolbar_basic);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionDelete = new QAction(ui_toolbar_basic);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        centralwidget = new QWidget(ui_toolbar_basic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ui_toolbar_basic->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ui_toolbar_basic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ui_toolbar_basic->setStatusBar(statusbar);
        toolBar = new QToolBar(ui_toolbar_basic);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ui_toolbar_basic->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNew);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionDelete);

        retranslateUi(ui_toolbar_basic);

        QMetaObject::connectSlotsByName(ui_toolbar_basic);
    } // setupUi

    void retranslateUi(QMainWindow *ui_toolbar_basic)
    {
        ui_toolbar_basic->setWindowTitle(QApplication::translate("ui_toolbar_basic", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("ui_toolbar_basic", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("ui_toolbar_basic", "Editar", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("ui_toolbar_basic", "Eliminar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("ui_toolbar_basic", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_toolbar_basic: public Ui_ui_toolbar_basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TOOLBAR_BASIC_H
