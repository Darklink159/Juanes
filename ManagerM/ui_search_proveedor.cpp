#include "ui_search_proveedor.h"
#include "ui_ui_search_proveedor.h"

#include "share_include.h"

ui_search_proveedor::ui_search_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_search_proveedor)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    model->setQuery("SELECT * FROM getProveedores ORDER BY pro_razon_social");
    ui->tableView->setModel(model);
}

ui_search_proveedor::~ui_search_proveedor()
{
    delete ui;
}



void ui_search_proveedor::on_lineEdit_razonSocial_textChanged(const QString &arg1)
{
    model->setQuery("SELECT * FROM getProveedores WHERE pro_razon_social LIKE '"+arg1+"%' ORDER BY "
                    "pro_razon_social");
    ui->tableView->setModel(model);
}

void ui_search_proveedor::on_pushButton_new_clicked()
{
    ui_new_proveedor *w = new ui_new_proveedor;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setTableView(ui->tableView);
    w->show();
}

void ui_search_proveedor::on_pushButton_change_clicked()
{
    //ui->tableView->currentIndex();
    QItemSelectionModel* selection = ui->tableView->selectionModel();
    QModelIndexList indexList = selection->selectedIndexes();
    if(indexList.size()>0)
    {
        QModelIndex index = indexList[0];
        QString ruc = index.sibling(index.row(), 0).data().toString();
        ui_edit_proveedor *w = new ui_edit_proveedor;
        qDebug()<<ruc<<endl;
        w->update_data(ruc);
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->setTableView(ui->tableView);
        w->show();
    }
}

void ui_search_proveedor::on_pushButton_add_clicked()
{
    this->close();
}
