#include "ui_flete.h"
#include "ui_ui_flete.h"

ui_flete::ui_flete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_flete)
{
    ui->setupUi(this);
}

ui_flete::~ui_flete()
{
    delete ui;
}
