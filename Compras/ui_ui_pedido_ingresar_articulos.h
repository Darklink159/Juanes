/********************************************************************************
** Form generated from reading UI file 'ui_pedido_ingresar_articulos.ui'
**
** Created: Tue 5. Mar 17:44:20 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PEDIDO_INGRESAR_ARTICULOS_H
#define UI_UI_PEDIDO_INGRESAR_ARTICULOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_pedido_ingresar_articulos
{
public:
    QTableView *tableView;
    QTableView *tableView_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ui_pedido_ingresar_articulos)
    {
        if (ui_pedido_ingresar_articulos->objectName().isEmpty())
            ui_pedido_ingresar_articulos->setObjectName(QString::fromUtf8("ui_pedido_ingresar_articulos"));
        ui_pedido_ingresar_articulos->resize(819, 311);
        tableView = new QTableView(ui_pedido_ingresar_articulos);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 50, 351, 192));
        tableView_2 = new QTableView(ui_pedido_ingresar_articulos);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(450, 50, 341, 192));
        pushButton_2 = new QPushButton(ui_pedido_ingresar_articulos);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 120, 41, 23));
        pushButton = new QPushButton(ui_pedido_ingresar_articulos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 260, 75, 23));
        pushButton_3 = new QPushButton(ui_pedido_ingresar_articulos);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 260, 75, 23));

        retranslateUi(ui_pedido_ingresar_articulos);

        QMetaObject::connectSlotsByName(ui_pedido_ingresar_articulos);
    } // setupUi

    void retranslateUi(QWidget *ui_pedido_ingresar_articulos)
    {
        ui_pedido_ingresar_articulos->setWindowTitle(QApplication::translate("ui_pedido_ingresar_articulos", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_pedido_ingresar_articulos", "->", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_pedido_ingresar_articulos", "Ingresar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_pedido_ingresar_articulos", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_pedido_ingresar_articulos: public Ui_ui_pedido_ingresar_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PEDIDO_INGRESAR_ARTICULOS_H
