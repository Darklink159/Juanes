/********************************************************************************
** Form generated from reading UI file 'ui_search_proveedor.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SEARCH_PROVEEDOR_H
#define UI_UI_SEARCH_PROVEEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_search_proveedor
{
public:
    QLabel *label;
    QPushButton *pushButton_new;
    QPushButton *pushButton_change;
    QTableView *tableView;
    QPushButton *pushButton_add;
    QLineEdit *lineEdit_razonSocial;
    QLabel *label_2;

    void setupUi(QWidget *ui_search_proveedor)
    {
        if (ui_search_proveedor->objectName().isEmpty())
            ui_search_proveedor->setObjectName(QString::fromUtf8("ui_search_proveedor"));
        ui_search_proveedor->resize(323, 340);
        label = new QLabel(ui_search_proveedor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 71, 16));
        pushButton_new = new QPushButton(ui_search_proveedor);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        pushButton_new->setGeometry(QRect(20, 290, 75, 23));
        pushButton_change = new QPushButton(ui_search_proveedor);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(100, 290, 75, 23));
        tableView = new QTableView(ui_search_proveedor);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 90, 281, 192));
        pushButton_add = new QPushButton(ui_search_proveedor);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(250, 290, 51, 23));
        lineEdit_razonSocial = new QLineEdit(ui_search_proveedor);
        lineEdit_razonSocial->setObjectName(QString::fromUtf8("lineEdit_razonSocial"));
        lineEdit_razonSocial->setGeometry(QRect(20, 60, 141, 20));
        label_2 = new QLabel(ui_search_proveedor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 81, 16));

        retranslateUi(ui_search_proveedor);

        QMetaObject::connectSlotsByName(ui_search_proveedor);
    } // setupUi

    void retranslateUi(QWidget *ui_search_proveedor)
    {
        ui_search_proveedor->setWindowTitle(QApplication::translate("ui_search_proveedor", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_search_proveedor", "Busqueda:", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_search_proveedor", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_change->setText(QApplication::translate("ui_search_proveedor", "Modificar", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("ui_search_proveedor", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_search_proveedor", "Por descripci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_search_proveedor: public Ui_ui_search_proveedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SEARCH_PROVEEDOR_H
