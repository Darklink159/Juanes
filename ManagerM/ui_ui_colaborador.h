/********************************************************************************
** Form generated from reading UI file 'ui_colaborador.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_COLABORADOR_H
#define UI_UI_COLABORADOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_colaborador
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView_colaboradores;

    void setupUi(QWidget *ui_colaborador)
    {
        if (ui_colaborador->objectName().isEmpty())
            ui_colaborador->setObjectName(QString::fromUtf8("ui_colaborador"));
        ui_colaborador->setWindowModality(Qt::ApplicationModal);
        ui_colaborador->resize(693, 372);
        pushButton = new QPushButton(ui_colaborador);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 60, 75, 23));
        pushButton_2 = new QPushButton(ui_colaborador);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 60, 75, 23));
        pushButton_3 = new QPushButton(ui_colaborador);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 60, 75, 23));
        tableView_colaboradores = new QTableView(ui_colaborador);
        tableView_colaboradores->setObjectName(QString::fromUtf8("tableView_colaboradores"));
        tableView_colaboradores->setGeometry(QRect(50, 120, 361, 211));

        retranslateUi(ui_colaborador);

        QMetaObject::connectSlotsByName(ui_colaborador);
    } // setupUi

    void retranslateUi(QWidget *ui_colaborador)
    {
        ui_colaborador->setWindowTitle(QApplication::translate("ui_colaborador", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_colaborador", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_colaborador", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_colaborador", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_colaborador: public Ui_ui_colaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_COLABORADOR_H
