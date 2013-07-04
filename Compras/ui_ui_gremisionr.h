/********************************************************************************
** Form generated from reading UI file 'ui_gremisionr.ui'
**
** Created: Fri 8. Mar 14:29:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_GREMISIONR_H
#define UI_UI_GREMISIONR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_gremisionr
{
public:
    QLabel *label;

    void setupUi(QWidget *ui_gremisionr)
    {
        if (ui_gremisionr->objectName().isEmpty())
            ui_gremisionr->setObjectName(QString::fromUtf8("ui_gremisionr"));
        ui_gremisionr->resize(745, 502);
        label = new QLabel(ui_gremisionr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 231, 16));

        retranslateUi(ui_gremisionr);

        QMetaObject::connectSlotsByName(ui_gremisionr);
    } // setupUi

    void retranslateUi(QWidget *ui_gremisionr)
    {
        ui_gremisionr->setWindowTitle(QApplication::translate("ui_gremisionr", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_gremisionr", "GUIA DE REMISION REMITENTE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_gremisionr: public Ui_ui_gremisionr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_GREMISIONR_H
