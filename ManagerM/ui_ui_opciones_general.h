/********************************************************************************
** Form generated from reading UI file 'ui_opciones_general.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_GENERAL_H
#define UI_UI_OPCIONES_GENERAL_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_general
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_igv;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_guardar_igv;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_cambio_SD;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_guardar_SD;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_cambio_DS;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_guardar_DS;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QComboBox *comboBox_serie_f;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QSpinBox *spinBox_inicio_f;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QSpinBox *spinBox_actual_f;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSpinBox *spinBox_fin_f;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QComboBox *comboBox_serie_b;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QSpinBox *spinBox_inicio_b;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QSpinBox *spinBox_actual_b;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QSpinBox *spinBox_fin_b;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_opciones_general)
    {
        if (ui_opciones_general->objectName().isEmpty())
            ui_opciones_general->setObjectName(QString::fromUtf8("ui_opciones_general"));
        ui_opciones_general->resize(571, 408);
        ui_opciones_general->setMinimumSize(QSize(571, 408));
        ui_opciones_general->setMaximumSize(QSize(571, 408));
        gridLayout_3 = new QGridLayout(ui_opciones_general);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(ui_opciones_general);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_igv = new QLineEdit(groupBox);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));
        lineEdit_igv->setMinimumSize(QSize(100, 0));
        lineEdit_igv->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(lineEdit_igv);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_guardar_igv = new QPushButton(groupBox);
        pushButton_guardar_igv->setObjectName(QString::fromUtf8("pushButton_guardar_igv"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_guardar_igv->setIcon(icon);
        pushButton_guardar_igv->setFlat(true);

        horizontalLayout->addWidget(pushButton_guardar_igv);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_cambio_SD = new QLineEdit(groupBox_2);
        lineEdit_cambio_SD->setObjectName(QString::fromUtf8("lineEdit_cambio_SD"));
        lineEdit_cambio_SD->setMinimumSize(QSize(100, 0));
        lineEdit_cambio_SD->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit_cambio_SD);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_guardar_SD = new QPushButton(groupBox_2);
        pushButton_guardar_SD->setObjectName(QString::fromUtf8("pushButton_guardar_SD"));
        pushButton_guardar_SD->setIcon(icon);
        pushButton_guardar_SD->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_guardar_SD);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_cambio_DS = new QLineEdit(groupBox_2);
        lineEdit_cambio_DS->setObjectName(QString::fromUtf8("lineEdit_cambio_DS"));
        lineEdit_cambio_DS->setMinimumSize(QSize(100, 0));
        lineEdit_cambio_DS->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lineEdit_cambio_DS);

        horizontalSpacer_3 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_guardar_DS = new QPushButton(groupBox_2);
        pushButton_guardar_DS->setObjectName(QString::fromUtf8("pushButton_guardar_DS"));
        pushButton_guardar_DS->setIcon(icon);
        pushButton_guardar_DS->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_guardar_DS);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(label_9);

        comboBox_serie_f = new QComboBox(groupBox_3);
        comboBox_serie_f->setObjectName(QString::fromUtf8("comboBox_serie_f"));
        comboBox_serie_f->setMinimumSize(QSize(100, 0));
        comboBox_serie_f->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(comboBox_serie_f);


        gridLayout_4->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_11);

        spinBox_inicio_f = new QSpinBox(groupBox_3);
        spinBox_inicio_f->setObjectName(QString::fromUtf8("spinBox_inicio_f"));
        spinBox_inicio_f->setMinimumSize(QSize(100, 0));
        spinBox_inicio_f->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(spinBox_inicio_f);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(label_10);

        spinBox_actual_f = new QSpinBox(groupBox_3);
        spinBox_actual_f->setObjectName(QString::fromUtf8("spinBox_actual_f"));
        spinBox_actual_f->setMinimumSize(QSize(100, 0));
        spinBox_actual_f->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(spinBox_actual_f);


        gridLayout_4->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(label_12);

        spinBox_fin_f = new QSpinBox(groupBox_3);
        spinBox_fin_f->setObjectName(QString::fromUtf8("spinBox_fin_f"));
        spinBox_fin_f->setMinimumSize(QSize(100, 0));
        spinBox_fin_f->setMaximumSize(QSize(100, 16777215));
        spinBox_fin_f->setMaximum(1000000);

        horizontalLayout_9->addWidget(spinBox_fin_f);


        gridLayout_4->addLayout(horizontalLayout_9, 1, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_13->addWidget(label_14);

        comboBox_serie_b = new QComboBox(groupBox_4);
        comboBox_serie_b->setObjectName(QString::fromUtf8("comboBox_serie_b"));
        comboBox_serie_b->setMinimumSize(QSize(100, 0));
        comboBox_serie_b->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_13->addWidget(comboBox_serie_b);


        gridLayout_2->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(label_16);

        spinBox_inicio_b = new QSpinBox(groupBox_4);
        spinBox_inicio_b->setObjectName(QString::fromUtf8("spinBox_inicio_b"));
        spinBox_inicio_b->setMinimumSize(QSize(100, 0));
        spinBox_inicio_b->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(spinBox_inicio_b);


        gridLayout_2->addLayout(horizontalLayout_15, 0, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(label_13);

        spinBox_actual_b = new QSpinBox(groupBox_4);
        spinBox_actual_b->setObjectName(QString::fromUtf8("spinBox_actual_b"));
        spinBox_actual_b->setMinimumSize(QSize(100, 0));
        spinBox_actual_b->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(spinBox_actual_b);


        gridLayout_2->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_14->addWidget(label_15);

        spinBox_fin_b = new QSpinBox(groupBox_4);
        spinBox_fin_b->setObjectName(QString::fromUtf8("spinBox_fin_b"));
        spinBox_fin_b->setMinimumSize(QSize(100, 0));
        spinBox_fin_b->setMaximumSize(QSize(100, 16777215));
        spinBox_fin_b->setMaximum(1000000);

        horizontalLayout_14->addWidget(spinBox_fin_b);


        gridLayout_2->addLayout(horizontalLayout_14, 1, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_general);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_general);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_general)
    {
        ui_opciones_general->setWindowTitle(QApplication::translate("ui_opciones_general", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ui_opciones_general", "I.G.V", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_general", "Valor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_general", "%", 0, QApplication::UnicodeUTF8));
        pushButton_guardar_igv->setText(QString());
        groupBox_2->setTitle(QApplication::translate("ui_opciones_general", "Cambio de Moneda", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_opciones_general", "Soles - Dolares", 0, QApplication::UnicodeUTF8));
        pushButton_guardar_SD->setText(QString());
        label_5->setText(QApplication::translate("ui_opciones_general", "Dolares- Soles", 0, QApplication::UnicodeUTF8));
        pushButton_guardar_DS->setText(QString());
        groupBox_3->setTitle(QApplication::translate("ui_opciones_general", "Factura Actual", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_opciones_general", "Serie", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Actual", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("ui_opciones_general", "Boleta Actual", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_opciones_general", "Serie", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Actual", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ui_opciones_general", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_general", "Sistema", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_general: public Ui_ui_opciones_general {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_GENERAL_H
