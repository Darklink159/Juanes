/********************************************************************************
** Form generated from reading UI file 'search_articulo.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_ARTICULO_H
#define UI_SEARCH_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableView>
#include <QtGui/QWidget>
#include "lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_search_articulo
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *l_descripcion;
    LineEdit *le_descripcion;
    QLabel *l_fk_marca;
    LineEdit *le_fk_marca;
    LineEdit *le_fk_medida;
    QLabel *l_fk_medida;
    QTableView *tableView;

    void setupUi(QWidget *search_articulo)
    {
        if (search_articulo->objectName().isEmpty())
            search_articulo->setObjectName(QString::fromUtf8("search_articulo"));
        search_articulo->resize(627, 265);
        gridLayout_3 = new QGridLayout(search_articulo);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_descripcion = new QLabel(search_articulo);
        l_descripcion->setObjectName(QString::fromUtf8("l_descripcion"));

        gridLayout->addWidget(l_descripcion, 0, 0, 1, 1);

        le_descripcion = new LineEdit(search_articulo);
        le_descripcion->setObjectName(QString::fromUtf8("le_descripcion"));

        gridLayout->addWidget(le_descripcion, 0, 1, 1, 1);

        l_fk_marca = new QLabel(search_articulo);
        l_fk_marca->setObjectName(QString::fromUtf8("l_fk_marca"));

        gridLayout->addWidget(l_fk_marca, 0, 2, 1, 1);

        le_fk_marca = new LineEdit(search_articulo);
        le_fk_marca->setObjectName(QString::fromUtf8("le_fk_marca"));

        gridLayout->addWidget(le_fk_marca, 0, 3, 1, 1);

        le_fk_medida = new LineEdit(search_articulo);
        le_fk_medida->setObjectName(QString::fromUtf8("le_fk_medida"));

        gridLayout->addWidget(le_fk_medida, 0, 5, 1, 1);

        l_fk_medida = new QLabel(search_articulo);
        l_fk_medida->setObjectName(QString::fromUtf8("l_fk_medida"));

        gridLayout->addWidget(l_fk_medida, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(search_articulo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(search_articulo);

        QMetaObject::connectSlotsByName(search_articulo);
    } // setupUi

    void retranslateUi(QWidget *search_articulo)
    {
        search_articulo->setWindowTitle(QApplication::translate("search_articulo", "SearchForm", 0, QApplication::UnicodeUTF8));
        l_descripcion->setText(QApplication::translate("search_articulo", "Descripcion", 0, QApplication::UnicodeUTF8));
        l_fk_marca->setText(QApplication::translate("search_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        l_fk_medida->setText(QApplication::translate("search_articulo", "Medida", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class search_articulo: public Ui_search_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_ARTICULO_H
