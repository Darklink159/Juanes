#include "ui_new_igv.h"
#include "ui_ui_new_igv.h"

ui_new_igv::ui_new_igv(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_igv)
{
    ui->setupUi(this);
}

ui_new_igv::~ui_new_igv()
{
    delete ui;
}
