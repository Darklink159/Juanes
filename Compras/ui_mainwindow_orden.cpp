#include "ui_mainwindow_orden.h"
#include "ui_ui_mainwindow_orden.h"

Ui_MainWindow_Orden::Ui_MainWindow_Orden(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ui_MainWindow_Orden)
{
    ui->setupUi(this);
}

Ui_MainWindow_Orden::~Ui_MainWindow_Orden()
{
    delete ui;
}
