#include "ui_search_transportista.h"
#include "ui_ui_search_transportista.h"

#include "share_include.h"

ui_search_transportista::ui_search_transportista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_search_transportista)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    model->setQuery("SELECT * FROM getTransportistas ORDER BY tra_razon_social");
    ui->tableView->setModel(model);
}

ui_search_transportista::~ui_search_transportista()
{
    delete ui;
}

void ui_search_transportista::on_lineEdit_razonSocial_textChanged(const QString &arg1)
{
    model->setQuery("SELECT * FROM getTransportistas WHERE tra_razon_social LIKE '"+arg1+"%' ORDER BY "
                    "tra_razon_social");
    ui->tableView->setModel(model);
}

void ui_search_transportista::on_pushButton_new_clicked()
{
    ui_new_transportista *w = new ui_new_transportista;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setTableView(ui->tableView);
    w->show();
}


void ui_search_transportista::on_pushButton_change_clicked()
{
    QItemSelectionModel* selection = ui->tableView->selectionModel();
    QModelIndexList indexList = selection->selectedIndexes();
    if(indexList.size()>0)
    {
        QModelIndex index = indexList[0];
        QString ruc = index.sibling(index.row(), 0).data().toString();
        ui_edit_transportista *w = new ui_edit_transportista;
        w->update_data(ruc);
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->setTableView(ui->tableView);
        w->show();
    }
}

void ui_search_transportista::on_pushButton_add_clicked()
{
    this->close();
}
