#include "ui_search_transportista.h"
#include "ui_ui_search_transportista.h"
#include <QStringListModel>
ui_search_transportista::ui_search_transportista(QWidget *parent) :
QWidget(parent),
ui(new Ui::ui_search_transportista)
{
	ui->setupUi(this);
	table_name = "e_transportista";
	QCompleter * c0 = new QCompleter(this);
	QStringList list0= SYSTEM->getListOfValues(table_name,"pk_ruc") ;
	QStringListModel * model0= new QStringListModel(this);
	model0->setStringList(list0);
	c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
	c0->setCaseSensitivity(Qt::CaseInsensitive);
	c0->setWrapAround(false);
	c0->setModel(model0);
	ui->le_pk_ruc->setCompleter(c0);

	table_model = new QSqlRelationalTableModel();
	table_model->setTable(table_name);
	table_model->select();
	ui->tableView->setModel(table_model);
}
void ui_search_transportista::refreshTableView()
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
	table_model->setFilter(filtro);
	table_model->select();
}
void ui_search_transportista::on_le_pk_ruc_editingFinished()
{
	refreshTableView();
}
ui_search_transportista::~ui_search_transportista()
{
	delete ui;
}
