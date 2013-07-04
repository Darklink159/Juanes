/********************************************************************************
** Form generated from reading UI file 'ui_opciones_banco.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_BANCO_H
#define UI_UI_OPCIONES_BANCO_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_banco
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_bancos;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nombre_corto;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_ruc;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *ui_opciones_banco)
    {
        if (ui_opciones_banco->objectName().isEmpty())
            ui_opciones_banco->setObjectName(QString::fromUtf8("ui_opciones_banco"));
        ui_opciones_banco->resize(571, 408);
        ui_opciones_banco->setMaximumSize(QSize(571, 408));
        gridLayout_3 = new QGridLayout(ui_opciones_banco);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(ui_opciones_banco);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView_bancos = new QTableView(tab);
        tableView_bancos->setObjectName(QString::fromUtf8("tableView_bancos"));

        verticalLayout->addWidget(tableView_bancos);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_nombre = new QLineEdit(tab);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout_5->addWidget(lineEdit_nombre);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_nombre_corto = new QLineEdit(tab);
        lineEdit_nombre_corto->setObjectName(QString::fromUtf8("lineEdit_nombre_corto"));

        horizontalLayout->addWidget(lineEdit_nombre_corto);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_ruc = new QLineEdit(tab);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));

        horizontalLayout_2->addWidget(lineEdit_ruc);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_save = new QPushButton(tab);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save->setIcon(icon);
        pushButton_save->setIconSize(QSize(20, 20));
        pushButton_save->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_save);

        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon1);
        pushButton_delete->setIconSize(QSize(20, 20));
        pushButton_delete->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_delete);


        horizontalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_banco);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_banco);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_banco)
    {
        ui_opciones_banco->setWindowTitle(QApplication::translate("ui_opciones_banco", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_banco", "Nombre", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_banco", "Nombre Corto", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_opciones_banco", "Ruc", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QString());
        pushButton_delete->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_banco", "Bancos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_banco: public Ui_ui_opciones_banco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_BANCO_H
