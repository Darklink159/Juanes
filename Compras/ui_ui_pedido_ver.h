/********************************************************************************
** Form generated from reading UI file 'ui_pedido_ver.ui'
**
** Created: Fri 8. Mar 11:22:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PEDIDO_VER_H
#define UI_UI_PEDIDO_VER_H

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

class Ui_ui_pedido_ver
{
public:
    QComboBox *comboBox;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ui_pedido_ver)
    {
        if (ui_pedido_ver->objectName().isEmpty())
            ui_pedido_ver->setObjectName(QString::fromUtf8("ui_pedido_ver"));
        ui_pedido_ver->resize(691, 404);
        comboBox = new QComboBox(ui_pedido_ver);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 111, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView = new QTableView(ui_pedido_ver);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 130, 631, 221));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(ui_pedido_ver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(ui_pedido_ver);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 90, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(ui_pedido_ver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 360, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(ui_pedido_ver);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 360, 75, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(ui_pedido_ver);

        QMetaObject::connectSlotsByName(ui_pedido_ver);
    } // setupUi

    void retranslateUi(QWidget *ui_pedido_ver)
    {
        ui_pedido_ver->setWindowTitle(QApplication::translate("ui_pedido_ver", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_pedido_ver", "Buscar por:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("ui_pedido_ver", "asdasd", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_pedido_ver", "Ingresar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_pedido_ver", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_pedido_ver: public Ui_ui_pedido_ver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PEDIDO_VER_H
