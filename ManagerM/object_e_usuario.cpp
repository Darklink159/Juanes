#include "share_include.h"

object_e_usuario::object_e_usuario()
{
}

object_e_usuario::object_e_usuario(_QSTR pk_dni, _QSTR fk_tipo_usuario, _QSTR nick, _QSTR clave, _QSTR habilitado)
{

	md_o_pk_dni = pk_dni;
	md_o_fk_tipo_usuario = fk_tipo_usuario;
	md_o_nick = nick;
	md_o_clave = clave;
	md_o_habilitado = habilitado;
}
object_e_usuario::object_e_usuario(_QSTR fk_tipo_usuario, _QSTR nick, _QSTR clave, _QSTR habilitado)
{

	md_o_fk_tipo_usuario = fk_tipo_usuario;
	md_o_nick = nick;
	md_o_clave = clave;
	md_o_habilitado = habilitado;
}
object_e_usuario::~object_e_usuario()
{

}


void object_e_usuario::mf_set_pk_dni(_QSTR pk_dni)
{

	md_o_pk_dni = pk_dni;
}
void object_e_usuario::mf_set_fk_tipo_usuario(_QSTR fk_tipo_usuario)
{

	md_o_fk_tipo_usuario = fk_tipo_usuario;
}
void object_e_usuario::mf_set_nick(_QSTR nick)
{

	md_o_nick = nick;
}
void object_e_usuario::mf_set_clave(_QSTR clave)
{

	md_o_clave = clave;
}
void object_e_usuario::mf_set_habilitado(_QSTR habilitado)
{

	md_o_habilitado = habilitado;
}

_QSTR object_e_usuario::mf_get_pk_dni()
{

	return md_o_pk_dni;
}
_QSTR object_e_usuario::mf_get_fk_tipo_usuario()
{

	return md_o_fk_tipo_usuario;
}
_QSTR object_e_usuario::mf_get_nick()
{

	return md_o_nick;
}
_QSTR object_e_usuario::mf_get_clave()
{

	return md_o_clave;
}
_QSTR object_e_usuario::mf_get_habilitado()
{

	return md_o_habilitado;
}

bool object_e_usuario::mf_load(_QSTR pk)
{

	QSqlQuery query;

	query.prepare("SELECT * FROM e_usuario WHERE pk_dni = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_dni = query.value(0).toString();
		md_o_fk_tipo_usuario = query.value(1).toString();
		md_o_nick = query.value(2).toString();
		md_o_clave = query.value(3).toString();
		md_o_habilitado = query.value(4).toString();


		return true;
	}else{

		return false;
	}
}
bool object_e_usuario::mf_add()
{

    QSqlQuery query;

    query.prepare("INSERT INTO e_usuario(pk_dni, fk_tipo_usuario, nick, clave, habilitado) VALUES(?, ?, ?, ?, ?)");
    query.bindValue(0, md_o_pk_dni);
    query.bindValue(1, md_o_fk_tipo_usuario);
    query.bindValue(2, md_o_nick);
    query.bindValue(3, md_o_clave);
    query.bindValue(4, md_o_habilitado);

    if(query.exec())
    {

        return true;

    }else{

        return false;
    }
}

bool object_e_usuario::mf_update()
{

	QSqlQuery query;

	query.prepare("UPDATE e_usuario SET fk_tipo_usuario = ?, nick = ?, clave = ?, habilitado = ? WHERE pk_dni = ?");
	query.bindValue(0, md_o_fk_tipo_usuario);
	query.bindValue(1, md_o_nick);
	query.bindValue(2, md_o_clave);
	query.bindValue(3, md_o_habilitado);
	query.bindValue(4, md_o_pk_dni);

	if(query.exec())
	{

		return true;

	}else{

		return false;
	}
}

bool object_e_usuario::mf_remove()
{

	QSqlQuery query;

	query.prepare("DELETE e_usuario FROM pk_dni = ?");
	query.bindValue(0, md_o_pk_dni);

	if(query.exec())
	{

		return true;

	}else{

		return false;
	}
}

