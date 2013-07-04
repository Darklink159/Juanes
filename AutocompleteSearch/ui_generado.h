/********************************************************************************
** Form generated from reading UI file 'generado.ui'
**
** Created: Sun 31. Mar 12:32:40 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERADO_H
#define UI_GENERADO_H

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

class Ui_Generado
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *l_pk_articulo;
    LineEdit *le_pk_articulo;
    QLabel *l_fk_grupo;
    LineEdit *le_fk_grupo;
    QLabel *l_fk_marca;
    LineEdit *le_fk_marca;
    QTableView *tableView;

    void setupUi(QWidget *Generado)
    {
        if (Generado->objectName().isEmpty())
            Generado->setObjectName(QString::fromUtf8("Generado"));
        Generado->resize(657, 362);
        gridLayoutWidget = new QWidget(Generado);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 221, 53));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        l_pk_articulo = new QLabel(gridLayoutWidget);
        l_pk_articulo->setObjectName(QString::fromUtf8("l_pk_articulo"));

        gridLayout->addWidget(l_pk_articulo, 1, 0, 1, 1);

        le_pk_articulo = new LineEdit(gridLayoutWidget);
        le_pk_articulo->setObjectName(QString::fromUtf8("le_pk_articulo"));

        gridLayout->addWidget(le_pk_articulo, 1, 1, 1, 1);

        l_fk_grupo = new QLabel(gridLayoutWidget);
        l_fk_grupo->setObjectName(QString::fromUtf8("l_fk_grupo"));

        gridLayout->addWidget(l_fk_grupo, 2, 0, 1, 1);

        le_fk_grupo = new LineEdit(gridLayoutWidget);
        le_fk_grupo->setObjectName(QString::fromUtf8("le_fk_grupo"));

        gridLayout->addWidget(le_fk_grupo, 2, 1, 1, 1);

        l_fk_marca = new QLabel(gridLayoutWidget);
        l_fk_marca->setObjectName(QString::fromUtf8("l_fk_marca"));

        gridLayout->addWidget(l_fk_marca, 3, 0, 1, 1);

        le_fk_marca = new LineEdit(gridLayoutWidget);
        le_fk_marca->setObjectName(QString::fromUtf8("le_fk_marca"));

        gridLayout->addWidget(le_fk_marca, 3, 1, 1, 1);

        tableView = new QTableView(Generado);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(300, 30, 256, 192));

        retranslateUi(Generado);

        QMetaObject::connectSlotsByName(Generado);
    } // setupUi

    void retranslateUi(QWidget *Generado)
    {
        Generado->setWindowTitle(QApplication::translate("Generado", "SearchForm", 0, QApplication::UnicodeUTF8));
        l_pk_articulo->setText(QApplication::translate("Generado", "pk_articulo", 0, QApplication::UnicodeUTF8));
        l_fk_grupo->setText(QApplication::translate("Generado", "fk_grupo", 0, QApplication::UnicodeUTF8));
        l_fk_marca->setText(QApplication::translate("Generado", "fk_marca", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Generado: public Ui_Generado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERADO_H
