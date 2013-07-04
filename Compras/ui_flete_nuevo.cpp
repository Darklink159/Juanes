#include "ui_flete_nuevo.h"
#include "ui_ui_flete_nuevo.h"

ui_flete_nuevo::ui_flete_nuevo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_flete_nuevo)
{
    ui->setupUi(this);
}

ui_flete_nuevo::~ui_flete_nuevo()
{
    delete ui;
}
