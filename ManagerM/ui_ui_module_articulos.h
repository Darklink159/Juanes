/********************************************************************************
** Form generated from reading UI file 'ui_module_articulos.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_ARTICULOS_H
#define UI_UI_MODULE_ARTICULOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ui_advanced_search_articulo.h"

QT_BEGIN_NAMESPACE

class Ui_ui_module_articulos
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_nuevo_2;
    QPushButton *pushButton_editar_2;
    QPushButton *pushButton_eliminar_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    ui_advanced_search_articulo *busqueda;
    QTableView *tableView_articulos;

    void setupUi(QWidget *ui_module_articulos)
    {
        if (ui_module_articulos->objectName().isEmpty())
            ui_module_articulos->setObjectName(QString::fromUtf8("ui_module_articulos"));
        ui_module_articulos->resize(822, 274);
        ui_module_articulos->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ui_module_articulos);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(ui_module_articulos);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        pushButton_nuevo_2 = new QPushButton(layoutWidget_4);
        pushButton_nuevo_2->setObjectName(QString::fromUtf8("pushButton_nuevo_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_nuevo_2->sizePolicy().hasHeightForWidth());
        pushButton_nuevo_2->setSizePolicy(sizePolicy);
        pushButton_nuevo_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nuevo_2->setIcon(icon);
        pushButton_nuevo_2->setIconSize(QSize(16, 16));
        pushButton_nuevo_2->setAutoDefault(false);
        pushButton_nuevo_2->setDefault(false);
        pushButton_nuevo_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_nuevo_2);

        pushButton_editar_2 = new QPushButton(layoutWidget_4);
        pushButton_editar_2->setObjectName(QString::fromUtf8("pushButton_editar_2"));
        sizePolicy.setHeightForWidth(pushButton_editar_2->sizePolicy().hasHeightForWidth());
        pushButton_editar_2->setSizePolicy(sizePolicy);
        pushButton_editar_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editar_2->setIcon(icon1);
        pushButton_editar_2->setIconSize(QSize(16, 16));
        pushButton_editar_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_editar_2);

        pushButton_eliminar_2 = new QPushButton(layoutWidget_4);
        pushButton_eliminar_2->setObjectName(QString::fromUtf8("pushButton_eliminar_2"));
        sizePolicy.setHeightForWidth(pushButton_eliminar_2->sizePolicy().hasHeightForWidth());
        pushButton_eliminar_2->setSizePolicy(sizePolicy);
        pushButton_eliminar_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar_2->setIcon(icon2);
        pushButton_eliminar_2->setIconSize(QSize(16, 16));
        pushButton_eliminar_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_eliminar_2);

        horizontalSpacer = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        busqueda = new ui_advanced_search_articulo(layoutWidget_4);
        busqueda->setObjectName(QString::fromUtf8("busqueda"));

        horizontalLayout_2->addWidget(busqueda);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tableView_articulos = new QTableView(layoutWidget_4);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));
        tableView_articulos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_articulos->setAlternatingRowColors(true);
        tableView_articulos->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView_articulos->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_articulos->setShowGrid(false);
        tableView_articulos->setGridStyle(Qt::NoPen);
        tableView_articulos->setSortingEnabled(true);

        verticalLayout_4->addWidget(tableView_articulos);

        splitter->addWidget(layoutWidget_4);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(ui_module_articulos);

        QMetaObject::connectSlotsByName(ui_module_articulos);
    } // setupUi

    void retranslateUi(QWidget *ui_module_articulos)
    {
        ui_module_articulos->setWindowTitle(QApplication::translate("ui_module_articulos", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_nuevo_2->setText(QApplication::translate("ui_module_articulos", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_editar_2->setText(QApplication::translate("ui_module_articulos", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar_2->setText(QApplication::translate("ui_module_articulos", "Eliminar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_module_articulos: public Ui_ui_module_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_ARTICULOS_H
