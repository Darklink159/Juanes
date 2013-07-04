/********************************************************************************
** Form generated from reading UI file 'generatesearchform.ui'
**
** Created: Thu 28. Mar 21:23:53 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATESEARCHFORM_H
#define UI_GENERATESEARCHFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenerateSearchForm
{
public:
    QLabel *l_info;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_generar;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_table;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *cb_table;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *l_columns;
    QListWidget *list_columns;

    void setupUi(QWidget *GenerateSearchForm)
    {
        if (GenerateSearchForm->objectName().isEmpty())
            GenerateSearchForm->setObjectName(QString::fromUtf8("GenerateSearchForm"));
        GenerateSearchForm->resize(450, 340);
        l_info = new QLabel(GenerateSearchForm);
        l_info->setObjectName(QString::fromUtf8("l_info"));
        l_info->setGeometry(QRect(11, 42, 287, 16));
        layoutWidget = new QWidget(GenerateSearchForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 270, 401, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_generar = new QPushButton(layoutWidget);
        btn_generar->setObjectName(QString::fromUtf8("btn_generar"));

        horizontalLayout_4->addWidget(btn_generar);

        layoutWidget_2 = new QWidget(GenerateSearchForm);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(11, 11, 210, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        l_table = new QLabel(layoutWidget_2);
        l_table->setObjectName(QString::fromUtf8("l_table"));

        horizontalLayout_2->addWidget(l_table);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        cb_table = new QComboBox(layoutWidget_2);
        cb_table->setObjectName(QString::fromUtf8("cb_table"));

        horizontalLayout_2->addWidget(cb_table);

        widget = new QWidget(GenerateSearchForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 66, 401, 194));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        l_columns = new QLabel(widget);
        l_columns->setObjectName(QString::fromUtf8("l_columns"));

        gridLayout->addWidget(l_columns, 0, 0, 1, 1);

        list_columns = new QListWidget(widget);
        list_columns->setObjectName(QString::fromUtf8("list_columns"));
        list_columns->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(list_columns, 0, 1, 1, 1);


        retranslateUi(GenerateSearchForm);

        QMetaObject::connectSlotsByName(GenerateSearchForm);
    } // setupUi

    void retranslateUi(QWidget *GenerateSearchForm)
    {
        GenerateSearchForm->setWindowTitle(QApplication::translate("GenerateSearchForm", "Search Form Generator", 0, QApplication::UnicodeUTF8));
        l_info->setText(QApplication::translate("GenerateSearchForm", "Select the columns you want to use for the search", 0, QApplication::UnicodeUTF8));
        btn_generar->setText(QApplication::translate("GenerateSearchForm", "Generate Form", 0, QApplication::UnicodeUTF8));
        l_table->setText(QApplication::translate("GenerateSearchForm", "Choose Table:", 0, QApplication::UnicodeUTF8));
        l_columns->setText(QApplication::translate("GenerateSearchForm", "Columns:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenerateSearchForm: public Ui_GenerateSearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATESEARCHFORM_H
