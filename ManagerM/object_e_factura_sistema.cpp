#include "object_e_factura_sistema.h"

object_e_factura_sistema::object_e_factura_sistema()
{
	//file e_factura_sistema
	//function construct_0
	//w!
}

object_e_factura_sistema::object_e_factura_sistema(_QSTR pk_factura_s, _QSTR serie, _QSTR numero_inicio, _QSTR numero_fin, _QSTR numero_actual)
{
	//file e_factura_sistema
	//function construct_1
	//w!

	md_o_pk_factura_s = pk_factura_s;
	md_o_serie = serie;
	md_o_numero_inicio = numero_inicio;
	md_o_numero_fin = numero_fin;
	md_o_numero_actual = numero_actual;
}
object_e_factura_sistema::object_e_factura_sistema(_QSTR serie, _QSTR numero_inicio, _QSTR numero_fin, _QSTR numero_actual)
{
	//file e_factura_sistema
	//function construct_2
	//w!

	md_o_serie = serie;
	md_o_numero_inicio = numero_inicio;
	md_o_numero_fin = numero_fin;
	md_o_numero_actual = numero_actual;
}
object_e_factura_sistema::~object_e_factura_sistema()
{

}


void object_e_factura_sistema::mf_set_pk_factura_s(_QSTR pk_factura_s)
{
	//function mf_set_pk_factura_s
	//w!

	md_o_pk_factura_s = pk_factura_s;
}
void object_e_factura_sistema::mf_set_serie(_QSTR serie)
{
	//function mf_set_serie
	//w!

	md_o_serie = serie;
}
void object_e_factura_sistema::mf_set_numero_inicio(_QSTR numero_inicio)
{
	//function mf_set_numero_inicio
	//w!

	md_o_numero_inicio = numero_inicio;
}
void object_e_factura_sistema::mf_set_numero_fin(_QSTR numero_fin)
{
	//function mf_set_numero_fin
	//w!

	md_o_numero_fin = numero_fin;
}
void object_e_factura_sistema::mf_set_numero_actual(_QSTR numero_actual)
{
	//function mf_set_numero_actual
	//w!

	md_o_numero_actual = numero_actual;
}

_QSTR object_e_factura_sistema::mf_get_pk_factura_s()
{
	//function mf_get_pk_factura_s
	//w!

	return md_o_pk_factura_s;
}
_QSTR object_e_factura_sistema::mf_get_serie()
{
	//function mf_get_serie
	//w!

	return md_o_serie;
}
_QSTR object_e_factura_sistema::mf_get_numero_inicio()
{
	//function mf_get_numero_inicio
	//w!

	return md_o_numero_inicio;
}
_QSTR object_e_factura_sistema::mf_get_numero_fin()
{
	//function mf_get_numero_fin
	//w!

	return md_o_numero_fin;
}
_QSTR object_e_factura_sistema::mf_get_numero_actual()
{
	//function mf_get_numero_actual
	//w!

	return md_o_numero_actual;
}

bool object_e_factura_sistema::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_factura_sistema WHERE pk_factura_s = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_factura_s = query.value(0).toString();
		md_o_serie = query.value(1).toString();
		md_o_numero_inicio = query.value(2).toString();
		md_o_numero_fin = query.value(3).toString();
		md_o_numero_actual = query.value(4).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_factura_sistema::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_factura_sistema(";
	if (md_o_pk_factura_s != "")
	str_query += "pk_factura_s, ";
	str_query += "serie";
	str_query += ", numero_inicio";
	str_query += ", numero_fin";
	str_query += ", numero_actual";
	str_query += ") VALUES(";
	if (md_o_pk_factura_s!= "")
	{
	str_query += "?, ";
	}
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_factura_s != "")
	{
		query.bindValue(integer++, md_o_pk_factura_s);
	}
	query.bindValue(integer++, md_o_serie);
	query.bindValue(integer++, md_o_numero_inicio);
	query.bindValue(integer++, md_o_numero_fin);
	query.bindValue(integer++, md_o_numero_actual);

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

bool object_e_factura_sistema::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_factura_sistema SET serie = ?, numero_inicio = ?, numero_fin = ?, numero_actual = ? WHERE pk_factura_s = ?");
	query.bindValue(0, md_o_serie);
	query.bindValue(1, md_o_numero_inicio);
	query.bindValue(2, md_o_numero_fin);
	query.bindValue(3, md_o_numero_actual);
	query.bindValue(4, md_o_pk_factura_s);

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

bool object_e_factura_sistema::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_factura_sistema FROM pk_factura_s = ?");
	query.bindValue(0, md_o_pk_factura_s);

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

