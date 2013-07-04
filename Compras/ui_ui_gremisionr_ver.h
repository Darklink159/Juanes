/********************************************************************************
** Form generated from reading UI file 'ui_gremisionr_ver.ui'
**
** Created: Thu 7. Mar 15:12:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_GREMISIONR_VER_H
#define UI_UI_GREMISIONR_VER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_gremisionr_ver
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *ui_gremisionr_ver)
    {
        if (ui_gremisionr_ver->objectName().isEmpty())
            ui_gremisionr_ver->setObjectName(QString::fromUtf8("ui_gremisionr_ver"));
        ui_gremisionr_ver->resize(760, 504);
        pushButton = new QPushButton(ui_gremisionr_ver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 350, 75, 23));
        comboBox = new QComboBox(ui_gremisionr_ver);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 111, 22));
        pushButton_2 = new QPushButton(ui_gremisionr_ver);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 350, 75, 23));
        tableView = new QTableView(ui_gremisionr_ver);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 120, 631, 221));
        label = new QLabel(ui_gremisionr_ver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        lineEdit = new QLineEdit(ui_gremisionr_ver);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 80, 113, 20));

        retranslateUi(ui_gremisionr_ver);

        QMetaObject::connectSlotsByName(ui_gremisionr_ver);
    } // setupUi

    void retranslateUi(QWidget *ui_gremisionr_ver)
    {
        ui_gremisionr_ver->setWindowTitle(QApplication::translate("ui_gremisionr_ver", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_gremisionr_ver", "Ingresar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_gremisionr_ver", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_gremisionr_ver", "Buscar por:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_gremisionr_ver: public Ui_ui_gremisionr_ver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_GREMISIONR_VER_H
