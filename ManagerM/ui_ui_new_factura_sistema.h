/********************************************************************************
** Form generated from reading UI file 'ui_new_factura_sistema.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_FACTURA_SISTEMA_H
#define UI_UI_NEW_FACTURA_SISTEMA_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_factura_sistema
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox_serie;
    QFrame *line;
    QLabel *label_2;
    QSpinBox *spinBox_numero_i;
    QLabel *label_3;
    QSpinBox *spinBox_numero_f;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QPushButton *pushButton_new;
    QPushButton *pushButton_cancelar;

    void setupUi(QWidget *ui_new_factura_sistema)
    {
        if (ui_new_factura_sistema->objectName().isEmpty())
            ui_new_factura_sistema->setObjectName(QString::fromUtf8("ui_new_factura_sistema"));
        ui_new_factura_sistema->resize(223, 144);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_new_factura_sistema->sizePolicy().hasHeightForWidth());
        ui_new_factura_sistema->setSizePolicy(sizePolicy);
        ui_new_factura_sistema->setMinimumSize(QSize(223, 114));
        ui_new_factura_sistema->setMaximumSize(QSize(223, 153));
        ui_new_factura_sistema->setSizeIncrement(QSize(223, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_factura_sistema->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ui_new_factura_sistema);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 9);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ui_new_factura_sistema);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_serie = new QSpinBox(ui_new_factura_sistema);
        spinBox_serie->setObjectName(QString::fromUtf8("spinBox_serie"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_serie->sizePolicy().hasHeightForWidth());
        spinBox_serie->setSizePolicy(sizePolicy1);
        spinBox_serie->setFont(font);
        spinBox_serie->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_serie->setMaximum(1000000);

        gridLayout->addWidget(spinBox_serie, 0, 1, 1, 1);

        line = new QFrame(ui_new_factura_sistema);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_2 = new QLabel(ui_new_factura_sistema);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinBox_numero_i = new QSpinBox(ui_new_factura_sistema);
        spinBox_numero_i->setObjectName(QString::fromUtf8("spinBox_numero_i"));
        sizePolicy1.setHeightForWidth(spinBox_numero_i->sizePolicy().hasHeightForWidth());
        spinBox_numero_i->setSizePolicy(sizePolicy1);
        spinBox_numero_i->setFont(font);
        spinBox_numero_i->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_numero_i->setMaximum(1000000);

        gridLayout->addWidget(spinBox_numero_i, 2, 1, 1, 1);

        label_3 = new QLabel(ui_new_factura_sistema);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinBox_numero_f = new QSpinBox(ui_new_factura_sistema);
        spinBox_numero_f->setObjectName(QString::fromUtf8("spinBox_numero_f"));
        sizePolicy1.setHeightForWidth(spinBox_numero_f->sizePolicy().hasHeightForWidth());
        spinBox_numero_f->setSizePolicy(sizePolicy1);
        spinBox_numero_f->setFont(font);
        spinBox_numero_f->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_numero_f->setMaximum(1000000);

        gridLayout->addWidget(spinBox_numero_f, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        splitter = new QSplitter(ui_new_factura_sistema);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_new = new QPushButton(splitter);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_new->sizePolicy().hasHeightForWidth());
        pushButton_new->setSizePolicy(sizePolicy2);
        pushButton_new->setFont(font);
        pushButton_new->setIconSize(QSize(20, 20));
        pushButton_new->setFlat(false);
        splitter->addWidget(pushButton_new);
        pushButton_cancelar = new QPushButton(splitter);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));
        sizePolicy2.setHeightForWidth(pushButton_cancelar->sizePolicy().hasHeightForWidth());
        pushButton_cancelar->setSizePolicy(sizePolicy2);
        pushButton_cancelar->setFont(font);
        splitter->addWidget(pushButton_cancelar);

        horizontalLayout->addWidget(splitter);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        line->raise();
        pushButton_cancelar->raise();

        retranslateUi(ui_new_factura_sistema);

        QMetaObject::connectSlotsByName(ui_new_factura_sistema);
    } // setupUi

    void retranslateUi(QWidget *ui_new_factura_sistema)
    {
        ui_new_factura_sistema->setWindowTitle(QApplication::translate("ui_new_factura_sistema", "Nueva Factura", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_factura_sistema", "Serie", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_factura_sistema", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_factura_sistema", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_new_factura_sistema", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_factura_sistema", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_factura_sistema: public Ui_ui_new_factura_sistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_FACTURA_SISTEMA_H
