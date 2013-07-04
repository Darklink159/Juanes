/********************************************************************************
** Form generated from reading UI file 'ui_module_compras.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_COMPRAS_H
#define UI_UI_MODULE_COMPRAS_H

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
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_module_compras
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QTreeWidget *treeWidget_compras;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_nuevo;
    QPushButton *pushButton_editar;
    QPushButton *pushButton_eliminar;
    QPushButton *pushButton_generar;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_buscar;
    QToolButton *toolButton_search;
    QTableView *tableView_compras;

    void setupUi(QWidget *ui_module_compras)
    {
        if (ui_module_compras->objectName().isEmpty())
            ui_module_compras->setObjectName(QString::fromUtf8("ui_module_compras"));
        ui_module_compras->resize(951, 248);
        ui_module_compras->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ui_module_compras);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(ui_module_compras);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        layoutWidget_7 = new QWidget(splitter);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer);

        label_4 = new QLabel(layoutWidget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 24));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(label_4);

        treeWidget_compras = new QTreeWidget(layoutWidget_7);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_compras);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget_compras);
        new QTreeWidgetItem(treeWidget_compras);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_compras);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget_compras->setObjectName(QString::fromUtf8("treeWidget_compras"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget_compras->sizePolicy().hasHeightForWidth());
        treeWidget_compras->setSizePolicy(sizePolicy1);
        treeWidget_compras->setHeaderHidden(false);
        treeWidget_compras->setExpandsOnDoubleClick(true);

        verticalLayout_7->addWidget(treeWidget_compras);

        splitter->addWidget(layoutWidget_7);
        layoutWidget_8 = new QWidget(splitter);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_8->setSpacing(10);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        pushButton_nuevo = new QPushButton(layoutWidget_8);
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

        horizontalLayout_4->addWidget(pushButton_nuevo);

        pushButton_editar = new QPushButton(layoutWidget_8);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        sizePolicy2.setHeightForWidth(pushButton_editar->sizePolicy().hasHeightForWidth());
        pushButton_editar->setSizePolicy(sizePolicy2);
        pushButton_editar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editar->setIcon(icon1);
        pushButton_editar->setIconSize(QSize(16, 16));
        pushButton_editar->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_editar);

        pushButton_eliminar = new QPushButton(layoutWidget_8);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));
        sizePolicy2.setHeightForWidth(pushButton_eliminar->sizePolicy().hasHeightForWidth());
        pushButton_eliminar->setSizePolicy(sizePolicy2);
        pushButton_eliminar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar->setIcon(icon2);
        pushButton_eliminar->setIconSize(QSize(16, 16));
        pushButton_eliminar->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_eliminar);

        pushButton_generar = new QPushButton(layoutWidget_8);
        pushButton_generar->setObjectName(QString::fromUtf8("pushButton_generar"));
        pushButton_generar->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_generar);

        horizontalSpacer_6 = new QSpacerItem(168, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        lineEdit_buscar = new QLineEdit(layoutWidget_8);
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

        horizontalLayout_4->addWidget(lineEdit_buscar);

        toolButton_search = new QToolButton(layoutWidget_8);
        toolButton_search->setObjectName(QString::fromUtf8("toolButton_search"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Search_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_search->setIcon(icon3);
        toolButton_search->setIconSize(QSize(20, 16));
        toolButton_search->setPopupMode(QToolButton::MenuButtonPopup);
        toolButton_search->setAutoRaise(true);
        toolButton_search->setArrowType(Qt::NoArrow);

        horizontalLayout_4->addWidget(toolButton_search);


        verticalLayout_8->addLayout(horizontalLayout_4);

        tableView_compras = new QTableView(layoutWidget_8);
        tableView_compras->setObjectName(QString::fromUtf8("tableView_compras"));
        tableView_compras->setAlternatingRowColors(true);
        tableView_compras->setSelectionMode(QAbstractItemView::MultiSelection);
        tableView_compras->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_compras->setShowGrid(false);
        tableView_compras->setGridStyle(Qt::NoPen);

        verticalLayout_8->addWidget(tableView_compras);

        splitter->addWidget(layoutWidget_8);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(ui_module_compras);

        QMetaObject::connectSlotsByName(ui_module_compras);
    } // setupUi

    void retranslateUi(QWidget *ui_module_compras)
    {
        ui_module_compras->setWindowTitle(QApplication::translate("ui_module_compras", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_module_compras", "  Navegaci\303\263n ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_compras->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_module_compras", "Compras", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget_compras->isSortingEnabled();
        treeWidget_compras->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_compras->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ui_module_compras", "Comprobantes", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ui_module_compras", "Orden", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ui_module_compras", "Guia RR", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ui_module_compras", "Flete", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ui_module_compras", "Factura", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget_compras->topLevelItem(1);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ui_module_compras", "Nota de Credito", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget_compras->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ui_module_compras", "Nota de Debito", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_compras->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ui_module_compras", "Pagos", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ui_module_compras", "Letras", 0, QApplication::UnicodeUTF8));
        treeWidget_compras->setSortingEnabled(__sortingEnabled);

        pushButton_nuevo->setText(QApplication::translate("ui_module_compras", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_editar->setText(QApplication::translate("ui_module_compras", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar->setText(QApplication::translate("ui_module_compras", "Eliminar", 0, QApplication::UnicodeUTF8));
        pushButton_generar->setText(QApplication::translate("ui_module_compras", "Generar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_buscar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_buscar->setText(QString());
        lineEdit_buscar->setPlaceholderText(QApplication::translate("ui_module_compras", "Buscar . . .", 0, QApplication::UnicodeUTF8));
        toolButton_search->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_compras: public Ui_ui_module_compras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_COMPRAS_H
