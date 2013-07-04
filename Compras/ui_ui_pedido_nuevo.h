/********************************************************************************
** Form generated from reading UI file 'ui_pedido_nuevo.ui'
**
** Created: Fri 8. Mar 14:29:50 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PEDIDO_NUEVO_H
#define UI_UI_PEDIDO_NUEVO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_pedido_nuevo
{
public:
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QPushButton *pushButton_ingresarArticulos;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QTableView *tableView;
    QLabel *label_9;
    QFrame *line;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ui_pedido_nuevo)
    {
        if (ui_pedido_nuevo->objectName().isEmpty())
            ui_pedido_nuevo->setObjectName(QString::fromUtf8("ui_pedido_nuevo"));
        ui_pedido_nuevo->resize(761, 517);
        pushButton_2 = new QPushButton(ui_pedido_nuevo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 90, 51, 23));
        lineEdit_2 = new QLineEdit(ui_pedido_nuevo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 90, 231, 20));
        comboBox = new QComboBox(ui_pedido_nuevo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 160, 69, 22));
        pushButton_ingresarArticulos = new QPushButton(ui_pedido_nuevo);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));
        pushButton_ingresarArticulos->setGeometry(QRect(20, 220, 101, 23));
        label_2 = new QLabel(ui_pedido_nuevo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 61, 16));
        label_5 = new QLabel(ui_pedido_nuevo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 50, 81, 16));
        lineEdit = new QLineEdit(ui_pedido_nuevo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 10, 231, 20));
        label_3 = new QLabel(ui_pedido_nuevo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 10, 101, 20));
        layoutWidget = new QWidget(ui_pedido_nuevo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 450, 261, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 2, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 1, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 1, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 1, 2, 1, 1);

        lineEdit_5 = new QLineEdit(ui_pedido_nuevo);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 130, 231, 20));
        label_7 = new QLabel(ui_pedido_nuevo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 170, 81, 16));
        dateEdit = new QDateEdit(ui_pedido_nuevo);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(610, 10, 110, 22));
        lineEdit_3 = new QLineEdit(ui_pedido_nuevo);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 50, 61, 20));
        comboBox_2 = new QComboBox(ui_pedido_nuevo);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(260, 160, 69, 22));
        tableView = new QTableView(ui_pedido_nuevo);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 260, 701, 171));
        label_9 = new QLabel(ui_pedido_nuevo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 130, 81, 16));
        line = new QFrame(ui_pedido_nuevo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 200, 691, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(ui_pedido_nuevo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 170, 61, 16));
        pushButton_6 = new QPushButton(ui_pedido_nuevo);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 510, 75, 23));
        label_4 = new QLabel(ui_pedido_nuevo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 40, 91, 20));
        label = new QLabel(ui_pedido_nuevo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 46, 13));
        pushButton_5 = new QPushButton(ui_pedido_nuevo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 510, 75, 23));
        label_6 = new QLabel(ui_pedido_nuevo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 50, 16, 16));
        pushButton_7 = new QPushButton(ui_pedido_nuevo);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(360, 130, 51, 23));
        lineEdit_4 = new QLineEdit(ui_pedido_nuevo);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(230, 50, 111, 20));
        pushButton_4 = new QPushButton(ui_pedido_nuevo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 510, 75, 23));
        dateEdit_2 = new QDateEdit(ui_pedido_nuevo);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(610, 40, 110, 22));
        pushButton_3 = new QPushButton(ui_pedido_nuevo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 510, 75, 23));

        retranslateUi(ui_pedido_nuevo);

        QMetaObject::connectSlotsByName(ui_pedido_nuevo);
    } // setupUi

    void retranslateUi(QWidget *ui_pedido_nuevo)
    {
        ui_pedido_nuevo->setWindowTitle(QApplication::translate("ui_pedido_nuevo", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_pedido_nuevo", "Buscar", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_pedido_nuevo", "SOLES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_pedido_nuevo", "DOLARES", 0, QApplication::UnicodeUTF8)
        );
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_pedido_nuevo", "Ingresar art\303\255culos", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_pedido_nuevo", "Proveedor:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_pedido_nuevo", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_pedido_nuevo", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_pedido_nuevo", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_pedido_nuevo", "IGV:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_pedido_nuevo", "Total:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_pedido_nuevo", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ui_pedido_nuevo", "CON IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_pedido_nuevo", "SIN IGV", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("ui_pedido_nuevo", "Transportista:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_pedido_nuevo", "Modalidad:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ui_pedido_nuevo", "Imprimir", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_pedido_nuevo", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_pedido_nuevo", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ui_pedido_nuevo", "Mail", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_pedido_nuevo", "  -", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ui_pedido_nuevo", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ui_pedido_nuevo", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_pedido_nuevo", "Registrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_pedido_nuevo: public Ui_ui_pedido_nuevo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PEDIDO_NUEVO_H
