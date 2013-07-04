/********************************************************************************
** Form generated from reading UI file 'ui_module_home.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_HOME_H
#define UI_UI_MODULE_HOME_H

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

class Ui_ui_module_home
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_usuario;
    QPushButton *pushButton_usuario;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_compras;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ventas;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_articulo;
    QPushButton *pushButton_colaboradores;
    QLabel *label_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_facturacion;
    QPushButton *pushButton_sistema;
    QLabel *label_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *ui_module_home)
    {
        if (ui_module_home->objectName().isEmpty())
            ui_module_home->setObjectName(QString::fromUtf8("ui_module_home"));
        ui_module_home->resize(826, 640);
        gridLayout_2 = new QGridLayout(ui_module_home);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(ui_module_home);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_usuario = new QLabel(frame);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_usuario->sizePolicy().hasHeightForWidth());
        label_usuario->setSizePolicy(sizePolicy);
        label_usuario->setMinimumSize(QSize(70, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Light"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_usuario->setFont(font1);
        label_usuario->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);"));

        horizontalLayout_4->addWidget(label_usuario);

        pushButton_usuario = new QPushButton(frame);
        pushButton_usuario->setObjectName(QString::fromUtf8("pushButton_usuario"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_usuario->sizePolicy().hasHeightForWidth());
        pushButton_usuario->setSizePolicy(sizePolicy1);
        pushButton_usuario->setMinimumSize(QSize(50, 50));
        pushButton_usuario->setMaximumSize(QSize(50, 50));
        pushButton_usuario->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_usuario->setIcon(icon);
        pushButton_usuario->setIconSize(QSize(50, 50));
        pushButton_usuario->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_usuario);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_7, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_compras = new QPushButton(frame);
        pushButton_compras->setObjectName(QString::fromUtf8("pushButton_compras"));
        sizePolicy1.setHeightForWidth(pushButton_compras->sizePolicy().hasHeightForWidth());
        pushButton_compras->setSizePolicy(sizePolicy1);
        pushButton_compras->setMinimumSize(QSize(150, 150));
        pushButton_compras->setMaximumSize(QSize(150, 150));
        pushButton_compras->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_compras->setMouseTracking(false);
        pushButton_compras->setFocusPolicy(Qt::WheelFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Marketplace (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_compras->setIcon(icon1);
        pushButton_compras->setIconSize(QSize(150, 150));
        pushButton_compras->setFlat(true);

        gridLayout_5->addWidget(pushButton_compras, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_ventas = new QPushButton(frame);
        pushButton_ventas->setObjectName(QString::fromUtf8("pushButton_ventas"));
        sizePolicy1.setHeightForWidth(pushButton_ventas->sizePolicy().hasHeightForWidth());
        pushButton_ventas->setSizePolicy(sizePolicy1);
        pushButton_ventas->setMinimumSize(QSize(150, 150));
        pushButton_ventas->setMaximumSize(QSize(150, 150));
        pushButton_ventas->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Android_Market.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ventas->setIcon(icon2);
        pushButton_ventas->setIconSize(QSize(150, 150));
        pushButton_ventas->setFlat(true);

        gridLayout_5->addWidget(pushButton_ventas, 0, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        pushButton_articulo = new QPushButton(frame);
        pushButton_articulo->setObjectName(QString::fromUtf8("pushButton_articulo"));
        sizePolicy1.setHeightForWidth(pushButton_articulo->sizePolicy().hasHeightForWidth());
        pushButton_articulo->setSizePolicy(sizePolicy1);
        pushButton_articulo->setMinimumSize(QSize(150, 150));
        pushButton_articulo->setMaximumSize(QSize(150, 150));
        pushButton_articulo->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_articulo->setIcon(icon3);
        pushButton_articulo->setIconSize(QSize(150, 150));
        pushButton_articulo->setFlat(true);

        gridLayout_5->addWidget(pushButton_articulo, 3, 0, 1, 1);

        pushButton_colaboradores = new QPushButton(frame);
        pushButton_colaboradores->setObjectName(QString::fromUtf8("pushButton_colaboradores"));
        sizePolicy1.setHeightForWidth(pushButton_colaboradores->sizePolicy().hasHeightForWidth());
        pushButton_colaboradores->setSizePolicy(sizePolicy1);
        pushButton_colaboradores->setMinimumSize(QSize(150, 150));
        pushButton_colaboradores->setMaximumSize(QSize(150, 150));
        pushButton_colaboradores->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_colaboradores->setIcon(icon4);
        pushButton_colaboradores->setIconSize(QSize(150, 150));
        pushButton_colaboradores->setFlat(true);

        gridLayout_5->addWidget(pushButton_colaboradores, 3, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_6, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 5, 0, 1, 1);

        pushButton_facturacion = new QPushButton(frame);
        pushButton_facturacion->setObjectName(QString::fromUtf8("pushButton_facturacion"));
        sizePolicy1.setHeightForWidth(pushButton_facturacion->sizePolicy().hasHeightForWidth());
        pushButton_facturacion->setSizePolicy(sizePolicy1);
        pushButton_facturacion->setMinimumSize(QSize(150, 150));
        pushButton_facturacion->setMaximumSize(QSize(150, 150));
        pushButton_facturacion->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/Journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_facturacion->setIcon(icon5);
        pushButton_facturacion->setIconSize(QSize(150, 150));
        pushButton_facturacion->setFlat(true);

        gridLayout_5->addWidget(pushButton_facturacion, 6, 0, 1, 1);

        pushButton_sistema = new QPushButton(frame);
        pushButton_sistema->setObjectName(QString::fromUtf8("pushButton_sistema"));
        sizePolicy1.setHeightForWidth(pushButton_sistema->sizePolicy().hasHeightForWidth());
        pushButton_sistema->setSizePolicy(sizePolicy1);
        pushButton_sistema->setMinimumSize(QSize(150, 150));
        pushButton_sistema->setMaximumSize(QSize(150, 150));
        pushButton_sistema->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sistema->setIcon(icon6);
        pushButton_sistema->setIconSize(QSize(150, 150));
        pushButton_sistema->setFlat(true);

        gridLayout_5->addWidget(pushButton_sistema, 6, 2, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 7, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(70, 70, 70);\n"
""));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_7, 7, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 3, 0, 2, 1);

        verticalSpacer_2 = new QSpacerItem(17, 308, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(13, 114, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(80, 80));
        pushButton_10->setMaximumSize(QSize(80, 80));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Iconos/Iconos/Facebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon7);
        pushButton_10->setIconSize(QSize(80, 80));
        pushButton_10->setAutoDefault(false);
        pushButton_10->setDefault(false);
        pushButton_10->setFlat(true);

        gridLayout_6->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(80, 80));
        pushButton_11->setMaximumSize(QSize(80, 80));
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Iconos/Iconos/Twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon8);
        pushButton_11->setIconSize(QSize(80, 80));
        pushButton_11->setAutoDefault(false);
        pushButton_11->setDefault(false);
        pushButton_11->setFlat(true);

        gridLayout_6->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(80, 80));
        pushButton_12->setMaximumSize(QSize(80, 80));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Iconos/Iconos/Gmail.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon9);
        pushButton_12->setIconSize(QSize(80, 80));
        pushButton_12->setAutoDefault(false);
        pushButton_12->setDefault(false);
        pushButton_12->setFlat(true);

        gridLayout_6->addWidget(pushButton_12, 0, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_8, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 4, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(78, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 4, 3, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ui_module_home);

        QMetaObject::connectSlotsByName(ui_module_home);
    } // setupUi

    void retranslateUi(QWidget *ui_module_home)
    {
        ui_module_home->setWindowTitle(QApplication::translate("ui_module_home", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_module_home", "Inicio", 0, QApplication::UnicodeUTF8));
        label_usuario->setText(QApplication::translate("ui_module_home", "user", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_usuario->setToolTip(QApplication::translate("ui_module_home", "Usuario", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_usuario->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_compras->setToolTip(QApplication::translate("ui_module_home", "Compras", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_compras->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_compras->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_compras->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_ventas->setToolTip(QApplication::translate("ui_module_home", "Ventas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_ventas->setText(QString());
        label_2->setText(QApplication::translate("ui_module_home", "Compras", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_module_home", "Ventas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_articulo->setToolTip(QApplication::translate("ui_module_home", "Articulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_articulo->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_colaboradores->setToolTip(QApplication::translate("ui_module_home", "Colaboradores", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_colaboradores->setText(QString());
        label_3->setText(QApplication::translate("ui_module_home", "Articulos", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_module_home", "Colaboradores", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_facturacion->setToolTip(QApplication::translate("ui_module_home", "Facturacion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_facturacion->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_sistema->setToolTip(QApplication::translate("ui_module_home", "Ajustes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_sistema->setText(QString());
        label_4->setText(QApplication::translate("ui_module_home", "Facturacion", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_module_home", "Opciones", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_home: public Ui_ui_module_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_HOME_H
