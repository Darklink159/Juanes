/********************************************************************************
** Form generated from reading UI file 'ui_new_articulo.ui'
**
** Created: Sun 30. Jun 14:55:47 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_ARTICULO_H
#define UI_UI_NEW_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_articulo
{
public:
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_aceptar;
    QPushButton *btn_borrar;
    QPushButton *btn_cancelar;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QLabel *l_codigo_2;
    QLabel *l_codigoop;
    QLabel *l_nombre_2;
    QLineEdit *le_nombre_2;
    QGridLayout *gridLayout;
    QLabel *l_marca_2;
    QComboBox *cb_marca;
    QPushButton *btn_add_marca;
    QLabel *l_medida_2;
    QComboBox *cb_medida;
    QPushButton *btn_add_medida;
    QLabel *label_2;
    QComboBox *cb_proveedor;
    QPushButton *btn_add_proveedor;
    QGridLayout *gridLayout_4;
    QLabel *l_precio_2;
    QDoubleSpinBox *le_precio_2;
    QLabel *l_stock_2;
    QSpinBox *le_stock_2;
    QLabel *label;
    QLabel *l_grupo_2;
    QComboBox *cb_grupo;
    QPushButton *btn_add_grupo;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pushButton_agregar;
    QGridLayout *gridLayout_2;
    QLabel *l_resultado_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ui_new_articulo)
    {
        if (ui_new_articulo->objectName().isEmpty())
            ui_new_articulo->setObjectName(QString::fromUtf8("ui_new_articulo"));
        ui_new_articulo->setWindowModality(Qt::ApplicationModal);
        ui_new_articulo->resize(1232, 521);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        ui_new_articulo->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_articulo->setWindowIcon(icon);
        gridLayout_9 = new QGridLayout(ui_new_articulo);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_9->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_aceptar = new QPushButton(ui_new_articulo);
        btn_aceptar->setObjectName(QString::fromUtf8("btn_aceptar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/aceptar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_aceptar->setIcon(icon1);

        horizontalLayout_3->addWidget(btn_aceptar);

        btn_borrar = new QPushButton(ui_new_articulo);
        btn_borrar->setObjectName(QString::fromUtf8("btn_borrar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_borrar->setIcon(icon2);

        horizontalLayout_3->addWidget(btn_borrar);

        btn_cancelar = new QPushButton(ui_new_articulo);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_9->addLayout(verticalLayout, 3, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        splitter = new QSplitter(ui_new_articulo);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        l_codigo_2 = new QLabel(layoutWidget);
        l_codigo_2->setObjectName(QString::fromUtf8("l_codigo_2"));
        l_codigo_2->setMinimumSize(QSize(80, 0));
        l_codigo_2->setMaximumSize(QSize(80, 16777215));
        l_codigo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(l_codigo_2, 0, 0, 1, 1);

        l_codigoop = new QLabel(layoutWidget);
        l_codigoop->setObjectName(QString::fromUtf8("l_codigoop"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_codigoop->sizePolicy().hasHeightForWidth());
        l_codigoop->setSizePolicy(sizePolicy);
        l_codigoop->setMinimumSize(QSize(200, 24));
        l_codigoop->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(l_codigoop, 0, 1, 1, 1);

        l_nombre_2 = new QLabel(layoutWidget);
        l_nombre_2->setObjectName(QString::fromUtf8("l_nombre_2"));
        l_nombre_2->setMinimumSize(QSize(80, 0));
        l_nombre_2->setMaximumSize(QSize(80, 16777215));
        l_nombre_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(l_nombre_2, 1, 0, 1, 1);

        le_nombre_2 = new QLineEdit(layoutWidget);
        le_nombre_2->setObjectName(QString::fromUtf8("le_nombre_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_nombre_2->sizePolicy().hasHeightForWidth());
        le_nombre_2->setSizePolicy(sizePolicy1);
        le_nombre_2->setMinimumSize(QSize(200, 0));
        le_nombre_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(le_nombre_2, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_marca_2 = new QLabel(layoutWidget);
        l_marca_2->setObjectName(QString::fromUtf8("l_marca_2"));
        l_marca_2->setMinimumSize(QSize(80, 0));
        l_marca_2->setMaximumSize(QSize(80, 16777215));
        l_marca_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_marca_2, 0, 0, 1, 1);

        cb_marca = new QComboBox(layoutWidget);
        cb_marca->setObjectName(QString::fromUtf8("cb_marca"));
        cb_marca->setMinimumSize(QSize(100, 0));
        cb_marca->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(cb_marca, 0, 1, 1, 1);

        btn_add_marca = new QPushButton(layoutWidget);
        btn_add_marca->setObjectName(QString::fromUtf8("btn_add_marca"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_marca->setIcon(icon3);
        btn_add_marca->setFlat(true);

        gridLayout->addWidget(btn_add_marca, 0, 2, 1, 1);

        l_medida_2 = new QLabel(layoutWidget);
        l_medida_2->setObjectName(QString::fromUtf8("l_medida_2"));
        l_medida_2->setMinimumSize(QSize(80, 0));
        l_medida_2->setMaximumSize(QSize(80, 16777215));
        l_medida_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_medida_2, 1, 0, 1, 1);

        cb_medida = new QComboBox(layoutWidget);
        cb_medida->setObjectName(QString::fromUtf8("cb_medida"));
        cb_medida->setMinimumSize(QSize(100, 0));
        cb_medida->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(cb_medida, 1, 1, 1, 1);

        btn_add_medida = new QPushButton(layoutWidget);
        btn_add_medida->setObjectName(QString::fromUtf8("btn_add_medida"));
        btn_add_medida->setIcon(icon3);
        btn_add_medida->setFlat(true);

        gridLayout->addWidget(btn_add_medida, 1, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cb_proveedor = new QComboBox(layoutWidget);
        cb_proveedor->setObjectName(QString::fromUtf8("cb_proveedor"));
        cb_proveedor->setMinimumSize(QSize(100, 0));
        cb_proveedor->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(cb_proveedor, 2, 1, 1, 1);

        btn_add_proveedor = new QPushButton(layoutWidget);
        btn_add_proveedor->setObjectName(QString::fromUtf8("btn_add_proveedor"));
        btn_add_proveedor->setIcon(icon3);
        btn_add_proveedor->setFlat(true);

        gridLayout->addWidget(btn_add_proveedor, 2, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 1, 2, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        l_precio_2 = new QLabel(layoutWidget);
        l_precio_2->setObjectName(QString::fromUtf8("l_precio_2"));
        l_precio_2->setMinimumSize(QSize(80, 0));
        l_precio_2->setMaximumSize(QSize(80, 16777215));
        l_precio_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_precio_2, 0, 0, 1, 1);

        le_precio_2 = new QDoubleSpinBox(layoutWidget);
        le_precio_2->setObjectName(QString::fromUtf8("le_precio_2"));
        le_precio_2->setMinimumSize(QSize(80, 0));
        le_precio_2->setMaximumSize(QSize(80, 16777215));
        le_precio_2->setMaximum(1e+08);

        gridLayout_4->addWidget(le_precio_2, 0, 1, 1, 1);

        l_stock_2 = new QLabel(layoutWidget);
        l_stock_2->setObjectName(QString::fromUtf8("l_stock_2"));
        l_stock_2->setMinimumSize(QSize(80, 0));
        l_stock_2->setMaximumSize(QSize(80, 16777215));
        l_stock_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_stock_2, 1, 0, 1, 1);

        le_stock_2 = new QSpinBox(layoutWidget);
        le_stock_2->setObjectName(QString::fromUtf8("le_stock_2"));
        le_stock_2->setMinimumSize(QSize(80, 0));
        le_stock_2->setMaximumSize(QSize(80, 16777215));

        gridLayout_4->addWidget(le_stock_2, 1, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 2, 1, 1);

        l_grupo_2 = new QLabel(layoutWidget);
        l_grupo_2->setObjectName(QString::fromUtf8("l_grupo_2"));
        l_grupo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_grupo_2, 2, 0, 1, 1);

        cb_grupo = new QComboBox(layoutWidget);
        cb_grupo->setObjectName(QString::fromUtf8("cb_grupo"));

        gridLayout_4->addWidget(cb_grupo, 2, 1, 1, 1);

        btn_add_grupo = new QPushButton(layoutWidget);
        btn_add_grupo->setObjectName(QString::fromUtf8("btn_add_grupo"));

        gridLayout_4->addWidget(btn_add_grupo, 2, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);

        splitter->addWidget(layoutWidget);

        gridLayout_7->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_31 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_31);

        pushButton_agregar = new QPushButton(ui_new_articulo);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_agregar->setIcon(icon4);
        pushButton_agregar->setFlat(true);

        horizontalLayout_21->addWidget(pushButton_agregar);


        gridLayout_7->addLayout(horizontalLayout_21, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l_resultado_2 = new QLabel(ui_new_articulo);
        l_resultado_2->setObjectName(QString::fromUtf8("l_resultado_2"));

        gridLayout_2->addWidget(l_resultado_2, 0, 0, 1, 1);

        tableWidget = new QTableWidget(ui_new_articulo);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(820, 0));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nombre_2, cb_marca);
        QWidget::setTabOrder(cb_marca, cb_medida);
        QWidget::setTabOrder(cb_medida, cb_proveedor);
        QWidget::setTabOrder(cb_proveedor, pushButton_agregar);
        QWidget::setTabOrder(pushButton_agregar, btn_aceptar);
        QWidget::setTabOrder(btn_aceptar, btn_borrar);
        QWidget::setTabOrder(btn_borrar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, btn_add_proveedor);

        retranslateUi(ui_new_articulo);

        QMetaObject::connectSlotsByName(ui_new_articulo);
    } // setupUi

    void retranslateUi(QWidget *ui_new_articulo)
    {
        ui_new_articulo->setWindowTitle(QApplication::translate("ui_new_articulo", "Nuevo Art\303\255culo", 0, QApplication::UnicodeUTF8));
        btn_aceptar->setText(QApplication::translate("ui_new_articulo", "Aceptar", 0, QApplication::UnicodeUTF8));
        btn_borrar->setText(QApplication::translate("ui_new_articulo", "Borrar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("ui_new_articulo", "Cancelar", 0, QApplication::UnicodeUTF8));
        l_codigo_2->setText(QApplication::translate("ui_new_articulo", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        l_codigoop->setText(QString());
        l_nombre_2->setText(QApplication::translate("ui_new_articulo", "Nombre", 0, QApplication::UnicodeUTF8));
        l_marca_2->setText(QApplication::translate("ui_new_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        btn_add_marca->setText(QString());
        l_medida_2->setText(QApplication::translate("ui_new_articulo", "Medida", 0, QApplication::UnicodeUTF8));
        btn_add_medida->setText(QString());
        label_2->setText(QApplication::translate("ui_new_articulo", "Proveedor", 0, QApplication::UnicodeUTF8));
        btn_add_proveedor->setText(QString());
        l_precio_2->setText(QApplication::translate("ui_new_articulo", "Precio", 0, QApplication::UnicodeUTF8));
        l_stock_2->setText(QApplication::translate("ui_new_articulo", "Stock", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_articulo", "Soles", 0, QApplication::UnicodeUTF8));
        l_grupo_2->setText(QApplication::translate("ui_new_articulo", "Grupo", 0, QApplication::UnicodeUTF8));
        btn_add_grupo->setText(QString());
        pushButton_agregar->setText(QApplication::translate("ui_new_articulo", "Agregar", 0, QApplication::UnicodeUTF8));
        l_resultado_2->setText(QApplication::translate("ui_new_articulo", "Art\303\255culos a registrar :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_new_articulo", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_new_articulo", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_new_articulo", "Grupo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_new_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_new_articulo", "Medida", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_new_articulo", "Stock", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ui_new_articulo", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("ui_new_articulo", "Proveedor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_articulo: public Ui_ui_new_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_ARTICULO_H
