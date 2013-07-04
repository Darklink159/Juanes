#include "searcher_articulos.h"

Searcher_Articulos::Searcher_Articulos()
{

}
Searcher_Articulos::~Searcher_Articulos()
{

}
void Searcher_Articulos::search_type_and_cb(vector<pair<QWidget*, int> > v, QTableView *t)
{
    qDebug()<<"oh yes"<<endl;
    const int num_header = 7;

    const char * e_articulo = "e_articulo";
    const char * e_grupo = "e_grupo";
    const char * e_marca = "e_marca";
    const char * e_medida = "e_medida";

    //Primary Keys

    const char * pk_grupo = "pk_grupo";
    const char * pk_marca = "pk_marca";
    const char * pk_medida = "pk_medida";

    //campo buscado

    const char * descripcion = "descripcion";

    //Headers tabla

    const char * tableHeaders[num_header] = {"Código","Grupo","Marca","Medida","Descripción","Precio","Stock"};

    table = t;
    pairs = v;
    if(connect((QLineEdit*)(pairs[0].first), SIGNAL(returnPressed()), this,  SLOT(on_le_descripcion_2_returnPressed())))
        qDebug()<<"conecto"<<endl;
    connect((QComboBox*)(pairs[1].first), SIGNAL(currentIndexChanged(QString)), this,  SLOT(on_cb_marca_currentIndexChanged(QString)));
    connect((QComboBox*)(pairs[2].first), SIGNAL(currentIndexChanged(QString)), this,  SLOT(on_cb_medida_currentIndexChanged(QString)));
    connect((QComboBox*)(pairs[3].first), SIGNAL(currentIndexChanged(QString)), this,  SLOT(on_cb_grupo_currentIndexChanged(QString)));
    qDebug()<<"Filter: "<<filter<<endl;

    QAbstractItemModel * anteriorModel = table->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    QSqlRelationalTableModel * model = new QSqlRelationalTableModel();
    model->setTable("e_articulo");

    model->setRelation(GRUPO_1,QSqlRelation("e_grupo","pk_grupo","descripcion"));
    model->setRelation(MARCA_1,QSqlRelation("e_marca","pk_marca","descripcion"));
    model->setRelation(MEDIDA_1,QSqlRelation("e_medida","pk_medida","descripcion"));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("habilitado=1");


    for(int i=0;i<num_header;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,tableHeaders[i]);
    }

    if(model->select())
    {
        table->setModel(model);
    }
    //else
    //{
        //QMessageBox::information(this,"Error","Ocurrio un error al cargar la información");
    //}

    //Ocultamos columnas
    //table->setColumnHidden(GRUPO,true);
    table->setColumnHidden(HABILITADO_1,true);

    //qDebug()<<model->query().lastQuery()<<endl;
}

void Searcher_Articulos::search_type_and_le(vector<pair<QWidget*, int> > v, QTableView *t)
{
    const int num_header = 7;

    const char * e_articulo = "e_articulo";
    const char * e_grupo = "e_grupo";
    const char * e_marca = "e_marca";
    const char * e_medida = "e_medida";

    //Primary Keys

    const char * pk_grupo = "pk_grupo";
    const char * pk_marca = "pk_marca";
    const char * pk_medida = "pk_medida";

    //campo buscado

    const char * descripcion = "descripcion";

    //Headers tabla

    const char * tableHeaders[num_header] = {"Código","Grupo","Marca","Medida","Descripción","Precio","Stock"};

    table = t;
    pairs = v;

    connect((QLineEdit*)(pairs[0].first), SIGNAL(returnPressed()), this,  SLOT(on_le_descripcion_returnPressed()));
    connect((QLineEdit*)(pairs[1].first), SIGNAL(returnPressed()), this,  SLOT(on_le_marca_returnPressed()));
    connect((QLineEdit*)(pairs[2].first), SIGNAL(returnPressed()), this,  SLOT(on_le_medida_returnPressed()));
    connect((QLineEdit*)(pairs[3].first), SIGNAL(returnPressed()), this,  SLOT(on_le_grupo_returnPressed()));
    qDebug()<<"Filter: "<<filter<<endl;

    QAbstractItemModel * anteriorModel = table->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    QSqlRelationalTableModel * model = new QSqlRelationalTableModel();
    model->setTable(e_articulo);

    model->setRelation(GRUPO_1,QSqlRelation("e_grupo","pk_grupo","descripcion"));
    model->setRelation(MARCA_1,QSqlRelation("e_marca","pk_marca","descripcion"));
    model->setRelation(MEDIDA_1,QSqlRelation("e_medida","pk_medida","descripcion"));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("habilitado=1");


    for(int i=0;i<num_header;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,tableHeaders[i]);
    }

    if(model->select())
    {
        table->setModel(model);
    }
    //else
    //{
        //QMessageBox::information(this,"Error","Ocurrio un error al cargar la información");
    //}

    //Ocultamos columnas
    //table->setColumnHidden(GRUPO,true);
    table->setColumnHidden(HABILITADO_1,true);

    //qDebug()<<model->query().lastQuery()<<endl;
}

