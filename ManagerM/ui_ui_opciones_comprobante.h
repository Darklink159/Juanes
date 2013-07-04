/********************************************************************************
** Form generated from reading UI file 'ui_opciones_comprobante.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_COMPROBANTE_H
#define UI_UI_OPCIONES_COMPROBANTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_comprobante
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget_boleta;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QTableView *tableView_factura;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_serie_f;
    QPushButton *pushButton_usar_f;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_inicio_f;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_fin_f;
    QSplitter *splitter;
    QPushButton *pushButton_save_f;
    QPushButton *pushButton_new_f;
    QPushButton *pushButton_delete_f;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QTableView *tableView_boleta;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *spinBox_serie_b;
    QPushButton *pushButton_usar_b;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spinBox_inicio_b;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spinBox_fin_b;
    QSplitter *splitter_2;
    QPushButton *pushButton_save_b;
    QPushButton *pushButton_new_b;
    QPushButton *pushButton_drop_b;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ui_opciones_comprobante)
    {
        if (ui_opciones_comprobante->objectName().isEmpty())
            ui_opciones_comprobante->setObjectName(QString::fromUtf8("ui_opciones_comprobante"));
        ui_opciones_comprobante->resize(571, 408);
        gridLayout = new QGridLayout(ui_opciones_comprobante);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget_boleta = new QTabWidget(ui_opciones_comprobante);
        tabWidget_boleta->setObjectName(QString::fromUtf8("tabWidget_boleta"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView_factura = new QTableView(tab);
        tableView_factura->setObjectName(QString::fromUtf8("tableView_factura"));
        tableView_factura->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_factura->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_3->addWidget(tableView_factura, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinBox_serie_f = new QSpinBox(tab);
        spinBox_serie_f->setObjectName(QString::fromUtf8("spinBox_serie_f"));
        spinBox_serie_f->setMinimumSize(QSize(100, 0));
        spinBox_serie_f->setMaximumSize(QSize(100, 16777215));
        spinBox_serie_f->setMaximum(1000000);

        horizontalLayout->addWidget(spinBox_serie_f);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        pushButton_usar_f = new QPushButton(tab);
        pushButton_usar_f->setObjectName(QString::fromUtf8("pushButton_usar_f"));

        gridLayout_2->addWidget(pushButton_usar_f, 0, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinBox_inicio_f = new QSpinBox(tab);
        spinBox_inicio_f->setObjectName(QString::fromUtf8("spinBox_inicio_f"));
        spinBox_inicio_f->setMinimumSize(QSize(100, 0));
        spinBox_inicio_f->setMaximumSize(QSize(100, 16777215));
        spinBox_inicio_f->setMaximum(1000000);

        horizontalLayout_2->addWidget(spinBox_inicio_f);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinBox_fin_f = new QSpinBox(tab);
        spinBox_fin_f->setObjectName(QString::fromUtf8("spinBox_fin_f"));
        spinBox_fin_f->setMinimumSize(QSize(100, 0));
        spinBox_fin_f->setMaximumSize(QSize(100, 16777215));
        spinBox_fin_f->setMaximum(1000000);

        horizontalLayout_3->addWidget(spinBox_fin_f);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        splitter = new QSplitter(tab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        pushButton_save_f = new QPushButton(splitter);
        pushButton_save_f->setObjectName(QString::fromUtf8("pushButton_save_f"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save_f->setIcon(icon);
        pushButton_save_f->setFlat(true);
        splitter->addWidget(pushButton_save_f);
        pushButton_new_f = new QPushButton(splitter);
        pushButton_new_f->setObjectName(QString::fromUtf8("pushButton_new_f"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new_f->setIcon(icon1);
        pushButton_new_f->setFlat(true);
        splitter->addWidget(pushButton_new_f);
        pushButton_delete_f = new QPushButton(splitter);
        pushButton_delete_f->setObjectName(QString::fromUtf8("pushButton_delete_f"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete_f->setIcon(icon2);
        pushButton_delete_f->setFlat(true);
        splitter->addWidget(pushButton_delete_f);

        gridLayout_2->addWidget(splitter, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget_boleta->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableView_boleta = new QTableView(tab_2);
        tableView_boleta->setObjectName(QString::fromUtf8("tableView_boleta"));
        tableView_boleta->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_boleta->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_5->addWidget(tableView_boleta, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        spinBox_serie_b = new QSpinBox(tab_2);
        spinBox_serie_b->setObjectName(QString::fromUtf8("spinBox_serie_b"));
        spinBox_serie_b->setMinimumSize(QSize(100, 0));
        spinBox_serie_b->setMaximumSize(QSize(100, 16777215));
        spinBox_serie_b->setMaximum(1000000);

        horizontalLayout_6->addWidget(spinBox_serie_b);


        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        pushButton_usar_b = new QPushButton(tab_2);
        pushButton_usar_b->setObjectName(QString::fromUtf8("pushButton_usar_b"));

        gridLayout_6->addWidget(pushButton_usar_b, 0, 4, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(80, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        spinBox_inicio_b = new QSpinBox(tab_2);
        spinBox_inicio_b->setObjectName(QString::fromUtf8("spinBox_inicio_b"));
        spinBox_inicio_b->setMinimumSize(QSize(100, 0));
        spinBox_inicio_b->setMaximumSize(QSize(100, 16777215));
        spinBox_inicio_b->setMaximum(1000000);

        horizontalLayout_7->addWidget(spinBox_inicio_b);


        gridLayout_6->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_8);

        spinBox_fin_b = new QSpinBox(tab_2);
        spinBox_fin_b->setObjectName(QString::fromUtf8("spinBox_fin_b"));
        spinBox_fin_b->setMinimumSize(QSize(100, 0));
        spinBox_fin_b->setMaximumSize(QSize(100, 16777215));
        spinBox_fin_b->setMaximum(1000000);

        horizontalLayout_8->addWidget(spinBox_fin_b);


        gridLayout_6->addLayout(horizontalLayout_8, 1, 2, 1, 1);

        splitter_2 = new QSplitter(tab_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(1);
        pushButton_save_b = new QPushButton(splitter_2);
        pushButton_save_b->setObjectName(QString::fromUtf8("pushButton_save_b"));
        pushButton_save_b->setIcon(icon);
        pushButton_save_b->setFlat(true);
        splitter_2->addWidget(pushButton_save_b);
        pushButton_new_b = new QPushButton(splitter_2);
        pushButton_new_b->setObjectName(QString::fromUtf8("pushButton_new_b"));
        pushButton_new_b->setIcon(icon1);
        pushButton_new_b->setFlat(true);
        splitter_2->addWidget(pushButton_new_b);
        pushButton_drop_b = new QPushButton(splitter_2);
        pushButton_drop_b->setObjectName(QString::fromUtf8("pushButton_drop_b"));
        pushButton_drop_b->setIcon(icon2);
        pushButton_drop_b->setFlat(true);
        splitter_2->addWidget(pushButton_drop_b);

        gridLayout_6->addWidget(splitter_2, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 1, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        tabWidget_boleta->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget_boleta, 0, 0, 1, 1);


        retranslateUi(ui_opciones_comprobante);

        tabWidget_boleta->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_comprobante);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_comprobante)
    {
        ui_opciones_comprobante->setWindowTitle(QApplication::translate("ui_opciones_comprobante", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_comprobante", "Serie", 0, QApplication::UnicodeUTF8));
        pushButton_usar_f->setText(QApplication::translate("ui_opciones_comprobante", "Usar esta serie", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_comprobante", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_opciones_comprobante", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        pushButton_save_f->setText(QString());
        pushButton_new_f->setText(QString());
        pushButton_delete_f->setText(QString());
        tabWidget_boleta->setTabText(tabWidget_boleta->indexOf(tab), QApplication::translate("ui_opciones_comprobante", "Facturas", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_opciones_comprobante", "Serie", 0, QApplication::UnicodeUTF8));
        pushButton_usar_b->setText(QApplication::translate("ui_opciones_comprobante", "Usar esta serie", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_opciones_comprobante", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_opciones_comprobante", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        pushButton_save_b->setText(QString());
        pushButton_new_b->setText(QString());
        pushButton_drop_b->setText(QString());
        tabWidget_boleta->setTabText(tabWidget_boleta->indexOf(tab_2), QApplication::translate("ui_opciones_comprobante", "Boletas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_comprobante: public Ui_ui_opciones_comprobante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_COMPROBANTE_H
