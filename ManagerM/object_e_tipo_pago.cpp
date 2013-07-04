#include "object_e_tipo_pago.h"

object_e_tipo_pago::object_e_tipo_pago()
{
	//file e_tipo_pago
	//function construct_0
	//w!
}

object_e_tipo_pago::object_e_tipo_pago(_QSTR pk_tipo_pago, _QSTR descripcion)
{
	//file e_tipo_pago
	//function construct_1
	//w!

	md_o_pk_tipo_pago = pk_tipo_pago;
	md_o_descripcion = descripcion;
}
object_e_tipo_pago::object_e_tipo_pago(_QSTR descripcion)
{
	//file e_tipo_pago
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
}
object_e_tipo_pago::~object_e_tipo_pago()
{

}


void object_e_tipo_pago::mf_set_pk_tipo_pago(_QSTR pk_tipo_pago)
{
	//function mf_set_pk_tipo_pago
	//w!

	md_o_pk_tipo_pago = pk_tipo_pago;
}
void object_e_tipo_pago::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}

_QSTR object_e_tipo_pago::mf_get_pk_tipo_pago()
{
	//function mf_get_pk_tipo_pago
	//w!

	return md_o_pk_tipo_pago;
}
_QSTR object_e_tipo_pago::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}

bool object_e_tipo_pago::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_tipo_pago WHERE pk_tipo_pago = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_tipo_pago = query.value(0).toString();
		md_o_descripcion = query.value(1).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_tipo_pago::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_tipo_pago(";
	if (md_o_pk_tipo_pago != "")
		str_query += "pk_tipo_pago, ";
	str_query += ") VALUES(";
	if (md_o_pk_tipo_pago!= "")
	{
		str_query += "?, ";
	}
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_tipo_pago != "")
	{
		query.bindValue(0, md_o_pk_tipo_pago);
		integer++;
	}
	query.bindValue(integer++, md_o_descripcion);

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

bool object_e_tipo_pago::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_tipo_pago SET descripcion = ? WHERE pk_tipo_pago = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_tipo_pago);

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

bool object_e_tipo_pago::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_tipo_pago FROM pk_tipo_pago = ?");
	query.bindValue(0, md_o_pk_tipo_pago);

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

