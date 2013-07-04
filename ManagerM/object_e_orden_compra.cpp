#include "object_e_orden_compra.h"

object_e_orden_compra::object_e_orden_compra()
{
	//file e_orden_compra
	//function construct_0
	//w!
}

object_e_orden_compra::object_e_orden_compra(_QSTR pk_orden_compra, _QSTR fk_comprobante, _QSTR fk_transportista, _QSTR fk_proveedor, _QSTR fk_tipo_pago, _QSTR fk_tipo_moneda, _QSTR total, _QSTR igv)
{
	//file e_orden_compra
	//function construct_1
	//w!

	md_o_pk_orden_compra = pk_orden_compra;
	md_o_fk_comprobante = fk_comprobante;
	md_o_fk_transportista = fk_transportista;
	md_o_fk_proveedor = fk_proveedor;
	md_o_fk_tipo_pago = fk_tipo_pago;
	md_o_fk_tipo_moneda = fk_tipo_moneda;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_orden_compra::object_e_orden_compra(_QSTR fk_comprobante, _QSTR fk_transportista, _QSTR fk_proveedor, _QSTR fk_tipo_pago, _QSTR fk_tipo_moneda, _QSTR total, _QSTR igv)
{
	//file e_orden_compra
	//function construct_2
	//w!

	md_o_fk_comprobante = fk_comprobante;
	md_o_fk_transportista = fk_transportista;
	md_o_fk_proveedor = fk_proveedor;
	md_o_fk_tipo_pago = fk_tipo_pago;
	md_o_fk_tipo_moneda = fk_tipo_moneda;
	md_o_total = total;
	md_o_igv = igv;
}
object_e_orden_compra::~object_e_orden_compra()
{

}


void object_e_orden_compra::mf_set_pk_orden_compra(_QSTR pk_orden_compra)
{
	//function mf_set_pk_orden_compra
	//w!

	md_o_pk_orden_compra = pk_orden_compra;
}
void object_e_orden_compra::mf_set_fk_comprobante(_QSTR fk_comprobante)
{
	//function mf_set_fk_comprobante
	//w!

	md_o_fk_comprobante = fk_comprobante;
}
void object_e_orden_compra::mf_set_fk_transportista(_QSTR fk_transportista)
{
	//function mf_set_fk_transportista
	//w!

	md_o_fk_transportista = fk_transportista;
}
void object_e_orden_compra::mf_set_fk_proveedor(_QSTR fk_proveedor)
{
	//function mf_set_fk_proveedor
	//w!

	md_o_fk_proveedor = fk_proveedor;
}
void object_e_orden_compra::mf_set_fk_tipo_pago(_QSTR fk_tipo_pago)
{
	//function mf_set_fk_tipo_pago
	//w!

	md_o_fk_tipo_pago = fk_tipo_pago;
}
void object_e_orden_compra::mf_set_fk_tipo_moneda(_QSTR fk_tipo_moneda)
{
	//function mf_set_fk_tipo_moneda
	//w!

	md_o_fk_tipo_moneda = fk_tipo_moneda;
}
void object_e_orden_compra::mf_set_total(_QSTR total)
{
	//function mf_set_total
	//w!

	md_o_total = total;
}
void object_e_orden_compra::mf_set_igv(_QSTR igv)
{
	//function mf_set_igv
	//w!

	md_o_igv = igv;
}

_QSTR object_e_orden_compra::mf_get_pk_orden_compra()
{
	//function mf_get_pk_orden_compra
	//w!

	return md_o_pk_orden_compra;
}
_QSTR object_e_orden_compra::mf_get_fk_comprobante()
{
	//function mf_get_fk_comprobante
	//w!

	return md_o_fk_comprobante;
}
_QSTR object_e_orden_compra::mf_get_fk_transportista()
{
	//function mf_get_fk_transportista
	//w!

	return md_o_fk_transportista;
}
_QSTR object_e_orden_compra::mf_get_fk_proveedor()
{
	//function mf_get_fk_proveedor
	//w!

	return md_o_fk_proveedor;
}
_QSTR object_e_orden_compra::mf_get_fk_tipo_pago()
{
	//function mf_get_fk_tipo_pago
	//w!

	return md_o_fk_tipo_pago;
}
_QSTR object_e_orden_compra::mf_get_fk_tipo_moneda()
{
	//function mf_get_fk_tipo_moneda
	//w!

	return md_o_fk_tipo_moneda;
}
_QSTR object_e_orden_compra::mf_get_total()
{
	//function mf_get_total
	//w!

	return md_o_total;
}
_QSTR object_e_orden_compra::mf_get_igv()
{
	//function mf_get_igv
	//w!

	return md_o_igv;
}

bool object_e_orden_compra::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_orden_compra WHERE pk_orden_compra = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_orden_compra = query.value(0).toString();
		md_o_fk_comprobante = query.value(1).toString();
		md_o_fk_transportista = query.value(2).toString();
		md_o_fk_proveedor = query.value(3).toString();
		md_o_fk_tipo_pago = query.value(4).toString();
		md_o_fk_tipo_moneda = query.value(5).toString();
		md_o_total = query.value(6).toString();
		md_o_igv = query.value(7).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_orden_compra::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_orden_compra(";
	if (md_o_pk_orden_compra != "")
		str_query += "pk_orden_compra, ";
	str_query += "fk_comprobante, ";
	str_query += "fk_transportista, ";
	str_query += "fk_proveedor, ";
	str_query += "fk_tipo_pago, ";
	str_query += "fk_tipo_moneda, ";
	str_query += "total, ";
	str_query += "igv";
	str_query += ") VALUES(";
	if (md_o_pk_orden_compra!= "")
	{
		str_query += "?, ";
	}
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_orden_compra != "")
	{
		query.bindValue(0, md_o_pk_orden_compra);
		integer++;
	}
	query.bindValue(integer++, md_o_fk_comprobante);
	query.bindValue(integer++, md_o_fk_transportista);
	query.bindValue(integer++, md_o_fk_proveedor);
	query.bindValue(integer++, md_o_fk_tipo_pago);
	query.bindValue(integer++, md_o_fk_tipo_moneda);
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

bool object_e_orden_compra::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_orden_compra SET fk_comprobante = ?, fk_transportista = ?, fk_proveedor = ?, fk_tipo_pago = ?, fk_tipo_moneda = ?, total = ?, igv = ? WHERE pk_orden_compra = ?");
	query.bindValue(0, md_o_fk_comprobante);
	query.bindValue(1, md_o_fk_transportista);
	query.bindValue(2, md_o_fk_proveedor);
	query.bindValue(3, md_o_fk_tipo_pago);
	query.bindValue(4, md_o_fk_tipo_moneda);
	query.bindValue(5, md_o_total);
	query.bindValue(6, md_o_igv);
	query.bindValue(7, md_o_pk_orden_compra);

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

bool object_e_orden_compra::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_orden_compra FROM pk_orden_compra = ?");
	query.bindValue(0, md_o_pk_orden_compra);

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

