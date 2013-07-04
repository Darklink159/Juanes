/********************************************************************************
** Form generated from reading UI file 'ui_opciones_proveedor.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_PROVEEDOR_H
#define UI_UI_OPCIONES_PROVEEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_proveedor
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_new;
    QPushButton *pushButton_delete;
    QWidget *tab_2;

    void setupUi(QWidget *ui_opciones_proveedor)
    {
        if (ui_opciones_proveedor->objectName().isEmpty())
            ui_opciones_proveedor->setObjectName(QString::fromUtf8("ui_opciones_proveedor"));
        ui_opciones_proveedor->resize(571, 408);
        ui_opciones_proveedor->setMinimumSize(QSize(571, 408));
        ui_opciones_proveedor->setMaximumSize(QSize(571, 408));
        gridLayout_2 = new QGridLayout(ui_opciones_proveedor);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(ui_opciones_proveedor);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_nombre = new QLineEdit(tab);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout->addWidget(lineEdit_nombre);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_new = new QPushButton(tab);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new->setIcon(icon);
        pushButton_new->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_new);

        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon1);
        pushButton_delete->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_delete);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_proveedor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_proveedor);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_proveedor)
    {
        ui_opciones_proveedor->setWindowTitle(QApplication::translate("ui_opciones_proveedor", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_proveedor", "Nombre", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QString());
        pushButton_delete->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_proveedor", "Proveedores", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ui_opciones_proveedor", "Cuentas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_proveedor: public Ui_ui_opciones_proveedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_PROVEEDOR_H
