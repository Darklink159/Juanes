/********************************************************************************
** Form generated from reading UI file 'ui_tool_bar.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TOOL_BAR_H
#define UI_UI_TOOL_BAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_tool_bar
{
public:
    QGridLayout *gridLayout_9;
    QFrame *frame;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_home;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_ventas;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_compras;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_articulos;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_10;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_colaborador;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_11;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_cliente;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_opciones;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_13;

    void setupUi(QWidget *ui_tool_bar)
    {
        if (ui_tool_bar->objectName().isEmpty())
            ui_tool_bar->setObjectName(QString::fromUtf8("ui_tool_bar"));
        ui_tool_bar->resize(1776, 83);
        gridLayout_9 = new QGridLayout(ui_tool_bar);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        frame = new QFrame(ui_tool_bar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        pushButton_home = new QPushButton(frame);
        pushButton_home->setObjectName(QString::fromUtf8("pushButton_home"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_home->sizePolicy().hasHeightForWidth());
        pushButton_home->setSizePolicy(sizePolicy);
        pushButton_home->setMinimumSize(QSize(40, 40));
        pushButton_home->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Google_Sketchup.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_home->setIcon(icon);
        pushButton_home->setIconSize(QSize(40, 40));
        pushButton_home->setFlat(true);

        gridLayout_2->addWidget(pushButton_home, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(50, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font.setBold(false);
        font.setWeight(50);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer = new QSpacerItem(600, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton_ventas = new QPushButton(frame);
        pushButton_ventas->setObjectName(QString::fromUtf8("pushButton_ventas"));
        sizePolicy.setHeightForWidth(pushButton_ventas->sizePolicy().hasHeightForWidth());
        pushButton_ventas->setSizePolicy(sizePolicy);
        pushButton_ventas->setMinimumSize(QSize(40, 40));
        pushButton_ventas->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Android_Market.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ventas->setIcon(icon1);
        pushButton_ventas->setIconSize(QSize(40, 40));
        pushButton_ventas->setFlat(true);

        gridLayout->addWidget(pushButton_ventas, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton_compras = new QPushButton(frame);
        pushButton_compras->setObjectName(QString::fromUtf8("pushButton_compras"));
        sizePolicy.setHeightForWidth(pushButton_compras->sizePolicy().hasHeightForWidth());
        pushButton_compras->setSizePolicy(sizePolicy);
        pushButton_compras->setMinimumSize(QSize(40, 40));
        pushButton_compras->setMaximumSize(QSize(40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Marketplace (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_compras->setIcon(icon2);
        pushButton_compras->setIconSize(QSize(40, 40));
        pushButton_compras->setFlat(true);

        gridLayout_3->addWidget(pushButton_compras, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 2, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(50, 0));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        pushButton_articulos = new QPushButton(frame);
        pushButton_articulos->setObjectName(QString::fromUtf8("pushButton_articulos"));
        sizePolicy.setHeightForWidth(pushButton_articulos->sizePolicy().hasHeightForWidth());
        pushButton_articulos->setSizePolicy(sizePolicy);
        pushButton_articulos->setMinimumSize(QSize(40, 40));
        pushButton_articulos->setMaximumSize(QSize(40, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_articulos->setIcon(icon3);
        pushButton_articulos->setIconSize(QSize(40, 40));
        pushButton_articulos->setFlat(true);

        gridLayout_4->addWidget(pushButton_articulos, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 2, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(50, 0));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        pushButton_colaborador = new QPushButton(frame);
        pushButton_colaborador->setObjectName(QString::fromUtf8("pushButton_colaborador"));
        sizePolicy.setHeightForWidth(pushButton_colaborador->sizePolicy().hasHeightForWidth());
        pushButton_colaborador->setSizePolicy(sizePolicy);
        pushButton_colaborador->setMinimumSize(QSize(40, 40));
        pushButton_colaborador->setMaximumSize(QSize(40, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_colaborador->setIcon(icon4);
        pushButton_colaborador->setIconSize(QSize(40, 40));
        pushButton_colaborador->setFlat(true);

        gridLayout_5->addWidget(pushButton_colaborador, 0, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 0, 2, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(50, 0));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_11, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_15 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        pushButton_cliente = new QPushButton(frame);
        pushButton_cliente->setObjectName(QString::fromUtf8("pushButton_cliente"));
        sizePolicy.setHeightForWidth(pushButton_cliente->sizePolicy().hasHeightForWidth());
        pushButton_cliente->setSizePolicy(sizePolicy);
        pushButton_cliente->setMinimumSize(QSize(40, 40));
        pushButton_cliente->setMaximumSize(QSize(40, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/Live_Messenger.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cliente->setIcon(icon5);
        pushButton_cliente->setIconSize(QSize(40, 40));
        pushButton_cliente->setFlat(true);

        gridLayout_6->addWidget(pushButton_cliente, 0, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_16, 0, 2, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(50, 0));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_12, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_6);

        horizontalSpacer_2 = new QSpacerItem(600, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_17, 0, 0, 1, 1);

        pushButton_opciones = new QPushButton(frame);
        pushButton_opciones->setObjectName(QString::fromUtf8("pushButton_opciones"));
        sizePolicy.setHeightForWidth(pushButton_opciones->sizePolicy().hasHeightForWidth());
        pushButton_opciones->setSizePolicy(sizePolicy);
        pushButton_opciones->setMinimumSize(QSize(40, 40));
        pushButton_opciones->setMaximumSize(QSize(40, 40));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_opciones->setIcon(icon6);
        pushButton_opciones->setIconSize(QSize(40, 40));
        pushButton_opciones->setFlat(true);

        gridLayout_7->addWidget(pushButton_opciones, 0, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_18, 0, 2, 1, 1);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(50, 0));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 80);"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_13, 1, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_7);


        gridLayout_8->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ui_tool_bar);

        QMetaObject::connectSlotsByName(ui_tool_bar);
    } // setupUi

    void retranslateUi(QWidget *ui_tool_bar)
    {
        ui_tool_bar->setWindowTitle(QApplication::translate("ui_tool_bar", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_home->setText(QString());
        label_7->setText(QApplication::translate("ui_tool_bar", "Inicio", 0, QApplication::UnicodeUTF8));
        pushButton_ventas->setText(QString());
        label_2->setText(QApplication::translate("ui_tool_bar", "Ventas", 0, QApplication::UnicodeUTF8));
        pushButton_compras->setText(QString());
        label_9->setText(QApplication::translate("ui_tool_bar", "Compras", 0, QApplication::UnicodeUTF8));
        pushButton_articulos->setText(QString());
        label_10->setText(QApplication::translate("ui_tool_bar", "Articulos", 0, QApplication::UnicodeUTF8));
        pushButton_colaborador->setText(QString());
        label_11->setText(QApplication::translate("ui_tool_bar", "Colaborador", 0, QApplication::UnicodeUTF8));
        pushButton_cliente->setText(QString());
        label_12->setText(QApplication::translate("ui_tool_bar", "Cliente", 0, QApplication::UnicodeUTF8));
        pushButton_opciones->setText(QString());
        label_13->setText(QApplication::translate("ui_tool_bar", "Opciones", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tool_bar: public Ui_ui_tool_bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TOOL_BAR_H
