#include "share_include.h"

object_e_marca::object_e_marca()
{
	//function construct_0
	//w!
}

object_e_marca::object_e_marca(_QSTR pk_marca, _QSTR descripcion)
{
	//function construct_1
	//w!

	md_o_pk_marca = pk_marca;
	md_o_descripcion = descripcion;
}
object_e_marca::object_e_marca(_QSTR descripcion)
{
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
}
object_e_marca::~object_e_marca()
{

}


void object_e_marca::mf_set_pk_marca(_QSTR pk_marca)
{
	//function mf_set_pk_marca
	//w!

	md_o_pk_marca = pk_marca;
}
void object_e_marca::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}

_QSTR object_e_marca::mf_get_pk_marca()
{
	//function mf_get_pk_marca
	//w!

	return md_o_pk_marca;
}
_QSTR object_e_marca::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}

bool object_e_marca::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_marca WHERE pk_marca = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_marca = query.value(0).toString();
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
bool object_e_marca::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_marca(descripcion) VALUES(?)");
	query.bindValue(0, md_o_descripcion);

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

bool object_e_marca::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_marca SET descripcion = ? WHERE pk_marca = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_marca);

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

bool object_e_marca::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_marca FROM pk_marca = ?");
	query.bindValue(0, md_o_pk_marca);

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

