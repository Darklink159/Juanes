#include "ui_search_proveedor.h"
#include "ui_ui_search_proveedor.h"
#include <QStringListModel>
ui_search_proveedor::ui_search_proveedor(QWidget *parent) :
QWidget(parent),
ui(new Ui::ui_search_proveedor)
{
	ui->setupUi(this);
	table_name = "e_proveedor";
	QCompleter * c0 = new QCompleter(this);
	QStringList list0= SYSTEM->getListOfValues(table_name,"pk_ruc") ;
	QStringListModel * model0= new QStringListModel(this);
	model0->setStringList(list0);
	c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c0->setCaseSensitivity(Qt::CaseInsensitive);
	c0->setWrapAround(false);
	c0->setModel(model0);
	ui->le_pk_ruc->setCompleter(c0);

	QCompleter * c1 = new QCompleter(this);
	QStringList list1= SYSTEM->getListOfValues(table_name,"nombre_vendedor") ;
	QStringListModel * model1= new QStringListModel(this);
	model1->setStringList(list1);
	c1->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c1->setCaseSensitivity(Qt::CaseInsensitive);
	c1->setWrapAround(false);
	c1->setModel(model1);
	ui->le_nombre_vendedor->setCompleter(c1);

	table_model = new QSqlRelationalTableModel();
	table_model->setTable(table_name);
	table_model->select();
	ui->tableView->setModel(table_model);
}
void ui_search_proveedor::refreshTableView()
{
	QString filtro;
	bool primero = true;
	if(!ui->le_pk_ruc->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="pk_ruc='"+ui->le_pk_ruc->text()+"'";
	}
	if(!ui->le_nombre_vendedor->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="nombre_vendedor='"+ui->le_nombre_vendedor->text()+"'";
	}
	table_model->setFilter(filtro);
	table_model->select();
}
void ui_search_proveedor::on_le_pk_ruc_editingFinished()
{
	refreshTableView();
}
void ui_search_proveedor::on_le_nombre_vendedor_editingFinished()
{
	refreshTableView();
}
ui_search_proveedor::~ui_search_proveedor()
{
	delete ui;
}
