/********************************************************************************
** Form generated from reading UI file 'ui_new_venta_boleta.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_VENTA_BOLETA_H
#define UI_UI_NEW_VENTA_BOLETA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta_boleta
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_direccion;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_dni;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nombre;

    void setupUi(QWidget *ui_new_venta_boleta)
    {
        if (ui_new_venta_boleta->objectName().isEmpty())
            ui_new_venta_boleta->setObjectName(QString::fromUtf8("ui_new_venta_boleta"));
        ui_new_venta_boleta->resize(553, 105);
        layoutWidget = new QWidget(ui_new_venta_boleta);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 70, 321, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_direccion = new QLineEdit(layoutWidget);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        horizontalLayout_2->addWidget(lineEdit_direccion);

        layoutWidget1 = new QWidget(ui_new_venta_boleta);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 180, 52));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_dni = new QLineEdit(layoutWidget1);
        lineEdit_dni->setObjectName(QString::fromUtf8("lineEdit_dni"));

        horizontalLayout_3->addWidget(lineEdit_dni);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_nombre = new QLineEdit(layoutWidget1);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout->addWidget(lineEdit_nombre);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ui_new_venta_boleta);

        QMetaObject::connectSlotsByName(ui_new_venta_boleta);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta_boleta)
    {
        ui_new_venta_boleta->setWindowTitle(QApplication::translate("ui_new_venta_boleta", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta_boleta", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta_boleta", "Dni", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta_boleta", "Nombre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta_boleta: public Ui_ui_new_venta_boleta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_BOLETA_H
