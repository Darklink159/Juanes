#include "object_e_transportista.h"

object_e_transportista::object_e_transportista()
{
	//file e_transportista
	//function construct_0
	//w!
}

object_e_transportista::object_e_transportista(_QSTR pk_ruc)
{
	//file e_transportista
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
}
object_e_transportista::~object_e_transportista()
{

}


void object_e_transportista::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}

_QSTR object_e_transportista::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}

bool object_e_transportista::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_transportista WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_transportista::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_transportista(";
	str_query += "pk_ruc";
	str_query += ") VALUES(";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_ruc != "")
	{
		query.bindValue(integer++, md_o_pk_ruc);
	}
	else
		query.bindValue(integer++, "NULL");

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!

		return false;
	}
}

bool object_e_transportista::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_transportista SET descripcion = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_pk_ruc);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!

		return false;
	}
}

bool object_e_transportista::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_transportista FROM pk_ruc = ?");
	query.bindValue(0, md_o_pk_ruc);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
	//state FAILED
	//w!

		return false;
	}
}

