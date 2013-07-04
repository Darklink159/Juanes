/********************************************************************************
** Form generated from reading UI file 'ui_factura.ui'
**
** Created: Sun 10. Mar 14:28:36 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_FACTURA_H
#define UI_UI_FACTURA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_factura
{
public:
    QLabel *label;

    void setupUi(QWidget *ui_factura)
    {
        if (ui_factura->objectName().isEmpty())
            ui_factura->setObjectName(QString::fromUtf8("ui_factura"));
        ui_factura->resize(647, 301);
        label = new QLabel(ui_factura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 46, 16));

        retranslateUi(ui_factura);

        QMetaObject::connectSlotsByName(ui_factura);
    } // setupUi

    void retranslateUi(QWidget *ui_factura)
    {
        ui_factura->setWindowTitle(QApplication::translate("ui_factura", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_factura", "FACTURA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_factura: public Ui_ui_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_FACTURA_H