void Searcher_Articulos::on_le_descripcion_returnPressed()
{    
    do_filter_le_articulos();
}

void Searcher_Articulos::on_le_marca_returnPressed()
{
    do_filter_le_articulos();
}

void Searcher_Articulos::on_le_medida_returnPressed()
{
    do_filter_le_articulos();
}

void Searcher_Articulos::on_le_grupo_returnPressed()
{
    do_filter_le_articulos();
}
void Searcher_Articulos::on_le_descripcion_2_returnPressed()
{
    do_filter_cb_articulos();
}

void Searcher_Articulos::on_cb_marca_currentIndexChanged(const QString& arg)
{
    do_filter_cb_articulos();
}

void Searcher_Articulos::on_cb_medida_currentIndexChanged(const QString& arg)
{
    do_filter_cb_articulos();
}

void Searcher_Articulos::on_cb_grupo_currentIndexChanged(const QString& arg)
{
    do_filter_cb_articulos();
}
void Searcher_Articulos::do_filter_le_articulos()
{
    // Descripcion

    filter ="(";
    QString str_1 = ((QLineEdit*)(pairs[0].first))->text();
    if(str_1 != "")
    {
        if(pairs[0].second == 0)
        {
            filter += "e_articulo.descripcion = '"+str_1+"' ";
        }
        if(pairs[0].second == 1)
        {
            filter += "e_articulo.descripcion LIKE '"+str_1+"%' ";
        }
        if(pairs[0].second == 2)
        {
            filter += "e_articulo.descripcion LIKE '%"+str_1+"' ";
        }
        if(pairs[0].second == 3)
        {
            filter += "e_articulo.descripcion LIKE '%"+str_1+"%' ";
        }
    }
    // Marca
    QString str_2 = ((QLineEdit*)(pairs[1].first))->text();
    if(str_2 != "")
    {
        if(pairs[1].second == 0)
        {
            filter += "relTblAl_2.descripcion = '"+str_2+"' AND ";
        }
        if(pairs[1].second == 1)
        {
            filter += "relTblAl_2.descripcion LIKE '"+str_2+"%' AND ";
        }
        if(pairs[1].second == 2)
        {
            filter += "relTblAl_2.descripcion LIKE '%"+str_2+"' AND ";
        }
        if(pairs[1].second == 3)
        {
            filter += "relTblAl_2.descripcion LIKE '%"+str_2+"%' AND ";
        }
    }
    // Medida
    QString str_3 = ((QLineEdit*)(pairs[2].first))->text();
    if(str_3 != "")
    {
        if(pairs[2].second == 0)
        {
            filter += "relTblAl_1.descripcion = '"+str_3+"' AND ";
        }
        if(pairs[2].second == 1)
        {
            filter += "relTblAl_1.descripcion LIKE '"+str_3+"%' AND ";
        }
        if(pairs[2].second == 2)
        {
            filter += "relTblAl_1.descripcion LIKE '%"+str_3+"' AND ";
        }
        if(pairs[2].second == 3)
        {
            filter += "relTblAl_1.descripcion LIKE '%"+str_3+"%' AND ";
        }
    }

    QString str_4 = ((QLineEdit*)(pairs[3].first))->text();
    if(str_4 != "")
    {
        if(pairs[3].second == 0)
        {
            filter += "relTblAl_3.descripcion = '"+str_4+"' AND ";
        }
        if(pairs[3].second == 1)
        {
            filter += "relTblAl_3.descripcion LIKE '"+str_4+"%' AND ";
        }
        if(pairs[3].second == 2)
        {
            filter += "relTblAl_3.descripcion LIKE '%"+str_4+"' AND ";
        }
        if(pairs[3].second == 3)
        {
            filter += "relTblAl_3.descripcion LIKE '%"+str_4+"%' AND ";
        }
    }
    if(filter.length() > 1)
    {
        filter = filter.mid(0, filter.length()-4);
        filter+=")";
    }else{
        filter="";
    }

    QSqlRelationalTableModel *model = (QSqlRelationalTableModel*)table->model();
    model->setFilter(filter);
    qDebug()<<"Filter le: "<<filter<<endl;
}

