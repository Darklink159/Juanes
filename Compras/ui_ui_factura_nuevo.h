/********************************************************************************
** Form generated from reading UI file 'ui_factura_nuevo.ui'
**
** Created: Fri 8. Mar 14:29:50 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_FACTURA_NUEVO_H
#define UI_UI_FACTURA_NUEVO_H

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

class Ui_ui_factura_nuevo
{
public:
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QComboBox *comboBox;
    QTableView *tableView;
    QLineEdit *lineEdit_5;
    QFrame *line;
    QLabel *label;
    QPushButton *pushButton_ingresarArticulos;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QLabel *label_6;

    void setupUi(QWidget *ui_factura_nuevo)
    {
        if (ui_factura_nuevo->objectName().isEmpty())
            ui_factura_nuevo->setObjectName(QString::fromUtf8("ui_factura_nuevo"));
        ui_factura_nuevo->resize(763, 511);
        lineEdit_3 = new QLineEdit(ui_factura_nuevo);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 50, 61, 20));
        label_2 = new QLabel(ui_factura_nuevo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 61, 16));
        label_3 = new QLabel(ui_factura_nuevo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 10, 101, 20));
        pushButton_6 = new QPushButton(ui_factura_nuevo);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 500, 75, 23));
        dateEdit_2 = new QDateEdit(ui_factura_nuevo);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(580, 40, 110, 22));
        lineEdit_2 = new QLineEdit(ui_factura_nuevo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 90, 231, 20));
        lineEdit_4 = new QLineEdit(ui_factura_nuevo);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 50, 111, 20));
        comboBox_2 = new QComboBox(ui_factura_nuevo);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(260, 120, 69, 22));
        lineEdit = new QLineEdit(ui_factura_nuevo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 231, 20));
        comboBox_3 = new QComboBox(ui_factura_nuevo);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 160, 71, 22));
        pushButton_4 = new QPushButton(ui_factura_nuevo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 500, 75, 23));
        label_7 = new QLabel(ui_factura_nuevo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 130, 81, 16));
        pushButton_2 = new QPushButton(ui_factura_nuevo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 90, 51, 23));
        layoutWidget = new QWidget(ui_factura_nuevo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 450, 311, 41));
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

        comboBox = new QComboBox(ui_factura_nuevo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 120, 69, 22));
        tableView = new QTableView(ui_factura_nuevo);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 260, 691, 181));
        lineEdit_5 = new QLineEdit(ui_factura_nuevo);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 160, 113, 20));
        line = new QFrame(ui_factura_nuevo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 200, 691, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(ui_factura_nuevo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 46, 13));
        pushButton_ingresarArticulos = new QPushButton(ui_factura_nuevo);
        pushButton_ingresarArticulos->setObjectName(QString::fromUtf8("pushButton_ingresarArticulos"));
        pushButton_ingresarArticulos->setGeometry(QRect(10, 220, 101, 23));
        label_5 = new QLabel(ui_factura_nuevo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 81, 16));
        pushButton_3 = new QPushButton(ui_factura_nuevo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 500, 75, 23));
        label_4 = new QLabel(ui_factura_nuevo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 40, 91, 20));
        label_8 = new QLabel(ui_factura_nuevo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(190, 130, 61, 16));
        dateEdit = new QDateEdit(ui_factura_nuevo);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(580, 10, 110, 22));
        pushButton_5 = new QPushButton(ui_factura_nuevo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 500, 75, 23));
        label_9 = new QLabel(ui_factura_nuevo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 170, 61, 16));
        label_6 = new QLabel(ui_factura_nuevo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 50, 16, 16));

        retranslateUi(ui_factura_nuevo);

        QMetaObject::connectSlotsByName(ui_factura_nuevo);
    } // setupUi

    void retranslateUi(QWidget *ui_factura_nuevo)
    {
        ui_factura_nuevo->setWindowTitle(QApplication::translate("ui_factura_nuevo", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_factura_nuevo", "Proveedor:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_factura_nuevo", "Fecha de emisi\303\263n:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ui_factura_nuevo", "Imprimir", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ui_factura_nuevo", "CON IGV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_factura_nuevo", "SIN IGV", 0, QApplication::UnicodeUTF8)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ui_factura_nuevo", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_factura_nuevo", "Si", 0, QApplication::UnicodeUTF8)
        );
        pushButton_4->setText(QApplication::translate("ui_factura_nuevo", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_factura_nuevo", "Tipo de moneda:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_factura_nuevo", "Buscar", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_factura_nuevo", "Sub Total:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_factura_nuevo", "IGV:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_factura_nuevo", "Total:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_factura_nuevo", "SOLES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_factura_nuevo", "DOLARES", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("ui_factura_nuevo", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        pushButton_ingresarArticulos->setText(QApplication::translate("ui_factura_nuevo", "Ingresar art\303\255culos", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_factura_nuevo", "Serie y n\303\272mero:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_factura_nuevo", "Registrar", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_factura_nuevo", "Fecha de sistema:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_factura_nuevo", "Modalidad:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ui_factura_nuevo", "Mail", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_factura_nuevo", "Percepci\303\263n:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_factura_nuevo", "  -", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_factura_nuevo: public Ui_ui_factura_nuevo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_FACTURA_NUEVO_H
