#include "share_include.h"

object_e_banco::object_e_banco()
{
	//function construct_0
	//w!
}

object_e_banco::object_e_banco(_QSTR pk_ruc, _QSTR nombre, _QSTR nombre_corto)
{
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
	md_o_nombre = nombre;
	md_o_nombre_corto = nombre_corto;
}
object_e_banco::object_e_banco(_QSTR nombre, _QSTR nombre_corto)
{
	//function construct_2
	//w!

	md_o_nombre = nombre;
	md_o_nombre_corto = nombre_corto;
}
object_e_banco::~object_e_banco()
{

}


void object_e_banco::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}
void object_e_banco::mf_set_nombre(_QSTR nombre)
{
	//function mf_set_nombre
	//w!

	md_o_nombre = nombre;
}
void object_e_banco::mf_set_nombre_corto(_QSTR nombre_corto)
{
	//function mf_set_nombre_corto
	//w!

	md_o_nombre_corto = nombre_corto;
}

_QSTR object_e_banco::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}
_QSTR object_e_banco::mf_get_nombre()
{
	//function mf_get_nombre
	//w!

	return md_o_nombre;
}
_QSTR object_e_banco::mf_get_nombre_corto()
{
	//function mf_get_nombre_corto
	//w!

	return md_o_nombre_corto;
}

bool object_e_banco::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_banco WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();
		md_o_nombre = query.value(1).toString();
		md_o_nombre_corto = query.value(2).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_banco::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

    query.prepare("INSERT INTO e_banco(pk_ruc, nombre, nombre_corto) VALUES(?, ?, ?)");
    query.bindValue(0, md_o_pk_ruc);
    query.bindValue(1, md_o_nombre);
    query.bindValue(2, md_o_nombre_corto);

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

bool object_e_banco::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_banco SET nombre = ?, nombre_corto = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_nombre);
	query.bindValue(1, md_o_nombre_corto);
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

bool object_e_banco::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_banco FROM pk_ruc = ?");
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

