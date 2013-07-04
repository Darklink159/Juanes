#include "object_e_proveedor.h"

object_e_proveedor::object_e_proveedor()
{
	//file e_proveedor
	//function construct_0
	//w!
}

object_e_proveedor::object_e_proveedor(_QSTR pk_ruc, _QSTR nombre_vendedor, _QSTR celular_vendedor)
{
	//file e_proveedor
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
	md_o_nombre_vendedor = nombre_vendedor;
	md_o_celular_vendedor = celular_vendedor;
}
object_e_proveedor::object_e_proveedor(_QSTR nombre_vendedor, _QSTR celular_vendedor)
{
	//file e_proveedor
	//function construct_2
	//w!

	md_o_nombre_vendedor = nombre_vendedor;
	md_o_celular_vendedor = celular_vendedor;
}
object_e_proveedor::~object_e_proveedor()
{

}


void object_e_proveedor::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}
void object_e_proveedor::mf_set_nombre_vendedor(_QSTR nombre_vendedor)
{
	//function mf_set_nombre_vendedor
	//w!

	md_o_nombre_vendedor = nombre_vendedor;
}
void object_e_proveedor::mf_set_celular_vendedor(_QSTR celular_vendedor)
{
	//function mf_set_celular_vendedor
	//w!

	md_o_celular_vendedor = celular_vendedor;
}

_QSTR object_e_proveedor::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}
_QSTR object_e_proveedor::mf_get_nombre_vendedor()
{
	//function mf_get_nombre_vendedor
	//w!

	return md_o_nombre_vendedor;
}
_QSTR object_e_proveedor::mf_get_celular_vendedor()
{
	//function mf_get_celular_vendedor
	//w!

	return md_o_celular_vendedor;
}

bool object_e_proveedor::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_proveedor WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();
		md_o_nombre_vendedor = query.value(1).toString();
		md_o_celular_vendedor = query.value(2).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_proveedor::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_proveedor(";
	str_query += "pk_ruc";
	str_query += ", nombre_vendedor";
	str_query += ", celular_vendedor";
	str_query += ") VALUES(";
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_ruc != "")
	{
		query.bindValue(integer++, md_o_pk_ruc);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_nombre_vendedor);
	query.bindValue(integer++, md_o_celular_vendedor);

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

bool object_e_proveedor::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_proveedor SET nombre_vendedor = ?, celular_vendedor = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_nombre_vendedor);
	query.bindValue(1, md_o_celular_vendedor);
	query.bindValue(2, md_o_pk_ruc);

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

bool object_e_proveedor::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_proveedor FROM pk_ruc = ?");
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

