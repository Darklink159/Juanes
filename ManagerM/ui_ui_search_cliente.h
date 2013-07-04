/********************************************************************************
** Form generated from reading UI file 'ui_search_cliente.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SEARCH_CLIENTE_H
#define UI_UI_SEARCH_CLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_search_cliente
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView_clientes;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ruc;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_razonSocial;

    void setupUi(QDialog *ui_search_cliente)
    {
        if (ui_search_cliente->objectName().isEmpty())
            ui_search_cliente->setObjectName(QString::fromUtf8("ui_search_cliente"));
        ui_search_cliente->resize(342, 391);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_search_cliente->sizePolicy().hasHeightForWidth());
        ui_search_cliente->setSizePolicy(sizePolicy);
        ui_search_cliente->setMinimumSize(QSize(342, 391));
        ui_search_cliente->setMaximumSize(QSize(342, 391));
        buttonBox = new QDialogButtonBox(ui_search_cliente);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(160, 350, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableView_clientes = new QTableView(ui_search_cliente);
        tableView_clientes->setObjectName(QString::fromUtf8("tableView_clientes"));
        tableView_clientes->setGeometry(QRect(20, 90, 301, 251));
        tableView_clientes->setMinimumSize(QSize(0, 0));
        tableView_clientes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_clientes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_clientes->setSortingEnabled(false);
        layoutWidget = new QWidget(ui_search_cliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 212, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(71, 0));

        horizontalLayout->addWidget(label);

        lineEdit_ruc = new QLineEdit(layoutWidget);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));

        horizontalLayout->addWidget(lineEdit_ruc);

        layoutWidget1 = new QWidget(ui_search_cliente);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 301, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(71, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_razonSocial = new QLineEdit(layoutWidget1);
        lineEdit_razonSocial->setObjectName(QString::fromUtf8("lineEdit_razonSocial"));

        horizontalLayout_2->addWidget(lineEdit_razonSocial);


        retranslateUi(ui_search_cliente);
        QObject::connect(buttonBox, SIGNAL(accepted()), ui_search_cliente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ui_search_cliente, SLOT(reject()));

        QMetaObject::connectSlotsByName(ui_search_cliente);
    } // setupUi

    void retranslateUi(QDialog *ui_search_cliente)
    {
        ui_search_cliente->setWindowTitle(QApplication::translate("ui_search_cliente", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_search_cliente", "RUC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_search_cliente", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_search_cliente: public Ui_ui_search_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SEARCH_CLIENTE_H
