/********************************************************************************
** Form generated from reading UI file 'ui_opciones_base_datos.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_BASE_DATOS_H
#define UI_UI_OPCIONES_BASE_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_base_datos
{
public:
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_address;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_host;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_puerto;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_user;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_usuario;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_clave;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_db;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_nombre_db;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_guardar;

    void setupUi(QTabWidget *ui_opciones_base_datos)
    {
        if (ui_opciones_base_datos->objectName().isEmpty())
            ui_opciones_base_datos->setObjectName(QString::fromUtf8("ui_opciones_base_datos"));
        ui_opciones_base_datos->resize(571, 408);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_opciones_base_datos->sizePolicy().hasHeightForWidth());
        ui_opciones_base_datos->setSizePolicy(sizePolicy);
        ui_opciones_base_datos->setMinimumSize(QSize(571, 408));
        ui_opciones_base_datos->setMaximumSize(QSize(571, 408));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/RegEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_opciones_base_datos->setWindowIcon(icon);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_address = new QGroupBox(tab);
        groupBox_address->setObjectName(QString::fromUtf8("groupBox_address"));
        gridLayout = new QGridLayout(groupBox_address);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_address);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_host = new QLineEdit(groupBox_address);
        lineEdit_host->setObjectName(QString::fromUtf8("lineEdit_host"));
        sizePolicy.setHeightForWidth(lineEdit_host->sizePolicy().hasHeightForWidth());
        lineEdit_host->setSizePolicy(sizePolicy);
        lineEdit_host->setMinimumSize(QSize(200, 0));
        lineEdit_host->setMaximumSize(QSize(200, 16777215));
        lineEdit_host->setLayoutDirection(Qt::LeftToRight);
        lineEdit_host->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_host);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_address);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_puerto = new QLineEdit(groupBox_address);
        lineEdit_puerto->setObjectName(QString::fromUtf8("lineEdit_puerto"));
        sizePolicy.setHeightForWidth(lineEdit_puerto->sizePolicy().hasHeightForWidth());
        lineEdit_puerto->setSizePolicy(sizePolicy);
        lineEdit_puerto->setMinimumSize(QSize(200, 0));
        lineEdit_puerto->setMaximumSize(QSize(200, 16777215));
        lineEdit_puerto->setMaxLength(10);

        horizontalLayout_2->addWidget(lineEdit_puerto);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(208, 71, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 2, 1);


        gridLayout_4->addWidget(groupBox_address, 0, 0, 1, 2);

        groupBox_user = new QGroupBox(tab);
        groupBox_user->setObjectName(QString::fromUtf8("groupBox_user"));
        gridLayout_2 = new QGridLayout(groupBox_user);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_user);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_usuario = new QLineEdit(groupBox_user);
        lineEdit_usuario->setObjectName(QString::fromUtf8("lineEdit_usuario"));
        sizePolicy.setHeightForWidth(lineEdit_usuario->sizePolicy().hasHeightForWidth());
        lineEdit_usuario->setSizePolicy(sizePolicy);
        lineEdit_usuario->setMinimumSize(QSize(200, 0));
        lineEdit_usuario->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(lineEdit_usuario);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_user);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_clave = new QLineEdit(groupBox_user);
        lineEdit_clave->setObjectName(QString::fromUtf8("lineEdit_clave"));
        sizePolicy.setHeightForWidth(lineEdit_clave->sizePolicy().hasHeightForWidth());
        lineEdit_clave->setSizePolicy(sizePolicy);
        lineEdit_clave->setMinimumSize(QSize(200, 0));
        lineEdit_clave->setMaximumSize(QSize(200, 16777215));
        lineEdit_clave->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_clave);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 2, 1);


        gridLayout_4->addWidget(groupBox_user, 1, 0, 1, 2);

        groupBox_db = new QGroupBox(tab);
        groupBox_db->setObjectName(QString::fromUtf8("groupBox_db"));
        gridLayout_3 = new QGridLayout(groupBox_db);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_db);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_nombre_db = new QLineEdit(groupBox_db);
        lineEdit_nombre_db->setObjectName(QString::fromUtf8("lineEdit_nombre_db"));
        sizePolicy.setHeightForWidth(lineEdit_nombre_db->sizePolicy().hasHeightForWidth());
        lineEdit_nombre_db->setSizePolicy(sizePolicy);
        lineEdit_nombre_db->setMinimumSize(QSize(200, 0));
        lineEdit_nombre_db->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(lineEdit_nombre_db);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_db, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 3, 0, 1, 1);

        pushButton_guardar = new QPushButton(tab);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));

        gridLayout_4->addWidget(pushButton_guardar, 3, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        ui_opciones_base_datos->addTab(tab, QString());
        QWidget::setTabOrder(lineEdit_host, lineEdit_puerto);
        QWidget::setTabOrder(lineEdit_puerto, lineEdit_usuario);
        QWidget::setTabOrder(lineEdit_usuario, lineEdit_clave);
        QWidget::setTabOrder(lineEdit_clave, lineEdit_nombre_db);
        QWidget::setTabOrder(lineEdit_nombre_db, pushButton_guardar);

        retranslateUi(ui_opciones_base_datos);

        ui_opciones_base_datos->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_base_datos);
    } // setupUi

    void retranslateUi(QTabWidget *ui_opciones_base_datos)
    {
        ui_opciones_base_datos->setWindowTitle(QApplication::translate("ui_opciones_base_datos", "Base de Datos", 0, QApplication::UnicodeUTF8));
        groupBox_address->setTitle(QApplication::translate("ui_opciones_base_datos", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_base_datos", "Host", 0, QApplication::UnicodeUTF8));
        lineEdit_host->setInputMask(QString());
        label_2->setText(QApplication::translate("ui_opciones_base_datos", "Puerto", 0, QApplication::UnicodeUTF8));
        groupBox_user->setTitle(QApplication::translate("ui_opciones_base_datos", "Usuario", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_opciones_base_datos", "Nombre", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_opciones_base_datos", "Clave", 0, QApplication::UnicodeUTF8));
        groupBox_db->setTitle(QApplication::translate("ui_opciones_base_datos", "Base de Datos", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_opciones_base_datos", "Nombre", 0, QApplication::UnicodeUTF8));
        lineEdit_nombre_db->setText(QString());
        pushButton_guardar->setText(QApplication::translate("ui_opciones_base_datos", "Guardar", 0, QApplication::UnicodeUTF8));
        ui_opciones_base_datos->setTabText(ui_opciones_base_datos->indexOf(tab), QApplication::translate("ui_opciones_base_datos", "Configuraci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_base_datos: public Ui_ui_opciones_base_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_BASE_DATOS_H
