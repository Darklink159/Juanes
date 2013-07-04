/********************************************************************************
** Form generated from reading UI file 'ui_widget_compra_base.ui'
**
** Created: Sun 10. Mar 16:36:09 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_WIDGET_COMPRA_BASE_H
#define UI_UI_WIDGET_COMPRA_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSplitter>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ui_Widget_Compra_Base
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_derecha;

    void setupUi(QWidget *Ui_Widget_Compra_Base)
    {
        if (Ui_Widget_Compra_Base->objectName().isEmpty())
            Ui_Widget_Compra_Base->setObjectName(QString::fromUtf8("Ui_Widget_Compra_Base"));
        Ui_Widget_Compra_Base->resize(491, 271);
        gridLayout_2 = new QGridLayout(Ui_Widget_Compra_Base);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(Ui_Widget_Compra_Base);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        splitter->addWidget(treeWidget);
        gridLayoutWidget = new QWidget(splitter);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout_derecha = new QGridLayout(gridLayoutWidget);
        gridLayout_derecha->setObjectName(QString::fromUtf8("gridLayout_derecha"));
        gridLayout_derecha->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(gridLayoutWidget);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Ui_Widget_Compra_Base);

        QMetaObject::connectSlotsByName(Ui_Widget_Compra_Base);
    } // setupUi

    void retranslateUi(QWidget *Ui_Widget_Compra_Base)
    {
        Ui_Widget_Compra_Base->setWindowTitle(QApplication::translate("Ui_Widget_Compra_Base", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ui_Widget_Compra_Base: public Ui_Ui_Widget_Compra_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_WIDGET_COMPRA_BASE_H
