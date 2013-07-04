#include "ui_new_articulo.h"
#include "ui_ui_new_articulo.h"
#include <QStringListModel>
ui_new_articulo::ui_new_articulo(QWidget *parent) :
QWidget(parent),
ui(new Ui::ui_new_articulo)
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
	QStringList list1= SYSTEM->getListOfValues(table_name,"fk_marca") ;
	QStringListModel * model1= new QStringListModel(this);
	model1->setStringList(list1);
	c1->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c1->setCaseSensitivity(Qt::CaseInsensitive);
	c1->setWrapAround(false);
	c1->setModel(model1);
	ui->le_fk_marca->setCompleter(c1);

	QCompleter * c2 = new QCompleter(this);
	QStringList list2= SYSTEM->getListOfValues(table_name,"descripcion") ;
	QStringListModel * model2= new QStringListModel(this);
	model2->setStringList(list2);
	c2->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c2->setCaseSensitivity(Qt::CaseInsensitive);
	c2->setWrapAround(false);
	c2->setModel(model2);
	ui->le_descripcion->setCompleter(c2);

	QCompleter * c3 = new QCompleter(this);
	QStringList list3= SYSTEM->getListOfValues(table_name,"fk_medida") ;
	QStringListModel * model3= new QStringListModel(this);
	model3->setStringList(list3);
	c3->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c3->setCaseSensitivity(Qt::CaseInsensitive);
	c3->setWrapAround(false);
	c3->setModel(model3);
	ui->le_fk_medida->setCompleter(c3);

	table_model = new QSqlRelationalTableModel();
	table_model->setTable(table_name);
	table_model->select();
	ui->tableView->setModel(table_model);
}
void ui_new_articulo::refreshTableView()
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
	if(!ui->le_descripcion->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="descripcion='"+ui->le_descripcion->text()+"'";
	}
	if(!ui->le_fk_medida->text().isEmpty())
	{
 		if(primero)
		{
			primero = false;
		}
		else
		{
			filtro+=" AND ";
		}
	filtro+="fk_medida='"+ui->le_fk_medida->text()+"'";
	}
	table_model->setFilter(filtro);
	table_model->select();
}
void ui_new_articulo::on_le_pk_articulo_editingFinished()
{
	refreshTableView();
}
void ui_new_articulo::on_le_fk_marca_editingFinished()
{
	refreshTableView();
}
void ui_new_articulo::on_le_descripcion_editingFinished()
{
	refreshTableView();
}
void ui_new_articulo::on_le_fk_medida_editingFinished()
{
	refreshTableView();
}
ui_new_articulo::~ui_new_articulo()
{
	delete ui;
}
