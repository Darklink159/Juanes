#include "object_e_factura_venta.h"

object_e_factura_venta::object_e_factura_venta()
{
	//file e_factura_venta
	//function construct_0
	//w!
}

object_e_factura_venta::object_e_factura_venta(_QSTR pk_comprobante, _QSTR fk_cliente, _QSTR total, _QSTR igv)
{
	//file e_factura_venta
	//function construct_1
	//w!

	md_o_pk_comprobante = pk_comprobante;
	md_o_fk_cliente = fk_cliente;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_factura_venta::object_e_factura_venta(_QSTR fk_cliente, _QSTR total, _QSTR igv)
{
	//file e_factura_venta
	//function construct_2
	//w!

	md_o_fk_cliente = fk_cliente;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_factura_venta::~object_e_factura_venta()
{

}


void object_e_factura_venta::mf_set_pk_comprobante(_QSTR pk_comprobante)
{
	//function mf_set_pk_comprobante
	//w!

	md_o_pk_comprobante = pk_comprobante;
}
void object_e_factura_venta::mf_set_fk_cliente(_QSTR fk_cliente)
{
	//function mf_set_fk_cliente
	//w!

	md_o_fk_cliente = fk_cliente;
}
void object_e_factura_venta::mf_set_total(_QSTR total)
{
	//function mf_set_total
	//w!

	md_o_total = total;
}
void object_e_factura_venta::mf_set_igv(_QSTR igv)
{
	//function mf_set_igv
	//w!

	md_o_igv = igv;
}

_QSTR object_e_factura_venta::mf_get_pk_comprobante()
{
	//function mf_get_pk_comprobante
	//w!

	return md_o_pk_comprobante;
}
_QSTR object_e_factura_venta::mf_get_fk_cliente()
{
	//function mf_get_fk_cliente
	//w!

	return md_o_fk_cliente;
}
_QSTR object_e_factura_venta::mf_get_total()
{
	//function mf_get_total
	//w!

	return md_o_total;
}
_QSTR object_e_factura_venta::mf_get_igv()
{
	//function mf_get_igv
	//w!

	return md_o_igv;
}

bool object_e_factura_venta::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_factura_venta WHERE pk_comprobante = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_comprobante = query.value(0).toString();
		md_o_fk_cliente = query.value(1).toString();
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
bool object_e_factura_venta::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_factura_venta(";
	str_query += "pk_comprobante";
	str_query += ", fk_cliente";
	str_query += ", total";
	str_query += ", igv";
	str_query += ") VALUES(";
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_comprobante != "")
	{
		query.bindValue(integer++, md_o_pk_comprobante);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_fk_cliente);
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

bool object_e_factura_venta::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_factura_venta SET fk_cliente = ?, total = ?, igv = ? WHERE pk_comprobante = ?");
	query.bindValue(0, md_o_fk_cliente);
	query.bindValue(1, md_o_total);
	query.bindValue(2, md_o_igv);
	query.bindValue(3, md_o_pk_comprobante);

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

bool object_e_factura_venta::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_factura_venta FROM pk_comprobante = ?");
	query.bindValue(0, md_o_pk_comprobante);

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

