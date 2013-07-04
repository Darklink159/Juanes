#include "ui_gremisionr.h"
#include "ui_ui_gremisionr.h"

ui_gremisionr::ui_gremisionr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_gremisionr)
{
    ui->setupUi(this);
}

ui_gremisionr::~ui_gremisionr()
{
    delete ui;
}
