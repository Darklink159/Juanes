/********************************************************************************
** Form generated from reading UI file 'ui_new_medida.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_MEDIDA_H
#define UI_UI_NEW_MEDIDA_H

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

class Ui_ui_new_medida
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_descripcion;
    QPushButton *pushButton_new_medida;

    void setupUi(QWidget *ui_new_medida)
    {
        if (ui_new_medida->objectName().isEmpty())
            ui_new_medida->setObjectName(QString::fromUtf8("ui_new_medida"));
        ui_new_medida->setWindowModality(Qt::ApplicationModal);
        ui_new_medida->resize(240, 30);
        ui_new_medida->setMinimumSize(QSize(240, 30));
        ui_new_medida->setMaximumSize(QSize(240, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_medida->setWindowIcon(icon);
        gridLayout = new QGridLayout(ui_new_medida);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_descripcion = new QLineEdit(ui_new_medida);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(200, 0));
        lineEdit_descripcion->setMaximumSize(QSize(200, 16777215));
        lineEdit_descripcion->setFrame(true);
        lineEdit_descripcion->setDragEnabled(false);
        lineEdit_descripcion->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_descripcion);

        pushButton_new_medida = new QPushButton(ui_new_medida);
        pushButton_new_medida->setObjectName(QString::fromUtf8("pushButton_new_medida"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new_medida->setIcon(icon1);
        pushButton_new_medida->setIconSize(QSize(20, 20));
        pushButton_new_medida->setFlat(true);

        horizontalLayout->addWidget(pushButton_new_medida);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(ui_new_medida);

        QMetaObject::connectSlotsByName(ui_new_medida);
    } // setupUi

    void retranslateUi(QWidget *ui_new_medida)
    {
        ui_new_medida->setWindowTitle(QApplication::translate("ui_new_medida", "Nueva Medida", 0, QApplication::UnicodeUTF8));
        pushButton_new_medida->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_new_medida: public Ui_ui_new_medida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_MEDIDA_H
