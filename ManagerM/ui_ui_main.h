/********************************************************************************
** Form generated from reading UI file 'ui_main.ui'
**
** Created: Sat 29. Jun 15:43:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAIN_H
#define UI_UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_main
{
public:
    QAction *actionAcerca_de_ManagerM;
    QAction *actionPantalla_Completa;
    QAction *actionInicial_Sesion;
    QAction *actionCerrar_Sesion;
    QAction *actionSalir;
    QAction *actionVentas;
    QAction *actionCliente;
    QAction *actionColaborador;
    QAction *actionNuevo;
    QAction *actionEditar;
    QAction *actionEliminar;
    QAction *actionTiendas;
    QAction *actionUsuarios;
    QAction *actionHome;
    QAction *actionCompras;
    QAction *actionArticulos;
    QAction *actionSistema;
    QAction *actionSapace;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QMenuBar *menuBar;
    QMenu *menuAyuda;
    QMenu *menuVentana;
    QMenu *menuEditar;
    QMenu *menuUsuario;
    QMenu *menuVer;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ui_main)
    {
        if (ui_main->objectName().isEmpty())
            ui_main->setObjectName(QString::fromUtf8("ui_main"));
        ui_main->resize(848, 671);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_main->sizePolicy().hasHeightForWidth());
        ui_main->setSizePolicy(sizePolicy);
        ui_main->setMinimumSize(QSize(848, 671));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Configure_alt_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_main->setWindowIcon(icon);
        ui_main->setStyleSheet(QString::fromUtf8(""));
        ui_main->setDocumentMode(false);
        actionAcerca_de_ManagerM = new QAction(ui_main);
        actionAcerca_de_ManagerM->setObjectName(QString::fromUtf8("actionAcerca_de_ManagerM"));
        actionPantalla_Completa = new QAction(ui_main);
        actionPantalla_Completa->setObjectName(QString::fromUtf8("actionPantalla_Completa"));
        actionInicial_Sesion = new QAction(ui_main);
        actionInicial_Sesion->setObjectName(QString::fromUtf8("actionInicial_Sesion"));
        actionCerrar_Sesion = new QAction(ui_main);
        actionCerrar_Sesion->setObjectName(QString::fromUtf8("actionCerrar_Sesion"));
        actionSalir = new QAction(ui_main);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionVentas = new QAction(ui_main);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionCliente = new QAction(ui_main);
        actionCliente->setObjectName(QString::fromUtf8("actionCliente"));
        actionColaborador = new QAction(ui_main);
        actionColaborador->setObjectName(QString::fromUtf8("actionColaborador"));
        actionNuevo = new QAction(ui_main);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEditar = new QAction(ui_main);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionEliminar = new QAction(ui_main);
        actionEliminar->setObjectName(QString::fromUtf8("actionEliminar"));
        actionTiendas = new QAction(ui_main);
        actionTiendas->setObjectName(QString::fromUtf8("actionTiendas"));
        actionUsuarios = new QAction(ui_main);
        actionUsuarios->setObjectName(QString::fromUtf8("actionUsuarios"));
        actionHome = new QAction(ui_main);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        actionCompras = new QAction(ui_main);
        actionCompras->setObjectName(QString::fromUtf8("actionCompras"));
        actionArticulos = new QAction(ui_main);
        actionArticulos->setObjectName(QString::fromUtf8("actionArticulos"));
        actionSistema = new QAction(ui_main);
        actionSistema->setObjectName(QString::fromUtf8("actionSistema"));
        actionSapace = new QAction(ui_main);
        actionSapace->setObjectName(QString::fromUtf8("actionSapace"));
        actionSapace->setEnabled(false);
        actionSapace->setPriority(QAction::LowPriority);
        centralWidget = new QWidget(ui_main);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        ui_main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ui_main);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 848, 21));
        menuBar->setLayoutDirection(Qt::LeftToRight);
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(false);
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuVentana = new QMenu(menuBar);
        menuVentana->setObjectName(QString::fromUtf8("menuVentana"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuUsuario = new QMenu(menuBar);
        menuUsuario->setObjectName(QString::fromUtf8("menuUsuario"));
        menuVer = new QMenu(menuBar);
        menuVer->setObjectName(QString::fromUtf8("menuVer"));
        ui_main->setMenuBar(menuBar);
        toolBar = new QToolBar(ui_main);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(true);
        ui_main->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuUsuario->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuVer->menuAction());
        menuBar->addAction(menuVentana->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuAyuda->addAction(actionAcerca_de_ManagerM);
        menuVentana->addAction(actionPantalla_Completa);
        menuEditar->addAction(actionNuevo);
        menuEditar->addAction(actionEditar);
        menuEditar->addAction(actionEliminar);
        menuEditar->addSeparator();
        menuUsuario->addAction(actionInicial_Sesion);
        menuUsuario->addSeparator();
        menuUsuario->addAction(actionSalir);
        menuVer->addAction(actionVentas);
        menuVer->addAction(actionCliente);
        menuVer->addAction(actionColaborador);
        menuVer->addAction(actionUsuarios);
        menuVer->addAction(actionCompras);
        menuVer->addAction(actionArticulos);
        menuVer->addAction(actionSistema);

        retranslateUi(ui_main);

        QMetaObject::connectSlotsByName(ui_main);
    } // setupUi

    void retranslateUi(QMainWindow *ui_main)
    {
        ui_main->setWindowTitle(QApplication::translate("ui_main", "ManagerM", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_ManagerM->setText(QApplication::translate("ui_main", "Acerca de ManagerM...", 0, QApplication::UnicodeUTF8));
        actionPantalla_Completa->setText(QApplication::translate("ui_main", "Pantalla Completa", 0, QApplication::UnicodeUTF8));
        actionPantalla_Completa->setShortcut(QApplication::translate("ui_main", "F11", 0, QApplication::UnicodeUTF8));
        actionInicial_Sesion->setText(QApplication::translate("ui_main", "Inicial Sesion", 0, QApplication::UnicodeUTF8));
        actionCerrar_Sesion->setText(QApplication::translate("ui_main", "Cerrar Sesion", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("ui_main", "Salir", 0, QApplication::UnicodeUTF8));
        actionSalir->setShortcut(QApplication::translate("ui_main", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("ui_main", "Ventas", 0, QApplication::UnicodeUTF8));
        actionVentas->setShortcut(QApplication::translate("ui_main", "Alt+V", 0, QApplication::UnicodeUTF8));
        actionCliente->setText(QApplication::translate("ui_main", "Clientee", 0, QApplication::UnicodeUTF8));
        actionCliente->setShortcut(QApplication::translate("ui_main", "Alt+E", 0, QApplication::UnicodeUTF8));
        actionColaborador->setText(QApplication::translate("ui_main", "Colaborador", 0, QApplication::UnicodeUTF8));
        actionColaborador->setShortcut(QApplication::translate("ui_main", "Alt+D", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("ui_main", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("ui_main", "Editar", 0, QApplication::UnicodeUTF8));
        actionEliminar->setText(QApplication::translate("ui_main", "Eliminar", 0, QApplication::UnicodeUTF8));
        actionTiendas->setText(QApplication::translate("ui_main", "Tiendas", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setText(QApplication::translate("ui_main", "Usuarios", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setShortcut(QApplication::translate("ui_main", "Alt+U", 0, QApplication::UnicodeUTF8));
        actionHome->setText(QApplication::translate("ui_main", "Home", 0, QApplication::UnicodeUTF8));
        actionHome->setShortcut(QApplication::translate("ui_main", "Alt+Backspace", 0, QApplication::UnicodeUTF8));
        actionCompras->setText(QApplication::translate("ui_main", "Compras", 0, QApplication::UnicodeUTF8));
        actionCompras->setShortcut(QApplication::translate("ui_main", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionArticulos->setText(QApplication::translate("ui_main", "Articulos", 0, QApplication::UnicodeUTF8));
        actionArticulos->setShortcut(QApplication::translate("ui_main", "Alt+A", 0, QApplication::UnicodeUTF8));
        actionSistema->setText(QApplication::translate("ui_main", "Sistema", 0, QApplication::UnicodeUTF8));
        actionSistema->setShortcut(QApplication::translate("ui_main", "Alt+S", 0, QApplication::UnicodeUTF8));
        actionSapace->setText(QApplication::translate("ui_main", " :.                                                                    .:", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("ui_main", "Ayuda", 0, QApplication::UnicodeUTF8));
        menuVentana->setTitle(QApplication::translate("ui_main", "Ventana", 0, QApplication::UnicodeUTF8));
        menuEditar->setTitle(QApplication::translate("ui_main", "Editar", 0, QApplication::UnicodeUTF8));
        menuUsuario->setTitle(QApplication::translate("ui_main", "Usuario", 0, QApplication::UnicodeUTF8));
        menuVer->setTitle(QApplication::translate("ui_main", "Ver", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("ui_main", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_main: public Ui_ui_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAIN_H
