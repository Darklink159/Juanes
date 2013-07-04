/********************************************************************************
** Form generated from reading UI file 'ui_pedido.ui'
**
** Created: Fri 8. Mar 14:29:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PEDIDO_H
#define UI_UI_PEDIDO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_pedido
{
public:
    QLabel *label;

    void setupUi(QWidget *ui_pedido)
    {
        if (ui_pedido->objectName().isEmpty())
            ui_pedido->setObjectName(QString::fromUtf8("ui_pedido"));
        ui_pedido->resize(737, 553);
        label = new QLabel(ui_pedido);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 231, 16));

        retranslateUi(ui_pedido);

        QMetaObject::connectSlotsByName(ui_pedido);
    } // setupUi

    void retranslateUi(QWidget *ui_pedido)
    {
        ui_pedido->setWindowTitle(QApplication::translate("ui_pedido", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_pedido", "PEDIDO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_pedido: public Ui_ui_pedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PEDIDO_H
