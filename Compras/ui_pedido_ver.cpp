#include "ui_pedido_ver.h"
#include "ui_ui_pedido_ver.h"

ui_pedido_ver::ui_pedido_ver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_pedido_ver)
{
    ui->setupUi(this);
    /*
    QWidget *w = new QWidget;
    w->setStyleSheet("background-color: rgb(85, 170, 127);");
    w->resize(this->size());
    */
    this->setStyleSheet("background-color: rgb(85, 170, 127);");
    //w->show();
}

ui_pedido_ver::~ui_pedido_ver()
{
    delete ui;
}
