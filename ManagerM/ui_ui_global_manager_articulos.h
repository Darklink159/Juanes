/********************************************************************************
** Form generated from reading UI file 'ui_global_manager_articulos.ui'
**
** Created: Sat 29. Jun 16:16:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_GLOBAL_MANAGER_ARTICULOS_H
#define UI_UI_GLOBAL_MANAGER_ARTICULOS_H

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
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_global_manager_articulos
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_modo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_descripcion;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_marca;
    QLabel *label_2;
    QLineEdit *lineEdit_medida;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_new;
    QPushButton *pushButton_edit;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_articulos;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_down;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_cantidad;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_precio;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_up;
    QTableWidget *tableWidget_articulos;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_add;

    void setupUi(QWidget *ui_global_manager_articulos)
    {
        if (ui_global_manager_articulos->objectName().isEmpty())
            ui_global_manager_articulos->setObjectName(QString::fromUtf8("ui_global_manager_articulos"));
        ui_global_manager_articulos->resize(712, 551);
        gridLayout = new QGridLayout(ui_global_manager_articulos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(ui_global_manager_articulos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(ui_global_manager_articulos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_modo = new QComboBox(ui_global_manager_articulos);
        comboBox_modo->setObjectName(QString::fromUtf8("comboBox_modo"));

        horizontalLayout_3->addWidget(comboBox_modo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_descripcion = new QLineEdit(ui_global_manager_articulos);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(300, 0));
        lineEdit_descripcion->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_4->addWidget(lineEdit_descripcion);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(ui_global_manager_articulos);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(ui_global_manager_articulos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 0));

        horizontalLayout_6->addWidget(label);

        lineEdit_marca = new QLineEdit(ui_global_manager_articulos);
        lineEdit_marca->setObjectName(QString::fromUtf8("lineEdit_marca"));
        lineEdit_marca->setMinimumSize(QSize(150, 0));
        lineEdit_marca->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(lineEdit_marca);

        label_2 = new QLabel(ui_global_manager_articulos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 0));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_medida = new QLineEdit(ui_global_manager_articulos);
        lineEdit_medida->setObjectName(QString::fromUtf8("lineEdit_medida"));
        lineEdit_medida->setMinimumSize(QSize(150, 0));
        lineEdit_medida->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(lineEdit_medida);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButton_new = new QPushButton(ui_global_manager_articulos);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));

        horizontalLayout_6->addWidget(pushButton_new);

        pushButton_edit = new QPushButton(ui_global_manager_articulos);
        pushButton_edit->setObjectName(QString::fromUtf8("pushButton_edit"));

        horizontalLayout_6->addWidget(pushButton_edit);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView_articulos = new QTableView(ui_global_manager_articulos);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));
        tableView_articulos->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(tableView_articulos);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_down = new QPushButton(ui_global_manager_articulos);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_br_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon);
        pushButton_down->setIconSize(QSize(20, 20));
        pushButton_down->setFlat(true);

        horizontalLayout_7->addWidget(pushButton_down);

        label_4 = new QLabel(ui_global_manager_articulos);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        doubleSpinBox_cantidad = new QDoubleSpinBox(ui_global_manager_articulos);
        doubleSpinBox_cantidad->setObjectName(QString::fromUtf8("doubleSpinBox_cantidad"));
        doubleSpinBox_cantidad->setMaximum(999.99);
        doubleSpinBox_cantidad->setValue(1);

        horizontalLayout_7->addWidget(doubleSpinBox_cantidad);

        label_7 = new QLabel(ui_global_manager_articulos);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        doubleSpinBox_precio = new QDoubleSpinBox(ui_global_manager_articulos);
        doubleSpinBox_precio->setObjectName(QString::fromUtf8("doubleSpinBox_precio"));
        doubleSpinBox_precio->setMaximum(100000);

        horizontalLayout_7->addWidget(doubleSpinBox_precio);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        pushButton_up = new QPushButton(ui_global_manager_articulos);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_br_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon1);
        pushButton_up->setIconSize(QSize(20, 20));
        pushButton_up->setFlat(true);

        horizontalLayout_7->addWidget(pushButton_up);


        verticalLayout->addLayout(horizontalLayout_7);

        tableWidget_articulos = new QTableWidget(ui_global_manager_articulos);
        tableWidget_articulos->setObjectName(QString::fromUtf8("tableWidget_articulos"));
        tableWidget_articulos->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(tableWidget_articulos);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton = new QPushButton(ui_global_manager_articulos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_9->addWidget(pushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        pushButton_add = new QPushButton(ui_global_manager_articulos);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        horizontalLayout_9->addWidget(pushButton_add);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 6, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_descripcion, lineEdit_marca);
        QWidget::setTabOrder(lineEdit_marca, lineEdit_medida);
        QWidget::setTabOrder(lineEdit_medida, tableView_articulos);
        QWidget::setTabOrder(tableView_articulos, doubleSpinBox_cantidad);
        QWidget::setTabOrder(doubleSpinBox_cantidad, doubleSpinBox_precio);
        QWidget::setTabOrder(doubleSpinBox_precio, pushButton_add);
        QWidget::setTabOrder(pushButton_add, tableWidget_articulos);
        QWidget::setTabOrder(tableWidget_articulos, pushButton_down);
        QWidget::setTabOrder(pushButton_down, pushButton_up);
        QWidget::setTabOrder(pushButton_up, comboBox_modo);

        retranslateUi(ui_global_manager_articulos);

        QMetaObject::connectSlotsByName(ui_global_manager_articulos);
    } // setupUi

    void retranslateUi(QWidget *ui_global_manager_articulos)
    {
        ui_global_manager_articulos->setWindowTitle(QApplication::translate("ui_global_manager_articulos", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_global_manager_articulos", "Busqueda", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_global_manager_articulos", "Eliga el modo de busqueda para la descripcion\n"
" y realize su busqueda:", 0, QApplication::UnicodeUTF8));
        comboBox_modo->clear();
        comboBox_modo->insertItems(0, QStringList()
         << QApplication::translate("ui_global_manager_articulos", "Empieza con", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_global_manager_articulos", "Contiene a", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("ui_global_manager_articulos", "Restringe tus resultados por:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_global_manager_articulos", "Marca", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_global_manager_articulos", "Medida", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_global_manager_articulos", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_edit->setText(QApplication::translate("ui_global_manager_articulos", "Modificar", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QString());
        label_4->setText(QApplication::translate("ui_global_manager_articulos", "Cantidad", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_global_manager_articulos", "Precio", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QString());
        pushButton->setText(QApplication::translate("ui_global_manager_articulos", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("ui_global_manager_articulos", "A\303\261adir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_global_manager_articulos: public Ui_ui_global_manager_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_GLOBAL_MANAGER_ARTICULOS_H
