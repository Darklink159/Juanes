/********************************************************************************
** Form generated from reading UI file 'generado.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
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
    QLabel *l_descripcion;
    LineEdit *le_descripcion;
    QLabel *l_fk_marca;
    LineEdit *le_fk_marca;
    QLabel *l_fk_medida;
    LineEdit *le_fk_medida;
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
        l_descripcion = new QLabel(gridLayoutWidget);
        l_descripcion->setObjectName(QString::fromUtf8("l_descripcion"));

        gridLayout->addWidget(l_descripcion, 1, 0, 1, 1);

        le_descripcion = new LineEdit(gridLayoutWidget);
        le_descripcion->setObjectName(QString::fromUtf8("le_descripcion"));

        gridLayout->addWidget(le_descripcion, 1, 1, 1, 1);

        l_fk_marca = new QLabel(gridLayoutWidget);
        l_fk_marca->setObjectName(QString::fromUtf8("l_fk_marca"));

        gridLayout->addWidget(l_fk_marca, 2, 0, 1, 1);

        le_fk_marca = new LineEdit(gridLayoutWidget);
        le_fk_marca->setObjectName(QString::fromUtf8("le_fk_marca"));

        gridLayout->addWidget(le_fk_marca, 2, 1, 1, 1);

        l_fk_medida = new QLabel(gridLayoutWidget);
        l_fk_medida->setObjectName(QString::fromUtf8("l_fk_medida"));

        gridLayout->addWidget(l_fk_medida, 3, 0, 1, 1);

        le_fk_medida = new LineEdit(gridLayoutWidget);
        le_fk_medida->setObjectName(QString::fromUtf8("le_fk_medida"));

        gridLayout->addWidget(le_fk_medida, 3, 1, 1, 1);

        tableView = new QTableView(Generado);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(300, 30, 256, 192));

        retranslateUi(Generado);

        QMetaObject::connectSlotsByName(Generado);
    } // setupUi

    void retranslateUi(QWidget *Generado)
    {
        Generado->setWindowTitle(QApplication::translate("Generado", "SearchForm", 0, QApplication::UnicodeUTF8));
        l_descripcion->setText(QApplication::translate("Generado", "descripcion", 0, QApplication::UnicodeUTF8));
        l_fk_marca->setText(QApplication::translate("Generado", "fk_marca", 0, QApplication::UnicodeUTF8));
        l_fk_medida->setText(QApplication::translate("Generado", "fk_medida", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Generado: public Ui_Generado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERADO_H
