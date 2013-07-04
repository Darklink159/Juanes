/********************************************************************************
** Form generated from reading UI file 'ui_new_marca.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_MARCA_H
#define UI_UI_NEW_MARCA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_marca
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_descripcion;
    QPushButton *pushButton_new_marca;

    void setupUi(QWidget *ui_new_marca)
    {
        if (ui_new_marca->objectName().isEmpty())
            ui_new_marca->setObjectName(QString::fromUtf8("ui_new_marca"));
        ui_new_marca->setWindowModality(Qt::ApplicationModal);
        ui_new_marca->resize(240, 30);
        ui_new_marca->setMinimumSize(QSize(240, 30));
        ui_new_marca->setMaximumSize(QSize(240, 30));
        ui_new_marca->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_marca->setWindowIcon(icon);
        gridLayout = new QGridLayout(ui_new_marca);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_descripcion = new QLineEdit(ui_new_marca);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(200, 0));
        lineEdit_descripcion->setMaximumSize(QSize(200, 16777215));
        lineEdit_descripcion->setFrame(true);
        lineEdit_descripcion->setDragEnabled(false);
        lineEdit_descripcion->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_descripcion);

        pushButton_new_marca = new QPushButton(ui_new_marca);
        pushButton_new_marca->setObjectName(QString::fromUtf8("pushButton_new_marca"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new_marca->setIcon(icon1);
        pushButton_new_marca->setIconSize(QSize(20, 20));
        pushButton_new_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_new_marca);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(ui_new_marca);

        QMetaObject::connectSlotsByName(ui_new_marca);
    } // setupUi

    void retranslateUi(QWidget *ui_new_marca)
    {
        ui_new_marca->setWindowTitle(QApplication::translate("ui_new_marca", "Nueva Marca", 0, QApplication::UnicodeUTF8));
        pushButton_new_marca->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_new_marca: public Ui_ui_new_marca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_MARCA_H
