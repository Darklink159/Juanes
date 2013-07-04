#include "share_include.h"

object_e_tienda::object_e_tienda()
{
	//file e_tienda
	//function construct_0
	//w!
}

object_e_tienda::object_e_tienda(_QSTR pk_ruc, _QSTR nombre, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR email, _QSTR pagina_web, _QSTR comentario)
{
	//file e_tienda
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
	md_o_nombre = nombre;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_fax = fax;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
}
object_e_tienda::object_e_tienda(_QSTR nombre, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR email, _QSTR pagina_web, _QSTR comentario)
{
	//file e_tienda
	//function construct_2
	//w!

	md_o_nombre = nombre;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_fax = fax;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
}
object_e_tienda::~object_e_tienda()
{

}


void object_e_tienda::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}
void object_e_tienda::mf_set_nombre(_QSTR nombre)
{
	//function mf_set_nombre
	//w!

	md_o_nombre = nombre;
}
void object_e_tienda::mf_set_direccion(_QSTR direccion)
{
	//function mf_set_direccion
	//w!

	md_o_direccion = direccion;
}
void object_e_tienda::mf_set_telefono_fijo(_QSTR telefono_fijo)
{
	//function mf_set_telefono_fijo
	//w!

	md_o_telefono_fijo = telefono_fijo;
}
void object_e_tienda::mf_set_fax(_QSTR fax)
{
	//function mf_set_fax
	//w!

	md_o_fax = fax;
}
void object_e_tienda::mf_set_email(_QSTR email)
{
	//function mf_set_email
	//w!

	md_o_email = email;
}
void object_e_tienda::mf_set_pagina_web(_QSTR pagina_web)
{
	//function mf_set_pagina_web
	//w!

	md_o_pagina_web = pagina_web;
}
void object_e_tienda::mf_set_comentario(_QSTR comentario)
{
	//function mf_set_comentario
	//w!

	md_o_comentario = comentario;
}

_QSTR object_e_tienda::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}
_QSTR object_e_tienda::mf_get_nombre()
{
	//function mf_get_nombre
	//w!

	return md_o_nombre;
}
_QSTR object_e_tienda::mf_get_direccion()
{
	//function mf_get_direccion
	//w!

	return md_o_direccion;
}
_QSTR object_e_tienda::mf_get_telefono_fijo()
{
	//function mf_get_telefono_fijo
	//w!

	return md_o_telefono_fijo;
}
_QSTR object_e_tienda::mf_get_fax()
{
	//function mf_get_fax
	//w!

	return md_o_fax;
}
_QSTR object_e_tienda::mf_get_email()
{
	//function mf_get_email
	//w!

	return md_o_email;
}
_QSTR object_e_tienda::mf_get_pagina_web()
{
	//function mf_get_pagina_web
	//w!

	return md_o_pagina_web;
}
_QSTR object_e_tienda::mf_get_comentario()
{
	//function mf_get_comentario
	//w!

	return md_o_comentario;
}

bool object_e_tienda::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_tienda WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();
		md_o_nombre = query.value(1).toString();
		md_o_direccion = query.value(2).toString();
		md_o_telefono_fijo = query.value(3).toString();
		md_o_fax = query.value(4).toString();
		md_o_email = query.value(5).toString();
		md_o_pagina_web = query.value(6).toString();
		md_o_comentario = query.value(7).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_tienda::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_tienda(";
	if (md_o_pk_ruc != "")
		str_query += "pk_ruc";
	str_query += ", nombre";
	str_query += ", direccion";
	str_query += ", telefono_fijo";
	str_query += ", fax";
	str_query += ", email";
	str_query += ", pagina_web";
	str_query += ", comentario";
	str_query += ") VALUES(?";
	if (md_o_pk_ruc!= "")
	{
		str_query += ", ?";
	}
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_ruc != "")
	{
		query.bindValue(0, md_o_pk_ruc);
		integer++;
	}
	query.bindValue(integer++, md_o_nombre);
	query.bindValue(integer++, md_o_direccion);
	query.bindValue(integer++, md_o_telefono_fijo);
	query.bindValue(integer++, md_o_fax);
	query.bindValue(integer++, md_o_email);
	query.bindValue(integer++, md_o_pagina_web);
	query.bindValue(integer++, md_o_comentario);

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

bool object_e_tienda::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_tienda SET nombre = ?, direccion = ?, telefono_fijo = ?, fax = ?, email = ?, pagina_web = ?, comentario = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_nombre);
	query.bindValue(1, md_o_direccion);
	query.bindValue(2, md_o_telefono_fijo);
	query.bindValue(3, md_o_fax);
	query.bindValue(4, md_o_email);
	query.bindValue(5, md_o_pagina_web);
	query.bindValue(6, md_o_comentario);
	query.bindValue(7, md_o_pk_ruc);

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

bool object_e_tienda::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_tienda FROM pk_ruc = ?");
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

