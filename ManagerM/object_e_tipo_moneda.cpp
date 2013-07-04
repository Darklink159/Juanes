#include "object_e_tipo_moneda.h"

object_e_tipo_moneda::object_e_tipo_moneda()
{
	//file e_tipo_moneda
	//function construct_0
	//w!
}

object_e_tipo_moneda::object_e_tipo_moneda(_QSTR pk_tipo_moneda, _QSTR descripcion)
{
	//file e_tipo_moneda
	//function construct_1
	//w!

	md_o_pk_tipo_moneda = pk_tipo_moneda;
	md_o_descripcion = descripcion;
}
object_e_tipo_moneda::object_e_tipo_moneda(_QSTR descripcion)
{
	//file e_tipo_moneda
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
}
object_e_tipo_moneda::~object_e_tipo_moneda()
{

}


void object_e_tipo_moneda::mf_set_pk_tipo_moneda(_QSTR pk_tipo_moneda)
{
	//function mf_set_pk_tipo_moneda
	//w!

	md_o_pk_tipo_moneda = pk_tipo_moneda;
}
void object_e_tipo_moneda::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}

_QSTR object_e_tipo_moneda::mf_get_pk_tipo_moneda()
{
	//function mf_get_pk_tipo_moneda
	//w!

	return md_o_pk_tipo_moneda;
}
_QSTR object_e_tipo_moneda::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}

bool object_e_tipo_moneda::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_tipo_moneda WHERE pk_tipo_moneda = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_tipo_moneda = query.value(0).toString();
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
bool object_e_tipo_moneda::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_tipo_moneda(";
	if (md_o_pk_tipo_moneda != "")
		str_query += "pk_tipo_moneda, ";
	str_query += ") VALUES(";
	if (md_o_pk_tipo_moneda!= "")
	{
		str_query += "?, ";
	}
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_tipo_moneda != "")
	{
		query.bindValue(0, md_o_pk_tipo_moneda);
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

bool object_e_tipo_moneda::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_tipo_moneda SET descripcion = ? WHERE pk_tipo_moneda = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_tipo_moneda);

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

bool object_e_tipo_moneda::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_tipo_moneda FROM pk_tipo_moneda = ?");
	query.bindValue(0, md_o_pk_tipo_moneda);

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

