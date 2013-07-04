#include "ui_mainwindow_factura.h"
#include "ui_ui_mainwindow_factura.h"

Ui_MainWindow_Factura::Ui_MainWindow_Factura(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ui_MainWindow_Factura)
{
    ui->setupUi(this);
}

Ui_MainWindow_Factura::~Ui_MainWindow_Factura()
{
    delete ui;
}
