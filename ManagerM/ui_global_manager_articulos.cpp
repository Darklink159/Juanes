#include "ui_global_manager_articulos.h"
#include "ui_ui_global_manager_articulos.h"


ui_global_manager_articulos::ui_global_manager_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_global_manager_articulos)
{
    ui->setupUi(this);

    //ui_advanced_search_articulo * w = new ui_advanced_search_articulo(ui->widget);
    //w->move(0, 0);
    //update_table_articulos();
    ui->lineEdit_descripcion->installEventFilter(this);
    ui->tableView_articulos->installEventFilter(this);
    ui->tableWidget_articulos->installEventFilter(this);
    ui->doubleSpinBox_cantidad->installEventFilter(this);
    ui->doubleSpinBox_precio->installEventFilter(this);

    /*
    searcher = new Searcher_Articulos;
    vector<QWidget* > widgets;
    widgets.push_back(ui->lineEdit_descripcion);
    widgets.push_back(ui->lineEdit_marca);
    widgets.push_back(ui->lineEdit_medida);
    //widgets.push_back(ui->comboBox_grupo);
    searcher->search_type_and(widgets, ui->tableView_articulos);
    */

    qDebug()<<"Init global searcher"<<endl;
}

ui_global_manager_articulos::~ui_global_manager_articulos()
{
    delete ui;

}

void ui_global_manager_articulos::setTableWidget(QTableWidget*t)
{
    tableWidget_md_parent = t;
    ui->tableWidget_articulos->setColumnCount(7);
    ui->tableWidget_articulos->setColumnWidth(0, 80);
    ui->tableWidget_articulos->setColumnWidth(1, 120);
    ui->tableWidget_articulos->setColumnWidth(2, 80);
    ui->tableWidget_articulos->setColumnWidth(3, 80);
    ui->tableWidget_articulos->setColumnWidth(4, 80);
    ui->tableWidget_articulos->setColumnWidth(5, 80);
    ui->tableWidget_articulos->setColumnWidth(6, 80);
    ui->tableWidget_articulos->setHorizontalHeaderItem(0, new QTableWidgetItem("Codigo"));
    ui->tableWidget_articulos->setHorizontalHeaderItem(1, new QTableWidgetItem("Descripcion"));
    ui->tableWidget_articulos->setHorizontalHeaderItem(2, new QTableWidgetItem("Marca"));
    ui->tableWidget_articulos->setHorizontalHeaderItem(3, new QTableWidgetItem("Medida"));
    ui->tableWidget_articulos->setHorizontalHeaderItem(4, new QTableWidgetItem("Cantidad"));
    ui->tableWidget_articulos->setHorizontalHeaderItem(5, new QTableWidgetItem("Precio Unit."));
    ui->tableWidget_articulos->setHorizontalHeaderItem(6, new QTableWidgetItem("Precio Total"));
}

void ui_global_manager_articulos::set_cb_modalidad(QComboBox *cb_modalidad)
{
    cb_modalidad_md_parent = cb_modalidad;
}
void ui_global_manager_articulos::set_cb_tipo_moneda(QComboBox *cb_tipo_moneda)
{
    cb_tipo_moneda_md_parent = cb_tipo_moneda;
}
void ui_global_manager_articulos::setProveedor(const QString &str)
{
    proveedor = str;
}

void ui_global_manager_articulos::init_focus()
{
    ui->lineEdit_descripcion->setFocus();
    ui->lineEdit_descripcion->selectAll();
}

QPushButton* ui_global_manager_articulos::getPB_add()
{
    return ui->pushButton_add;
}

// No esta siendo utilizado
void ui_global_manager_articulos::update_table_articulos()
{

}

