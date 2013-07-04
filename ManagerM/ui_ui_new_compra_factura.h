/********************************************************************************
** Form generated from reading UI file 'ui_new_compra_factura.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_COMPRA_FACTURA_H
#define UI_UI_NEW_COMPRA_FACTURA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_compra_factura
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_codigo;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_fecha_emision;
    QDateEdit *dateEdit_emision;
    QSpacerItem *horizontalSpacer;
    QLabel *label_fecha_sistema;
    QDateEdit *dateEdit_sistema;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_serie_numero;
    QLineEdit *lineEdit_serie;
    QLabel *label_menos;
    QLineEdit *lineEdit_numero;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_proveedor;
    QLineEdit *lineEdit_codigoProveedor;
    QFrame *line_2;
    QLineEdit *lineEdit_nombreProveedor;
    QPushButton *pushButton_buscarProveedor;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_moneda;
    QComboBox *comboBox_moneda;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_modalidad;
    QComboBox *comboBox_modalidad;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_percepcion;
    QComboBox *comboBox_percepcion;
    QLineEdit *lineEdit_numeroPercepcion;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ingresarArticulos;
    QSpacerItem *horizontalSpacer_7;
    QTableView *tableView_articulos;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout;
    QLabel *label_subtotal;
    QLabel *label_igv;
    QLabel *label_total;
    QLineEdit *lineEdit_subtotal;
    QLineEdit *lineEdit_igv;
    QLineEdit *lineEdit_total;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_registrar;
    QPushButton *pushButton_mail;
    QPushButton *pushButton_imprimir;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *ui_new_compra_factura)
    {
        if (ui_new_compra_factura->objectName().isEmpty())
            ui_new_compra_factura->setObjectName(QString::fromUtf8("ui_new_compra_factura"));
        ui_new_compra_factura->resize(660, 475);
        gridLayout_2 = new QGridLayout(ui_new_compra_factura);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_codigo = new QLabel(ui_new_compra_factura);
        label_codigo->setObjectName(QString::fromUtf8("label_codigo"));
        label_codigo->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(ui_new_compra_factura);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setMinimumSize(QSize(80, 0));
        lineEdit_codigo->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigo->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_codigo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        label_fecha_emision = new QLabel(ui_new_compra_factura);
        label_fecha_emision->setObjectName(QString::fromUtf8("label_fecha_emision"));
        label_fecha_emision->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_fecha_emision);

        dateEdit_emision = new QDateEdit(ui_new_compra_factura);
        dateEdit_emision->setObjectName(QString::fromUtf8("dateEdit_emision"));
        dateEdit_emision->setCalendarPopup(true);

        horizontalLayout_8->addWidget(dateEdit_emision);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_fecha_sistema = new QLabel(ui_new_compra_factura);
        label_fecha_sistema->setObjectName(QString::fromUtf8("label_fecha_sistema"));
        label_fecha_sistema->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_fecha_sistema);

        dateEdit_sistema = new QDateEdit(ui_new_compra_factura);
        dateEdit_sistema->setObjectName(QString::fromUtf8("dateEdit_sistema"));
        dateEdit_sistema->setCalendarPopup(true);

        horizontalLayout_8->addWidget(dateEdit_sistema);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_serie_numero = new QLabel(ui_new_compra_factura);
        label_serie_numero->setObjectName(QString::fromUtf8("label_serie_numero"));
        label_serie_numero->setMinimumSize(QSize(90, 0));

        horizontalLayout_7->addWidget(label_serie_numero);

        lineEdit_serie = new QLineEdit(ui_new_compra_factura);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(lineEdit_serie);

        label_menos = new QLabel(ui_new_compra_factura);
        label_menos->setObjectName(QString::fromUtf8("label_menos"));

        horizontalLayout_7->addWidget(label_menos);

        lineEdit_numero = new QLineEdit(ui_new_compra_factura);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(lineEdit_numero);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_proveedor = new QLabel(ui_new_compra_factura);
        label_proveedor->setObjectName(QString::fromUtf8("label_proveedor"));
        label_proveedor->setMinimumSize(QSize(90, 0));

        horizontalLayout_6->addWidget(label_proveedor);

        lineEdit_codigoProveedor = new QLineEdit(ui_new_compra_factura);
        lineEdit_codigoProveedor->setObjectName(QString::fromUtf8("lineEdit_codigoProveedor"));
        lineEdit_codigoProveedor->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoProveedor->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_codigoProveedor);

        line_2 = new QFrame(ui_new_compra_factura);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        lineEdit_nombreProveedor = new QLineEdit(ui_new_compra_factura);
        lineEdit_nombreProveedor->setObjectName(QString::fromUtf8("lineEdit_nombreProveedor"));

        horizontalLayout_6->addWidget(lineEdit_nombreProveedor);

        pushButton_buscarProveedor = new QPushButton(ui_new_compra_factura);
        pushButton_buscarProveedor->setObjectName(QString::fromUtf8("pushButton_buscarProveedor"));

        horizontalLayout_6->addWidget(pushButton_buscarProveedor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_moneda = new QLabel(ui_new_compra_factura);
        label_moneda->setObjectName(QString::fromUtf8("label_moneda"));
        label_moneda->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_moneda);

        comboBox_moneda = new QComboBox(ui_new_compra_factura);
        comboBox_moneda->setObjectName(QString::fromUtf8("comboBox_moneda"));

        horizontalLayout_5->addWidget(comboBox_moneda);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label_modalidad = new QLabel(ui_new_compra_factura);
        label_modalidad->setObjectName(QString::fromUtf8("label_modalidad"));
        label_modalidad->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_modalidad);

        comboBox_modalidad = new QComboBox(ui_new_compra_factura);
        comboBox_modalidad->setObjectName(QString::fromUtf8("comboBox_modalidad"));

        horizontalLayout_5->addWidget(comboBox_modalidad);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_percepcion = new QLabel(ui_new_compra_factura);
        label_percepcion->setObjectName(QString::fromUtf8("label_percepcion"));
        label_percepcion->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_percepcion);

        comboBox_percepcion = new QComboBox(ui_new_compra_factura);
        comboBox_percepcion->setObjectName(QString::fromUtf8("comboBox_percepcion"));

        horizontalLayout_4->addWidget(comboBox_percepcion);

        lineEdit_numeroPercepcion = new QLineEdit(ui_new_compra_factura);
        lineEdit_numeroPercepcion->setObjectName(QString::fromUtf8("lineEdit_numeroPercepcion"));
        lineEdit_numeroPercepcion->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(lineEdit_numeroPercepcion);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(ui_new_compra_factura);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_ingresarArticulos = new QPushButton(ui_new_compra_factura);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));

        horizontalLayout_3->addWidget(pushButton_ingresarArticulos);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView_articulos = new QTableView(ui_new_compra_factura);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));

        verticalLayout->addWidget(tableView_articulos);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_subtotal = new QLabel(ui_new_compra_factura);
        label_subtotal->setObjectName(QString::fromUtf8("label_subtotal"));

        gridLayout->addWidget(label_subtotal, 0, 0, 1, 1);

        label_igv = new QLabel(ui_new_compra_factura);
        label_igv->setObjectName(QString::fromUtf8("label_igv"));

        gridLayout->addWidget(label_igv, 0, 1, 1, 1);

        label_total = new QLabel(ui_new_compra_factura);
        label_total->setObjectName(QString::fromUtf8("label_total"));

        gridLayout->addWidget(label_total, 0, 2, 1, 1);

        lineEdit_subtotal = new QLineEdit(ui_new_compra_factura);
        lineEdit_subtotal->setObjectName(QString::fromUtf8("lineEdit_subtotal"));

        gridLayout->addWidget(lineEdit_subtotal, 1, 0, 1, 1);

        lineEdit_igv = new QLineEdit(ui_new_compra_factura);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));

        gridLayout->addWidget(lineEdit_igv, 1, 1, 1, 1);

        lineEdit_total = new QLineEdit(ui_new_compra_factura);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));

        gridLayout->addWidget(lineEdit_total, 1, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_registrar = new QPushButton(ui_new_compra_factura);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout->addWidget(pushButton_registrar);

        pushButton_mail = new QPushButton(ui_new_compra_factura);
        pushButton_mail->setObjectName(QString::fromUtf8("pushButton_mail"));

        horizontalLayout->addWidget(pushButton_mail);

        pushButton_imprimir = new QPushButton(ui_new_compra_factura);
        pushButton_imprimir->setObjectName(QString::fromUtf8("pushButton_imprimir"));

        horizontalLayout->addWidget(pushButton_imprimir);

        pushButton_cancelar = new QPushButton(ui_new_compra_factura);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ui_new_compra_factura);

        QMetaObject::connectSlotsByName(ui_new_compra_factura);
    } // setupUi

    void retranslateUi(QWidget *ui_new_compra_factura)
    {
        ui_new_compra_factura->setWindowTitle(QApplication::translate("ui_new_compra_factura", "Form", 0, QApplication::UnicodeUTF8));
        label_codigo->setText(QApplication::translate("ui_new_compra_factura", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        lineEdit_codigo->setInputMask(QString());
        label_fecha_emision->setText(QApplication::translate("ui_new_compra_factura", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_fecha_sistema->setText(QApplication::translate("ui_new_compra_factura", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_serie_numero->setText(QApplication::translate("ui_new_compra_factura", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        lineEdit_serie->setInputMask(QString());
        label_menos->setText(QApplication::translate("ui_new_compra_factura", "-", 0, QApplication::UnicodeUTF8));
        lineEdit_numero->setInputMask(QString());
        label_proveedor->setText(QApplication::translate("ui_new_compra_factura", "Proveedor:", 0, QApplication::UnicodeUTF8));
        lineEdit_codigoProveedor->setInputMask(QString());
        pushButton_buscarProveedor->setText(QApplication::translate("ui_new_compra_factura", "Buscar", 0, QApplication::UnicodeUTF8));
        label_moneda->setText(QApplication::translate("ui_new_compra_factura", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        comboBox_moneda->clear();
        comboBox_moneda->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_factura", "SOLES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_factura", "DOLARES", 0, QApplication::UnicodeUTF8)
        );
        label_modalidad->setText(QApplication::translate("ui_new_compra_factura", "Modalidad:", 0, QApplication::UnicodeUTF8));
        comboBox_modalidad->clear();
        comboBox_modalidad->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_factura", "CON IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_factura", "SIN IGV", 0, QApplication::UnicodeUTF8)
        );
        label_percepcion->setText(QApplication::translate("ui_new_compra_factura", "Percepci\303\263n:", 0, QApplication::UnicodeUTF8));
        comboBox_percepcion->clear();
        comboBox_percepcion->insertItems(0, QStringList()
         << QApplication::translate("ui_new_compra_factura", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_compra_factura", "Si", 0, QApplication::UnicodeUTF8)
        );
        lineEdit_numeroPercepcion->setInputMask(QString());
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_new_compra_factura", "Ingresar art\303\255culos", 0, QApplication::UnicodeUTF8));
        label_subtotal->setText(QApplication::translate("ui_new_compra_factura", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_igv->setText(QApplication::translate("ui_new_compra_factura", "IGV:", 0, QApplication::UnicodeUTF8));
        label_total->setText(QApplication::translate("ui_new_compra_factura", "Total:", 0, QApplication::UnicodeUTF8));
        lineEdit_igv->setText(QApplication::translate("ui_new_compra_factura", "0.18", 0, QApplication::UnicodeUTF8));
        pushButton_registrar->setText(QApplication::translate("ui_new_compra_factura", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_mail->setText(QApplication::translate("ui_new_compra_factura", "Mail", 0, QApplication::UnicodeUTF8));
        pushButton_imprimir->setText(QApplication::translate("ui_new_compra_factura", "Imprimir", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_compra_factura", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_compra_factura: public Ui_ui_new_compra_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_COMPRA_FACTURA_H
