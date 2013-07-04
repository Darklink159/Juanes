/********************************************************************************
** Form generated from reading UI file 'ui_new_compra_orden.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_COMPRA_ORDEN_H
#define UI_UI_NEW_COMPRA_ORDEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <lineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ui_new_compra_orden
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_codigo;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_emision;
    QDateEdit *dateEdit_emision;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_sistema;
    QDateEdit *dateEdit_sistema;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_serie_numero;
    QLineEdit *lineEdit_serie;
    QLabel *label_minus;
    QLineEdit *lineEdit_numero;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_proveedor;
    QLineEdit *lineEdit_codigoProveedor;
    QFrame *line_2;
    LineEdit *lineEdit_proveedorNombre;
    QPushButton *pushButton_proveedor;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *lineEdit_codigoTransportista;
    QFrame *line_3;
    LineEdit *lineEdit_transportistaNombre;
    QPushButton *pushButton_transportista;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_tipo_moneda;
    QComboBox *comboBox_tipo_moneda;
    QLineEdit *lineEdit_cambio;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_modalidad;
    QComboBox *comboBox_modalidad;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QPushButton *pushButton_ingresarArticulos;
    QTableWidget *tableWidget_articulos;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_subtotal;
    QLineEdit *lineEdit_subtotal;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_igv;
    QLineEdit *lineEdit_igv;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_total;
    QLineEdit *lineEdit_total;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_registrar;
    QPushButton *pushButton_mail;
    QPushButton *pushButton_imprimir;
    QPushButton *pushButton_cancelar;

    void setupUi(QWidget *ui_new_compra_orden)
    {
        if (ui_new_compra_orden->objectName().isEmpty())
            ui_new_compra_orden->setObjectName(QString::fromUtf8("ui_new_compra_orden"));
        ui_new_compra_orden->resize(758, 584);
        verticalLayout_2 = new QVBoxLayout(ui_new_compra_orden);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_codigo = new QLabel(ui_new_compra_orden);
        label_codigo->setObjectName(QString::fromUtf8("label_codigo"));
        label_codigo->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(ui_new_compra_orden);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigo->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_codigo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_emision = new QLabel(ui_new_compra_orden);
        label_emision->setObjectName(QString::fromUtf8("label_emision"));

        horizontalLayout_8->addWidget(label_emision);

        dateEdit_emision = new QDateEdit(ui_new_compra_orden);
        dateEdit_emision->setObjectName(QString::fromUtf8("dateEdit_emision"));

        horizontalLayout_8->addWidget(dateEdit_emision);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_sistema = new QLabel(ui_new_compra_orden);
        label_sistema->setObjectName(QString::fromUtf8("label_sistema"));

        horizontalLayout_8->addWidget(label_sistema);

        dateEdit_sistema = new QDateEdit(ui_new_compra_orden);
        dateEdit_sistema->setObjectName(QString::fromUtf8("dateEdit_sistema"));

        horizontalLayout_8->addWidget(dateEdit_sistema);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_serie_numero = new QLabel(ui_new_compra_orden);
        label_serie_numero->setObjectName(QString::fromUtf8("label_serie_numero"));
        label_serie_numero->setMinimumSize(QSize(90, 0));

        horizontalLayout_7->addWidget(label_serie_numero);

        lineEdit_serie = new QLineEdit(ui_new_compra_orden);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(lineEdit_serie);

        label_minus = new QLabel(ui_new_compra_orden);
        label_minus->setObjectName(QString::fromUtf8("label_minus"));

        horizontalLayout_7->addWidget(label_minus);

        lineEdit_numero = new QLineEdit(ui_new_compra_orden);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(lineEdit_numero);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_proveedor = new QLabel(ui_new_compra_orden);
        label_proveedor->setObjectName(QString::fromUtf8("label_proveedor"));
        label_proveedor->setMinimumSize(QSize(90, 0));

        horizontalLayout_6->addWidget(label_proveedor);

        lineEdit_codigoProveedor = new QLineEdit(ui_new_compra_orden);
        lineEdit_codigoProveedor->setObjectName(QString::fromUtf8("lineEdit_codigoProveedor"));
        lineEdit_codigoProveedor->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoProveedor->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_codigoProveedor);

        line_2 = new QFrame(ui_new_compra_orden);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        lineEdit_proveedorNombre = new LineEdit(ui_new_compra_orden);
        lineEdit_proveedorNombre->setObjectName(QString::fromUtf8("lineEdit_proveedorNombre"));
        lineEdit_proveedorNombre->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_proveedorNombre);

        pushButton_proveedor = new QPushButton(ui_new_compra_orden);
        pushButton_proveedor->setObjectName(QString::fromUtf8("pushButton_proveedor"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/SEARCH (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_proveedor->setIcon(icon);

        horizontalLayout_6->addWidget(pushButton_proveedor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(ui_new_compra_orden);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_9);

        lineEdit_codigoTransportista = new QLineEdit(ui_new_compra_orden);
        lineEdit_codigoTransportista->setObjectName(QString::fromUtf8("lineEdit_codigoTransportista"));
        lineEdit_codigoTransportista->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoTransportista->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_codigoTransportista);

        line_3 = new QFrame(ui_new_compra_orden);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        lineEdit_transportistaNombre = new LineEdit(ui_new_compra_orden);
        lineEdit_transportistaNombre->setObjectName(QString::fromUtf8("lineEdit_transportistaNombre"));
        lineEdit_transportistaNombre->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_transportistaNombre);

        pushButton_transportista = new QPushButton(ui_new_compra_orden);
        pushButton_transportista->setObjectName(QString::fromUtf8("pushButton_transportista"));
        pushButton_transportista->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton_transportista);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_tipo_moneda = new QLabel(ui_new_compra_orden);
        label_tipo_moneda->setObjectName(QString::fromUtf8("label_tipo_moneda"));
        label_tipo_moneda->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_tipo_moneda);

        comboBox_tipo_moneda = new QComboBox(ui_new_compra_orden);
        comboBox_tipo_moneda->setObjectName(QString::fromUtf8("comboBox_tipo_moneda"));
        comboBox_tipo_moneda->setEditable(false);

        horizontalLayout_4->addWidget(comboBox_tipo_moneda);

        lineEdit_cambio = new QLineEdit(ui_new_compra_orden);
        lineEdit_cambio->setObjectName(QString::fromUtf8("lineEdit_cambio"));
        lineEdit_cambio->setMaximumSize(QSize(50, 16777215));
        lineEdit_cambio->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_cambio);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        label_modalidad = new QLabel(ui_new_compra_orden);
        label_modalidad->setObjectName(QString::fromUtf8("label_modalidad"));
        label_modalidad->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_modalidad);

        comboBox_modalidad = new QComboBox(ui_new_compra_orden);
        comboBox_modalidad->setObjectName(QString::fromUtf8("comboBox_modalidad"));
        comboBox_modalidad->setEditable(false);

        horizontalLayout_4->addWidget(comboBox_modalidad);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label = new QLabel(ui_new_compra_orden);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        comboBox = new QComboBox(ui_new_compra_orden);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);
        comboBox->setDuplicatesEnabled(true);

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line = new QFrame(ui_new_compra_orden);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(ui_new_compra_orden);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_ingresarArticulos = new QPushButton(ui_new_compra_orden);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));

        horizontalLayout_3->addWidget(pushButton_ingresarArticulos);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tableWidget_articulos = new QTableWidget(ui_new_compra_orden);
        tableWidget_articulos->setObjectName(QString::fromUtf8("tableWidget_articulos"));

        verticalLayout_2->addWidget(tableWidget_articulos);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(478, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_subtotal = new QLabel(ui_new_compra_orden);
        label_subtotal->setObjectName(QString::fromUtf8("label_subtotal"));
        label_subtotal->setMinimumSize(QSize(80, 0));
        label_subtotal->setMaximumSize(QSize(80, 16777215));
        label_subtotal->setLayoutDirection(Qt::RightToLeft);
        label_subtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_subtotal);

        lineEdit_subtotal = new QLineEdit(ui_new_compra_orden);
        lineEdit_subtotal->setObjectName(QString::fromUtf8("lineEdit_subtotal"));
        lineEdit_subtotal->setMaximumSize(QSize(80, 16777215));
        lineEdit_subtotal->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(lineEdit_subtotal);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_igv = new QLabel(ui_new_compra_orden);
        label_igv->setObjectName(QString::fromUtf8("label_igv"));
        label_igv->setMinimumSize(QSize(80, 0));
        label_igv->setMaximumSize(QSize(80, 16777215));
        label_igv->setLayoutDirection(Qt::RightToLeft);
        label_igv->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_igv);

        lineEdit_igv = new QLineEdit(ui_new_compra_orden);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));
        lineEdit_igv->setMaximumSize(QSize(80, 16777215));
        lineEdit_igv->setLayoutDirection(Qt::RightToLeft);
        lineEdit_igv->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_igv);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_total = new QLabel(ui_new_compra_orden);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setMinimumSize(QSize(80, 0));
        label_total->setMaximumSize(QSize(80, 16777215));
        label_total->setLayoutDirection(Qt::RightToLeft);
        label_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_total);

        lineEdit_total = new QLineEdit(ui_new_compra_orden);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));
        lineEdit_total->setMaximumSize(QSize(80, 16777215));
        lineEdit_total->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_10->addWidget(lineEdit_total);


        verticalLayout->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        pushButton_registrar = new QPushButton(ui_new_compra_orden);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout->addWidget(pushButton_registrar);

        pushButton_mail = new QPushButton(ui_new_compra_orden);
        pushButton_mail->setObjectName(QString::fromUtf8("pushButton_mail"));

        horizontalLayout->addWidget(pushButton_mail);

        pushButton_imprimir = new QPushButton(ui_new_compra_orden);
        pushButton_imprimir->setObjectName(QString::fromUtf8("pushButton_imprimir"));

        horizontalLayout->addWidget(pushButton_imprimir);

        pushButton_cancelar = new QPushButton(ui_new_compra_orden);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ui_new_compra_orden);

        QMetaObject::connectSlotsByName(ui_new_compra_orden);
    } // setupUi

    void retranslateUi(QWidget *ui_new_compra_orden)
    {
        ui_new_compra_orden->setWindowTitle(QApplication::translate("ui_new_compra_orden", "Form", 0, QApplication::UnicodeUTF8));
        label_codigo->setText(QApplication::translate("ui_new_compra_orden", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        label_emision->setText(QApplication::translate("ui_new_compra_orden", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        dateEdit_emision->setDisplayFormat(QApplication::translate("ui_new_compra_orden", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_sistema->setText(QApplication::translate("ui_new_compra_orden", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_serie_numero->setText(QApplication::translate("ui_new_compra_orden", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        lineEdit_serie->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "Serie", 0, QApplication::UnicodeUTF8));
        label_minus->setText(QApplication::translate("ui_new_compra_orden", "-", 0, QApplication::UnicodeUTF8));
        lineEdit_numero->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "N\303\272mero", 0, QApplication::UnicodeUTF8));
        label_proveedor->setText(QApplication::translate("ui_new_compra_orden", "Proveedor:", 0, QApplication::UnicodeUTF8));
        lineEdit_codigoProveedor->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "RUC", 0, QApplication::UnicodeUTF8));
        lineEdit_proveedorNombre->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        pushButton_proveedor->setText(QString());
        label_9->setText(QApplication::translate("ui_new_compra_orden", "Transportista:", 0, QApplication::UnicodeUTF8));
        lineEdit_codigoTransportista->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "RUC", 0, QApplication::UnicodeUTF8));
        lineEdit_transportistaNombre->setPlaceholderText(QApplication::translate("ui_new_compra_orden", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        pushButton_transportista->setText(QString());
        label_tipo_moneda->setText(QApplication::translate("ui_new_compra_orden", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        comboBox_tipo_moneda->clear();
        comboBox_tipo_moneda->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_orden", "Soles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_orden", "D\303\263lares", 0, QApplication::UnicodeUTF8)
        );
        label_modalidad->setText(QApplication::translate("ui_new_compra_orden", "Modalidad:", 0, QApplication::UnicodeUTF8));
        comboBox_modalidad->clear();
        comboBox_modalidad->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_orden", "Con IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_orden", "Sin IGV", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("ui_new_compra_orden", "Tipo de pago:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_orden", "Cr\303\251dito", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_orden", "Contado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_orden", "Vuelta de viaje", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("ui_new_compra_orden", "Ayuda", 0, QApplication::UnicodeUTF8));
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_new_compra_orden", "Ingresar art\303\255culo", 0, QApplication::UnicodeUTF8));
        label_subtotal->setText(QApplication::translate("ui_new_compra_orden", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_igv->setText(QApplication::translate("ui_new_compra_orden", "IGV:", 0, QApplication::UnicodeUTF8));
        lineEdit_igv->setText(QApplication::translate("ui_new_compra_orden", "0.18", 0, QApplication::UnicodeUTF8));
        label_total->setText(QApplication::translate("ui_new_compra_orden", "Total:", 0, QApplication::UnicodeUTF8));
        pushButton_registrar->setText(QApplication::translate("ui_new_compra_orden", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_mail->setText(QApplication::translate("ui_new_compra_orden", "Mail", 0, QApplication::UnicodeUTF8));
        pushButton_imprimir->setText(QApplication::translate("ui_new_compra_orden", "Imprimir", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_compra_orden", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_compra_orden: public Ui_ui_new_compra_orden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_COMPRA_ORDEN_H
