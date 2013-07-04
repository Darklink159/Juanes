#include "ui_colaborador.h"
#include "ui_ui_colaborador.h"

ui_colaborador::ui_colaborador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_colaborador)
{
    ui->setupUi(this);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM e_colaborador");
    model->setHeaderData(0, Qt::Horizontal, tr("Nombre"));
    model->setHeaderData(1, Qt::Horizontal, tr("Salary"));
    ui->tableView_colaboradores->setModel(model);
}

ui_colaborador::~ui_colaborador()
{
    delete ui;
}
