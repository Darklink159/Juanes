#include "object_e_guia_rr_compra.h"

object_e_guia_rr_compra::object_e_guia_rr_compra()
{
	//file e_guia_rr_compra
	//function construct_0
	//w!
}

object_e_guia_rr_compra::object_e_guia_rr_compra(_QSTR pk_guiarr, _QSTR fk_comprobante, _QSTR fk_factura_compra, _QSTR fk_proveedor, _QSTR fk_orden_compra)
{
	//file e_guia_rr_compra
	//function construct_1
	//w!

	md_o_pk_guiarr = pk_guiarr;
	md_o_fk_comprobante = fk_comprobante;
	md_o_fk_factura_compra = fk_factura_compra;
	md_o_fk_proveedor = fk_proveedor;
	md_o_fk_orden_compra = fk_orden_compra;
}
object_e_guia_rr_compra::object_e_guia_rr_compra(_QSTR fk_comprobante, _QSTR fk_factura_compra, _QSTR fk_proveedor, _QSTR fk_orden_compra)
{
	//file e_guia_rr_compra
	//function construct_2
	//w!

	md_o_fk_comprobante = fk_comprobante;
	md_o_fk_factura_compra = fk_factura_compra;
	md_o_fk_proveedor = fk_proveedor;
	md_o_fk_orden_compra = fk_orden_compra;
}
object_e_guia_rr_compra::~object_e_guia_rr_compra()
{

}


void object_e_guia_rr_compra::mf_set_pk_guiarr(_QSTR pk_guiarr)
{
	//function mf_set_pk_guiarr
	//w!

	md_o_pk_guiarr = pk_guiarr;
}
void object_e_guia_rr_compra::mf_set_fk_comprobante(_QSTR fk_comprobante)
{
	//function mf_set_fk_comprobante
	//w!

	md_o_fk_comprobante = fk_comprobante;
}
void object_e_guia_rr_compra::mf_set_fk_factura_compra(_QSTR fk_factura_compra)
{
	//function mf_set_fk_factura_compra
	//w!

	md_o_fk_factura_compra = fk_factura_compra;
}
void object_e_guia_rr_compra::mf_set_fk_proveedor(_QSTR fk_proveedor)
{
	//function mf_set_fk_proveedor
	//w!

	md_o_fk_proveedor = fk_proveedor;
}
void object_e_guia_rr_compra::mf_set_fk_orden_compra(_QSTR fk_orden_compra)
{
	//function mf_set_fk_orden_compra
	//w!

	md_o_fk_orden_compra = fk_orden_compra;
}

_QSTR object_e_guia_rr_compra::mf_get_pk_guiarr()
{
	//function mf_get_pk_guiarr
	//w!

	return md_o_pk_guiarr;
}
_QSTR object_e_guia_rr_compra::mf_get_fk_comprobante()
{
	//function mf_get_fk_comprobante
	//w!

	return md_o_fk_comprobante;
}
_QSTR object_e_guia_rr_compra::mf_get_fk_factura_compra()
{
	//function mf_get_fk_factura_compra
	//w!

	return md_o_fk_factura_compra;
}
_QSTR object_e_guia_rr_compra::mf_get_fk_proveedor()
{
	//function mf_get_fk_proveedor
	//w!

	return md_o_fk_proveedor;
}
_QSTR object_e_guia_rr_compra::mf_get_fk_orden_compra()
{
	//function mf_get_fk_orden_compra
	//w!

	return md_o_fk_orden_compra;
}

bool object_e_guia_rr_compra::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_guia_rr_compra WHERE pk_guiarr = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_guiarr = query.value(0).toString();
		md_o_fk_comprobante = query.value(1).toString();
		md_o_fk_factura_compra = query.value(2).toString();
		md_o_fk_proveedor = query.value(3).toString();
		md_o_fk_orden_compra = query.value(4).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_guia_rr_compra::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_guia_rr_compra(";
	if (md_o_pk_guiarr != "")
		str_query += "pk_guiarr, ";
	str_query += "fk_comprobante, ";
	str_query += "fk_factura_compra, ";
	str_query += "fk_proveedor, ";
	str_query += "fk_orden_compra";
	str_query += ") VALUES(";
	if (md_o_pk_guiarr!= "")
	{
		str_query += "?, ";
	}
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_guiarr != "")
	{
		query.bindValue(0, md_o_pk_guiarr);
		integer++;
	}
	query.bindValue(integer++, md_o_fk_comprobante);
	query.bindValue(integer++, md_o_fk_factura_compra);
	query.bindValue(integer++, md_o_fk_proveedor);
	query.bindValue(integer++, md_o_fk_orden_compra);

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

bool object_e_guia_rr_compra::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_guia_rr_compra SET fk_comprobante = ?, fk_factura_compra = ?, fk_proveedor = ?, fk_orden_compra = ? WHERE pk_guiarr = ?");
	query.bindValue(0, md_o_fk_comprobante);
	query.bindValue(1, md_o_fk_factura_compra);
	query.bindValue(2, md_o_fk_proveedor);
	query.bindValue(3, md_o_fk_orden_compra);
	query.bindValue(4, md_o_pk_guiarr);

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

bool object_e_guia_rr_compra::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_guia_rr_compra FROM pk_guiarr = ?");
	query.bindValue(0, md_o_pk_guiarr);

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

