#include "ui_gremisionr_ver.h"
#include "ui_ui_gremisionr_ver.h"

ui_gremisionr_ver::ui_gremisionr_ver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_gremisionr_ver)
{
    ui->setupUi(this);
}

ui_gremisionr_ver::~ui_gremisionr_ver()
{
    delete ui;
}
