/********************************************************************************
** Form generated from reading UI file 'ui_new_boleta_sistema.ui'
**
** Created: Sat 29. Jun 16:16:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_BOLETA_SISTEMA_H
#define UI_UI_NEW_BOLETA_SISTEMA_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_boleta_sistema
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
    QPushButton *pushButton_new;
    QPushButton *pushButton;

    void setupUi(QWidget *ui_new_boleta_sistema)
    {
        if (ui_new_boleta_sistema->objectName().isEmpty())
            ui_new_boleta_sistema->setObjectName(QString::fromUtf8("ui_new_boleta_sistema"));
        ui_new_boleta_sistema->setWindowModality(Qt::ApplicationModal);
        ui_new_boleta_sistema->resize(223, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_new_boleta_sistema->sizePolicy().hasHeightForWidth());
        ui_new_boleta_sistema->setSizePolicy(sizePolicy);
        ui_new_boleta_sistema->setMinimumSize(QSize(223, 114));
        ui_new_boleta_sistema->setMaximumSize(QSize(223, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("MS UI Gothic"));
        ui_new_boleta_sistema->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_boleta_sistema->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ui_new_boleta_sistema);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ui_new_boleta_sistema);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_serie = new QSpinBox(ui_new_boleta_sistema);
        spinBox_serie->setObjectName(QString::fromUtf8("spinBox_serie"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_serie->sizePolicy().hasHeightForWidth());
        spinBox_serie->setSizePolicy(sizePolicy1);
        spinBox_serie->setMinimumSize(QSize(100, 0));
        spinBox_serie->setMaximumSize(QSize(100, 16777215));
        spinBox_serie->setFont(font1);
        spinBox_serie->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_serie->setMaximum(1000000);

        gridLayout->addWidget(spinBox_serie, 0, 1, 1, 1);

        line = new QFrame(ui_new_boleta_sistema);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_2 = new QLabel(ui_new_boleta_sistema);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinBox_numero_i = new QSpinBox(ui_new_boleta_sistema);
        spinBox_numero_i->setObjectName(QString::fromUtf8("spinBox_numero_i"));
        sizePolicy1.setHeightForWidth(spinBox_numero_i->sizePolicy().hasHeightForWidth());
        spinBox_numero_i->setSizePolicy(sizePolicy1);
        spinBox_numero_i->setMinimumSize(QSize(100, 0));
        spinBox_numero_i->setMaximumSize(QSize(100, 16777215));
        spinBox_numero_i->setFont(font1);
        spinBox_numero_i->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_numero_i->setMaximum(1000000);

        gridLayout->addWidget(spinBox_numero_i, 2, 1, 1, 1);

        label_3 = new QLabel(ui_new_boleta_sistema);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinBox_numero_f = new QSpinBox(ui_new_boleta_sistema);
        spinBox_numero_f->setObjectName(QString::fromUtf8("spinBox_numero_f"));
        sizePolicy1.setHeightForWidth(spinBox_numero_f->sizePolicy().hasHeightForWidth());
        spinBox_numero_f->setSizePolicy(sizePolicy1);
        spinBox_numero_f->setMinimumSize(QSize(100, 0));
        spinBox_numero_f->setMaximumSize(QSize(100, 16777215));
        spinBox_numero_f->setFont(font1);
        spinBox_numero_f->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_numero_f->setMaximum(1000000);

        gridLayout->addWidget(spinBox_numero_f, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_new = new QPushButton(ui_new_boleta_sistema);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        pushButton_new->setFont(font1);
        pushButton_new->setIconSize(QSize(20, 20));
        pushButton_new->setFlat(false);

        horizontalLayout->addWidget(pushButton_new);

        pushButton = new QPushButton(ui_new_boleta_sistema);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(ui_new_boleta_sistema);

        QMetaObject::connectSlotsByName(ui_new_boleta_sistema);
    } // setupUi

    void retranslateUi(QWidget *ui_new_boleta_sistema)
    {
        ui_new_boleta_sistema->setWindowTitle(QApplication::translate("ui_new_boleta_sistema", "Nueva Boleta", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_boleta_sistema", "Serie", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_boleta_sistema", "N\303\272mero Inicio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_boleta_sistema", "N\303\272mero Fin", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QApplication::translate("ui_new_boleta_sistema", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_new_boleta_sistema", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_boleta_sistema: public Ui_ui_new_boleta_sistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_BOLETA_SISTEMA_H
