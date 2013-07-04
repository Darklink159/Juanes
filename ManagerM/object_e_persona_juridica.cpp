#include "object_e_persona_juridica.h"
#include <QSqlError>
object_e_persona_juridica::object_e_persona_juridica()
{
	//file e_persona_juridica
	//function construct_0
	//w!
}

object_e_persona_juridica::object_e_persona_juridica(_QSTR pk_ruc, _QSTR fk_region, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario, _QSTR habilitado)
{
	//file e_persona_juridica
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
	md_o_fk_region = fk_region;
	md_o_razon_social = razon_social;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_fax = fax;
	md_o_representante = representante;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
	md_o_habilitado = habilitado;
}
object_e_persona_juridica::object_e_persona_juridica(_QSTR fk_region, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario, _QSTR habilitado)
{
	//file e_persona_juridica
	//function construct_2
	//w!

	md_o_fk_region = fk_region;
	md_o_razon_social = razon_social;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_fax = fax;
	md_o_representante = representante;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
	md_o_habilitado = habilitado;
}
object_e_persona_juridica::~object_e_persona_juridica()
{

}


void object_e_persona_juridica::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}
void object_e_persona_juridica::mf_set_fk_region(_QSTR fk_region)
{
	//function mf_set_fk_region
	//w!

	md_o_fk_region = fk_region;
}
void object_e_persona_juridica::mf_set_razon_social(_QSTR razon_social)
{
	//function mf_set_razon_social
	//w!

	md_o_razon_social = razon_social;
}
void object_e_persona_juridica::mf_set_direccion(_QSTR direccion)
{
	//function mf_set_direccion
	//w!

	md_o_direccion = direccion;
}
void object_e_persona_juridica::mf_set_telefono_fijo(_QSTR telefono_fijo)
{
	//function mf_set_telefono_fijo
	//w!

	md_o_telefono_fijo = telefono_fijo;
}
void object_e_persona_juridica::mf_set_fax(_QSTR fax)
{
	//function mf_set_fax
	//w!

	md_o_fax = fax;
}
void object_e_persona_juridica::mf_set_representante(_QSTR representante)
{
	//function mf_set_representante
	//w!

	md_o_representante = representante;
}
void object_e_persona_juridica::mf_set_email(_QSTR email)
{
	//function mf_set_email
	//w!

	md_o_email = email;
}
void object_e_persona_juridica::mf_set_pagina_web(_QSTR pagina_web)
{
	//function mf_set_pagina_web
	//w!

	md_o_pagina_web = pagina_web;
}
void object_e_persona_juridica::mf_set_comentario(_QSTR comentario)
{
	//function mf_set_comentario
	//w!

	md_o_comentario = comentario;
}
void object_e_persona_juridica::mf_set_habilitado(_QSTR habilitado)
{
	//function mf_set_habilitado
	//w!

	md_o_habilitado = habilitado;
}

_QSTR object_e_persona_juridica::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}
_QSTR object_e_persona_juridica::mf_get_fk_region()
{
	//function mf_get_fk_region
	//w!

	return md_o_fk_region;
}
_QSTR object_e_persona_juridica::mf_get_razon_social()
{
	//function mf_get_razon_social
	//w!

	return md_o_razon_social;
}
_QSTR object_e_persona_juridica::mf_get_direccion()
{
	//function mf_get_direccion
	//w!

	return md_o_direccion;
}
_QSTR object_e_persona_juridica::mf_get_telefono_fijo()
{
	//function mf_get_telefono_fijo
	//w!

	return md_o_telefono_fijo;
}
_QSTR object_e_persona_juridica::mf_get_fax()
{
	//function mf_get_fax
	//w!

	return md_o_fax;
}
_QSTR object_e_persona_juridica::mf_get_representante()
{
	//function mf_get_representante
	//w!

	return md_o_representante;
}
_QSTR object_e_persona_juridica::mf_get_email()
{
	//function mf_get_email
	//w!

	return md_o_email;
}
_QSTR object_e_persona_juridica::mf_get_pagina_web()
{
	//function mf_get_pagina_web
	//w!

	return md_o_pagina_web;
}
_QSTR object_e_persona_juridica::mf_get_comentario()
{
	//function mf_get_comentario
	//w!

	return md_o_comentario;
}
_QSTR object_e_persona_juridica::mf_get_habilitado()
{
	//function mf_get_habilitado
	//w!

	return md_o_habilitado;
}

bool object_e_persona_juridica::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_persona_juridica WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();
		md_o_fk_region = query.value(1).toString();
		md_o_razon_social = query.value(2).toString();
		md_o_direccion = query.value(3).toString();
		md_o_telefono_fijo = query.value(4).toString();
		md_o_fax = query.value(5).toString();
		md_o_representante = query.value(6).toString();
		md_o_email = query.value(7).toString();
		md_o_pagina_web = query.value(8).toString();
		md_o_comentario = query.value(9).toString();
		md_o_habilitado = query.value(10).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_persona_juridica::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_persona_juridica(";
	str_query += "pk_ruc";
	str_query += ", fk_region";
	str_query += ", razon_social";
	str_query += ", direccion";
	str_query += ", telefono_fijo";
	str_query += ", fax";
	str_query += ", representante";
	str_query += ", email";
	str_query += ", pagina_web";
	str_query += ", comentario";
	str_query += ", habilitado";
	str_query += ") VALUES(";
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
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
		query.bindValue(integer++, md_o_pk_ruc);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_fk_region);
	query.bindValue(integer++, md_o_razon_social);
	query.bindValue(integer++, md_o_direccion);
	query.bindValue(integer++, md_o_telefono_fijo);
	query.bindValue(integer++, md_o_fax);
	query.bindValue(integer++, md_o_representante);
	query.bindValue(integer++, md_o_email);
	query.bindValue(integer++, md_o_pagina_web);
	query.bindValue(integer++, md_o_comentario);
	query.bindValue(integer++, md_o_habilitado);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<query.lastError();
		return false;
	}
}

bool object_e_persona_juridica::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_persona_juridica SET fk_region = ?, razon_social = ?, direccion = ?, telefono_fijo = ?, fax = ?, representante = ?, email = ?, pagina_web = ?, comentario = ?, habilitado = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_fk_region);
	query.bindValue(1, md_o_razon_social);
	query.bindValue(2, md_o_direccion);
	query.bindValue(3, md_o_telefono_fijo);
	query.bindValue(4, md_o_fax);
	query.bindValue(5, md_o_representante);
	query.bindValue(6, md_o_email);
	query.bindValue(7, md_o_pagina_web);
	query.bindValue(8, md_o_comentario);
	query.bindValue(9, md_o_habilitado);
	query.bindValue(10, md_o_pk_ruc);

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

bool object_e_persona_juridica::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_persona_juridica FROM pk_ruc = ?");
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

