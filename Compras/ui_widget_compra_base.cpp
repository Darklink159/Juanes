#include "ui_widget_compra_base.h"
#include "ui_ui_widget_compra_base.h"

Ui_Widget_Compra_Base::Ui_Widget_Compra_Base(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ui_Widget_Compra_Base)
{
    ui->setupUi(this);

    mainWindow_Factura = new Ui_MainWindow_Factura;

    ui->gridLayout_derecha->addWidget(mainWindow_Factura);

}

Ui_Widget_Compra_Base::~Ui_Widget_Compra_Base()
{
    delete ui;
}
