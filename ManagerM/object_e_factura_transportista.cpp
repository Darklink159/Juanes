#include "object_e_factura_transportista.h"

object_e_factura_transportista::object_e_factura_transportista()
{
	//file e_factura_transportista
	//function construct_0
	//w!
}

object_e_factura_transportista::object_e_factura_transportista(_QSTR fk_comprobante, _QSTR fk_transportista, _QSTR total, _QSTR igv)
{
	//file e_factura_transportista
	//function construct_1
	//w!

	md_o_fk_comprobante = fk_comprobante;
	md_o_fk_transportista = fk_transportista;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_factura_transportista::object_e_factura_transportista(_QSTR fk_transportista, _QSTR total, _QSTR igv)
{
	//file e_factura_transportista
	//function construct_2
	//w!

	md_o_fk_transportista = fk_transportista;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_factura_transportista::~object_e_factura_transportista()
{

}


void object_e_factura_transportista::mf_set_fk_comprobante(_QSTR fk_comprobante)
{
	//function mf_set_fk_comprobante
	//w!

	md_o_fk_comprobante = fk_comprobante;
}
void object_e_factura_transportista::mf_set_fk_transportista(_QSTR fk_transportista)
{
	//function mf_set_fk_transportista
	//w!

	md_o_fk_transportista = fk_transportista;
}
void object_e_factura_transportista::mf_set_total(_QSTR total)
{
	//function mf_set_total
	//w!

	md_o_total = total;
}
void object_e_factura_transportista::mf_set_igv(_QSTR igv)
{
	//function mf_set_igv
	//w!

	md_o_igv = igv;
}

_QSTR object_e_factura_transportista::mf_get_fk_comprobante()
{
	//function mf_get_fk_comprobante
	//w!

	return md_o_fk_comprobante;
}
_QSTR object_e_factura_transportista::mf_get_fk_transportista()
{
	//function mf_get_fk_transportista
	//w!

	return md_o_fk_transportista;
}
_QSTR object_e_factura_transportista::mf_get_total()
{
	//function mf_get_total
	//w!

	return md_o_total;
}
_QSTR object_e_factura_transportista::mf_get_igv()
{
	//function mf_get_igv
	//w!

	return md_o_igv;
}

bool object_e_factura_transportista::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_factura_transportista WHERE fk_comprobante = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_fk_comprobante = query.value(0).toString();
		md_o_fk_transportista = query.value(1).toString();
		md_o_total = query.value(2).toString();
		md_o_igv = query.value(3).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_factura_transportista::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_factura_transportista(";
	if (md_o_fk_comprobante != "")
		str_query += "fk_comprobante, ";
	str_query += "fk_transportista, ";
	str_query += "total, ";
	str_query += "igv";
	str_query += ") VALUES(";
	if (md_o_fk_comprobante!= "")
	{
		str_query += "?, ";
	}
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_fk_comprobante != "")
	{
		query.bindValue(0, md_o_fk_comprobante);
		integer++;
	}
	query.bindValue(integer++, md_o_fk_transportista);
	query.bindValue(integer++, md_o_total);
	query.bindValue(integer++, md_o_igv);

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

bool object_e_factura_transportista::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_factura_transportista SET fk_transportista = ?, total = ?, igv = ? WHERE fk_comprobante = ?");
	query.bindValue(0, md_o_fk_transportista);
	query.bindValue(1, md_o_total);
	query.bindValue(2, md_o_igv);
	query.bindValue(3, md_o_fk_comprobante);

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

bool object_e_factura_transportista::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_factura_transportista FROM fk_comprobante = ?");
	query.bindValue(0, md_o_fk_comprobante);

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

