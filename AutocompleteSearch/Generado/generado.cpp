#include "generado.h"
#include "ui_generado.h"
#include <QStringListModel>
Generado::Generado(QWidget *parent) :
QWidget(parent),
ui(new Ui::Generado)
{
	ui->setupUi(this);
	table_name = "e_articulo";
	QCompleter * c0 = new QCompleter(this);
	QStringList list0= SYSTEM->getListOfValues(table_name,"pk_articulo") ;
	QStringListModel * model0= new QStringListModel(this);
	model0->setStringList(list0);
	c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c0->setCaseSensitivity(Qt::CaseInsensitive);
	c0->setWrapAround(false);
	c0->setModel(model0);
	ui->le_pk_articulo->setCompleter(c0);

	QCompleter * c1 = new QCompleter(this);
	QStringList list1= SYSTEM->getListOfValues(table_name,"fk_grupo") ;
	QStringListModel * model1= new QStringListModel(this);
	model1->setStringList(list1);
	c1->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c1->setCaseSensitivity(Qt::CaseInsensitive);
	c1->setWrapAround(false);
	c1->setModel(model1);
	ui->le_fk_grupo->setCompleter(c1);

	QCompleter * c2 = new QCompleter(this);
	QStringList list2= SYSTEM->getListOfValues(table_name,"fk_marca") ;
	QStringListModel * model2= new QStringListModel(this);
	model2->setStringList(list2);
	c2->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c2->setCaseSensitivity(Qt::CaseInsensitive);
	c2->setWrapAround(false);
	c2->setModel(model2);
	ui->le_fk_marca->setCompleter(c2);

	table_model = new QSqlRelationalTableModel();
	table_model->setTable(table_name);
	table_model->select();
	ui->tableView->setModel(table_model);
}
void Generado::refreshTableView()
{
	QString filtro;
	bool primero = true;
	if(!ui->le_pk_articulo->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="pk_articulo='"+ui->le_pk_articulo->text()+"'";
	}
	if(!ui->le_fk_grupo->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="fk_grupo='"+ui->le_fk_grupo->text()+"'";
	}
	if(!ui->le_fk_marca->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="fk_marca='"+ui->le_fk_marca->text()+"'";
	}
	table_model->setFilter(filtro);
	table_model->select();
}
void Generado::on_le_pk_articulo_editingFinished()
{
	refreshTableView();
}
void Generado::on_le_fk_grupo_editingFinished()
{
	refreshTableView();
}
void Generado::on_le_fk_marca_editingFinished()
{
	refreshTableView();
}
Generado::~Generado()
{
	delete ui;
}
