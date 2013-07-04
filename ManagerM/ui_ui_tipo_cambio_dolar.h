/********************************************************************************
** Form generated from reading UI file 'ui_tipo_cambio_dolar.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TIPO_CAMBIO_DOLAR_H
#define UI_UI_TIPO_CAMBIO_DOLAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_tipo_cambio_dolar
{
public:
    QPushButton *pushButton_ok;
    QTableView *tableView;
    QDateEdit *dateEdit;
    QLabel *label;
    QPushButton *pushButton_new;
    QPushButton *pushButton_edit;

    void setupUi(QWidget *ui_tipo_cambio_dolar)
    {
        if (ui_tipo_cambio_dolar->objectName().isEmpty())
            ui_tipo_cambio_dolar->setObjectName(QString::fromUtf8("ui_tipo_cambio_dolar"));
        ui_tipo_cambio_dolar->resize(314, 331);
        pushButton_ok = new QPushButton(ui_tipo_cambio_dolar);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(20, 290, 51, 23));
        tableView = new QTableView(ui_tipo_cambio_dolar);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 80, 271, 192));
        dateEdit = new QDateEdit(ui_tipo_cambio_dolar);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 60, 110, 22));
        dateEdit->setCalendarPopup(true);
        label = new QLabel(ui_tipo_cambio_dolar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 21, 118, 16));
        pushButton_new = new QPushButton(ui_tipo_cambio_dolar);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        pushButton_new->setGeometry(QRect(140, 290, 71, 23));
        pushButton_edit = new QPushButton(ui_tipo_cambio_dolar);
        pushButton_edit->setObjectName(QString::fromUtf8("pushButton_edit"));
        pushButton_edit->setGeometry(QRect(220, 290, 75, 23));

        retranslateUi(ui_tipo_cambio_dolar);

        QMetaObject::connectSlotsByName(ui_tipo_cambio_dolar);
    } // setupUi

    void retranslateUi(QWidget *ui_tipo_cambio_dolar)
    {
        ui_tipo_cambio_dolar->setWindowTitle(QApplication::translate("ui_tipo_cambio_dolar", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("ui_tipo_cambio_dolar", "Ok", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("ui_tipo_cambio_dolar", "MM/yyyy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_tipo_cambio_dolar", "Tipo de Cambio del Dol\303\241r", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_tipo_cambio_dolar", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_edit->setText(QApplication::translate("ui_tipo_cambio_dolar", "Modificar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tipo_cambio_dolar: public Ui_ui_tipo_cambio_dolar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TIPO_CAMBIO_DOLAR_H
