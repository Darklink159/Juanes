/********************************************************************************
** Form generated from reading UI file 'ui_newedit_colaborador.ui'
**
** Created: Sat 29. Jun 16:09:24 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEWEDIT_COLABORADOR_H
#define UI_UI_NEWEDIT_COLABORADOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_newedit_colaborador
{
public:
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *lineEdit_telefonoFijo;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QLineEdit *lineEdit_celular;
    QWidget *layoutWidget_21;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QLineEdit *lineEdit_email;
    QWidget *layoutWidget_23;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_21;
    QComboBox *comboBox_estCivil;
    QWidget *layoutWidget_25;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_23;
    QLineEdit *lineEdit_direccion;
    QWidget *layoutWidget_26;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_24;
    QDateEdit *dateEdit_nacimiento;
    QWidget *layoutWidget_28;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_26;
    QComboBox *comboBox_tienda;
    QWidget *layoutWidget_29;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_27;
    QComboBox *comboBox_genero;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_25;
    QLineEdit *lineEdit_apMaterno;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_apMatEsCorrecto;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_18;
    QLineEdit *lineEdit_apPaterno;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_apPatEsCorrecto;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_22;
    QLineEdit *lineEdit_nombres;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_nombreEsCorrecto;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_20;
    QLineEdit *lineEdit_dni;
    QSpacerItem *horizontalSpacer;
    QLabel *label_DNIesCorrecto;
    QWidget *page_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QFrame *line_2;
    QWidget *layoutWidget_30;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_28;
    QComboBox *comboBox_tipoUsuario;
    QWidget *layoutWidget_31;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_nick;
    QLineEdit *lineEdit_nick;
    QWidget *layoutWidget_32;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_pass;
    QLineEdit *lineEdit_pass;
    QWidget *layoutWidget_33;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_29;
    QComboBox *comboBox_habilitado;
    QWidget *layoutWidget_34;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_30;
    QTextEdit *textEdit_comentario;
    QPushButton *pushButton_generateAccess;

    void setupUi(QDialog *ui_newedit_colaborador)
    {
        if (ui_newedit_colaborador->objectName().isEmpty())
            ui_newedit_colaborador->setObjectName(QString::fromUtf8("ui_newedit_colaborador"));
        ui_newedit_colaborador->resize(489, 450);
        ui_newedit_colaborador->setMinimumSize(QSize(489, 450));
        ui_newedit_colaborador->setMaximumSize(QSize(489, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_newedit_colaborador->setWindowIcon(icon);
        toolBox = new QToolBox(ui_newedit_colaborador);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 461, 431));
        toolBox->setFrameShadow(QFrame::Plain);
        toolBox->setLineWidth(1);
        toolBox->setMidLineWidth(0);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 461, 371));
        layoutWidget_18 = new QWidget(page);
        layoutWidget_18->setObjectName(QString::fromUtf8("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(10, 310, 254, 33));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_18);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_18);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(113, 0));

        horizontalLayout_17->addWidget(label_14);

        lineEdit_telefonoFijo = new QLineEdit(layoutWidget_18);
        lineEdit_telefonoFijo->setObjectName(QString::fromUtf8("lineEdit_telefonoFijo"));
        lineEdit_telefonoFijo->setMaxLength(9);

        horizontalLayout_17->addWidget(lineEdit_telefonoFijo);

        layoutWidget_19 = new QWidget(page);
        layoutWidget_19->setObjectName(QString::fromUtf8("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(10, 280, 254, 33));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_19);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(113, 0));

        horizontalLayout_18->addWidget(label_15);

        lineEdit_celular = new QLineEdit(layoutWidget_19);
        lineEdit_celular->setObjectName(QString::fromUtf8("lineEdit_celular"));
        lineEdit_celular->setMaxLength(11);

        horizontalLayout_18->addWidget(lineEdit_celular);

        layoutWidget_21 = new QWidget(page);
        layoutWidget_21->setObjectName(QString::fromUtf8("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(10, 340, 441, 33));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_21);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_21);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(113, 0));

        horizontalLayout_20->addWidget(label_19);

        lineEdit_email = new QLineEdit(layoutWidget_21);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        horizontalLayout_20->addWidget(lineEdit_email);

        layoutWidget_23 = new QWidget(page);
        layoutWidget_23->setObjectName(QString::fromUtf8("layoutWidget_23"));
        layoutWidget_23->setGeometry(QRect(10, 250, 241, 33));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_23);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_23);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(113, 0));

        horizontalLayout_22->addWidget(label_21);

        comboBox_estCivil = new QComboBox(layoutWidget_23);
        comboBox_estCivil->setObjectName(QString::fromUtf8("comboBox_estCivil"));
        comboBox_estCivil->setMinimumSize(QSize(120, 0));

        horizontalLayout_22->addWidget(comboBox_estCivil);

        layoutWidget_25 = new QWidget(page);
        layoutWidget_25->setObjectName(QString::fromUtf8("layoutWidget_25"));
        layoutWidget_25->setGeometry(QRect(10, 160, 411, 33));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_25);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_25);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(113, 0));

        horizontalLayout_24->addWidget(label_23);

        lineEdit_direccion = new QLineEdit(layoutWidget_25);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        horizontalLayout_24->addWidget(lineEdit_direccion);

        layoutWidget_26 = new QWidget(page);
        layoutWidget_26->setObjectName(QString::fromUtf8("layoutWidget_26"));
        layoutWidget_26->setGeometry(QRect(10, 190, 272, 33));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget_26);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_26);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(113, 0));

        horizontalLayout_25->addWidget(label_24);

        dateEdit_nacimiento = new QDateEdit(layoutWidget_26);
        dateEdit_nacimiento->setObjectName(QString::fromUtf8("dateEdit_nacimiento"));

        horizontalLayout_25->addWidget(dateEdit_nacimiento);

        layoutWidget_28 = new QWidget(page);
        layoutWidget_28->setObjectName(QString::fromUtf8("layoutWidget_28"));
        layoutWidget_28->setGeometry(QRect(10, 10, 311, 33));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget_28);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_28);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(113, 0));
        label_26->setMaximumSize(QSize(113, 16777215));

        horizontalLayout_27->addWidget(label_26);

        comboBox_tienda = new QComboBox(layoutWidget_28);
        comboBox_tienda->setObjectName(QString::fromUtf8("comboBox_tienda"));

        horizontalLayout_27->addWidget(comboBox_tienda);

        layoutWidget_29 = new QWidget(page);
        layoutWidget_29->setObjectName(QString::fromUtf8("layoutWidget_29"));
        layoutWidget_29->setGeometry(QRect(10, 220, 241, 33));
        horizontalLayout_28 = new QHBoxLayout(layoutWidget_29);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_29);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(113, 0));

        horizontalLayout_28->addWidget(label_27);

        comboBox_genero = new QComboBox(layoutWidget_29);
        comboBox_genero->setObjectName(QString::fromUtf8("comboBox_genero"));
        comboBox_genero->setMinimumSize(QSize(120, 0));

        horizontalLayout_28->addWidget(comboBox_genero);

        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 130, 441, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(113, 0));

        horizontalLayout_26->addWidget(label_25);

        lineEdit_apMaterno = new QLineEdit(layoutWidget);
        lineEdit_apMaterno->setObjectName(QString::fromUtf8("lineEdit_apMaterno"));

        horizontalLayout_26->addWidget(lineEdit_apMaterno);


        horizontalLayout->addLayout(horizontalLayout_26);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_apMatEsCorrecto = new QLabel(layoutWidget);
        label_apMatEsCorrecto->setObjectName(QString::fromUtf8("label_apMatEsCorrecto"));

        horizontalLayout->addWidget(label_apMatEsCorrecto);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 100, 441, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(113, 0));

        horizontalLayout_19->addWidget(label_18);

        lineEdit_apPaterno = new QLineEdit(layoutWidget1);
        lineEdit_apPaterno->setObjectName(QString::fromUtf8("lineEdit_apPaterno"));

        horizontalLayout_19->addWidget(lineEdit_apPaterno);


        horizontalLayout_2->addLayout(horizontalLayout_19);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_apPatEsCorrecto = new QLabel(layoutWidget1);
        label_apPatEsCorrecto->setObjectName(QString::fromUtf8("label_apPatEsCorrecto"));

        horizontalLayout_2->addWidget(label_apPatEsCorrecto);

        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 441, 35));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(113, 0));

        horizontalLayout_23->addWidget(label_22);

        lineEdit_nombres = new QLineEdit(layoutWidget2);
        lineEdit_nombres->setObjectName(QString::fromUtf8("lineEdit_nombres"));

        horizontalLayout_23->addWidget(lineEdit_nombres);


        horizontalLayout_3->addLayout(horizontalLayout_23);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_nombreEsCorrecto = new QLabel(layoutWidget2);
        label_nombreEsCorrecto->setObjectName(QString::fromUtf8("label_nombreEsCorrecto"));

        horizontalLayout_3->addWidget(label_nombreEsCorrecto);

        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 40, 441, 35));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_20 = new QLabel(layoutWidget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(113, 0));

        horizontalLayout_21->addWidget(label_20);

        lineEdit_dni = new QLineEdit(layoutWidget3);
        lineEdit_dni->setObjectName(QString::fromUtf8("lineEdit_dni"));
        lineEdit_dni->setMinimumSize(QSize(100, 0));
        lineEdit_dni->setMaxLength(8);

        horizontalLayout_21->addWidget(lineEdit_dni);


        horizontalLayout_4->addLayout(horizontalLayout_21);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_DNIesCorrecto = new QLabel(layoutWidget3);
        label_DNIesCorrecto->setObjectName(QString::fromUtf8("label_DNIesCorrecto"));
        label_DNIesCorrecto->setCursor(QCursor(Qt::ArrowCursor));
        label_DNIesCorrecto->setMidLineWidth(0);

        horizontalLayout_4->addWidget(label_DNIesCorrecto);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Contacts_Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon1, QString::fromUtf8("Informaci\303\263n Personal"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 461, 371));
        pushButton_save = new QPushButton(page_2);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(360, 330, 26, 26));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save->setIcon(icon2);
        pushButton_save->setIconSize(QSize(23, 23));
        pushButton_save->setDefault(false);
        pushButton_save->setFlat(true);
        pushButton_cancel = new QPushButton(page_2);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(410, 330, 26, 26));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon3);
        pushButton_cancel->setIconSize(QSize(23, 23));
        pushButton_cancel->setFlat(true);
        line_2 = new QFrame(page_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 170, 441, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget_30 = new QWidget(page_2);
        layoutWidget_30->setObjectName(QString::fromUtf8("layoutWidget_30"));
        layoutWidget_30->setGeometry(QRect(10, 30, 240, 22));
        horizontalLayout_29 = new QHBoxLayout(layoutWidget_30);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_30);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(111, 0));

        horizontalLayout_29->addWidget(label_28);

        comboBox_tipoUsuario = new QComboBox(layoutWidget_30);
        comboBox_tipoUsuario->setObjectName(QString::fromUtf8("comboBox_tipoUsuario"));
        comboBox_tipoUsuario->setMinimumSize(QSize(121, 0));

        horizontalLayout_29->addWidget(comboBox_tipoUsuario);

        layoutWidget_31 = new QWidget(page_2);
        layoutWidget_31->setObjectName(QString::fromUtf8("layoutWidget_31"));
        layoutWidget_31->setGeometry(QRect(10, 60, 252, 22));
        horizontalLayout_30 = new QHBoxLayout(layoutWidget_31);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        label_nick = new QLabel(layoutWidget_31);
        label_nick->setObjectName(QString::fromUtf8("label_nick"));
        label_nick->setMinimumSize(QSize(111, 0));

        horizontalLayout_30->addWidget(label_nick);

        lineEdit_nick = new QLineEdit(layoutWidget_31);
        lineEdit_nick->setObjectName(QString::fromUtf8("lineEdit_nick"));
        lineEdit_nick->setEnabled(false);

        horizontalLayout_30->addWidget(lineEdit_nick);

        layoutWidget_32 = new QWidget(page_2);
        layoutWidget_32->setObjectName(QString::fromUtf8("layoutWidget_32"));
        layoutWidget_32->setGeometry(QRect(10, 90, 252, 22));
        horizontalLayout_31 = new QHBoxLayout(layoutWidget_32);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        label_pass = new QLabel(layoutWidget_32);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setMinimumSize(QSize(111, 0));

        horizontalLayout_31->addWidget(label_pass);

        lineEdit_pass = new QLineEdit(layoutWidget_32);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEnabled(false);
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_31->addWidget(lineEdit_pass);

        layoutWidget_33 = new QWidget(page_2);
        layoutWidget_33->setObjectName(QString::fromUtf8("layoutWidget_33"));
        layoutWidget_33->setGeometry(QRect(10, 120, 240, 22));
        horizontalLayout_32 = new QHBoxLayout(layoutWidget_33);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget_33);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(111, 0));

        horizontalLayout_32->addWidget(label_29);

        comboBox_habilitado = new QComboBox(layoutWidget_33);
        comboBox_habilitado->setObjectName(QString::fromUtf8("comboBox_habilitado"));
        comboBox_habilitado->setMinimumSize(QSize(121, 0));

        horizontalLayout_32->addWidget(comboBox_habilitado);

        layoutWidget_34 = new QWidget(page_2);
        layoutWidget_34->setObjectName(QString::fromUtf8("layoutWidget_34"));
        layoutWidget_34->setGeometry(QRect(10, 200, 441, 92));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_34);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_34);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_2->addWidget(label_30);

        textEdit_comentario = new QTextEdit(layoutWidget_34);
        textEdit_comentario->setObjectName(QString::fromUtf8("textEdit_comentario"));

        verticalLayout_2->addWidget(textEdit_comentario);

        pushButton_generateAccess = new QPushButton(page_2);
        pushButton_generateAccess->setObjectName(QString::fromUtf8("pushButton_generateAccess"));
        pushButton_generateAccess->setGeometry(QRect(370, 80, 81, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_generateAccess->setIcon(icon4);
        pushButton_generateAccess->setIconSize(QSize(24, 24));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Mobility_Center.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon5, QString::fromUtf8("Informaci\303\263n laboral"));
        QWidget::setTabOrder(comboBox_tienda, lineEdit_dni);
        QWidget::setTabOrder(lineEdit_dni, lineEdit_nombres);
        QWidget::setTabOrder(lineEdit_nombres, lineEdit_apPaterno);
        QWidget::setTabOrder(lineEdit_apPaterno, lineEdit_apMaterno);
        QWidget::setTabOrder(lineEdit_apMaterno, lineEdit_direccion);
        QWidget::setTabOrder(lineEdit_direccion, dateEdit_nacimiento);
        QWidget::setTabOrder(dateEdit_nacimiento, comboBox_genero);
        QWidget::setTabOrder(comboBox_genero, comboBox_estCivil);
        QWidget::setTabOrder(comboBox_estCivil, lineEdit_celular);
        QWidget::setTabOrder(lineEdit_celular, lineEdit_telefonoFijo);
        QWidget::setTabOrder(lineEdit_telefonoFijo, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, comboBox_tipoUsuario);
        QWidget::setTabOrder(comboBox_tipoUsuario, lineEdit_nick);
        QWidget::setTabOrder(lineEdit_nick, lineEdit_pass);
        QWidget::setTabOrder(lineEdit_pass, pushButton_generateAccess);
        QWidget::setTabOrder(pushButton_generateAccess, comboBox_habilitado);
        QWidget::setTabOrder(comboBox_habilitado, textEdit_comentario);
        QWidget::setTabOrder(textEdit_comentario, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_cancel);

        retranslateUi(ui_newedit_colaborador);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_newedit_colaborador);
    } // setupUi

    void retranslateUi(QDialog *ui_newedit_colaborador)
    {
        ui_newedit_colaborador->setWindowTitle(QApplication::translate("ui_newedit_colaborador", "Dialog", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_newedit_colaborador", "Tel\303\251fono Fijo", 0, QApplication::UnicodeUTF8));
        lineEdit_telefonoFijo->setInputMask(QString());
        lineEdit_telefonoFijo->setText(QString());
        label_15->setText(QApplication::translate("ui_newedit_colaborador", "Celular", 0, QApplication::UnicodeUTF8));
        lineEdit_celular->setInputMask(QString());
        lineEdit_celular->setText(QString());
        label_19->setText(QApplication::translate("ui_newedit_colaborador", "Correo Electr\303\263nico", 0, QApplication::UnicodeUTF8));
        lineEdit_email->setInputMask(QString());
        lineEdit_email->setText(QString());
        label_21->setText(QApplication::translate("ui_newedit_colaborador", "Estado Civil", 0, QApplication::UnicodeUTF8));
        comboBox_estCivil->clear();
        comboBox_estCivil->insertItems(0, QStringList()
         << QApplication::translate("ui_newedit_colaborador", "Soltero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_newedit_colaborador", "Casado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_newedit_colaborador", "Viudo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_newedit_colaborador", "Divorciado", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("ui_newedit_colaborador", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        lineEdit_direccion->setText(QString());
        label_24->setText(QApplication::translate("ui_newedit_colaborador", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ui_newedit_colaborador", "Tienda", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_newedit_colaborador", "G\303\251nero", 0, QApplication::UnicodeUTF8));
        comboBox_genero->clear();
        comboBox_genero->insertItems(0, QStringList()
         << QApplication::translate("ui_newedit_colaborador", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_newedit_colaborador", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_25->setText(QApplication::translate("ui_newedit_colaborador", "Apellido Materno", 0, QApplication::UnicodeUTF8));
        lineEdit_apMaterno->setText(QString());
        label_apMatEsCorrecto->setText(QApplication::translate("ui_newedit_colaborador", "Ingrese este campo", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ui_newedit_colaborador", "Apellido Paterno", 0, QApplication::UnicodeUTF8));
        lineEdit_apPaterno->setText(QString());
        label_apPatEsCorrecto->setText(QApplication::translate("ui_newedit_colaborador", "Ingrese este campo", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_newedit_colaborador", "Nombres", 0, QApplication::UnicodeUTF8));
        lineEdit_nombres->setText(QString());
        label_nombreEsCorrecto->setText(QApplication::translate("ui_newedit_colaborador", "Ingrese este campo", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_newedit_colaborador", "DNI", 0, QApplication::UnicodeUTF8));
        lineEdit_dni->setInputMask(QString());
        lineEdit_dni->setText(QString());
        label_DNIesCorrecto->setText(QApplication::translate("ui_newedit_colaborador", "DNI incorrecto", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ui_newedit_colaborador", "Informaci\303\263n Personal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("ui_newedit_colaborador", "Guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QString());
        pushButton_save->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_cancel->setToolTip(QApplication::translate("ui_newedit_colaborador", "Cancelar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_cancel->setText(QString());
        label_28->setText(QApplication::translate("ui_newedit_colaborador", "Tipo de Usuario", 0, QApplication::UnicodeUTF8));
        label_nick->setText(QApplication::translate("ui_newedit_colaborador", "Nick de acceso", 0, QApplication::UnicodeUTF8));
        label_pass->setText(QApplication::translate("ui_newedit_colaborador", "Password de acceso", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_newedit_colaborador", "Habilitado", 0, QApplication::UnicodeUTF8));
        comboBox_habilitado->clear();
        comboBox_habilitado->insertItems(0, QStringList()
         << QApplication::translate("ui_newedit_colaborador", "Si", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_newedit_colaborador", "No", 0, QApplication::UnicodeUTF8)
        );
        label_30->setText(QApplication::translate("ui_newedit_colaborador", "Comentario Personal", 0, QApplication::UnicodeUTF8));
        pushButton_generateAccess->setText(QApplication::translate("ui_newedit_colaborador", "Generar", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ui_newedit_colaborador", "Informaci\303\263n laboral", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_newedit_colaborador: public Ui_ui_newedit_colaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEWEDIT_COLABORADOR_H
