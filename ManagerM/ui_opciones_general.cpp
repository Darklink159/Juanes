#include "ui_opciones_general.h"
#include "ui_ui_opciones_general.h"

ui_opciones_general::ui_opciones_general(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_general)
{
    ui->setupUi(this);
}

ui_opciones_general::~ui_opciones_general()
{
    delete ui;
}


void ui_opciones_general::on_pushButton_guardar_igv_clicked()
{

}
