/********************************************************************************
** Form generated from reading UI file 'ui_new_igv.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_IGV_H
#define UI_UI_NEW_IGV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_igv
{
public:
    QDateEdit *dateEdit;
    QTableView *tableView;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *ui_new_igv)
    {
        if (ui_new_igv->objectName().isEmpty())
            ui_new_igv->setObjectName(QString::fromUtf8("ui_new_igv"));
        ui_new_igv->resize(515, 357);
        dateEdit = new QDateEdit(ui_new_igv);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 50, 110, 22));
        dateEdit->setCalendarPopup(true);
        tableView = new QTableView(ui_new_igv);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 80, 256, 192));
        pushButton = new QPushButton(ui_new_igv);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 290, 51, 23));
        widget = new QWidget(ui_new_igv);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 149, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(ui_new_igv);

        QMetaObject::connectSlotsByName(ui_new_igv);
    } // setupUi

    void retranslateUi(QWidget *ui_new_igv)
    {
        ui_new_igv->setWindowTitle(QApplication::translate("ui_new_igv", "Form", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("ui_new_igv", "MM/yyyy", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_new_igv", "Ok", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_igv", "Tipo de Cambio del", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_new_igv", "Dol\303\241r", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_igv", "Euro", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ui_new_igv: public Ui_ui_new_igv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_IGV_H
