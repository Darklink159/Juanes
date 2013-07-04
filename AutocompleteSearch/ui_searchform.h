/********************************************************************************
** Form generated from reading UI file 'searchform.ui'
**
** Created: Fri 29. Mar 20:27:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORM_H
#define UI_SEARCHFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableView>
#include <QtGui/QWidget>
#include "lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    LineEdit *le_nombre;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTableView *tableView;

    void setupUi(QWidget *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QString::fromUtf8("SearchForm"));
        SearchForm->resize(657, 362);
        gridLayoutWidget = new QWidget(SearchForm);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 221, 53));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        le_nombre = new LineEdit(gridLayoutWidget);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));

        gridLayout->addWidget(le_nombre, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        tableView = new QTableView(SearchForm);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(300, 30, 256, 192));

        retranslateUi(SearchForm);

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QWidget *SearchForm)
    {
        SearchForm->setWindowTitle(QApplication::translate("SearchForm", "SearchForm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchForm", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SearchForm", "Otro", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORM_H
