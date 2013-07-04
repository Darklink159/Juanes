/********************************************************************************
** Form generated from reading UI file 'tabarticulos.ui'
**
** Created: Tue 5. Mar 17:41:46 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABARTICULOS_H
#define UI_TABARTICULOS_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tabArticulos
{
public:
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView_marca;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_marca;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save_marca;
    QPushButton *pushButton_delete_marca;
    QWidget *tab1;

    void setupUi(QTabWidget *tabArticulos)
    {
        if (tabArticulos->objectName().isEmpty())
            tabArticulos->setObjectName(QString::fromUtf8("tabArticulos"));
        tabArticulos->resize(647, 434);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView_marca = new QTableView(tab);
        tableView_marca->setObjectName(QString::fromUtf8("tableView_marca"));

        gridLayout->addWidget(tableView_marca, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(label);

        lineEdit_marca = new QLineEdit(tab);
        lineEdit_marca->setObjectName(QString::fromUtf8("lineEdit_marca"));

        horizontalLayout_2->addWidget(lineEdit_marca);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_save_marca = new QPushButton(tab);
        pushButton_save_marca->setObjectName(QString::fromUtf8("pushButton_save_marca"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save_marca->setIcon(icon);
        pushButton_save_marca->setIconSize(QSize(20, 20));
        pushButton_save_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_save_marca);

        pushButton_delete_marca = new QPushButton(tab);
        pushButton_delete_marca->setObjectName(QString::fromUtf8("pushButton_delete_marca"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete_marca->setIcon(icon1);
        pushButton_delete_marca->setIconSize(QSize(20, 20));
        pushButton_delete_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_delete_marca);


        horizontalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tabArticulos->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tabArticulos->addTab(tab1, QString());

        retranslateUi(tabArticulos);

        tabArticulos->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tabArticulos);
    } // setupUi

    void retranslateUi(QTabWidget *tabArticulos)
    {
        tabArticulos->setWindowTitle(QApplication::translate("tabArticulos", "TabWidget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tabArticulos", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton_save_marca->setText(QString());
        pushButton_delete_marca->setText(QString());
        tabArticulos->setTabText(tabArticulos->indexOf(tab), QApplication::translate("tabArticulos", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabArticulos->setTabText(tabArticulos->indexOf(tab1), QApplication::translate("tabArticulos", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tabArticulos: public Ui_tabArticulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABARTICULOS_H
