/********************************************************************************
** Form generated from reading UI file 'ui_module_ventas.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_VENTAS_H
#define UI_UI_MODULE_VENTAS_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_module_ventas
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QTreeWidget *treeWidget_ventas;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_nuevo;
    QPushButton *pushButton_editar;
    QPushButton *pushButton_eliminar;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_buscar;
    QPushButton *pushButton_buscar;
    QTableView *tableView_ventas;

    void setupUi(QWidget *ui_module_ventas)
    {
        if (ui_module_ventas->objectName().isEmpty())
            ui_module_ventas->setObjectName(QString::fromUtf8("ui_module_ventas"));
        ui_module_ventas->resize(800, 258);
        ui_module_ventas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ui_module_ventas);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(ui_module_ventas);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 24));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        treeWidget_ventas = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_ventas);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget_ventas);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget_ventas->setObjectName(QString::fromUtf8("treeWidget_ventas"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget_ventas->sizePolicy().hasHeightForWidth());
        treeWidget_ventas->setSizePolicy(sizePolicy1);
        treeWidget_ventas->setHeaderHidden(false);
        treeWidget_ventas->setExpandsOnDoubleClick(true);

        verticalLayout->addWidget(treeWidget_ventas);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        pushButton_nuevo = new QPushButton(layoutWidget1);
        pushButton_nuevo->setObjectName(QString::fromUtf8("pushButton_nuevo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_nuevo->sizePolicy().hasHeightForWidth());
        pushButton_nuevo->setSizePolicy(sizePolicy2);
        pushButton_nuevo->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nuevo->setIcon(icon);
        pushButton_nuevo->setIconSize(QSize(16, 16));
        pushButton_nuevo->setAutoDefault(false);
        pushButton_nuevo->setDefault(false);
        pushButton_nuevo->setFlat(true);

        horizontalLayout->addWidget(pushButton_nuevo);

        pushButton_editar = new QPushButton(layoutWidget1);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        sizePolicy2.setHeightForWidth(pushButton_editar->sizePolicy().hasHeightForWidth());
        pushButton_editar->setSizePolicy(sizePolicy2);
        pushButton_editar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editar->setIcon(icon1);
        pushButton_editar->setIconSize(QSize(16, 16));
        pushButton_editar->setFlat(true);

        horizontalLayout->addWidget(pushButton_editar);

        pushButton_eliminar = new QPushButton(layoutWidget1);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));
        sizePolicy2.setHeightForWidth(pushButton_eliminar->sizePolicy().hasHeightForWidth());
        pushButton_eliminar->setSizePolicy(sizePolicy2);
        pushButton_eliminar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar->setIcon(icon2);
        pushButton_eliminar->setIconSize(QSize(16, 16));
        pushButton_eliminar->setFlat(true);

        horizontalLayout->addWidget(pushButton_eliminar);

        horizontalSpacer_3 = new QSpacerItem(168, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit_buscar = new QLineEdit(layoutWidget1);
        lineEdit_buscar->setObjectName(QString::fromUtf8("lineEdit_buscar"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_buscar->sizePolicy().hasHeightForWidth());
        lineEdit_buscar->setSizePolicy(sizePolicy3);
        lineEdit_buscar->setMinimumSize(QSize(250, 0));
        lineEdit_buscar->setMaximumSize(QSize(250, 16777215));
        lineEdit_buscar->setFrame(true);
        lineEdit_buscar->setEchoMode(QLineEdit::NoEcho);
        lineEdit_buscar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_buscar->setDragEnabled(false);

        horizontalLayout->addWidget(lineEdit_buscar);

        pushButton_buscar = new QPushButton(layoutWidget1);
        pushButton_buscar->setObjectName(QString::fromUtf8("pushButton_buscar"));
        sizePolicy2.setHeightForWidth(pushButton_buscar->sizePolicy().hasHeightForWidth());
        pushButton_buscar->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/monotone_search_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_buscar->setIcon(icon3);
        pushButton_buscar->setIconSize(QSize(16, 16));
        pushButton_buscar->setFlat(true);

        horizontalLayout->addWidget(pushButton_buscar);


        verticalLayout_2->addLayout(horizontalLayout);

        tableView_ventas = new QTableView(layoutWidget1);
        tableView_ventas->setObjectName(QString::fromUtf8("tableView_ventas"));
        tableView_ventas->setAlternatingRowColors(true);
        tableView_ventas->setSelectionMode(QAbstractItemView::MultiSelection);
        tableView_ventas->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_ventas->setShowGrid(false);
        tableView_ventas->setGridStyle(Qt::NoPen);

        verticalLayout_2->addWidget(tableView_ventas);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(ui_module_ventas);

        QMetaObject::connectSlotsByName(ui_module_ventas);
    } // setupUi

    void retranslateUi(QWidget *ui_module_ventas)
    {
        ui_module_ventas->setWindowTitle(QApplication::translate("ui_module_ventas", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_module_ventas", "  Navegaci\303\263n ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_ventas->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_module_ventas", "Ventas", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget_ventas->isSortingEnabled();
        treeWidget_ventas->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_ventas->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ui_module_ventas", "Comprobantes", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ui_module_ventas", "Boleta", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ui_module_ventas", "Factura", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ui_module_ventas", "Guia RR", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ui_module_ventas", "Notas", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ui_module_ventas", "Cr\303\251dito", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ui_module_ventas", "D\303\251bito", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_ventas->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ui_module_ventas", "Otros", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ui_module_ventas", "Nota Pedido", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ui_module_ventas", "Ticket", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(0, QApplication::translate("ui_module_ventas", "Cotizaci\303\263n", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem8->child(3);
        ___qtreewidgetitem12->setText(0, QApplication::translate("ui_module_ventas", "Proforma", 0, QApplication::UnicodeUTF8));
        treeWidget_ventas->setSortingEnabled(__sortingEnabled);

        pushButton_nuevo->setText(QApplication::translate("ui_module_ventas", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_editar->setText(QApplication::translate("ui_module_ventas", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar->setText(QApplication::translate("ui_module_ventas", "Eliminar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_buscar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_buscar->setText(QString());
        lineEdit_buscar->setPlaceholderText(QApplication::translate("ui_module_ventas", "Buscar . . .", 0, QApplication::UnicodeUTF8));
        pushButton_buscar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_ventas: public Ui_ui_module_ventas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_VENTAS_H
