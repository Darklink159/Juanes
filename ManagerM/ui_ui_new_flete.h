/********************************************************************************
** Form generated from reading UI file 'ui_new_flete.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_FLETE_H
#define UI_UI_NEW_FLETE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_ui_new_flete
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_codigo;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_fecha_emision;
    QDateEdit *dateEdit_emision;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_fecha_sistema;
    QDateEdit *dateEdit_sistema;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_serie_numero;
    QLineEdit *lineEdit_serie;
    QLabel *label_menos;
    QLineEdit *lineEdit_numero;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_transportista;
    QLineEdit *lineEdit_codigoTransportista;
    QFrame *line_2;
    QLineEdit *lineEdit_nombreTransportista;
    QPushButton *pushButton_buscarTransportista;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_ingresarFacturas;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_monto;
    QLineEdit *lineEdit_monto;
    QPushButton *pushButton_disgregarMonto;
    QTableView *tableView_facturas;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLabel *label_subtotal;
    QLabel *label_igv;
    QLabel *label_total;
    QLineEdit *lineEdit_subtotal;
    QLineEdit *lineEdit_igv;
    QLineEdit *lineEdit_total;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_registrar;
    QPushButton *pushButton_mail;
    QPushButton *pushButton_imprimir;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *ui_new_flete)
    {
        if (ui_new_flete->objectName().isEmpty())
            ui_new_flete->setObjectName(QString::fromUtf8("ui_new_flete"));
        ui_new_flete->resize(660, 438);
        gridLayout_2 = new QGridLayout(ui_new_flete);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_codigo = new QLabel(ui_new_flete);
        label_codigo->setObjectName(QString::fromUtf8("label_codigo"));
        label_codigo->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_codigo);

        lineEdit_codigo = new QLineEdit(ui_new_flete);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));
        lineEdit_codigo->setMinimumSize(QSize(80, 0));
        lineEdit_codigo->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigo->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_codigo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_fecha_emision = new QLabel(ui_new_flete);
        label_fecha_emision->setObjectName(QString::fromUtf8("label_fecha_emision"));
        label_fecha_emision->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_fecha_emision);

        dateEdit_emision = new QDateEdit(ui_new_flete);
        dateEdit_emision->setObjectName(QString::fromUtf8("dateEdit_emision"));

        horizontalLayout->addWidget(dateEdit_emision);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_fecha_sistema = new QLabel(ui_new_flete);
        label_fecha_sistema->setObjectName(QString::fromUtf8("label_fecha_sistema"));
        label_fecha_sistema->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(label_fecha_sistema);

        dateEdit_sistema = new QDateEdit(ui_new_flete);
        dateEdit_sistema->setObjectName(QString::fromUtf8("dateEdit_sistema"));

        horizontalLayout->addWidget(dateEdit_sistema);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_serie_numero = new QLabel(ui_new_flete);
        label_serie_numero->setObjectName(QString::fromUtf8("label_serie_numero"));
        label_serie_numero->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(label_serie_numero);

        lineEdit_serie = new QLineEdit(ui_new_flete);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(lineEdit_serie);

        label_menos = new QLabel(ui_new_flete);
        label_menos->setObjectName(QString::fromUtf8("label_menos"));

        horizontalLayout_2->addWidget(label_menos);

        lineEdit_numero = new QLineEdit(ui_new_flete);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(lineEdit_numero);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_transportista = new QLabel(ui_new_flete);
        label_transportista->setObjectName(QString::fromUtf8("label_transportista"));
        label_transportista->setMinimumSize(QSize(90, 0));

        horizontalLayout_3->addWidget(label_transportista);

        lineEdit_codigoTransportista = new QLineEdit(ui_new_flete);
        lineEdit_codigoTransportista->setObjectName(QString::fromUtf8("lineEdit_codigoTransportista"));
        lineEdit_codigoTransportista->setMaximumSize(QSize(80, 16777215));
        lineEdit_codigoTransportista->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_codigoTransportista);

        line_2 = new QFrame(ui_new_flete);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        lineEdit_nombreTransportista = new QLineEdit(ui_new_flete);
        lineEdit_nombreTransportista->setObjectName(QString::fromUtf8("lineEdit_nombreTransportista"));
        lineEdit_nombreTransportista->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_nombreTransportista);

        pushButton_buscarTransportista = new QPushButton(ui_new_flete);
        pushButton_buscarTransportista->setObjectName(QString::fromUtf8("pushButton_buscarTransportista"));

        horizontalLayout_3->addWidget(pushButton_buscarTransportista);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(ui_new_flete);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_10 = new QLabel(ui_new_flete);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_ingresarFacturas = new QPushButton(ui_new_flete);
        pushButton_ingresarFacturas->setObjectName(QString::fromUtf8("pushButton_ingresarFacturas"));

        horizontalLayout_6->addWidget(pushButton_ingresarFacturas);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_monto = new QLabel(ui_new_flete);
        label_monto->setObjectName(QString::fromUtf8("label_monto"));

        horizontalLayout_6->addWidget(label_monto);

        lineEdit_monto = new QLineEdit(ui_new_flete);
        lineEdit_monto->setObjectName(QString::fromUtf8("lineEdit_monto"));

        horizontalLayout_6->addWidget(lineEdit_monto);

        pushButton_disgregarMonto = new QPushButton(ui_new_flete);
        pushButton_disgregarMonto->setObjectName(QString::fromUtf8("pushButton_disgregarMonto"));

        horizontalLayout_6->addWidget(pushButton_disgregarMonto);


        verticalLayout->addLayout(horizontalLayout_6);

        tableView_facturas = new QTableView(ui_new_flete);
        tableView_facturas->setObjectName(QString::fromUtf8("tableView_facturas"));

        verticalLayout->addWidget(tableView_facturas);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(ui_new_flete);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_subtotal = new QLabel(ui_new_flete);
        label_subtotal->setObjectName(QString::fromUtf8("label_subtotal"));

        gridLayout->addWidget(label_subtotal, 0, 0, 1, 1);

        label_igv = new QLabel(ui_new_flete);
        label_igv->setObjectName(QString::fromUtf8("label_igv"));

        gridLayout->addWidget(label_igv, 0, 1, 1, 1);

        label_total = new QLabel(ui_new_flete);
        label_total->setObjectName(QString::fromUtf8("label_total"));

        gridLayout->addWidget(label_total, 0, 2, 1, 1);

        lineEdit_subtotal = new QLineEdit(ui_new_flete);
        lineEdit_subtotal->setObjectName(QString::fromUtf8("lineEdit_subtotal"));

        gridLayout->addWidget(lineEdit_subtotal, 1, 0, 1, 1);

        lineEdit_igv = new QLineEdit(ui_new_flete);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));

        gridLayout->addWidget(lineEdit_igv, 1, 1, 1, 1);

        lineEdit_total = new QLineEdit(ui_new_flete);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));

        gridLayout->addWidget(lineEdit_total, 1, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_registrar = new QPushButton(ui_new_flete);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout_4->addWidget(pushButton_registrar);

        pushButton_mail = new QPushButton(ui_new_flete);
        pushButton_mail->setObjectName(QString::fromUtf8("pushButton_mail"));

        horizontalLayout_4->addWidget(pushButton_mail);

        pushButton_imprimir = new QPushButton(ui_new_flete);
        pushButton_imprimir->setObjectName(QString::fromUtf8("pushButton_imprimir"));

        horizontalLayout_4->addWidget(pushButton_imprimir);

        pushButton_cancelar = new QPushButton(ui_new_flete);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_4->addWidget(pushButton_cancelar);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ui_new_flete);

        QMetaObject::connectSlotsByName(ui_new_flete);
    } // setupUi

    void retranslateUi(QWidget *ui_new_flete)
    {
        ui_new_flete->setWindowTitle(QApplication::translate("ui_new_flete", "Form", 0, QApplication::UnicodeUTF8));
        label_codigo->setText(QApplication::translate("ui_new_flete", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        label_fecha_emision->setText(QApplication::translate("ui_new_flete", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_fecha_sistema->setText(QApplication::translate("ui_new_flete", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_serie_numero->setText(QApplication::translate("ui_new_flete", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        label_menos->setText(QApplication::translate("ui_new_flete", "  -", 0, QApplication::UnicodeUTF8));
        label_transportista->setText(QApplication::translate("ui_new_flete", "Transportista:", 0, QApplication::UnicodeUTF8));
        pushButton_buscarTransportista->setText(QApplication::translate("ui_new_flete", "Buscar", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_new_flete", "Facturas relacionadas", 0, QApplication::UnicodeUTF8));
        pushButton_ingresarFacturas->setText(QApplication::translate("ui_new_flete", "Ingresar facturas", 0, QApplication::UnicodeUTF8));
        label_monto->setText(QApplication::translate("ui_new_flete", "Monto:", 0, QApplication::UnicodeUTF8));
        pushButton_disgregarMonto->setText(QApplication::translate("ui_new_flete", "Disgregar monto", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_subtotal->setText(QApplication::translate("ui_new_flete", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_igv->setText(QApplication::translate("ui_new_flete", "IGV:", 0, QApplication::UnicodeUTF8));
        label_total->setText(QApplication::translate("ui_new_flete", "Total:", 0, QApplication::UnicodeUTF8));
        lineEdit_igv->setText(QApplication::translate("ui_new_flete", "0.18", 0, QApplication::UnicodeUTF8));
        pushButton_registrar->setText(QApplication::translate("ui_new_flete", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_mail->setText(QApplication::translate("ui_new_flete", "Mail", 0, QApplication::UnicodeUTF8));
        pushButton_imprimir->setText(QApplication::translate("ui_new_flete", "Imprimir", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_flete", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_flete: public Ui_ui_new_flete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_FLETE_H
