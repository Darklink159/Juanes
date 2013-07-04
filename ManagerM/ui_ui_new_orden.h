/********************************************************************************
** Form generated from reading UI file 'ui_new_orden.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_ORDEN_H
#define UI_UI_NEW_ORDEN_H

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

class Ui_ui_new_orden
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
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
    QLineEdit *lineEdit_proveedorNombre;
    QPushButton *pushButton_proveedor;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *lineEdit_codigoTransportista;
    QFrame *line_3;
    QLineEdit *lineEdit_transportistaNombre;
    QPushButton *pushButton_transportista;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_tipo_moneda;
    QComboBox *comboBox_tipo_moneda;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_modalidad;
    QComboBox *comboBox_modalidad;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ingresarArticulos;
    QSpacerItem *horizontalSpacer_6;
    QTableView *tableView_articulos;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
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
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ui_new_orden)
    {
        if (ui_new_orden->objectName().isEmpty())
            ui_new_orden->setObjectName(QString::fromUtf8("ui_new_orden"));
        ui_new_orden->resize(653, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/2403.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_orden->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ui_new_orden);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_codigo = new QLabel(ui_new_orden);
        label_codigo->setObjectName(QString::fromUtf8("label_codigo"));
        label_codigo->setMinimumSize(QSize(90, 0));

        horizontalLayout_8->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(ui_new_orden);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigo->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_codigo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_emision = new QLabel(ui_new_orden);
        label_emision->setObjectName(QString::fromUtf8("label_emision"));

        horizontalLayout_8->addWidget(label_emision);

        dateEdit_emision = new QDateEdit(ui_new_orden);
        dateEdit_emision->setObjectName(QString::fromUtf8("dateEdit_emision"));

        horizontalLayout_8->addWidget(dateEdit_emision);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_sistema = new QLabel(ui_new_orden);
        label_sistema->setObjectName(QString::fromUtf8("label_sistema"));

        horizontalLayout_8->addWidget(label_sistema);

        dateEdit_sistema = new QDateEdit(ui_new_orden);
        dateEdit_sistema->setObjectName(QString::fromUtf8("dateEdit_sistema"));

        horizontalLayout_8->addWidget(dateEdit_sistema);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_serie_numero = new QLabel(ui_new_orden);
        label_serie_numero->setObjectName(QString::fromUtf8("label_serie_numero"));
        label_serie_numero->setMinimumSize(QSize(90, 0));

        horizontalLayout_7->addWidget(label_serie_numero);

        lineEdit_serie = new QLineEdit(ui_new_orden);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(lineEdit_serie);

        label_minus = new QLabel(ui_new_orden);
        label_minus->setObjectName(QString::fromUtf8("label_minus"));

        horizontalLayout_7->addWidget(label_minus);

        lineEdit_numero = new QLineEdit(ui_new_orden);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(lineEdit_numero);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_proveedor = new QLabel(ui_new_orden);
        label_proveedor->setObjectName(QString::fromUtf8("label_proveedor"));
        label_proveedor->setMinimumSize(QSize(90, 0));

        horizontalLayout_6->addWidget(label_proveedor);

        lineEdit_codigoProveedor = new QLineEdit(ui_new_orden);
        lineEdit_codigoProveedor->setObjectName(QString::fromUtf8("lineEdit_codigoProveedor"));
        lineEdit_codigoProveedor->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoProveedor->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_codigoProveedor);

        line_2 = new QFrame(ui_new_orden);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        lineEdit_proveedorNombre = new QLineEdit(ui_new_orden);
        lineEdit_proveedorNombre->setObjectName(QString::fromUtf8("lineEdit_proveedorNombre"));
        lineEdit_proveedorNombre->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_proveedorNombre);

        pushButton_proveedor = new QPushButton(ui_new_orden);
        pushButton_proveedor->setObjectName(QString::fromUtf8("pushButton_proveedor"));

        horizontalLayout_6->addWidget(pushButton_proveedor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(ui_new_orden);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_9);

        lineEdit_codigoTransportista = new QLineEdit(ui_new_orden);
        lineEdit_codigoTransportista->setObjectName(QString::fromUtf8("lineEdit_codigoTransportista"));
        lineEdit_codigoTransportista->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoTransportista->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_codigoTransportista);

        line_3 = new QFrame(ui_new_orden);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        lineEdit_transportistaNombre = new QLineEdit(ui_new_orden);
        lineEdit_transportistaNombre->setObjectName(QString::fromUtf8("lineEdit_transportistaNombre"));
        lineEdit_transportistaNombre->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_transportistaNombre);

        pushButton_transportista = new QPushButton(ui_new_orden);
        pushButton_transportista->setObjectName(QString::fromUtf8("pushButton_transportista"));

        horizontalLayout_5->addWidget(pushButton_transportista);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_tipo_moneda = new QLabel(ui_new_orden);
        label_tipo_moneda->setObjectName(QString::fromUtf8("label_tipo_moneda"));
        label_tipo_moneda->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_tipo_moneda);

        comboBox_tipo_moneda = new QComboBox(ui_new_orden);
        comboBox_tipo_moneda->setObjectName(QString::fromUtf8("comboBox_tipo_moneda"));
        comboBox_tipo_moneda->setEditable(false);

        horizontalLayout_4->addWidget(comboBox_tipo_moneda);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        label_modalidad = new QLabel(ui_new_orden);
        label_modalidad->setObjectName(QString::fromUtf8("label_modalidad"));
        label_modalidad->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_modalidad);

        comboBox_modalidad = new QComboBox(ui_new_orden);
        comboBox_modalidad->setObjectName(QString::fromUtf8("comboBox_modalidad"));
        comboBox_modalidad->setEditable(false);

        horizontalLayout_4->addWidget(comboBox_modalidad);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label = new QLabel(ui_new_orden);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        comboBox = new QComboBox(ui_new_orden);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);
        comboBox->setDuplicatesEnabled(true);

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(ui_new_orden);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_ingresarArticulos = new QPushButton(ui_new_orden);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));

        horizontalLayout_3->addWidget(pushButton_ingresarArticulos);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView_articulos = new QTableView(ui_new_orden);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));

        verticalLayout->addWidget(tableView_articulos);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_subtotal = new QLabel(ui_new_orden);
        label_subtotal->setObjectName(QString::fromUtf8("label_subtotal"));

        gridLayout->addWidget(label_subtotal, 0, 0, 1, 1);

        label_igv = new QLabel(ui_new_orden);
        label_igv->setObjectName(QString::fromUtf8("label_igv"));

        gridLayout->addWidget(label_igv, 0, 1, 1, 1);

        label_total = new QLabel(ui_new_orden);
        label_total->setObjectName(QString::fromUtf8("label_total"));

        gridLayout->addWidget(label_total, 0, 2, 1, 1);

        lineEdit_subtotal = new QLineEdit(ui_new_orden);
        lineEdit_subtotal->setObjectName(QString::fromUtf8("lineEdit_subtotal"));

        gridLayout->addWidget(lineEdit_subtotal, 1, 0, 1, 1);

        lineEdit_igv = new QLineEdit(ui_new_orden);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));
        lineEdit_igv->setReadOnly(false);

        gridLayout->addWidget(lineEdit_igv, 1, 1, 1, 1);

        lineEdit_total = new QLineEdit(ui_new_orden);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));

        gridLayout->addWidget(lineEdit_total, 1, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_registrar = new QPushButton(ui_new_orden);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout->addWidget(pushButton_registrar);

        pushButton_mail = new QPushButton(ui_new_orden);
        pushButton_mail->setObjectName(QString::fromUtf8("pushButton_mail"));

        horizontalLayout->addWidget(pushButton_mail);

        pushButton_imprimir = new QPushButton(ui_new_orden);
        pushButton_imprimir->setObjectName(QString::fromUtf8("pushButton_imprimir"));

        horizontalLayout->addWidget(pushButton_imprimir);

        pushButton_cancelar = new QPushButton(ui_new_orden);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_codigo, dateEdit_emision);
        QWidget::setTabOrder(dateEdit_emision, dateEdit_sistema);
        QWidget::setTabOrder(dateEdit_sistema, lineEdit_serie);
        QWidget::setTabOrder(lineEdit_serie, lineEdit_numero);
        QWidget::setTabOrder(lineEdit_numero, lineEdit_codigoProveedor);
        QWidget::setTabOrder(lineEdit_codigoProveedor, lineEdit_proveedorNombre);
        QWidget::setTabOrder(lineEdit_proveedorNombre, pushButton_proveedor);
        QWidget::setTabOrder(pushButton_proveedor, lineEdit_codigoTransportista);
        QWidget::setTabOrder(lineEdit_codigoTransportista, lineEdit_transportistaNombre);
        QWidget::setTabOrder(lineEdit_transportistaNombre, pushButton_transportista);
        QWidget::setTabOrder(pushButton_transportista, comboBox_tipo_moneda);
        QWidget::setTabOrder(comboBox_tipo_moneda, comboBox_modalidad);
        QWidget::setTabOrder(comboBox_modalidad, pushButton_ingresarArticulos);
        QWidget::setTabOrder(pushButton_ingresarArticulos, tableView_articulos);
        QWidget::setTabOrder(tableView_articulos, lineEdit_subtotal);
        QWidget::setTabOrder(lineEdit_subtotal, lineEdit_igv);
        QWidget::setTabOrder(lineEdit_igv, lineEdit_total);
        QWidget::setTabOrder(lineEdit_total, pushButton_registrar);
        QWidget::setTabOrder(pushButton_registrar, pushButton_mail);
        QWidget::setTabOrder(pushButton_mail, pushButton_imprimir);
        QWidget::setTabOrder(pushButton_imprimir, pushButton_cancelar);

        retranslateUi(ui_new_orden);

        QMetaObject::connectSlotsByName(ui_new_orden);
    } // setupUi

    void retranslateUi(QWidget *ui_new_orden)
    {
        ui_new_orden->setWindowTitle(QApplication::translate("ui_new_orden", "Form", 0, QApplication::UnicodeUTF8));
        label_codigo->setText(QApplication::translate("ui_new_orden", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        label_emision->setText(QApplication::translate("ui_new_orden", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_sistema->setText(QApplication::translate("ui_new_orden", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_serie_numero->setText(QApplication::translate("ui_new_orden", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        label_minus->setText(QApplication::translate("ui_new_orden", "-", 0, QApplication::UnicodeUTF8));
        label_proveedor->setText(QApplication::translate("ui_new_orden", "Proveedor:", 0, QApplication::UnicodeUTF8));
        pushButton_proveedor->setText(QApplication::translate("ui_new_orden", "Buscar", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_new_orden", "Transportista:", 0, QApplication::UnicodeUTF8));
        pushButton_transportista->setText(QApplication::translate("ui_new_orden", "Buscar", 0, QApplication::UnicodeUTF8));
        label_tipo_moneda->setText(QApplication::translate("ui_new_orden", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        comboBox_tipo_moneda->clear();
        comboBox_tipo_moneda->insertItems(0, QStringList()
         << QApplication::translate("ui_new_orden", "Soles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_orden", "D\303\263lares", 0, QApplication::UnicodeUTF8)
        );
        label_modalidad->setText(QApplication::translate("ui_new_orden", "Modalidad:", 0, QApplication::UnicodeUTF8));
        comboBox_modalidad->clear();
        comboBox_modalidad->insertItems(0, QStringList()
         << QApplication::translate("ui_new_orden", "Con IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_orden", "Sin IGV", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("ui_new_orden", "Tipo de pago:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_new_orden", "Cr\303\251dito", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_orden", "Contado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_orden", "Vuelta de viaje", 0, QApplication::UnicodeUTF8)
        );
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_new_orden", "Ingresar art\303\255culos", 0, QApplication::UnicodeUTF8));
        label_subtotal->setText(QApplication::translate("ui_new_orden", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_igv->setText(QApplication::translate("ui_new_orden", "IGV:", 0, QApplication::UnicodeUTF8));
        label_total->setText(QApplication::translate("ui_new_orden", "Total:", 0, QApplication::UnicodeUTF8));
        lineEdit_igv->setText(QString());
        pushButton_registrar->setText(QApplication::translate("ui_new_orden", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_mail->setText(QApplication::translate("ui_new_orden", "Mail", 0, QApplication::UnicodeUTF8));
        pushButton_imprimir->setText(QApplication::translate("ui_new_orden", "Imprimir", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_orden", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_orden: public Ui_ui_new_orden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_ORDEN_H
