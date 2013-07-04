/********************************************************************************
** Form generated from reading UI file 'ui_login.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_LOGIN_H
#define UI_UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_login
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_usuario;
    QLineEdit *lineEdit_usuario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_contrasenia;
    QLineEdit *lineEdit_contrasenia;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_aceptar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_login)
    {
        if (ui_login->objectName().isEmpty())
            ui_login->setObjectName(QString::fromUtf8("ui_login"));
        ui_login->resize(270, 117);
        ui_login->setMinimumSize(QSize(270, 117));
        ui_login->setMaximumSize(QSize(270, 117));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        ui_login->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_login->setWindowIcon(icon);
        gridLayout = new QGridLayout(ui_login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_usuario = new QLabel(ui_login);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        label_usuario->setMinimumSize(QSize(80, 0));
        label_usuario->setMaximumSize(QSize(80, 16777215));
        label_usuario->setFont(font);
        label_usuario->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_usuario);

        lineEdit_usuario = new QLineEdit(ui_login);
        lineEdit_usuario->setObjectName(QString::fromUtf8("lineEdit_usuario"));
        lineEdit_usuario->setMinimumSize(QSize(150, 0));
        lineEdit_usuario->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(lineEdit_usuario);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_contrasenia = new QLabel(ui_login);
        label_contrasenia->setObjectName(QString::fromUtf8("label_contrasenia"));
        label_contrasenia->setMinimumSize(QSize(80, 0));
        label_contrasenia->setMaximumSize(QSize(80, 16777215));
        label_contrasenia->setFont(font);
        label_contrasenia->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_contrasenia);

        lineEdit_contrasenia = new QLineEdit(ui_login);
        lineEdit_contrasenia->setObjectName(QString::fromUtf8("lineEdit_contrasenia"));
        lineEdit_contrasenia->setMinimumSize(QSize(150, 0));
        lineEdit_contrasenia->setMaximumSize(QSize(150, 16777215));
        lineEdit_contrasenia->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_contrasenia);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_aceptar = new QPushButton(ui_login);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));
        pushButton_aceptar->setFont(font);
        pushButton_aceptar->setCheckable(false);
        pushButton_aceptar->setAutoDefault(true);
        pushButton_aceptar->setDefault(true);
        pushButton_aceptar->setFlat(false);

        horizontalLayout->addWidget(pushButton_aceptar);

        pushButton_cancelar = new QPushButton(ui_login);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));
        pushButton_cancelar->setFont(font);
        pushButton_cancelar->setFlat(false);

        horizontalLayout->addWidget(pushButton_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(ui_login);

        QMetaObject::connectSlotsByName(ui_login);
    } // setupUi

    void retranslateUi(QWidget *ui_login)
    {
        ui_login->setWindowTitle(QApplication::translate("ui_login", "Inicial Sesion", 0, QApplication::UnicodeUTF8));
        label_usuario->setText(QApplication::translate("ui_login", "Usuario", 0, QApplication::UnicodeUTF8));
        label_contrasenia->setText(QApplication::translate("ui_login", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar->setText(QApplication::translate("ui_login", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_login", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_login: public Ui_ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_LOGIN_H
