/********************************************************************************
** Form generated from reading UI file 'ui_module_colaboradores.ui'
**
** Created: Sat 29. Jun 16:09:24 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_COLABORADORES_H
#define UI_UI_MODULE_COLABORADORES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_module_colaboradores
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_nuevo;
    QPushButton *pushButton_editar;
    QPushButton *pushButton_eliminar;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_buscar;
    QPushButton *pushButton_buscar;
    QTableView *tableView_colaboradores;

    void setupUi(QWidget *ui_module_colaboradores)
    {
        if (ui_module_colaboradores->objectName().isEmpty())
            ui_module_colaboradores->setObjectName(QString::fromUtf8("ui_module_colaboradores"));
        ui_module_colaboradores->resize(812, 264);
        ui_module_colaboradores->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(ui_module_colaboradores);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(ui_module_colaboradores);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        pushButton_nuevo = new QPushButton(layoutWidget_2);
        pushButton_nuevo->setObjectName(QString::fromUtf8("pushButton_nuevo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_nuevo->sizePolicy().hasHeightForWidth());
        pushButton_nuevo->setSizePolicy(sizePolicy);
        pushButton_nuevo->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nuevo->setIcon(icon);
        pushButton_nuevo->setIconSize(QSize(16, 16));
        pushButton_nuevo->setAutoDefault(false);
        pushButton_nuevo->setDefault(false);
        pushButton_nuevo->setFlat(true);

        horizontalLayout->addWidget(pushButton_nuevo);

        pushButton_editar = new QPushButton(layoutWidget_2);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        sizePolicy.setHeightForWidth(pushButton_editar->sizePolicy().hasHeightForWidth());
        pushButton_editar->setSizePolicy(sizePolicy);
        pushButton_editar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editar->setIcon(icon1);
        pushButton_editar->setIconSize(QSize(16, 16));
        pushButton_editar->setFlat(true);

        horizontalLayout->addWidget(pushButton_editar);

        pushButton_eliminar = new QPushButton(layoutWidget_2);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));
        sizePolicy.setHeightForWidth(pushButton_eliminar->sizePolicy().hasHeightForWidth());
        pushButton_eliminar->setSizePolicy(sizePolicy);
        pushButton_eliminar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar->setIcon(icon2);
        pushButton_eliminar->setIconSize(QSize(16, 16));
        pushButton_eliminar->setFlat(true);

        horizontalLayout->addWidget(pushButton_eliminar);

        horizontalSpacer_3 = new QSpacerItem(168, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit_buscar = new QLineEdit(layoutWidget_2);
        lineEdit_buscar->setObjectName(QString::fromUtf8("lineEdit_buscar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_buscar->sizePolicy().hasHeightForWidth());
        lineEdit_buscar->setSizePolicy(sizePolicy1);
        lineEdit_buscar->setMinimumSize(QSize(250, 0));
        lineEdit_buscar->setMaximumSize(QSize(250, 16777215));
        lineEdit_buscar->setFrame(true);
        lineEdit_buscar->setEchoMode(QLineEdit::NoEcho);
        lineEdit_buscar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_buscar->setDragEnabled(false);

        horizontalLayout->addWidget(lineEdit_buscar);

        pushButton_buscar = new QPushButton(layoutWidget_2);
        pushButton_buscar->setObjectName(QString::fromUtf8("pushButton_buscar"));
        sizePolicy.setHeightForWidth(pushButton_buscar->sizePolicy().hasHeightForWidth());
        pushButton_buscar->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/monotone_search_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_buscar->setIcon(icon3);
        pushButton_buscar->setIconSize(QSize(16, 16));
        pushButton_buscar->setFlat(true);

        horizontalLayout->addWidget(pushButton_buscar);


        verticalLayout_2->addLayout(horizontalLayout);

        tableView_colaboradores = new QTableView(layoutWidget_2);
        tableView_colaboradores->setObjectName(QString::fromUtf8("tableView_colaboradores"));
        tableView_colaboradores->setAlternatingRowColors(true);
        tableView_colaboradores->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView_colaboradores->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_colaboradores->setShowGrid(false);
        tableView_colaboradores->setGridStyle(Qt::NoPen);

        verticalLayout_2->addWidget(tableView_colaboradores);

        splitter->addWidget(layoutWidget_2);

        horizontalLayout_2->addWidget(splitter);


        retranslateUi(ui_module_colaboradores);

        QMetaObject::connectSlotsByName(ui_module_colaboradores);
    } // setupUi

    void retranslateUi(QWidget *ui_module_colaboradores)
    {
        ui_module_colaboradores->setWindowTitle(QApplication::translate("ui_module_colaboradores", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_nuevo->setText(QApplication::translate("ui_module_colaboradores", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_editar->setText(QApplication::translate("ui_module_colaboradores", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar->setText(QApplication::translate("ui_module_colaboradores", "Eliminar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_buscar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_buscar->setText(QString());
        lineEdit_buscar->setPlaceholderText(QApplication::translate("ui_module_colaboradores", "Buscar . . .", 0, QApplication::UnicodeUTF8));
        pushButton_buscar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_colaboradores: public Ui_ui_module_colaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_COLABORADORES_H
