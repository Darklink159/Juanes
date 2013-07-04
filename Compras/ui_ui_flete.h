/********************************************************************************
** Form generated from reading UI file 'ui_flete.ui'
**
** Created: Fri 8. Mar 14:29:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_FLETE_H
#define UI_UI_FLETE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_flete
{
public:
    QLabel *label;

    void setupUi(QWidget *ui_flete)
    {
        if (ui_flete->objectName().isEmpty())
            ui_flete->setObjectName(QString::fromUtf8("ui_flete"));
        ui_flete->resize(760, 544);
        label = new QLabel(ui_flete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 231, 16));

        retranslateUi(ui_flete);

        QMetaObject::connectSlotsByName(ui_flete);
    } // setupUi

    void retranslateUi(QWidget *ui_flete)
    {
        ui_flete->setWindowTitle(QApplication::translate("ui_flete", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_flete", "FLETE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_flete: public Ui_ui_flete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_FLETE_H
