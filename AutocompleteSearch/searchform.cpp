#include "searchform.h"
#include "ui_searchform.h"
#include <QStringListModel>
#include <QDebug>

SearchForm::SearchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchForm)
{
    ui->setupUi(this);

    table_name = "tabla";

    c = new QCompleter(this);
    QStringList list;
    list<<"hola"<<"haber"<<"hay"<<"ha"<<"tambien"<<"tambor"<<"tata"
          <<"hola"<<"haber"<<"hay"<<"ha"<<"tambien"<<"tambor"<<"tata";
    list.sort();
    QStringListModel * model = new QStringListModel();
    model->setStringList(list);

    c->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    c->setCaseSensitivity(Qt::CaseInsensitive);
    c->setWrapAround(false);
    c->setModel(model);


    ui->le_nombre->setCompleter(c);


     table_model = new QSqlRelationalTableModel();
     table_model->setTable("e_marca");

    table_model->select();

    ui->tableView->setModel(table_model);

}

SearchForm::~SearchForm()
{
    delete ui;
}


void SearchForm::on_le_nombre_editingFinished()
{
    refreshTableView();
}

void SearchForm::refreshTableView()
{
    QString filtro;
    bool primero = true;
    if(!ui->le_nombre->text().isEmpty())
    {
        if(primero)
        {
            primero = false;
        }
        else
        {
            filtro+=" AND ";
        }
        filtro+="descripcion='"+ui->le_nombre->text()+"'";
    }

    if(!ui->lineEdit->text().isEmpty())
    {
        if(primero)
        {
            primero = false;
        }
        else
        {
            filtro+=" AND ";
        }
        filtro+="pk_marca='"+ui->lineEdit->text()+"'";
    }

    qDebug()<<filtro;

    table_model->setFilter(filtro);
    table_model->select();

}

void SearchForm::on_lineEdit_editingFinished()
{
    refreshTableView();
}
