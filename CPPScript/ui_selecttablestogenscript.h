/********************************************************************************
** Form generated from reading UI file 'selecttablestogenscript.ui'
**
** Created: Sun 14. Apr 20:39:57 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTTABLESTOGENSCRIPT_H
#define UI_SELECTTABLESTOGENSCRIPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectTablesToGenScript
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_tables;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_selectAll;
    QHBoxLayout *horizontalLayout;
    QLabel *label_generate;
    QLineEdit *lineEdit_directory;
    QPushButton *pushButton_generate;
    QLabel *label;

    void setupUi(QWidget *SelectTablesToGenScript)
    {
        if (SelectTablesToGenScript->objectName().isEmpty())
            SelectTablesToGenScript->setObjectName(QString::fromUtf8("SelectTablesToGenScript"));
        SelectTablesToGenScript->resize(499, 274);
        gridLayout = new QGridLayout(SelectTablesToGenScript);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget_tables = new QListWidget(SelectTablesToGenScript);
        listWidget_tables->setObjectName(QString::fromUtf8("listWidget_tables"));
        listWidget_tables->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout->addWidget(listWidget_tables);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_selectAll = new QPushButton(SelectTablesToGenScript);
        pushButton_selectAll->setObjectName(QString::fromUtf8("pushButton_selectAll"));

        horizontalLayout_2->addWidget(pushButton_selectAll);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_generate = new QLabel(SelectTablesToGenScript);
        label_generate->setObjectName(QString::fromUtf8("label_generate"));

        horizontalLayout->addWidget(label_generate);

        lineEdit_directory = new QLineEdit(SelectTablesToGenScript);
        lineEdit_directory->setObjectName(QString::fromUtf8("lineEdit_directory"));

        horizontalLayout->addWidget(lineEdit_directory);

        pushButton_generate = new QPushButton(SelectTablesToGenScript);
        pushButton_generate->setObjectName(QString::fromUtf8("pushButton_generate"));

        horizontalLayout->addWidget(pushButton_generate);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        label = new QLabel(SelectTablesToGenScript);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(SelectTablesToGenScript);

        QMetaObject::connectSlotsByName(SelectTablesToGenScript);
    } // setupUi

    void retranslateUi(QWidget *SelectTablesToGenScript)
    {
        SelectTablesToGenScript->setWindowTitle(QApplication::translate("SelectTablesToGenScript", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_selectAll->setText(QApplication::translate("SelectTablesToGenScript", "Select All", 0, QApplication::UnicodeUTF8));
        label_generate->setText(QApplication::translate("SelectTablesToGenScript", "Generate in the directory:", 0, QApplication::UnicodeUTF8));
        pushButton_generate->setText(QApplication::translate("SelectTablesToGenScript", "Generate...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SelectTablesToGenScript", "Choose the tables:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectTablesToGenScript: public Ui_SelectTablesToGenScript {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTTABLESTOGENSCRIPT_H
