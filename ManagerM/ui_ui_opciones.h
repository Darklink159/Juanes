/********************************************************************************
** Form generated from reading UI file 'ui_opciones.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_H
#define UI_UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *listWidget_modulos;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QWidget *widget_category;
    QLabel *label_category;

    void setupUi(QWidget *ui_opciones)
    {
        if (ui_opciones->objectName().isEmpty())
            ui_opciones->setObjectName(QString::fromUtf8("ui_opciones"));
        ui_opciones->setWindowModality(Qt::WindowModal);
        ui_opciones->resize(792, 455);
        ui_opciones->setMinimumSize(QSize(792, 455));
        ui_opciones->setMaximumSize(QSize(792, 455));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_opciones->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ui_opciones);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(ui_opciones);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 17));
        label->setMaximumSize(QSize(16777215, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listWidget_modulos = new QListWidget(layoutWidget);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Project_15.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Google_Sketchup.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/40406.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/Journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Mobility_Center.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Iconos/Iconos/RegEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_modulos);
        __qlistwidgetitem6->setBackground(brush);
        __qlistwidgetitem6->setIcon(icon7);
        listWidget_modulos->setObjectName(QString::fromUtf8("listWidget_modulos"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget_modulos->sizePolicy().hasHeightForWidth());
        listWidget_modulos->setSizePolicy(sizePolicy1);
        listWidget_modulos->setMinimumSize(QSize(190, 407));
        listWidget_modulos->setMaximumSize(QSize(200, 407));
        listWidget_modulos->setIconSize(QSize(30, 30));
        listWidget_modulos->setFlow(QListView::TopToBottom);
        listWidget_modulos->setProperty("isWrapping", QVariant(false));
        listWidget_modulos->setViewMode(QListView::ListMode);
        listWidget_modulos->setUniformItemSizes(false);
        listWidget_modulos->setSortingEnabled(false);

        gridLayout->addWidget(listWidget_modulos, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_category = new QWidget(layoutWidget1);
        widget_category->setObjectName(QString::fromUtf8("widget_category"));
        sizePolicy.setHeightForWidth(widget_category->sizePolicy().hasHeightForWidth());
        widget_category->setSizePolicy(sizePolicy);
        widget_category->setMinimumSize(QSize(570, 407));
        widget_category->setMaximumSize(QSize(570, 407));

        gridLayout_2->addWidget(widget_category, 1, 0, 1, 1);

        label_category = new QLabel(layoutWidget1);
        label_category->setObjectName(QString::fromUtf8("label_category"));
        sizePolicy.setHeightForWidth(label_category->sizePolicy().hasHeightForWidth());
        label_category->setSizePolicy(sizePolicy);
        label_category->setMinimumSize(QSize(0, 17));
        label_category->setMaximumSize(QSize(16777215, 17));
        label_category->setFont(font);

        gridLayout_2->addWidget(label_category, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget1);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(ui_opciones);

        QMetaObject::connectSlotsByName(ui_opciones);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones)
    {
        ui_opciones->setWindowTitle(QApplication::translate("ui_opciones", "Opciones", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones", "Categoria", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget_modulos->isSortingEnabled();
        listWidget_modulos->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_modulos->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ui_opciones", "Articulos", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_modulos->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ui_opciones", "Proveedores", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_modulos->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ui_opciones", "Bancos", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_modulos->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ui_opciones", "Tienda", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_modulos->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("ui_opciones", "Comprobantes", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_modulos->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("ui_opciones", "General", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_modulos->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("ui_opciones", "Base de Datos", 0, QApplication::UnicodeUTF8));
        listWidget_modulos->setSortingEnabled(__sortingEnabled);

        label_category->setText(QApplication::translate("ui_opciones", "Seccion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones: public Ui_ui_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_H
