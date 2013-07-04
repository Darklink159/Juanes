/********************************************************************************
** Form generated from reading UI file 'ui_newedit_cliente.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEWEDIT_CLIENTE_H
#define UI_UI_NEWEDIT_CLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_newedit_cliente
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_email;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_direccion;
    QPushButton *pushButton_save;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_representante;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_fax;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit_nombre;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_telefonoCelular;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit_comentario;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_paginaWeb;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_telefonoFijo;
    QPushButton *pushButton_cancel;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ruc;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QComboBox *comboBox_region;

    void setupUi(QDialog *ui_newedit_cliente)
    {
        if (ui_newedit_cliente->objectName().isEmpty())
            ui_newedit_cliente->setObjectName(QString::fromUtf8("ui_newedit_cliente"));
        ui_newedit_cliente->resize(385, 452);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Live_Messenger.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_newedit_cliente->setWindowIcon(icon);
        layoutWidget = new QWidget(ui_newedit_cliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 270, 285, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(77, 0));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setMinimumSize(QSize(200, 0));

        horizontalLayout_9->addWidget(lineEdit_email);

        layoutWidget_2 = new QWidget(ui_newedit_cliente);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 120, 335, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(77, 0));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_direccion = new QLineEdit(layoutWidget_2);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(250, 0));

        horizontalLayout_2->addWidget(lineEdit_direccion);

        pushButton_save = new QPushButton(ui_newedit_cliente);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(279, 410, 35, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save->setIcon(icon1);
        pushButton_save->setIconSize(QSize(23, 23));
        pushButton_save->setDefault(false);
        pushButton_save->setFlat(true);
        layoutWidget_3 = new QWidget(ui_newedit_cliente);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 150, 335, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(77, 0));

        horizontalLayout_3->addWidget(label_7);

        lineEdit_representante = new QLineEdit(layoutWidget_3);
        lineEdit_representante->setObjectName(QString::fromUtf8("lineEdit_representante"));
        lineEdit_representante->setMinimumSize(QSize(250, 0));

        horizontalLayout_3->addWidget(lineEdit_representante);

        layoutWidget_4 = new QWidget(ui_newedit_cliente);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 240, 213, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(77, 0));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_fax = new QLineEdit(layoutWidget_4);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));
        lineEdit_fax->setMinimumSize(QSize(128, 0));

        horizontalLayout_6->addWidget(lineEdit_fax);

        layoutWidget_5 = new QWidget(ui_newedit_cliente);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 60, 335, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(77, 0));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_nombre = new QLineEdit(layoutWidget_5);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        lineEdit_nombre->setMinimumSize(QSize(250, 0));

        horizontalLayout_7->addWidget(lineEdit_nombre);

        layoutWidget_6 = new QWidget(ui_newedit_cliente);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(20, 210, 218, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_telefonoCelular = new QLineEdit(layoutWidget_6);
        lineEdit_telefonoCelular->setObjectName(QString::fromUtf8("lineEdit_telefonoCelular"));

        horizontalLayout_5->addWidget(lineEdit_telefonoCelular);

        layoutWidget_7 = new QWidget(ui_newedit_cliente);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 330, 331, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_10);

        lineEdit_comentario = new QLineEdit(layoutWidget_7);
        lineEdit_comentario->setObjectName(QString::fromUtf8("lineEdit_comentario"));
        lineEdit_comentario->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(lineEdit_comentario);

        layoutWidget_8 = new QWidget(ui_newedit_cliente);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 300, 285, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(77, 0));

        horizontalLayout_8->addWidget(label_9);

        lineEdit_paginaWeb = new QLineEdit(layoutWidget_8);
        lineEdit_paginaWeb->setObjectName(QString::fromUtf8("lineEdit_paginaWeb"));
        lineEdit_paginaWeb->setMinimumSize(QSize(200, 0));

        horizontalLayout_8->addWidget(lineEdit_paginaWeb);

        layoutWidget_9 = new QWidget(ui_newedit_cliente);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(20, 180, 213, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(77, 0));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_telefonoFijo = new QLineEdit(layoutWidget_9);
        lineEdit_telefonoFijo->setObjectName(QString::fromUtf8("lineEdit_telefonoFijo"));

        horizontalLayout_4->addWidget(lineEdit_telefonoFijo);

        pushButton_cancel = new QPushButton(ui_newedit_cliente);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(320, 410, 35, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon2);
        pushButton_cancel->setIconSize(QSize(23, 23));
        pushButton_cancel->setFlat(true);
        layoutWidget_10 = new QWidget(ui_newedit_cliente);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(20, 30, 218, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(77, 0));
        label->setMaximumSize(QSize(72, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_ruc = new QLineEdit(layoutWidget_10);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));
        lineEdit_ruc->setMinimumSize(QSize(133, 0));
        lineEdit_ruc->setMaximumSize(QSize(133, 16777215));

        horizontalLayout->addWidget(lineEdit_ruc);

        layoutWidget1 = new QWidget(ui_newedit_cliente);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 90, 218, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(77, 0));

        horizontalLayout_10->addWidget(label_11);

        comboBox_region = new QComboBox(layoutWidget1);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));
        comboBox_region->setMinimumSize(QSize(133, 0));

        horizontalLayout_10->addWidget(comboBox_region);

        QWidget::setTabOrder(lineEdit_ruc, lineEdit_nombre);
        QWidget::setTabOrder(lineEdit_nombre, comboBox_region);
        QWidget::setTabOrder(comboBox_region, lineEdit_direccion);
        QWidget::setTabOrder(lineEdit_direccion, lineEdit_representante);
        QWidget::setTabOrder(lineEdit_representante, lineEdit_telefonoFijo);
        QWidget::setTabOrder(lineEdit_telefonoFijo, lineEdit_telefonoCelular);
        QWidget::setTabOrder(lineEdit_telefonoCelular, lineEdit_fax);
        QWidget::setTabOrder(lineEdit_fax, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, lineEdit_paginaWeb);
        QWidget::setTabOrder(lineEdit_paginaWeb, lineEdit_comentario);
        QWidget::setTabOrder(lineEdit_comentario, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_cancel);

        retranslateUi(ui_newedit_cliente);

        QMetaObject::connectSlotsByName(ui_newedit_cliente);
    } // setupUi

    void retranslateUi(QDialog *ui_newedit_cliente)
    {
        ui_newedit_cliente->setWindowTitle(QApplication::translate("ui_newedit_cliente", "Clientes", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_newedit_cliente", "E-mail", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_newedit_cliente", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("ui_newedit_cliente", "Guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QString());
        pushButton_save->setShortcut(QString());
        label_7->setText(QApplication::translate("ui_newedit_cliente", "Representante", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_newedit_cliente", "Fax", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_newedit_cliente", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_newedit_cliente", "Tel\303\251fono Celular", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_newedit_cliente", "Comentario", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_newedit_cliente", "P\303\241gina Web", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_newedit_cliente", "Tel\303\251fono Fijo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_cancel->setToolTip(QApplication::translate("ui_newedit_cliente", "Cancelar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_cancel->setText(QString());
        label->setText(QApplication::translate("ui_newedit_cliente", "RUC", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_newedit_cliente", "Regi\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_newedit_cliente: public Ui_ui_newedit_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEWEDIT_CLIENTE_H
