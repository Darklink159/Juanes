/********************************************************************************
** Form generated from reading UI file 'ui_edit_articulo.ui'
**
** Created: Sun 30. Jun 14:58:18 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_ARTICULO_H
#define UI_UI_EDIT_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_articulos
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QLabel *l_codigo_2;
    QLabel *l_codigoop;
    QGridLayout *gridLayout_2;
    QLineEdit *le_nombre_2;
    QLabel *l_nombre_2;
    QHBoxLayout *horizontalLayout;
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
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *l_stock_2;
    QSpinBox *le_stock_2;
    QLabel *l_precio_2;
    QDoubleSpinBox *le_precio_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_aceptar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *ui_edit_articulos)
    {
        if (ui_edit_articulos->objectName().isEmpty())
            ui_edit_articulos->setObjectName(QString::fromUtf8("ui_edit_articulos"));
        ui_edit_articulos->setWindowModality(Qt::ApplicationModal);
        ui_edit_articulos->resize(537, 360);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        ui_edit_articulos->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_edit_articulos->setWindowIcon(icon);
        gridLayout_6 = new QGridLayout(ui_edit_articulos);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter = new QSplitter(ui_edit_articulos);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        l_codigo_2 = new QLabel(splitter);
        l_codigo_2->setObjectName(QString::fromUtf8("l_codigo_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_codigo_2->sizePolicy().hasHeightForWidth());
        l_codigo_2->setSizePolicy(sizePolicy);
        l_codigo_2->setMinimumSize(QSize(80, 0));
        l_codigo_2->setMaximumSize(QSize(80, 16777215));
        l_codigo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_codigo_2->setIndent(5);
        splitter->addWidget(l_codigo_2);
        l_codigoop = new QLabel(splitter);
        l_codigoop->setObjectName(QString::fromUtf8("l_codigoop"));
        sizePolicy.setHeightForWidth(l_codigoop->sizePolicy().hasHeightForWidth());
        l_codigoop->setSizePolicy(sizePolicy);
        l_codigoop->setMinimumSize(QSize(80, 0));
        l_codigoop->setMaximumSize(QSize(80, 16777215));
        splitter->addWidget(l_codigoop);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        le_nombre_2 = new QLineEdit(ui_edit_articulos);
        le_nombre_2->setObjectName(QString::fromUtf8("le_nombre_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_nombre_2->sizePolicy().hasHeightForWidth());
        le_nombre_2->setSizePolicy(sizePolicy1);
        le_nombre_2->setMinimumSize(QSize(200, 0));
        le_nombre_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(le_nombre_2, 0, 1, 1, 1);

        l_nombre_2 = new QLabel(ui_edit_articulos);
        l_nombre_2->setObjectName(QString::fromUtf8("l_nombre_2"));
        l_nombre_2->setMinimumSize(QSize(80, 0));
        l_nombre_2->setMaximumSize(QSize(80, 16777215));
        l_nombre_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_nombre_2->setIndent(5);

        gridLayout_2->addWidget(l_nombre_2, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_marca_2 = new QLabel(ui_edit_articulos);
        l_marca_2->setObjectName(QString::fromUtf8("l_marca_2"));
        l_marca_2->setMinimumSize(QSize(80, 0));
        l_marca_2->setMaximumSize(QSize(80, 16777215));
        l_marca_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_marca_2->setIndent(5);

        gridLayout->addWidget(l_marca_2, 0, 0, 1, 1);

        cb_marca = new QComboBox(ui_edit_articulos);
        cb_marca->setObjectName(QString::fromUtf8("cb_marca"));
        sizePolicy1.setHeightForWidth(cb_marca->sizePolicy().hasHeightForWidth());
        cb_marca->setSizePolicy(sizePolicy1);
        cb_marca->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(cb_marca, 0, 1, 1, 1);

        btn_add_marca = new QPushButton(ui_edit_articulos);
        btn_add_marca->setObjectName(QString::fromUtf8("btn_add_marca"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_marca->setIcon(icon1);
        btn_add_marca->setFlat(true);

        gridLayout->addWidget(btn_add_marca, 0, 2, 1, 1);

        l_medida_2 = new QLabel(ui_edit_articulos);
        l_medida_2->setObjectName(QString::fromUtf8("l_medida_2"));
        l_medida_2->setMinimumSize(QSize(80, 0));
        l_medida_2->setMaximumSize(QSize(80, 16777215));
        l_medida_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_medida_2->setIndent(5);

        gridLayout->addWidget(l_medida_2, 1, 0, 1, 1);

        cb_medida = new QComboBox(ui_edit_articulos);
        cb_medida->setObjectName(QString::fromUtf8("cb_medida"));
        sizePolicy1.setHeightForWidth(cb_medida->sizePolicy().hasHeightForWidth());
        cb_medida->setSizePolicy(sizePolicy1);
        cb_medida->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(cb_medida, 1, 1, 1, 1);

        btn_add_medida = new QPushButton(ui_edit_articulos);
        btn_add_medida->setObjectName(QString::fromUtf8("btn_add_medida"));
        btn_add_medida->setIcon(icon1);
        btn_add_medida->setFlat(true);

        gridLayout->addWidget(btn_add_medida, 1, 2, 1, 1);

        label_2 = new QLabel(ui_edit_articulos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2->setIndent(5);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cb_proveedor = new QComboBox(ui_edit_articulos);
        cb_proveedor->setObjectName(QString::fromUtf8("cb_proveedor"));
        sizePolicy1.setHeightForWidth(cb_proveedor->sizePolicy().hasHeightForWidth());
        cb_proveedor->setSizePolicy(sizePolicy1);
        cb_proveedor->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(cb_proveedor, 2, 1, 1, 1);

        btn_add_proveedor = new QPushButton(ui_edit_articulos);
        btn_add_proveedor->setObjectName(QString::fromUtf8("btn_add_proveedor"));
        btn_add_proveedor->setIcon(icon1);
        btn_add_proveedor->setFlat(true);

        gridLayout->addWidget(btn_add_proveedor, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        l_stock_2 = new QLabel(ui_edit_articulos);
        l_stock_2->setObjectName(QString::fromUtf8("l_stock_2"));
        l_stock_2->setMinimumSize(QSize(80, 0));
        l_stock_2->setMaximumSize(QSize(80, 16777215));
        l_stock_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_stock_2->setIndent(5);

        gridLayout_3->addWidget(l_stock_2, 0, 0, 1, 1);

        le_stock_2 = new QSpinBox(ui_edit_articulos);
        le_stock_2->setObjectName(QString::fromUtf8("le_stock_2"));
        le_stock_2->setMinimumSize(QSize(80, 0));
        le_stock_2->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(le_stock_2, 0, 1, 1, 1);

        l_precio_2 = new QLabel(ui_edit_articulos);
        l_precio_2->setObjectName(QString::fromUtf8("l_precio_2"));
        l_precio_2->setMinimumSize(QSize(80, 0));
        l_precio_2->setMaximumSize(QSize(80, 16777215));
        l_precio_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_precio_2->setIndent(5);

        gridLayout_3->addWidget(l_precio_2, 1, 0, 1, 1);

        le_precio_2 = new QDoubleSpinBox(ui_edit_articulos);
        le_precio_2->setObjectName(QString::fromUtf8("le_precio_2"));
        le_precio_2->setMinimumSize(QSize(80, 0));
        le_precio_2->setMaximumSize(QSize(80, 16777215));
        le_precio_2->setMaximum(1e+08);

        gridLayout_3->addWidget(le_precio_2, 1, 1, 1, 1);

        label = new QLabel(ui_edit_articulos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        line = new QFrame(ui_edit_articulos);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 1);

        line_2 = new QFrame(ui_edit_articulos);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 4, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_aceptar = new QPushButton(ui_edit_articulos);
        btn_aceptar->setObjectName(QString::fromUtf8("btn_aceptar"));

        horizontalLayout_3->addWidget(btn_aceptar);

        btn_cancelar = new QPushButton(ui_edit_articulos);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        gridLayout_6->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ui_edit_articulos);

        QMetaObject::connectSlotsByName(ui_edit_articulos);
    } // setupUi

    void retranslateUi(QDialog *ui_edit_articulos)
    {
        ui_edit_articulos->setWindowTitle(QApplication::translate("ui_edit_articulos", "Editar Articulo", 0, QApplication::UnicodeUTF8));
        l_codigo_2->setText(QApplication::translate("ui_edit_articulos", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        l_codigoop->setText(QString());
        l_nombre_2->setText(QApplication::translate("ui_edit_articulos", "Nombre", 0, QApplication::UnicodeUTF8));
        l_marca_2->setText(QApplication::translate("ui_edit_articulos", "Marca", 0, QApplication::UnicodeUTF8));
        btn_add_marca->setText(QString());
        l_medida_2->setText(QApplication::translate("ui_edit_articulos", "Medida", 0, QApplication::UnicodeUTF8));
        btn_add_medida->setText(QString());
        label_2->setText(QApplication::translate("ui_edit_articulos", "Proveedor", 0, QApplication::UnicodeUTF8));
        btn_add_proveedor->setText(QString());
        l_stock_2->setText(QApplication::translate("ui_edit_articulos", "Stock", 0, QApplication::UnicodeUTF8));
        l_precio_2->setText(QApplication::translate("ui_edit_articulos", "Precio ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_edit_articulos", "Soles", 0, QApplication::UnicodeUTF8));
        btn_aceptar->setText(QApplication::translate("ui_edit_articulos", "Aceptar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("ui_edit_articulos", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_articulos: public Ui_ui_edit_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_ARTICULO_H
