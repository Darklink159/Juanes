#include "object_e_transportista_funciones.h"

object_e_transportista_funciones::object_e_transportista_funciones()
{
	//file e_transportista
	//function construct_0
	//w!
}

object_e_transportista_funciones::~object_e_transportista_funciones()
{
	//file e_transportista
	//function destruct_0
	//w!
}


QSqlQueryModel* object_e_transportista_funciones::mf_model_e_transportista()
{
	QSqlQueryModel* model = new QSqlQueryModel;
	QString str_query = "SELECT ";

    str_query += "t.pk_ruc";
    str_query += ", pj.razon_social";
    str_query += ", pj.direccion";

    str_query += " FROM e_persona_juridica pj, e_transportista t";
    str_query += " WHERE pj.pk_ruc = t.pk_ruc";
	model->setQuery(str_query);
	return model;
}

