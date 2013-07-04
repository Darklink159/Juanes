#include "ui_gremisionr_nuevo.h"
#include "ui_ui_gremisionr_nuevo.h"

ui_gremisionr_nuevo::ui_gremisionr_nuevo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_gremisionr_nuevo)
{
    ui->setupUi(this);
}

ui_gremisionr_nuevo::~ui_gremisionr_nuevo()
{
    delete ui;
}