void Searcher_Articulos::do_filter_cb_articulos()
{
    // Descripcion

    filter ="(";
    QString str_1 = ((QLineEdit*)(pairs[0].first))->text();
    if(str_1 != "")
    {
        if(pairs[0].second == 0)
        {
            filter += "e_articulo.descripcion = '"+str_1+"' AND ";
        }
        if(pairs[0].second == 1)
        {
            filter += "e_articulo.descripcion LIKE '"+str_1+"%' AND ";
        }
        if(pairs[0].second == 2)
        {
            filter += "e_articulo.descripcion LIKE '%"+str_1+"' AND ";
        }
        if(pairs[0].second == 3)
        {
            filter += "e_articulo.descripcion LIKE '%"+str_1+"%' AND ";
        }
    }
    // Marca
    QString str_2;
    if(((QComboBox*)(pairs[1].first)))
        str_2 = ((QComboBox*)(pairs[1].first))->currentText();
    if(str_2 != "Ninguno")
    {
        if(pairs[1].second == 0)
        {
            filter += "relTblAl_2.descripcion = '"+str_2+"' AND ";
        }
        if(pairs[1].second == 1)
        {
            filter += "relTblAl_2.descripcion LIKE '"+str_2+"%' AND ";
        }
        if(pairs[1].second == 2)
        {
            filter += "relTblAl_2.descripcion LIKE '%"+str_2+"' AND ";
        }
        if(pairs[1].second == 3)
        {
            filter += "relTblAl_2.descripcion LIKE '%"+str_2+"%' AND ";
        }
    }
    // Medida
    QString str_3;
    if(((QComboBox*)(pairs[2].first)))
        str_3 = ((QComboBox*)(pairs[2].first))->currentText();
    if(str_3 != "Ninguno")
    {
        if(pairs[2].second == 0)
        {
            filter += "relTblAl_3.descripcion = '"+str_3+"' AND ";
        }
        if(pairs[2].second == 1)
        {
            filter += "relTblAl_3.descripcion LIKE '"+str_3+"%' AND ";
        }
        if(pairs[2].second == 2)
        {
            filter += "relTblAl_3.descripcion LIKE '%"+str_3+"' AND ";
        }
        if(pairs[2].second == 3)
        {
            filter += "relTblAl_3.descripcion LIKE '%"+str_3+"%' AND ";
        }
    }

    QString str_4;
    if(((QComboBox*)(pairs[3].first)))
        str_4 = ((QComboBox*)(pairs[3].first))->currentText();
    if(str_4 != "Ninguno")
    {
        if(pairs[3].second == 0)
        {
            filter += "relTblAl_1.descripcion = '"+str_4+"' AND ";
        }
        if(pairs[3].second == 1)
        {
            filter += "relTblAl_1.descripcion LIKE '"+str_4+"%' AND ";
        }
        if(pairs[3].second == 2)
        {
            filter += "relTblAl_1.descripcion LIKE '%"+str_4+"' AND ";
        }
        if(pairs[3].second == 3)
        {
            filter += "relTblAl_1.descripcion LIKE '%"+str_4+"%' AND ";
        }
    }
    if(filter.length() > 1)
    {
        filter = filter.mid(0, filter.length()-4);
        filter+=" AND habilitado = 1)";
        if(table->model())
        {
            QSqlTableModel *model = ((QSqlTableModel*)table->model());
            model->setFilter(filter);
        }
    }else{
        filter="";
    }

    /*
    const int num_header = 7;

    char * e_articulo = "e_articulo";
    char * e_grupo = "e_grupo";
    char * e_marca = "e_marca";
    char * e_medida = "e_medida";

    //Primary Keys

    char * pk_grupo = "pk_grupo";
    char * pk_marca = "pk_marca";
    char * pk_medida = "pk_medida";

    //campo buscado

    char * descripcion = "descripcion";

    //Headers tabla

    char * tableHeaders[num_header] = {"Código","Grupo","Marca","Medida","Descripción","Precio","Stock"};

    QSqlRelationalTableModel *model = new QSqlRelationalTableModel();
    model->setRelation(GRUPO,QSqlRelation(e_grupo,pk_grupo,descripcion));
    model->setRelation(MARCA,QSqlRelation(e_marca,pk_marca,descripcion));
    model->setRelation(MEDIDA,QSqlRelation(e_medida,pk_medida,descripcion));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setTable("e_articulo");
    model->setFilter(filter);

    for(int i=0;i<num_header;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,tableHeaders[i]);
    }

    if(model->select())
    {

        table->setModel(model);
        //ui->busqueda->setTableModel(model);
        //ui->busqueda->showOnlyLineEdit();
    }

    //Ocultamos columnas
    //ui->tableView_articulos->setColumnHidden(GRUPO,true);
    table->setColumnHidden(HABILITADO,true);
    */

    //table->show();
    qDebug()<<"Filter cb: "<<filter<<endl;
}
