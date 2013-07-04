/********************************************************************************
** Form generated from reading UI file 'ui_edit_personalinformation.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_PERSONALINFORMATION_H
#define UI_UI_EDIT_PERSONALINFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_personalInformation
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_20;
    QLineEdit *lineEdit_dni;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QLineEdit *lineEdit_nombres;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLineEdit *lineEdit_apPaterno;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_25;
    QLineEdit *lineEdit_apMaterno;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_24;
    QDateEdit *dateEdit_nacimiento;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_27;
    QComboBox *comboBox_genero;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QComboBox *comboBox_estCivil;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QLineEdit *lineEdit_celular;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLineEdit *lineEdit_telefonoFijo;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_23;
    QLineEdit *lineEdit_direccion;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_nick1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_pass1;
    QPushButton *pushButton_change;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ui_edit_personalInformation)
    {
        if (ui_edit_personalInformation->objectName().isEmpty())
            ui_edit_personalInformation->setObjectName(QString::fromUtf8("ui_edit_personalInformation"));
        ui_edit_personalInformation->resize(315, 492);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        ui_edit_personalInformation->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_edit_personalInformation->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ui_edit_personalInformation);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(ui_edit_personalInformation);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox_2->setFont(font1);
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(110, 0));
        label_20->setMaximumSize(QSize(111005, 16777215));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_20);

        lineEdit_dni = new QLineEdit(layoutWidget);
        lineEdit_dni->setObjectName(QString::fromUtf8("lineEdit_dni"));
        lineEdit_dni->setMinimumSize(QSize(150, 0));
        lineEdit_dni->setMaximumSize(QSize(150, 16777215));
        lineEdit_dni->setMaxLength(8);

        horizontalLayout_3->addWidget(lineEdit_dni);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(110, 0));
        label_22->setMaximumSize(QSize(111005, 16777215));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_22);

        lineEdit_nombres = new QLineEdit(layoutWidget1);
        lineEdit_nombres->setObjectName(QString::fromUtf8("lineEdit_nombres"));
        lineEdit_nombres->setMinimumSize(QSize(150, 0));
        lineEdit_nombres->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lineEdit_nombres);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(15);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(110, 0));
        label_18->setMaximumSize(QSize(111005, 16777215));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_18);

        lineEdit_apPaterno = new QLineEdit(layoutWidget2);
        lineEdit_apPaterno->setObjectName(QString::fromUtf8("lineEdit_apPaterno"));
        lineEdit_apPaterno->setMinimumSize(QSize(150, 0));
        lineEdit_apPaterno->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(lineEdit_apPaterno);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(110, 0));
        label_25->setMaximumSize(QSize(111005, 16777215));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_25);

        lineEdit_apMaterno = new QLineEdit(layoutWidget3);
        lineEdit_apMaterno->setObjectName(QString::fromUtf8("lineEdit_apMaterno"));
        lineEdit_apMaterno->setMinimumSize(QSize(150, 0));
        lineEdit_apMaterno->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(lineEdit_apMaterno);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setSpacing(15);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(110, 0));
        label_24->setMaximumSize(QSize(111005, 16777215));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_24);

        dateEdit_nacimiento = new QDateEdit(layoutWidget4);
        dateEdit_nacimiento->setObjectName(QString::fromUtf8("dateEdit_nacimiento"));
        dateEdit_nacimiento->setMinimumSize(QSize(150, 0));
        dateEdit_nacimiento->setMaximumSize(QSize(150, 16777215));
        dateEdit_nacimiento->setCalendarPopup(true);

        horizontalLayout_7->addWidget(dateEdit_nacimiento);

        splitter->addWidget(layoutWidget4);
        layoutWidget5 = new QWidget(splitter);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setSpacing(15);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(110, 0));
        label_27->setMaximumSize(QSize(111005, 16777215));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_27);

        comboBox_genero = new QComboBox(layoutWidget5);
        comboBox_genero->setObjectName(QString::fromUtf8("comboBox_genero"));
        comboBox_genero->setMinimumSize(QSize(150, 0));
        comboBox_genero->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_8->addWidget(comboBox_genero);

        splitter->addWidget(layoutWidget5);
        layoutWidget6 = new QWidget(splitter);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setSpacing(15);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(110, 0));
        label_21->setMaximumSize(QSize(111005, 16777215));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_21);

        comboBox_estCivil = new QComboBox(layoutWidget6);
        comboBox_estCivil->setObjectName(QString::fromUtf8("comboBox_estCivil"));
        comboBox_estCivil->setMinimumSize(QSize(150, 0));
        comboBox_estCivil->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(comboBox_estCivil);

        splitter->addWidget(layoutWidget6);
        layoutWidget7 = new QWidget(splitter);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setSpacing(15);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(110, 0));
        label_15->setMaximumSize(QSize(111005, 16777215));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_15);

        lineEdit_celular = new QLineEdit(layoutWidget7);
        lineEdit_celular->setObjectName(QString::fromUtf8("lineEdit_celular"));
        lineEdit_celular->setMinimumSize(QSize(150, 0));
        lineEdit_celular->setMaximumSize(QSize(150, 16777215));
        lineEdit_celular->setMaxLength(11);

        horizontalLayout_10->addWidget(lineEdit_celular);

        splitter->addWidget(layoutWidget7);
        layoutWidget8 = new QWidget(splitter);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_11->setSpacing(15);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget8);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(110, 0));
        label_14->setMaximumSize(QSize(111005, 16777215));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_14);

        lineEdit_telefonoFijo = new QLineEdit(layoutWidget8);
        lineEdit_telefonoFijo->setObjectName(QString::fromUtf8("lineEdit_telefonoFijo"));
        lineEdit_telefonoFijo->setMinimumSize(QSize(150, 0));
        lineEdit_telefonoFijo->setMaximumSize(QSize(150, 16777215));
        lineEdit_telefonoFijo->setMaxLength(9);

        horizontalLayout_11->addWidget(lineEdit_telefonoFijo);

        splitter->addWidget(layoutWidget8);
        layoutWidget9 = new QWidget(splitter);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_12->setSpacing(15);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(110, 0));
        label_23->setMaximumSize(QSize(111005, 16777215));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_23);

        lineEdit_direccion = new QLineEdit(layoutWidget9);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(150, 0));
        lineEdit_direccion->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_12->addWidget(lineEdit_direccion);

        splitter->addWidget(layoutWidget9);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(ui_edit_personalInformation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(110, 0));
        label_6->setMaximumSize(QSize(111005, 16777215));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_6);

        lineEdit_nick1 = new QLineEdit(groupBox);
        lineEdit_nick1->setObjectName(QString::fromUtf8("lineEdit_nick1"));
        lineEdit_nick1->setMinimumSize(QSize(150, 0));
        lineEdit_nick1->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(lineEdit_nick1);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(110, 0));
        label_8->setMaximumSize(QSize(111005, 16777215));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_8);

        lineEdit_pass1 = new QLineEdit(groupBox);
        lineEdit_pass1->setObjectName(QString::fromUtf8("lineEdit_pass1"));
        lineEdit_pass1->setMinimumSize(QSize(150, 0));
        lineEdit_pass1->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(lineEdit_pass1);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        pushButton_change = new QPushButton(groupBox);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/playback_reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_change->setIcon(icon1);
        pushButton_change->setFlat(true);

        gridLayout->addWidget(pushButton_change, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton_change->raise();

        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        pushButton_save = new QPushButton(ui_edit_personalInformation);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setIconSize(QSize(23, 23));
        pushButton_save->setDefault(false);
        pushButton_save->setFlat(false);

        horizontalLayout_13->addWidget(pushButton_save);

        pushButton_cancel = new QPushButton(ui_edit_personalInformation);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setIconSize(QSize(23, 23));
        pushButton_cancel->setFlat(false);

        horizontalLayout_13->addWidget(pushButton_cancel);


        gridLayout_3->addLayout(horizontalLayout_13, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_dni, lineEdit_nombres);
        QWidget::setTabOrder(lineEdit_nombres, lineEdit_apPaterno);
        QWidget::setTabOrder(lineEdit_apPaterno, lineEdit_apMaterno);
        QWidget::setTabOrder(lineEdit_apMaterno, dateEdit_nacimiento);
        QWidget::setTabOrder(dateEdit_nacimiento, comboBox_genero);
        QWidget::setTabOrder(comboBox_genero, comboBox_estCivil);
        QWidget::setTabOrder(comboBox_estCivil, lineEdit_celular);
        QWidget::setTabOrder(lineEdit_celular, lineEdit_telefonoFijo);
        QWidget::setTabOrder(lineEdit_telefonoFijo, lineEdit_direccion);
        QWidget::setTabOrder(lineEdit_direccion, lineEdit_nick1);
        QWidget::setTabOrder(lineEdit_nick1, lineEdit_pass1);
        QWidget::setTabOrder(lineEdit_pass1, pushButton_change);
        QWidget::setTabOrder(pushButton_change, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_cancel);

        retranslateUi(ui_edit_personalInformation);

        QMetaObject::connectSlotsByName(ui_edit_personalInformation);
    } // setupUi

    void retranslateUi(QDialog *ui_edit_personalInformation)
    {
        ui_edit_personalInformation->setWindowTitle(QApplication::translate("ui_edit_personalInformation", "Informaci\303\263n Personal", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ui_edit_personalInformation", "Datos personales", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_edit_personalInformation", "DNI", 0, QApplication::UnicodeUTF8));
        lineEdit_dni->setInputMask(QString());
        lineEdit_dni->setText(QString());
        label_22->setText(QApplication::translate("ui_edit_personalInformation", "Nombres", 0, QApplication::UnicodeUTF8));
        lineEdit_nombres->setText(QString());
        label_18->setText(QApplication::translate("ui_edit_personalInformation", "Apellido Paterno", 0, QApplication::UnicodeUTF8));
        lineEdit_apPaterno->setText(QString());
        label_25->setText(QApplication::translate("ui_edit_personalInformation", "Apellido Materno", 0, QApplication::UnicodeUTF8));
        lineEdit_apMaterno->setText(QString());
        label_24->setText(QApplication::translate("ui_edit_personalInformation", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_edit_personalInformation", "G\303\251nero", 0, QApplication::UnicodeUTF8));
        comboBox_genero->clear();
        comboBox_genero->insertItems(0, QStringList()
         << QApplication::translate("ui_edit_personalInformation", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("ui_edit_personalInformation", "Estado Civil", 0, QApplication::UnicodeUTF8));
        comboBox_estCivil->clear();
        comboBox_estCivil->insertItems(0, QStringList()
         << QApplication::translate("ui_edit_personalInformation", "Soltero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Casado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Viudo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Divorciado", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("ui_edit_personalInformation", "Celular", 0, QApplication::UnicodeUTF8));
        lineEdit_celular->setInputMask(QString());
        lineEdit_celular->setText(QString());
        label_14->setText(QApplication::translate("ui_edit_personalInformation", "Tel\303\251fono Fijo", 0, QApplication::UnicodeUTF8));
        lineEdit_telefonoFijo->setInputMask(QString());
        lineEdit_telefonoFijo->setText(QString());
        label_23->setText(QApplication::translate("ui_edit_personalInformation", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        lineEdit_direccion->setText(QString());
        groupBox->setTitle(QApplication::translate("ui_edit_personalInformation", "Datos de acceso", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_edit_personalInformation", "Nick", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_edit_personalInformation", "Password", 0, QApplication::UnicodeUTF8));
        pushButton_change->setText(QApplication::translate("ui_edit_personalInformation", "Cambiar password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("ui_edit_personalInformation", "Guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QApplication::translate("ui_edit_personalInformation", "Aplicar", 0, QApplication::UnicodeUTF8));
        pushButton_save->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_cancel->setToolTip(QApplication::translate("ui_edit_personalInformation", "Cancelar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_cancel->setText(QApplication::translate("ui_edit_personalInformation", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_personalInformation: public Ui_ui_edit_personalInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_PERSONALINFORMATION_H
