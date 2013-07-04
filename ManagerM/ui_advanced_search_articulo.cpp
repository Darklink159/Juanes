#include "ui_advanced_search_articulo.h"
#include "ui_ui_advanced_search_articulo.h"
#include <QDebug>

const QString defaultFilter = "habilitado=1";

enum{TODO,COD,DES,MA,ME,STK,PRC};

ui_advanced_search_articulo::ui_advanced_search_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_advanced_search_articulo)
{
    ui->setupUi(this);


    actions_group = new QActionGroup(this);

    actions_list.append(new QAction("Todo",0));    
    actions_list.append(new QAction("Codigo",0));    
    actions_list.append(new QAction("Descripcion",0));
    actions_list.append(new QAction("Marca",0));
    actions_list.append(new QAction("Medida",0));    
    actions_list.append(new QAction("Stock",0));
    actions_list.append(new QAction("Precio",0));



    foreach(QAction * act, actions_list)
    {
        act->setCheckable(true);
        act->setActionGroup(actions_group);
    }


    actions_list.at(0)->setChecked(true);


    connect(actions_list.at(TODO),SIGNAL(triggered()),this,SLOT(filterTodos()));
    connect(actions_list.at(COD),SIGNAL(triggered()),this,SLOT(filterCodigo()));
    connect(actions_list.at(MA),SIGNAL(triggered()),this,SLOT(filterMarca()));
    connect(actions_list.at(ME),SIGNAL(triggered()),this,SLOT(filterMedida()));
    connect(actions_list.at(DES),SIGNAL(triggered()),this,SLOT(filterDescripcion()));
    connect(actions_list.at(STK),SIGNAL(triggered()),this,SLOT(filterStock()));
    connect(actions_list.at(PRC),SIGNAL(triggered()),this,SLOT(filterPrecio()));


    ui->toolButton->addActions(actions_list);


    ui->toolButton->setPopupMode(QToolButton::MenuButtonPopup);

    model = 0;

    filterTodos();
}

void ui_advanced_search_articulo::setTableModel(QSqlTableModel *m)
{  
    model = m;
}


ui_advanced_search_articulo::~ui_advanced_search_articulo()
{

    delete ui;
}

void ui_advanced_search_articulo::filterTodos()
{
    queryFilter ="( marca LIKE'%1%' or pk_articulo LIKE'%1%' or medida LIKE '%1%' or descripcion LIKE'%1%' or stock='%1' or precio_lista='%1' or proveedor = '%1')";
    //qDebug()<<queryFilter;
}

void ui_advanced_search_articulo::filterCodigo()
{
    queryFilter ="pk_articulo LIKE '%1%' ";
}

void ui_advanced_search_articulo::filterMarca()
{
    queryFilter ="marca LIKE '%1%' ";
}

void ui_advanced_search_articulo::filterMedida()
{
    queryFilter ="medida LIKE '%1%' ";
}

void ui_advanced_search_articulo::filterDescripcion()
{
    queryFilter ="descripcion LIKE '%1%' ";
}

void ui_advanced_search_articulo::filter_tipo_2_Descripcion()
{
    queryFilter ="descripcion LIKE '%%1%' ";
}

void ui_advanced_search_articulo::filterStock()
{
    queryFilter ="stock = %1 ";
}

void ui_advanced_search_articulo::filterPrecio()
{
    queryFilter ="precio_lista= %1 ";
}


void ui_advanced_search_articulo::on_toolButton_clicked()
{
    //Aplicamos el filtro
    qDebug()<<"Aplicando el filtro";
    if(model)
    {
        QString le_text = ui->lineEdit->text();

        if(le_text!="")
        {


            if(checkQuery(queryFilter,le_text))
            {
                //model->setFilter(defaultFilter);
                QString tmpQuery = queryFilter.arg(le_text)+ " and "+defaultFilter;
                qDebug()<<tmpQuery;
                model->setFilter(tmpQuery);

            }

        }
        else
        {
            model->setFilter(defaultFilter);
        }
    }





}

void ui_advanced_search_articulo::on_lineEdit_returnPressed()
{
    on_toolButton_clicked();
}

void ui_advanced_search_articulo::on_tb_borrar_clicked()
{
    ui->lineEdit->clear();
    on_toolButton_clicked();
}

bool ui_advanced_search_articulo::checkQuery(QString q, QString value)
{
    //Si es pk_articulo, precio o stock , value tiene que ser un numero
    if(q.at(0)=='p'|| q.at(0)=='s')
    {
        bool ok;
        value.toInt(&ok);
        return ok;
    }

       return true;

}
