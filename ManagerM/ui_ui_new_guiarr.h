/********************************************************************************
** Form generated from reading UI file 'ui_new_guiarr.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_GUIARR_H
#define UI_UI_NEW_GUIARR_H

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

class Ui_ui_new_guiarr
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_codigo;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_fecha_emision;
    QDateEdit *dateEdit_emision;
    QSpacerItem *horizontalSpacer;
    QLabel *label_fecha_sistema;
    QDateEdit *dateEdit_sistema;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_serie_numero;
    QLineEdit *lineEdit_serie;
    QLabel *label_menos;
    QLineEdit *lineEdit_numero;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_proveedor;
    QLineEdit *lineEdit_codigoProveedor;
    QFrame *line_2;
    QLineEdit *lineEdit_nombreProveedor;
    QPushButton *pushButton_buscarProveedor;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_factura;
    QLineEdit *lineEdit_codigoFactura;
    QFrame *line_3;
    QLineEdit *lineEdit_codigoFactura_2;
    QPushButton *pushButton_buscarFactura;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_tipo_moneda;
    QComboBox *comboBox_moneda;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_modalidad;
    QComboBox *comboBox_modalidad;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_ingresarArticulos;
    QSpacerItem *horizontalSpacer_7;
    QTableView *tableView_articulos;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_registrar;
    QPushButton *pushButton_mail;
    QPushButton *pushButton_imprimir;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ui_new_guiarr)
    {
        if (ui_new_guiarr->objectName().isEmpty())
            ui_new_guiarr->setObjectName(QString::fromUtf8("ui_new_guiarr"));
        ui_new_guiarr->resize(660, 429);
        gridLayout = new QGridLayout(ui_new_guiarr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_codigo = new QLabel(ui_new_guiarr);
        label_codigo->setObjectName(QString::fromUtf8("label_codigo"));
        label_codigo->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(ui_new_guiarr);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigo->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_codigo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_fecha_emision = new QLabel(ui_new_guiarr);
        label_fecha_emision->setObjectName(QString::fromUtf8("label_fecha_emision"));
        label_fecha_emision->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_fecha_emision);

        dateEdit_emision = new QDateEdit(ui_new_guiarr);
        dateEdit_emision->setObjectName(QString::fromUtf8("dateEdit_emision"));

        horizontalLayout->addWidget(dateEdit_emision);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_fecha_sistema = new QLabel(ui_new_guiarr);
        label_fecha_sistema->setObjectName(QString::fromUtf8("label_fecha_sistema"));
        label_fecha_sistema->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_fecha_sistema);

        dateEdit_sistema = new QDateEdit(ui_new_guiarr);
        dateEdit_sistema->setObjectName(QString::fromUtf8("dateEdit_sistema"));

        horizontalLayout->addWidget(dateEdit_sistema);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_serie_numero = new QLabel(ui_new_guiarr);
        label_serie_numero->setObjectName(QString::fromUtf8("label_serie_numero"));
        label_serie_numero->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(label_serie_numero);

        lineEdit_serie = new QLineEdit(ui_new_guiarr);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(lineEdit_serie);

        label_menos = new QLabel(ui_new_guiarr);
        label_menos->setObjectName(QString::fromUtf8("label_menos"));

        horizontalLayout_2->addWidget(label_menos);

        lineEdit_numero = new QLineEdit(ui_new_guiarr);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));

        horizontalLayout_2->addWidget(lineEdit_numero);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_proveedor = new QLabel(ui_new_guiarr);
        label_proveedor->setObjectName(QString::fromUtf8("label_proveedor"));
        label_proveedor->setMinimumSize(QSize(90, 0));

        horizontalLayout_3->addWidget(label_proveedor);

        lineEdit_codigoProveedor = new QLineEdit(ui_new_guiarr);
        lineEdit_codigoProveedor->setObjectName(QString::fromUtf8("lineEdit_codigoProveedor"));
        lineEdit_codigoProveedor->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoProveedor->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_codigoProveedor);

        line_2 = new QFrame(ui_new_guiarr);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        lineEdit_nombreProveedor = new QLineEdit(ui_new_guiarr);
        lineEdit_nombreProveedor->setObjectName(QString::fromUtf8("lineEdit_nombreProveedor"));

        horizontalLayout_3->addWidget(lineEdit_nombreProveedor);

        pushButton_buscarProveedor = new QPushButton(ui_new_guiarr);
        pushButton_buscarProveedor->setObjectName(QString::fromUtf8("pushButton_buscarProveedor"));

        horizontalLayout_3->addWidget(pushButton_buscarProveedor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_factura = new QLabel(ui_new_guiarr);
        label_factura->setObjectName(QString::fromUtf8("label_factura"));
        label_factura->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_factura);

        lineEdit_codigoFactura = new QLineEdit(ui_new_guiarr);
        lineEdit_codigoFactura->setObjectName(QString::fromUtf8("lineEdit_codigoFactura"));
        lineEdit_codigoFactura->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoFactura->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_codigoFactura);

        line_3 = new QFrame(ui_new_guiarr);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        lineEdit_codigoFactura_2 = new QLineEdit(ui_new_guiarr);
        lineEdit_codigoFactura_2->setObjectName(QString::fromUtf8("lineEdit_codigoFactura_2"));

        horizontalLayout_4->addWidget(lineEdit_codigoFactura_2);

        pushButton_buscarFactura = new QPushButton(ui_new_guiarr);
        pushButton_buscarFactura->setObjectName(QString::fromUtf8("pushButton_buscarFactura"));

        horizontalLayout_4->addWidget(pushButton_buscarFactura);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_tipo_moneda = new QLabel(ui_new_guiarr);
        label_tipo_moneda->setObjectName(QString::fromUtf8("label_tipo_moneda"));
        label_tipo_moneda->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_tipo_moneda);

        comboBox_moneda = new QComboBox(ui_new_guiarr);
        comboBox_moneda->setObjectName(QString::fromUtf8("comboBox_moneda"));

        horizontalLayout_5->addWidget(comboBox_moneda);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_modalidad = new QLabel(ui_new_guiarr);
        label_modalidad->setObjectName(QString::fromUtf8("label_modalidad"));
        label_modalidad->setMinimumSize(QSize(90, 0));

        horizontalLayout_5->addWidget(label_modalidad);

        comboBox_modalidad = new QComboBox(ui_new_guiarr);
        comboBox_modalidad->setObjectName(QString::fromUtf8("comboBox_modalidad"));

        horizontalLayout_5->addWidget(comboBox_modalidad);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        line = new QFrame(ui_new_guiarr);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_ingresarArticulos = new QPushButton(ui_new_guiarr);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));

        horizontalLayout_6->addWidget(pushButton_ingresarArticulos);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);

        tableView_articulos = new QTableView(ui_new_guiarr);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));

        verticalLayout->addWidget(tableView_articulos);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_registrar = new QPushButton(ui_new_guiarr);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout_7->addWidget(pushButton_registrar);

        pushButton_mail = new QPushButton(ui_new_guiarr);
        pushButton_mail->setObjectName(QString::fromUtf8("pushButton_mail"));

        horizontalLayout_7->addWidget(pushButton_mail);

        pushButton_imprimir = new QPushButton(ui_new_guiarr);
        pushButton_imprimir->setObjectName(QString::fromUtf8("pushButton_imprimir"));

        horizontalLayout_7->addWidget(pushButton_imprimir);

        pushButton_cancelar = new QPushButton(ui_new_guiarr);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_7->addWidget(pushButton_cancelar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ui_new_guiarr);

        QMetaObject::connectSlotsByName(ui_new_guiarr);
    } // setupUi

    void retranslateUi(QWidget *ui_new_guiarr)
    {
        ui_new_guiarr->setWindowTitle(QApplication::translate("ui_new_guiarr", "Form", 0, QApplication::UnicodeUTF8));
        label_codigo->setText(QApplication::translate("ui_new_guiarr", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        label_fecha_emision->setText(QApplication::translate("ui_new_guiarr", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_fecha_sistema->setText(QApplication::translate("ui_new_guiarr", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_serie_numero->setText(QApplication::translate("ui_new_guiarr", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        label_menos->setText(QApplication::translate("ui_new_guiarr", "  -", 0, QApplication::UnicodeUTF8));
        label_proveedor->setText(QApplication::translate("ui_new_guiarr", "Proveedor:", 0, QApplication::UnicodeUTF8));
        pushButton_buscarProveedor->setText(QApplication::translate("ui_new_guiarr", "Buscar", 0, QApplication::UnicodeUTF8));
        label_factura->setText(QApplication::translate("ui_new_guiarr", "Factura:", 0, QApplication::UnicodeUTF8));
        pushButton_buscarFactura->setText(QApplication::translate("ui_new_guiarr", "Buscar", 0, QApplication::UnicodeUTF8));
        label_tipo_moneda->setText(QApplication::translate("ui_new_guiarr", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        comboBox_moneda->clear();
        comboBox_moneda->insertItems(0, QStringList()
         << QApplication::translate("ui_new_guiarr", "SOLES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_guiarr", "DOLARES", 0, QApplication::UnicodeUTF8)
        );
        label_modalidad->setText(QApplication::translate("ui_new_guiarr", "Modalidad:", 0, QApplication::UnicodeUTF8));
        comboBox_modalidad->clear();
        comboBox_modalidad->insertItems(0, QStringList()
         << QApplication::translate("ui_new_guiarr", "CON IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_guiarr", "SIN IGV", 0, QApplication::UnicodeUTF8)
        );
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_new_guiarr", "Ingresar art\303\255culos", 0, QApplication::UnicodeUTF8));
        pushButton_registrar->setText(QApplication::translate("ui_new_guiarr", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_mail->setText(QApplication::translate("ui_new_guiarr", "Mail", 0, QApplication::UnicodeUTF8));
        pushButton_imprimir->setText(QApplication::translate("ui_new_guiarr", "Imprimir", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_guiarr", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_guiarr: public Ui_ui_new_guiarr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_GUIARR_H
