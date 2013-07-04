/********************************************************************************
** Form generated from reading UI file 'ui_edit_boleta_venta.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_BOLETA_VENTA_H
#define UI_UI_EDIT_BOLETA_VENTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_boleta_venta
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *ui_edit_boleta_venta)
    {
        if (ui_edit_boleta_venta->objectName().isEmpty())
            ui_edit_boleta_venta->setObjectName(QString::fromUtf8("ui_edit_boleta_venta"));
        ui_edit_boleta_venta->resize(794, 546);
        label = new QLabel(ui_edit_boleta_venta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 46, 13));
        label_2 = new QLabel(ui_edit_boleta_venta);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 46, 13));
        label_3 = new QLabel(ui_edit_boleta_venta);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 80, 46, 13));
        label_4 = new QLabel(ui_edit_boleta_venta);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 46, 13));

        retranslateUi(ui_edit_boleta_venta);

        QMetaObject::connectSlotsByName(ui_edit_boleta_venta);
    } // setupUi

    void retranslateUi(QWidget *ui_edit_boleta_venta)
    {
        ui_edit_boleta_venta->setWindowTitle(QApplication::translate("ui_edit_boleta_venta", "Boleta de Venta", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_edit_boleta_venta", "Nombre ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_edit_boleta_venta", "Dni", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_edit_boleta_venta", "Direccion", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_edit_boleta_venta", "Total", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_boleta_venta: public Ui_ui_edit_boleta_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_BOLETA_VENTA_H
