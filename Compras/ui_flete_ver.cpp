#include "ui_flete_ver.h"
#include "ui_ui_flete_ver.h"

ui_flete_ver::ui_flete_ver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_flete_ver)
{
    ui->setupUi(this);
}

ui_flete_ver::~ui_flete_ver()
{
    delete ui;
}
