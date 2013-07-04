#include "ui_search_grupo.h"
#include "ui_ui_search_grupo.h"
#include <QStringListModel>
ui_search_grupo::ui_search_grupo(QWidget *parent) :
QWidget(parent),
ui(new Ui::ui_search_grupo)
{
	ui->setupUi(this);
	table_name = "e_grupo";
	QCompleter * c0 = new QCompleter(this);
	QStringList list0= SYSTEM->getListOfValues(table_name,"descripcion") ;
	QStringListModel * model0= new QStringListModel(this);
	model0->setStringList(list0);
	c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c0->setCaseSensitivity(Qt::CaseInsensitive);
	c0->setWrapAround(false);
	c0->setModel(model0);
	ui->le_descripcion->setCompleter(c0);

	table_model = new QSqlRelationalTableModel();
	table_model->setTable(table_name);
	table_model->select();
	ui->tableView->setModel(table_model);
}
void ui_search_grupo::refreshTableView()
{
	QString filtro;
	bool primero = true;
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
	table_model->setFilter(filtro);
	table_model->select();
}
void ui_search_grupo::on_le_descripcion_editingFinished()
{
	refreshTableView();
}
ui_search_grupo::~ui_search_grupo()
{
	delete ui;
}
