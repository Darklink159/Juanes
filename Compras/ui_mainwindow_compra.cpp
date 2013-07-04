#include "ui_mainwindow_compra.h"
#include "ui_ui_mainwindow_compra.h"

Ui_MainWindow_Compra::Ui_MainWindow_Compra(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ui_MainWindow_Compra)
{
    ui->setupUi(this);

    widget_base = new Ui_Widget_Compra_Base;

    setCentralWidget(widget_base);

}

Ui_MainWindow_Compra::~Ui_MainWindow_Compra()
{
    delete ui;
}
