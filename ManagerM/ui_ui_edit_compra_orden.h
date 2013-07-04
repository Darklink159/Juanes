/********************************************************************************
** Form generated from reading UI file 'ui_edit_compra_orden.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_COMPRA_ORDEN_H
#define UI_UI_EDIT_COMPRA_ORDEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_compra_orden
{
public:

    void setupUi(QWidget *ui_edit_compra_orden)
    {
        if (ui_edit_compra_orden->objectName().isEmpty())
            ui_edit_compra_orden->setObjectName(QString::fromUtf8("ui_edit_compra_orden"));
        ui_edit_compra_orden->resize(400, 300);

        retranslateUi(ui_edit_compra_orden);

        QMetaObject::connectSlotsByName(ui_edit_compra_orden);
    } // setupUi

    void retranslateUi(QWidget *ui_edit_compra_orden)
    {
        ui_edit_compra_orden->setWindowTitle(QApplication::translate("ui_edit_compra_orden", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_compra_orden: public Ui_ui_edit_compra_orden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_COMPRA_ORDEN_H
