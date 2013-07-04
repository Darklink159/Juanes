#include "share_include.h"

object_e_grupo::object_e_grupo()
{
	//function construct_0
	//w!
}

object_e_grupo::object_e_grupo(_QSTR pk_grupo, _QSTR descripcion)
{
	//function construct_1
	//w!

	md_o_pk_grupo = pk_grupo;
	md_o_descripcion = descripcion;
}
object_e_grupo::object_e_grupo(_QSTR descripcion)
{
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
}
object_e_grupo::~object_e_grupo()
{

}


void object_e_grupo::mf_set_pk_grupo(_QSTR pk_grupo)
{
	//function mf_set_pk_grupo
	//w!

	md_o_pk_grupo = pk_grupo;
}
void object_e_grupo::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}

_QSTR object_e_grupo::mf_get_pk_grupo()
{
	//function mf_get_pk_grupo
	//w!

	return md_o_pk_grupo;
}
_QSTR object_e_grupo::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}

bool object_e_grupo::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_grupo WHERE pk_grupo = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_grupo = query.value(0).toString();
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
bool object_e_grupo::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_grupo(descripcion) VALUES(?)");
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

bool object_e_grupo::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_grupo SET descripcion = ? WHERE pk_grupo = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_grupo);

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

bool object_e_grupo::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_grupo FROM pk_grupo = ?");
	query.bindValue(0, md_o_pk_grupo);

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

