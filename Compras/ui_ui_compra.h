/********************************************************************************
** Form generated from reading UI file 'ui_compra.ui'
**
** Created: Sun 10. Mar 14:28:36 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_COMPRA_H
#define UI_UI_COMPRA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_compra
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *ui_compra)
    {
        if (ui_compra->objectName().isEmpty())
            ui_compra->setObjectName(QString::fromUtf8("ui_compra"));
        ui_compra->resize(611, 344);
        gridLayout_2 = new QGridLayout(ui_compra);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeWidget = new QTreeWidget(ui_compra);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMouseTracking(false);
        treeWidget->setAutoExpandDelay(-1);

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(ui_compra);

        QMetaObject::connectSlotsByName(ui_compra);
    } // setupUi

    void retranslateUi(QWidget *ui_compra)
    {
        ui_compra->setWindowTitle(QApplication::translate("ui_compra", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ui_compra", "Orden", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_compra", "Documentos", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ui_compra", "New Subitem", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ui_compra", "New Subitem", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(1, QApplication::translate("ui_compra", "fafa", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("ui_compra", "New Subitem", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ui_compra", "New Subitem", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ui_compra", "New Item", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ui_compra: public Ui_ui_compra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_COMPRA_H
