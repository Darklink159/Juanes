#include "object_e_sistema.h"

object_e_sistema::object_e_sistema()
{
	//file e_sistema
	//function construct_0
	//w!
}

object_e_sistema::object_e_sistema(_QSTR pk_code, _QSTR fk_boleta_s, _QSTR fk_factura_s, _QSTR fk_igv_s, _QSTR fk_cambio_dolar_s)
{
	//file e_sistema
	//function construct_1
	//w!

	md_o_pk_code = pk_code;
	md_o_fk_boleta_s = fk_boleta_s;
	md_o_fk_factura_s = fk_factura_s;
	md_o_fk_igv_s = fk_igv_s;
	md_o_fk_cambio_dolar_s = fk_cambio_dolar_s;
}
object_e_sistema::object_e_sistema(_QSTR fk_boleta_s, _QSTR fk_factura_s, _QSTR fk_igv_s, _QSTR fk_cambio_dolar_s)
{
	//file e_sistema
	//function construct_2
	//w!

	md_o_fk_boleta_s = fk_boleta_s;
	md_o_fk_factura_s = fk_factura_s;
	md_o_fk_igv_s = fk_igv_s;
	md_o_fk_cambio_dolar_s = fk_cambio_dolar_s;
}
object_e_sistema::~object_e_sistema()
{

}


void object_e_sistema::mf_set_pk_code(_QSTR pk_code)
{
	//function mf_set_pk_code
	//w!

	md_o_pk_code = pk_code;
}
void object_e_sistema::mf_set_fk_boleta_s(_QSTR fk_boleta_s)
{
	//function mf_set_fk_boleta_s
	//w!

	md_o_fk_boleta_s = fk_boleta_s;
}
void object_e_sistema::mf_set_fk_factura_s(_QSTR fk_factura_s)
{
	//function mf_set_fk_factura_s
	//w!

	md_o_fk_factura_s = fk_factura_s;
}
void object_e_sistema::mf_set_fk_igv_s(_QSTR fk_igv_s)
{
	//function mf_set_fk_igv_s
	//w!

	md_o_fk_igv_s = fk_igv_s;
}
void object_e_sistema::mf_set_fk_cambio_dolar_s(_QSTR fk_cambio_dolar_s)
{
	//function mf_set_fk_cambio_dolar_s
	//w!

	md_o_fk_cambio_dolar_s = fk_cambio_dolar_s;
}

_QSTR object_e_sistema::mf_get_pk_code()
{
	//function mf_get_pk_code
	//w!

	return md_o_pk_code;
}
_QSTR object_e_sistema::mf_get_fk_boleta_s()
{
	//function mf_get_fk_boleta_s
	//w!

	return md_o_fk_boleta_s;
}
_QSTR object_e_sistema::mf_get_fk_factura_s()
{
	//function mf_get_fk_factura_s
	//w!

	return md_o_fk_factura_s;
}
_QSTR object_e_sistema::mf_get_fk_igv_s()
{
	//function mf_get_fk_igv_s
	//w!

	return md_o_fk_igv_s;
}
_QSTR object_e_sistema::mf_get_fk_cambio_dolar_s()
{
	//function mf_get_fk_cambio_dolar_s
	//w!

	return md_o_fk_cambio_dolar_s;
}

bool object_e_sistema::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_sistema WHERE pk_code = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_code = query.value(0).toString();
		md_o_fk_boleta_s = query.value(1).toString();
		md_o_fk_factura_s = query.value(2).toString();
		md_o_fk_igv_s = query.value(3).toString();
		md_o_fk_cambio_dolar_s = query.value(4).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_sistema::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_sistema(";
	if (md_o_pk_code != "")
	str_query += "pk_code, ";
	str_query += "fk_boleta_s";
	str_query += ", fk_factura_s";
	str_query += ", fk_igv_s";
	str_query += ", fk_cambio_dolar_s";
	str_query += ") VALUES(";
	if (md_o_pk_code!= "")
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
	if (md_o_pk_code != "")
	{
		query.bindValue(integer++, md_o_pk_code);
	}
	query.bindValue(integer++, md_o_fk_boleta_s);
	query.bindValue(integer++, md_o_fk_factura_s);
	query.bindValue(integer++, md_o_fk_igv_s);
	query.bindValue(integer++, md_o_fk_cambio_dolar_s);

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

bool object_e_sistema::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_sistema SET fk_boleta_s = ?, fk_factura_s = ?, fk_igv_s = ?, fk_cambio_dolar_s = ? WHERE pk_code = ?");
	query.bindValue(0, md_o_fk_boleta_s);
	query.bindValue(1, md_o_fk_factura_s);
	query.bindValue(2, md_o_fk_igv_s);
	query.bindValue(3, md_o_fk_cambio_dolar_s);
	query.bindValue(4, md_o_pk_code);

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

bool object_e_sistema::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_sistema FROM pk_code = ?");
	query.bindValue(0, md_o_pk_code);

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

