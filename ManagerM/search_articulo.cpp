#include "search_articulo.h"
#include "ui_search_articulo.h"
#include <QStringListModel>
#include "share_include.h"


enum {PK_ARTICULO,FK_GRUPO,FK_MARCA,FK_MEDIDA,C_DESCRIPCION,C_PRECIO,C_STOCK,C_HABILITAD};
QString table_e_marca = "e_marca";
QString table_e_medida = "e_medida";
QString col_descripcion = "descripcion";
QString col_pk_marca = "pk_marca";
QString col_pk_medida = "pk_medida";
QString table_e_articulo = "e_articulo";
QString col_descripcion_marca = "relTblAl_2.descripcion";
QString col_descripcion_medida = "relTblAl_3.descripcion";



search_articulo::search_articulo(QWidget *parent) :
QWidget(parent),
ui(new Ui::search_articulo)
{
	ui->setupUi(this);
	table_name = "e_articulo";
	QCompleter * c0 = new QCompleter(this);
	QStringList list0= SYSTEM->getListOfValues(table_name,"fk_marca") ;
	QStringListModel * model0= new QStringListModel(this);
	model0->setStringList(list0);
	c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c0->setCaseSensitivity(Qt::CaseInsensitive);
	c0->setWrapAround(false);
	c0->setModel(model0);
	ui->le_fk_marca->setCompleter(c0);

	QCompleter * c1 = new QCompleter(this);
	QStringList list1= SYSTEM->getListOfValues(table_name,"fk_medida") ;
	QStringListModel * model1= new QStringListModel(this);
	model1->setStringList(list1);
	c1->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c1->setCaseSensitivity(Qt::CaseInsensitive);
	c1->setWrapAround(false);
	c1->setModel(model1);
	ui->le_fk_medida->setCompleter(c1);

	QCompleter * c2 = new QCompleter(this);
	QStringList list2= SYSTEM->getListOfValues(table_name,"descripcion") ;
	QStringListModel * model2= new QStringListModel(this);
	model2->setStringList(list2);
	c2->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c2->setCaseSensitivity(Qt::CaseInsensitive);
	c2->setWrapAround(false);
	c2->setModel(model2);
	ui->le_descripcion->setCompleter(c2);

	table_model = new QSqlRelationalTableModel();

    //Seteamos las relaciones

    table_model->setTable(table_name);

     table_model->setJoinMode(QSqlRelationalTableModel::LeftJoin);

    table_model->setRelation(FK_MARCA,QSqlRelation(table_e_marca,col_pk_marca,col_descripcion));
    table_model->setRelation(FK_MEDIDA,QSqlRelation(table_e_medida,col_pk_medida,col_descripcion));


	table_model->select();

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableView->setModel(table_model);
}
void search_articulo::refreshTableView()
{
	QString filtro;
	bool primero = true;
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
    filtro+=col_descripcion_marca+"='"+ui->le_fk_marca->text()+"'";
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
    filtro+=col_descripcion_medida+"='"+ui->le_fk_medida->text()+"'";
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
    filtro+=table_e_articulo+".descripcion='"+ui->le_descripcion->text()+"'";
	}

    table_model->setFilter(filtro);
    qDebug()<<table_model->query().lastQuery()<<endl;
    //table_model->select();
}
void search_articulo::on_le_fk_marca_editingFinished()
{
	refreshTableView();
}
void search_articulo::on_le_fk_medida_editingFinished()
{
	refreshTableView();
}
void search_articulo::on_le_descripcion_editingFinished()
{
	refreshTableView();
}
search_articulo::~search_articulo()
{
	delete ui;
}