void ui_global_manager_articulos::on_tableView_articulos_doubleClicked(const QModelIndex &index)
{
    QItemSelectionModel*p = ui->tableView_articulos->selectionModel();

    if(p)
        if(p->selectedIndexes().length() == 0)
            return;
        else
            qDebug()<<"zzz"<<endl;
    else
            return;
    int row = ui->tableWidget_articulos->rowCount()+1;

    qDebug()<<"data"<<ui->tableView_articulos->currentIndex().sibling(index.row(),0).data().toString()<<endl;
    qDebug()<<"row"<<index.row();

    QString codigo = ui->tableView_articulos->currentIndex().sibling(index.row(),0).data(0).toString();
    QString descripcion = ui->tableView_articulos->currentIndex().sibling(index.row(),1).data(0).toString();
    QString marca = ui->tableView_articulos->currentIndex().sibling(index.row(),2).data(0).toString();
    QString medida = ui->tableView_articulos->currentIndex().sibling(index.row(),3).data(0).toString();
    //QString stock = tableWidget_md_parent->indexAt(row-1, 4);
    //QString precio = ui->tableView_articulos->currentIndex().sibling(index.row(),5).data(0).toString();
    QString cantidad;
    cantidad.setNum(ui->doubleSpinBox_cantidad->value());
    QString precio;
    precio.setNum(ui->doubleSpinBox_precio->value());
    QString total;
    total.setNum(ui->doubleSpinBox_cantidad->value()*ui->doubleSpinBox_precio->value());
    ui->tableWidget_articulos->setRowCount(row);
    ui->tableWidget_articulos->setItem(row-1,0,new QTableWidgetItem(codigo));
    ui->tableWidget_articulos->setItem(row-1,1,new QTableWidgetItem(descripcion));
    ui->tableWidget_articulos->setItem(row-1,2,new QTableWidgetItem(marca));
    ui->tableWidget_articulos->setItem(row-1,3,new QTableWidgetItem(medida));
    ui->tableWidget_articulos->setItem(row-1,4,new QTableWidgetItem(cantidad));
    ui->tableWidget_articulos->setItem(row-1,5,new QTableWidgetItem(precio));
    ui->tableWidget_articulos->setItem(row-1,6,new QTableWidgetItem(total));

    //this->hide();
}

bool ui_global_manager_articulos::eventFilter(QObject *obj, QEvent *e)
{

    if (e->type() == QEvent::KeyPress) {
        if (obj == ui->lineEdit_descripcion)
        {
            qDebug()<<"FALTA"<<endl;
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->key() == Qt::Key_Enter ||
                ke->key() == Qt::Key_Return) {
                qDebug()<<"ENTRO"<<endl;
                if(ui->tableView_articulos->model())
                    if(ui->tableView_articulos->model()->rowCount()>0)
                    {
                        ui->tableView_articulos->selectRow(0);
                        ui->tableView_articulos->setFocus();
                    }

                return true;
            }
        }
        if (obj == ui->tableView_articulos)
        {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->key() == Qt::Key_Enter ||
                ke->key() == Qt::Key_Return) {
                int row=ui->tableView_articulos->currentIndex().row();
                double precio = ui->tableView_articulos->currentIndex().sibling(row,5).data(0).toDouble();
                ui->doubleSpinBox_precio->setValue(precio);
                ui->doubleSpinBox_cantidad->selectAll();
                ui->doubleSpinBox_cantidad->setFocus();

                return true;
            }
        }
        if (obj == ui->doubleSpinBox_cantidad)
        {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->key() == Qt::Key_Enter ||
                ke->key() == Qt::Key_Return) {
                ui->doubleSpinBox_precio->selectAll();
                ui->doubleSpinBox_precio->setFocus();
                return true;
            }
        }
        if (obj == ui->doubleSpinBox_precio)
        {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->key() == Qt::Key_Enter ||
                ke->key() == Qt::Key_Return) {

                QModelIndex *mIndex = &ui->tableView_articulos->currentIndex();
                on_tableView_articulos_doubleClicked(*mIndex);
                ui->lineEdit_descripcion->setFocus();
                ui->lineEdit_descripcion->selectAll();
                return true;
            }
        }
        if (obj == ui->tableWidget_articulos)
        {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->key() == Qt::Key_Enter ||
                ke->key() == Qt::Key_Return) {

                return true;
            }
            if (ke->key() == Qt::Key_Delete)
            {
                on_pushButton_up_clicked();
                return true;
            }
        }
    }
    return QWidget::eventFilter(obj, e);
}

