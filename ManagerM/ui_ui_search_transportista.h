/********************************************************************************
** Form generated from reading UI file 'ui_search_transportista.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SEARCH_TRANSPORTISTA_H
#define UI_UI_SEARCH_TRANSPORTISTA_H

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

class Ui_ui_search_transportista
{
public:
    QPushButton *pushButton_change;
    QPushButton *pushButton_add;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton_new;
    QLineEdit *lineEdit_razonSocial;

    void setupUi(QWidget *ui_search_transportista)
    {
        if (ui_search_transportista->objectName().isEmpty())
            ui_search_transportista->setObjectName(QString::fromUtf8("ui_search_transportista"));
        ui_search_transportista->resize(559, 371);
        pushButton_change = new QPushButton(ui_search_transportista);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(430, 280, 75, 23));
        pushButton_add = new QPushButton(ui_search_transportista);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(10, 280, 51, 23));
        tableView = new QTableView(ui_search_transportista);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 80, 491, 192));
        label = new QLabel(ui_search_transportista);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 16));
        pushButton_new = new QPushButton(ui_search_transportista);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        pushButton_new->setGeometry(QRect(350, 280, 75, 23));
        lineEdit_razonSocial = new QLineEdit(ui_search_transportista);
        lineEdit_razonSocial->setObjectName(QString::fromUtf8("lineEdit_razonSocial"));
        lineEdit_razonSocial->setGeometry(QRect(10, 50, 281, 20));

        retranslateUi(ui_search_transportista);

        QMetaObject::connectSlotsByName(ui_search_transportista);
    } // setupUi

    void retranslateUi(QWidget *ui_search_transportista)
    {
        ui_search_transportista->setWindowTitle(QApplication::translate("ui_search_transportista", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_change->setText(QApplication::translate("ui_search_transportista", "Modificar", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("ui_search_transportista", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_search_transportista", "Busqueda:", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_search_transportista", "Nuevo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_search_transportista: public Ui_ui_search_transportista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SEARCH_TRANSPORTISTA_H
