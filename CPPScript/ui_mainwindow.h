/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 14. Apr 20:21:44 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *l_manager;
    QLabel *l_database_2;
    QLabel *l_database_5;
    QLabel *l_database_3;
    QLabel *l_database;
    QLineEdit *le_host;
    QLineEdit *le_username;
    QLineEdit *le_database;
    QLineEdit *le_pass;
    QLabel *l_database_4;
    QLineEdit *le_port;
    QComboBox *cb_manager;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_connect;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(330, 230);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_manager = new QLabel(centralWidget);
        l_manager->setObjectName(QString::fromUtf8("l_manager"));

        gridLayout->addWidget(l_manager, 0, 0, 1, 1);

        l_database_2 = new QLabel(centralWidget);
        l_database_2->setObjectName(QString::fromUtf8("l_database_2"));

        gridLayout->addWidget(l_database_2, 2, 0, 1, 1);

        l_database_5 = new QLabel(centralWidget);
        l_database_5->setObjectName(QString::fromUtf8("l_database_5"));

        gridLayout->addWidget(l_database_5, 4, 0, 1, 1);

        l_database_3 = new QLabel(centralWidget);
        l_database_3->setObjectName(QString::fromUtf8("l_database_3"));

        gridLayout->addWidget(l_database_3, 5, 0, 1, 1);

        l_database = new QLabel(centralWidget);
        l_database->setObjectName(QString::fromUtf8("l_database"));

        gridLayout->addWidget(l_database, 7, 0, 1, 1);

        le_host = new QLineEdit(centralWidget);
        le_host->setObjectName(QString::fromUtf8("le_host"));

        gridLayout->addWidget(le_host, 2, 2, 1, 1);

        le_username = new QLineEdit(centralWidget);
        le_username->setObjectName(QString::fromUtf8("le_username"));

        gridLayout->addWidget(le_username, 4, 2, 1, 1);

        le_database = new QLineEdit(centralWidget);
        le_database->setObjectName(QString::fromUtf8("le_database"));

        gridLayout->addWidget(le_database, 7, 2, 1, 1);

        le_pass = new QLineEdit(centralWidget);
        le_pass->setObjectName(QString::fromUtf8("le_pass"));
        le_pass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(le_pass, 5, 2, 1, 1);

        l_database_4 = new QLabel(centralWidget);
        l_database_4->setObjectName(QString::fromUtf8("l_database_4"));

        gridLayout->addWidget(l_database_4, 3, 0, 1, 1);

        le_port = new QLineEdit(centralWidget);
        le_port->setObjectName(QString::fromUtf8("le_port"));

        gridLayout->addWidget(le_port, 3, 2, 1, 1);

        cb_manager = new QComboBox(centralWidget);
        cb_manager->setObjectName(QString::fromUtf8("cb_manager"));

        gridLayout->addWidget(cb_manager, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_connect = new QPushButton(centralWidget);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));

        horizontalLayout_2->addWidget(btn_connect);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        l_manager->setText(QApplication::translate("MainWindow", "Choose Manager:", 0, QApplication::UnicodeUTF8));
        l_database_2->setText(QApplication::translate("MainWindow", "Host:", 0, QApplication::UnicodeUTF8));
        l_database_5->setText(QApplication::translate("MainWindow", "Username:", 0, QApplication::UnicodeUTF8));
        l_database_3->setText(QApplication::translate("MainWindow", "Password:", 0, QApplication::UnicodeUTF8));
        l_database->setText(QApplication::translate("MainWindow", " Database:", 0, QApplication::UnicodeUTF8));
        l_database_4->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        btn_connect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
