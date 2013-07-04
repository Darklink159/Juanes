/********************************************************************************
** Form generated from reading UI file 'ui_compra_nota_credito.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_COMPRA_NOTA_CREDITO_H
#define UI_UI_COMPRA_NOTA_CREDITO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_compra_nota_credito
{
public:

    void setupUi(QWidget *ui_compra_nota_credito)
    {
        if (ui_compra_nota_credito->objectName().isEmpty())
            ui_compra_nota_credito->setObjectName(QString::fromUtf8("ui_compra_nota_credito"));
        ui_compra_nota_credito->resize(400, 300);

        retranslateUi(ui_compra_nota_credito);

        QMetaObject::connectSlotsByName(ui_compra_nota_credito);
    } // setupUi

    void retranslateUi(QWidget *ui_compra_nota_credito)
    {
        ui_compra_nota_credito->setWindowTitle(QApplication::translate("ui_compra_nota_credito", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_compra_nota_credito: public Ui_ui_compra_nota_credito {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_COMPRA_NOTA_CREDITO_H