void ui_global_manager_articulos::on_lineEdit_descripcion_textChanged(const QString &arg1)
{
    do_search_and();
}

void ui_global_manager_articulos::on_lineEdit_marca_textChanged(const QString &arg1)
{
    do_search_and();
}

void ui_global_manager_articulos::on_lineEdit_medida_textChanged(const QString &arg1)
{
    do_search_and();
}

void ui_global_manager_articulos::on_pushButton_add_clicked()
{
    int numRows_1=tableWidget_md_parent->rowCount();
    for(int i=0; i<numRows_1; i++)
    {
        tableWidget_md_parent->removeRow(0);
    }
    tableWidget_md_parent->setRowCount(ui->tableWidget_articulos->rowCount());
    int maxRows=ui->tableWidget_articulos->rowCount();
    int maxColumns=ui->tableWidget_articulos->columnCount();

    for(int i=0; i<maxRows; i++)
    {
        for(int j=0; j<maxColumns; j++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(ui->tableWidget_articulos->item(i,j)->data(0).toString());
            tableWidget_md_parent->setItem(i,j,item);
        }
    }
    tableWidget_md_parent->show();
    this->close();

}

void ui_global_manager_articulos::on_pushButton_down_clicked()
{    
    on_tableView_articulos_doubleClicked(ui->tableView_articulos->currentIndex());
    ui->lineEdit_descripcion->setFocus();
    ui->lineEdit_descripcion->selectAll();



}

void ui_global_manager_articulos::on_pushButton_up_clicked()
{
    QList<QTableWidgetItem*> list = ui->tableWidget_articulos->selectedItems();
    int count=0;
    foreach(QTableWidgetItem* w, list)
    {
        if(count<=w->row())
        {
            ui->tableWidget_articulos->removeRow(w->row());
            count = w->row()+1;
        }
    }
}

void ui_global_manager_articulos::on_comboBox_modo_currentIndexChanged(const QString &arg1)
{

}

void ui_global_manager_articulos::do_search_and()
{
    QString filter ="";
    vector<QString> v;
    v.push_back(ui->lineEdit_descripcion->text());
    v.push_back(ui->lineEdit_marca->text());
    v.push_back(ui->lineEdit_medida->text());
    //v.push_back(((QComboBox*)(widgets[3]))->currentText());

    if(v[0] != "")
    {
        filter += "art_descripcion LIKE '"+v[0]+"%' AND ";
    }

    if(v[1] != "")
    {
        filter += "mar_descripcion LIKE '"+v[1]+"%' AND ";
    }

    if(v[2] != "")
    {
        filter += "med_descripcion LIKE '"+v[2]+"%' AND ";
    }

    QString query = "SELECT art_pk_articulo, art_descripcion, mar_descripcion, med_descripcion "
            ", stock, precio_lista FROM getArticulos "
            "INNER JOIN r_proveedor_articulo AS rpa ON art_pk_articulo = rpa.pk_articulo ";
    if(filter.length() > 0)
    {
        filter = filter.mid(0, filter.length()-4);
        query += "WHERE "+filter+" AND rpa.pk_proveedor = '"+proveedor+"'";

    }
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query);

    ui->tableView_articulos->setModel(model);


    //model->setHeaderData(6, Qt::Horizontal, "Costo en soles");
    ui->tableView_articulos->show();

    qDebug()<<"Filter: "<<query<<endl;
}

void ui_global_manager_articulos::on_pushButton_clicked()
{
    int numRows=ui->tableWidget_articulos->rowCount();
    for(int i=0; i<numRows; i++)
        ui->tableWidget_articulos->removeRow(0);
}

void ui_global_manager_articulos::on_pushButton_new_clicked()
{

}

void ui_global_manager_articulos::on_pushButton_edit_clicked()
{

}
