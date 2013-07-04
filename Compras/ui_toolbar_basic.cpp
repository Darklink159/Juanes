#include "ui_toolbar_basic.h"
#include "ui_ui_toolbar_basic.h"

ui_toolbar_basic::ui_toolbar_basic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ui_toolbar_basic)
{
    ui->setupUi(this);
    /*
    QWidget *w = new QWidget;

    this->setParent(w);
    w->show();
    */


}

ui_toolbar_basic::~ui_toolbar_basic()
{
    delete ui;
}
