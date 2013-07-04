/********************************************************************************
** Form generated from reading UI file 'ui_opciones_tienda.ui'
**
** Created: Sat 29. Jun 16:09:24 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_TIENDA_H
#define UI_UI_OPCIONES_TIENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_tienda
{
public:
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_datos;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_direccion;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_ruc;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_contacto;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_telefono;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLineEdit *lineEdit_fax;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_pagina_web;
    QGroupBox *groupBox_otros;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QTextEdit *textEdit_comentario;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_guardar;

    void setupUi(QWidget *ui_opciones_tienda)
    {
        if (ui_opciones_tienda->objectName().isEmpty())
            ui_opciones_tienda->setObjectName(QString::fromUtf8("ui_opciones_tienda"));
        ui_opciones_tienda->resize(571, 408);
        ui_opciones_tienda->setMinimumSize(QSize(571, 408));
        ui_opciones_tienda->setMaximumSize(QSize(571, 408));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/40406.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_opciones_tienda->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(ui_opciones_tienda);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(ui_opciones_tienda);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(571, 408));
        tabWidget->setMaximumSize(QSize(571, 408));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_datos = new QGroupBox(tab);
        groupBox_datos->setObjectName(QString::fromUtf8("groupBox_datos"));
        gridLayout = new QGridLayout(groupBox_datos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_datos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_nombre = new QLineEdit(groupBox_datos);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout->addWidget(lineEdit_nombre);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_direccion = new QLineEdit(groupBox_datos);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        horizontalLayout_2->addWidget(lineEdit_direccion);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_ruc = new QLineEdit(groupBox_datos);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));
        lineEdit_ruc->setMinimumSize(QSize(180, 0));
        lineEdit_ruc->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_3->addWidget(lineEdit_ruc);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_datos, 0, 0, 1, 1);

        groupBox_contacto = new QGroupBox(tab);
        groupBox_contacto->setObjectName(QString::fromUtf8("groupBox_contacto"));
        gridLayout_2 = new QGridLayout(groupBox_contacto);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_contacto);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_telefono = new QLineEdit(groupBox_contacto);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));
        lineEdit_telefono->setMinimumSize(QSize(180, 0));
        lineEdit_telefono->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_4->addWidget(lineEdit_telefono);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_5 = new QLabel(groupBox_contacto);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(60, 0));
        label_5->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_fax = new QLineEdit(groupBox_contacto);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));
        lineEdit_fax->setMinimumSize(QSize(180, 0));
        lineEdit_fax->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_5->addWidget(lineEdit_fax);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_contacto);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(60, 0));
        label_6->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_email = new QLineEdit(groupBox_contacto);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        horizontalLayout_6->addWidget(lineEdit_email);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_contacto);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(60, 0));
        label_7->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_pagina_web = new QLineEdit(groupBox_contacto);
        lineEdit_pagina_web->setObjectName(QString::fromUtf8("lineEdit_pagina_web"));

        horizontalLayout_7->addWidget(lineEdit_pagina_web);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 2);


        gridLayout_5->addWidget(groupBox_contacto, 1, 0, 1, 1);

        groupBox_otros = new QGroupBox(tab);
        groupBox_otros->setObjectName(QString::fromUtf8("groupBox_otros"));
        gridLayout_3 = new QGridLayout(groupBox_otros);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(groupBox_otros);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        textEdit_comentario = new QTextEdit(groupBox_otros);
        textEdit_comentario->setObjectName(QString::fromUtf8("textEdit_comentario"));

        gridLayout_3->addWidget(textEdit_comentario, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_otros, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        pushButton_guardar = new QPushButton(tab);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));

        horizontalLayout_8->addWidget(pushButton_guardar);


        gridLayout_5->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_tienda);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_tienda);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_tienda)
    {
        ui_opciones_tienda->setWindowTitle(QApplication::translate("ui_opciones_tienda", "Tienda", 0, QApplication::UnicodeUTF8));
        groupBox_datos->setTitle(QApplication::translate("ui_opciones_tienda", "Datos", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_tienda", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_tienda", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_opciones_tienda", "Ruc", 0, QApplication::UnicodeUTF8));
        groupBox_contacto->setTitle(QApplication::translate("ui_opciones_tienda", "Contacto", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_opciones_tienda", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_opciones_tienda", "Fax", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_opciones_tienda", "Email", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_opciones_tienda", "Pagina Web", 0, QApplication::UnicodeUTF8));
        groupBox_otros->setTitle(QApplication::translate("ui_opciones_tienda", "Otros", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_opciones_tienda", "Comentario", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QApplication::translate("ui_opciones_tienda", "Guardar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_tienda", "Informaci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_tienda: public Ui_ui_opciones_tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_TIENDA_H
