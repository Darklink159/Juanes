/********************************************************************************
** Form generated from reading UI file 'ui_edit_transportista.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_TRANSPORTISTA_H
#define UI_UI_EDIT_TRANSPORTISTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_transportista
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_ruc;
    QLineEdit *lineEdit_ruc;
    QPushButton *pushButton_link;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_razon_social;
    QLineEdit *lineEdit_razon_social;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_representante;
    QLineEdit *lineEdit_representante;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_region;
    QComboBox *comboBox_regiones;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_29;
    QLineEdit *lineEdit_direccion;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_27;
    QLineEdit *lineEdit_telefono;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_32;
    QLineEdit *lineEdit_fax;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_34;
    QLineEdit *lineEdit_pagina_web;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_33;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *lineEdit_comentario;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ui_edit_transportista)
    {
        if (ui_edit_transportista->objectName().isEmpty())
            ui_edit_transportista->setObjectName(QString::fromUtf8("ui_edit_transportista"));
        ui_edit_transportista->resize(722, 315);
        verticalLayout_2 = new QVBoxLayout(ui_edit_transportista);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(ui_edit_transportista);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_ruc = new QLabel(groupBox);
        label_ruc->setObjectName(QString::fromUtf8("label_ruc"));
        label_ruc->setMinimumSize(QSize(80, 0));
        label_ruc->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_14->addWidget(label_ruc);

        lineEdit_ruc = new QLineEdit(groupBox);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));
        lineEdit_ruc->setMinimumSize(QSize(200, 0));
        lineEdit_ruc->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_14->addWidget(lineEdit_ruc);

        pushButton_link = new QPushButton(groupBox);
        pushButton_link->setObjectName(QString::fromUtf8("pushButton_link"));

        horizontalLayout_14->addWidget(pushButton_link);

        horizontalSpacer_12 = new QSpacerItem(13, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        label_razon_social = new QLabel(groupBox);
        label_razon_social->setObjectName(QString::fromUtf8("label_razon_social"));
        label_razon_social->setMinimumSize(QSize(80, 0));
        label_razon_social->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_14->addWidget(label_razon_social);

        lineEdit_razon_social = new QLineEdit(groupBox);
        lineEdit_razon_social->setObjectName(QString::fromUtf8("lineEdit_razon_social"));
        lineEdit_razon_social->setMinimumSize(QSize(200, 0));
        lineEdit_razon_social->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_14->addWidget(lineEdit_razon_social);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_representante = new QLabel(groupBox);
        label_representante->setObjectName(QString::fromUtf8("label_representante"));
        label_representante->setMinimumSize(QSize(80, 0));
        label_representante->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_15->addWidget(label_representante);

        lineEdit_representante = new QLineEdit(groupBox);
        lineEdit_representante->setObjectName(QString::fromUtf8("lineEdit_representante"));
        lineEdit_representante->setMinimumSize(QSize(200, 0));

        horizontalLayout_15->addWidget(lineEdit_representante);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_region = new QLabel(groupBox);
        label_region->setObjectName(QString::fromUtf8("label_region"));
        label_region->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label_region);

        comboBox_regiones = new QComboBox(groupBox);
        comboBox_regiones->setObjectName(QString::fromUtf8("comboBox_regiones"));
        comboBox_regiones->setMinimumSize(QSize(200, 0));
        comboBox_regiones->setEditable(false);
        comboBox_regiones->setDuplicatesEnabled(false);

        horizontalLayout_2->addWidget(comboBox_regiones);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(80, 0));
        label_29->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_16->addWidget(label_29);

        lineEdit_direccion = new QLineEdit(groupBox);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(200, 0));

        horizontalLayout_16->addWidget(lineEdit_direccion);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(80, 0));
        label_27->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_17->addWidget(label_27);

        lineEdit_telefono = new QLineEdit(groupBox);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));
        lineEdit_telefono->setMinimumSize(QSize(200, 0));
        lineEdit_telefono->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_17->addWidget(lineEdit_telefono);

        horizontalSpacer_11 = new QSpacerItem(13, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(80, 0));
        label_32->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_17->addWidget(label_32);

        lineEdit_fax = new QLineEdit(groupBox);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));
        lineEdit_fax->setMinimumSize(QSize(200, 0));
        lineEdit_fax->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_17->addWidget(lineEdit_fax);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));

        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(80, 0));
        label_34->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_19->addWidget(label_34);

        lineEdit_pagina_web = new QLineEdit(groupBox);
        lineEdit_pagina_web->setObjectName(QString::fromUtf8("lineEdit_pagina_web"));
        lineEdit_pagina_web->setMinimumSize(QSize(200, 0));

        horizontalLayout_19->addWidget(lineEdit_pagina_web);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(80, 0));
        label_33->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_20->addWidget(label_33);

        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setMinimumSize(QSize(200, 0));

        horizontalLayout_20->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(80, 0));
        label_26->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_21->addWidget(label_26);

        lineEdit_comentario = new QLineEdit(groupBox);
        lineEdit_comentario->setObjectName(QString::fromUtf8("lineEdit_comentario"));
        lineEdit_comentario->setMinimumSize(QSize(200, 0));

        horizontalLayout_21->addWidget(lineEdit_comentario);


        verticalLayout->addLayout(horizontalLayout_21);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_7);

        pushButton_guardar = new QPushButton(ui_edit_transportista);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));

        horizontalLayout_22->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(ui_edit_transportista);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_22->addWidget(pushButton_cancelar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_22);


        verticalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(ui_edit_transportista);

        QMetaObject::connectSlotsByName(ui_edit_transportista);
    } // setupUi

    void retranslateUi(QWidget *ui_edit_transportista)
    {
        ui_edit_transportista->setWindowTitle(QApplication::translate("ui_edit_transportista", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ui_edit_transportista", "Transportista", 0, QApplication::UnicodeUTF8));
        label_ruc->setText(QApplication::translate("ui_edit_transportista", "RUC:", 0, QApplication::UnicodeUTF8));
        pushButton_link->setText(QApplication::translate("ui_edit_transportista", "web", 0, QApplication::UnicodeUTF8));
        label_razon_social->setText(QApplication::translate("ui_edit_transportista", "Raz\303\263n Social:", 0, QApplication::UnicodeUTF8));
        label_representante->setText(QApplication::translate("ui_edit_transportista", "Representante:", 0, QApplication::UnicodeUTF8));
        label_region->setText(QApplication::translate("ui_edit_transportista", "Regi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_edit_transportista", "Direccion:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_edit_transportista", "Tel\303\251fono:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ui_edit_transportista", "Fax:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ui_edit_transportista", "Pagina web:", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ui_edit_transportista", "Email:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ui_edit_transportista", "Comentario:", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QApplication::translate("ui_edit_transportista", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_edit_transportista", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_transportista: public Ui_ui_edit_transportista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_TRANSPORTISTA_H
