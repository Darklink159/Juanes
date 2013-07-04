#include "object_e_cambio_dolar_sistema.h"

object_e_cambio_dolar_sistema::object_e_cambio_dolar_sistema()
{
	//file e_cambio_dolar_sistema
	//function construct_0
	//w!
}

object_e_cambio_dolar_sistema::object_e_cambio_dolar_sistema(_QSTR pk_cambio_dolar_s, _QSTR valor_dolar_soles, _QSTR valor_soler_dolar, _QSTR fecha)
{
	//file e_cambio_dolar_sistema
	//function construct_1
	//w!

	md_o_pk_cambio_dolar_s = pk_cambio_dolar_s;
	md_o_valor_dolar_soles = valor_dolar_soles;
	md_o_valor_soler_dolar = valor_soler_dolar;
	md_o_fecha = fecha;
}
object_e_cambio_dolar_sistema::object_e_cambio_dolar_sistema(_QSTR valor_dolar_soles, _QSTR valor_soler_dolar, _QSTR fecha)
{
	//file e_cambio_dolar_sistema
	//function construct_2
	//w!

	md_o_valor_dolar_soles = valor_dolar_soles;
	md_o_valor_soler_dolar = valor_soler_dolar;
	md_o_fecha = fecha;
}
object_e_cambio_dolar_sistema::~object_e_cambio_dolar_sistema()
{

}


void object_e_cambio_dolar_sistema::mf_set_pk_cambio_dolar_s(_QSTR pk_cambio_dolar_s)
{
	//function mf_set_pk_cambio_dolar_s
	//w!

	md_o_pk_cambio_dolar_s = pk_cambio_dolar_s;
}
void object_e_cambio_dolar_sistema::mf_set_valor_dolar_soles(_QSTR valor_dolar_soles)
{
	//function mf_set_valor_dolar_soles
	//w!

	md_o_valor_dolar_soles = valor_dolar_soles;
}
void object_e_cambio_dolar_sistema::mf_set_valor_soler_dolar(_QSTR valor_soler_dolar)
{
	//function mf_set_valor_soler_dolar
	//w!

	md_o_valor_soler_dolar = valor_soler_dolar;
}
void object_e_cambio_dolar_sistema::mf_set_fecha(_QSTR fecha)
{
	//function mf_set_fecha
	//w!

	md_o_fecha = fecha;
}

_QSTR object_e_cambio_dolar_sistema::mf_get_pk_cambio_dolar_s()
{
	//function mf_get_pk_cambio_dolar_s
	//w!

	return md_o_pk_cambio_dolar_s;
}
_QSTR object_e_cambio_dolar_sistema::mf_get_valor_dolar_soles()
{
	//function mf_get_valor_dolar_soles
	//w!

	return md_o_valor_dolar_soles;
}
_QSTR object_e_cambio_dolar_sistema::mf_get_valor_soler_dolar()
{
	//function mf_get_valor_soler_dolar
	//w!

	return md_o_valor_soler_dolar;
}
_QSTR object_e_cambio_dolar_sistema::mf_get_fecha()
{
	//function mf_get_fecha
	//w!

	return md_o_fecha;
}

bool object_e_cambio_dolar_sistema::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_cambio_dolar_sistema WHERE pk_cambio_dolar_s = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_cambio_dolar_s = query.value(0).toString();
		md_o_valor_dolar_soles = query.value(1).toString();
		md_o_valor_soler_dolar = query.value(2).toString();
		md_o_fecha = query.value(3).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_cambio_dolar_sistema::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_cambio_dolar_sistema(";
	str_query += "pk_cambio_dolar_s, ";
	str_query += "valor_dolar_soles, ";
	str_query += "valor_soler_dolar, ";
	str_query += "fecha";
	str_query += ") VALUES(";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_cambio_dolar_s != "")
	{
		query.bindValue(integer++, md_o_pk_cambio_dolar_s);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_valor_dolar_soles);
	query.bindValue(integer++, md_o_valor_soler_dolar);
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

bool object_e_cambio_dolar_sistema::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_cambio_dolar_sistema SET valor_dolar_soles = ?, valor_soler_dolar = ?, fecha = ? WHERE pk_cambio_dolar_s = ?");
	query.bindValue(0, md_o_valor_dolar_soles);
	query.bindValue(1, md_o_valor_soler_dolar);
	query.bindValue(2, md_o_fecha);
	query.bindValue(3, md_o_pk_cambio_dolar_s);

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

bool object_e_cambio_dolar_sistema::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_cambio_dolar_sistema FROM pk_cambio_dolar_s = ?");
	query.bindValue(0, md_o_pk_cambio_dolar_s);

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

