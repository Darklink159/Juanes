#include "object_e_proveedor_funciones.h"

object_e_proveedor_funciones::object_e_proveedor_funciones()
{
	//file e_proveedor
	//function construct_0
	//w!
}

object_e_proveedor_funciones::~object_e_proveedor_funciones()
{
	//file e_proveedor
	//function destruct_0
	//w!
}


QSqlQueryModel* object_e_proveedor_funciones::mf_model_e_proveedor()
{
    QSqlQueryModel* model = new QSqlQueryModel;
    QString str_query = "SELECT";
    str_query += " p.pk_ruc";
    str_query += ", pj.razon_social";
    str_query += ", pj.direccion";    
    str_query += ", p.nombre_vendedor";
    str_query += ", p.celular_vendedor";

    str_query += " FROM e_persona_juridica pj, e_proveedor p";
    str_query += " WHERE p.pk_ruc = pj.pk_ruc";
    // SELECT p.pk_ruc, pj.razon_social, pj.direccion, p.celular_vendedor, p.nombre_vendedor FROM e_persona_juridicos pj, e_proveedor p WHERE p.pk_ruc = pj.pk_ruc;

    model->setQuery(str_query);

    return model;
}

QStringList* object_e_proveedor_funciones::mf_stringList()
{    QSqlQuery query;
    QString str_query = "SELECT";
    str_query += "pj.razon_social";

    str_query += " FROM e_persona_juridica pj, e_proveedor p";
    str_query += " WHERE p.pk_ruc = pj.pk_ruc";
    return NULL;
}

QSqlQueryModel* object_e_proveedor_funciones::mf_model_search_e_proveedor()
{
    QSqlQueryModel* model = new QSqlQueryModel;
    QString str_query = "SELECT";
    str_query += " p.pk_ruc";
    str_query += ", pj.razon_social";
    str_query += ", p.nombre_vendedor";

    str_query += " FROM e_persona_juridica pj INNER JOIN e_proveedor p ON pj.pk_ruc = p";
    str_query += " WHERE p.pk_ruc = pj.pk_ruc";
    // SELECT p.pk_ruc, pj.razon_social, pj.direccion, p.celular_vendedor, p.nombre_vendedor FROM e_persona_juridicos pj, e_proveedor p WHERE p.pk_ruc = pj.pk_ruc;

    model->setQuery(str_query);

    return model;
}
