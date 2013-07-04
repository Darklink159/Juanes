/********************************************************************************
** Form generated from reading UI file 'ui_advanced_search_articulo.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ADVANCED_SEARCH_ARTICULO_H
#define UI_UI_ADVANCED_SEARCH_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_advanced_search_articulo
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QToolButton *tb_borrar;

    void setupUi(QWidget *ui_advanced_search_articulo)
    {
        if (ui_advanced_search_articulo->objectName().isEmpty())
            ui_advanced_search_articulo->setObjectName(QString::fromUtf8("ui_advanced_search_articulo"));
        ui_advanced_search_articulo->resize(301, 52);
        gridLayout = new QGridLayout(ui_advanced_search_articulo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ui_advanced_search_articulo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(ui_advanced_search_articulo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        toolButton = new QToolButton(ui_advanced_search_articulo);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Search_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);

        horizontalLayout->addWidget(toolButton);

        tb_borrar = new QToolButton(ui_advanced_search_articulo);
        tb_borrar->setObjectName(QString::fromUtf8("tb_borrar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Mac_Spaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_borrar->setIcon(icon1);

        horizontalLayout->addWidget(tb_borrar);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(ui_advanced_search_articulo);

        QMetaObject::connectSlotsByName(ui_advanced_search_articulo);
    } // setupUi

    void retranslateUi(QWidget *ui_advanced_search_articulo)
    {
        ui_advanced_search_articulo->setWindowTitle(QApplication::translate("ui_advanced_search_articulo", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_advanced_search_articulo", "B\303\272squeda:", 0, QApplication::UnicodeUTF8));
        lineEdit->setPlaceholderText(QApplication::translate("ui_advanced_search_articulo", "Texto a buscar ...", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tb_borrar->setToolTip(QApplication::translate("ui_advanced_search_articulo", "Mostrar todos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tb_borrar->setText(QApplication::translate("ui_advanced_search_articulo", "Mostrar Todos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_advanced_search_articulo: public Ui_ui_advanced_search_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ADVANCED_SEARCH_ARTICULO_H
