#include "share_include.h"

object_e_medida::object_e_medida()
{
	//function construct_0
	//w!
}

object_e_medida::object_e_medida(_QSTR pk_medida, _QSTR descripcion)
{
	//function construct_1
	//w!

	md_o_pk_medida = pk_medida;
	md_o_descripcion = descripcion;
}
object_e_medida::object_e_medida(_QSTR descripcion)
{
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
}
object_e_medida::~object_e_medida()
{

}


void object_e_medida::mf_set_pk_medida(_QSTR pk_medida)
{
	//function mf_set_pk_medida
	//w!

	md_o_pk_medida = pk_medida;
}
void object_e_medida::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}

_QSTR object_e_medida::mf_get_pk_medida()
{
	//function mf_get_pk_medida
	//w!

	return md_o_pk_medida;
}
_QSTR object_e_medida::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}

bool object_e_medida::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_medida WHERE pk_medida = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_medida = query.value(0).toString();
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
bool object_e_medida::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_medida(descripcion) VALUES(?)");
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

bool object_e_medida::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_medida SET descripcion = ? WHERE pk_medida = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_medida);

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

bool object_e_medida::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_medida FROM pk_medida = ?");
	query.bindValue(0, md_o_pk_medida);

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

