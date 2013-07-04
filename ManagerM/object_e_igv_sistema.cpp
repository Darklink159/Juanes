#include "object_e_igv_sistema.h"

object_e_igv_sistema::object_e_igv_sistema()
{
	//file e_igv_sistema
	//function construct_0
	//w!
}

object_e_igv_sistema::object_e_igv_sistema(_QSTR pk_igv_s, _QSTR valor, _QSTR fecha)
{
	//file e_igv_sistema
	//function construct_1
	//w!

	md_o_pk_igv_s = pk_igv_s;
	md_o_valor = valor;
	md_o_fecha = fecha;
}
object_e_igv_sistema::object_e_igv_sistema(_QSTR valor, _QSTR fecha)
{
	//file e_igv_sistema
	//function construct_2
	//w!

	md_o_valor = valor;
	md_o_fecha = fecha;
}
object_e_igv_sistema::~object_e_igv_sistema()
{

}


void object_e_igv_sistema::mf_set_pk_igv_s(_QSTR pk_igv_s)
{
	//function mf_set_pk_igv_s
	//w!

	md_o_pk_igv_s = pk_igv_s;
}
void object_e_igv_sistema::mf_set_valor(_QSTR valor)
{
	//function mf_set_valor
	//w!

	md_o_valor = valor;
}
void object_e_igv_sistema::mf_set_fecha(_QSTR fecha)
{
	//function mf_set_fecha
	//w!

	md_o_fecha = fecha;
}

_QSTR object_e_igv_sistema::mf_get_pk_igv_s()
{
	//function mf_get_pk_igv_s
	//w!

	return md_o_pk_igv_s;
}
_QSTR object_e_igv_sistema::mf_get_valor()
{
	//function mf_get_valor
	//w!

	return md_o_valor;
}
_QSTR object_e_igv_sistema::mf_get_fecha()
{
	//function mf_get_fecha
	//w!

	return md_o_fecha;
}

bool object_e_igv_sistema::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_igv_sistema WHERE pk_igv_s = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_igv_s = query.value(0).toString();
		md_o_valor = query.value(1).toString();
		md_o_fecha = query.value(2).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_igv_sistema::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_igv_sistema(";
	str_query += "pk_igv_s, ";
	str_query += "valor, ";
	str_query += "fecha";
	str_query += ") VALUES(";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_igv_s != "")
	{
		query.bindValue(integer++, md_o_pk_igv_s);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_valor);
	query.bindValue(integer++, md_o_fecha);

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

bool object_e_igv_sistema::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_igv_sistema SET valor = ?, fecha = ? WHERE pk_igv_s = ?");
	query.bindValue(0, md_o_valor);
	query.bindValue(1, md_o_fecha);
	query.bindValue(2, md_o_pk_igv_s);

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

bool object_e_igv_sistema::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_igv_sistema FROM pk_igv_s = ?");
	query.bindValue(0, md_o_pk_igv_s);

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

