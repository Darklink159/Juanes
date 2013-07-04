/********************************************************************************
** Form generated from reading UI file 'ui_factura_ver.ui'
**
** Created: Thu 7. Mar 15:12:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_FACTURA_VER_H
#define UI_UI_FACTURA_VER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_factura_ver
{
public:
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ui_factura_ver)
    {
        if (ui_factura_ver->objectName().isEmpty())
            ui_factura_ver->setObjectName(QString::fromUtf8("ui_factura_ver"));
        ui_factura_ver->resize(740, 501);
        comboBox = new QComboBox(ui_factura_ver);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 50, 111, 22));
        lineEdit = new QLineEdit(ui_factura_ver);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 90, 113, 20));
        tableView = new QTableView(ui_factura_ver);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 130, 631, 221));
        label = new QLabel(ui_factura_ver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 61, 16));
        pushButton = new QPushButton(ui_factura_ver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 360, 75, 23));
        pushButton_2 = new QPushButton(ui_factura_ver);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 360, 75, 23));

        retranslateUi(ui_factura_ver);

        QMetaObject::connectSlotsByName(ui_factura_ver);
    } // setupUi

    void retranslateUi(QWidget *ui_factura_ver)
    {
        ui_factura_ver->setWindowTitle(QApplication::translate("ui_factura_ver", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_factura_ver", "Buscar por:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_factura_ver", "Ingresar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_factura_ver", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_factura_ver: public Ui_ui_factura_ver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_FACTURA_VER_H
