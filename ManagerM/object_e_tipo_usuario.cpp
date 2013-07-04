#include "share_include.h"
#include <QSqlError>
object_e_tipo_usuario::object_e_tipo_usuario()
{
	//file e_tipo_usuario
	//function construct_0
	//w!
}

object_e_tipo_usuario::object_e_tipo_usuario(_QSTR pk_tipo_usuario, _QSTR descripcion, _QSTR persmisos_default)
{
	//file e_tipo_usuario
	//function construct_1
	//w!

	md_o_pk_tipo_usuario = pk_tipo_usuario;
	md_o_descripcion = descripcion;
	md_o_persmisos_default = persmisos_default;
}
object_e_tipo_usuario::object_e_tipo_usuario(_QSTR descripcion, _QSTR persmisos_default)
{
	//file e_tipo_usuario
	//function construct_2
	//w!

	md_o_descripcion = descripcion;
	md_o_persmisos_default = persmisos_default;
}
object_e_tipo_usuario::~object_e_tipo_usuario()
{

}


void object_e_tipo_usuario::mf_set_pk_tipo_usuario(_QSTR pk_tipo_usuario)
{
	//function mf_set_pk_tipo_usuario
	//w!

	md_o_pk_tipo_usuario = pk_tipo_usuario;
}
void object_e_tipo_usuario::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}
void object_e_tipo_usuario::mf_set_persmisos_default(_QSTR persmisos_default)
{
	//function mf_set_persmisos_default
	//w!

	md_o_persmisos_default = persmisos_default;
}

_QSTR object_e_tipo_usuario::mf_get_pk_tipo_usuario()
{
	//function mf_get_pk_tipo_usuario
	//w!

	return md_o_pk_tipo_usuario;
}
_QSTR object_e_tipo_usuario::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}
_QSTR object_e_tipo_usuario::mf_get_persmisos_default()
{
	//function mf_get_persmisos_default
	//w!

	return md_o_persmisos_default;
}

bool object_e_tipo_usuario::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_tipo_usuario WHERE pk_tipo_usuario = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_tipo_usuario = query.value(0).toString();
		md_o_descripcion = query.value(1).toString();
		md_o_persmisos_default = query.value(2).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_tipo_usuario::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_tipo_usuario(descripcion, persmisos_default) VALUES(?, ?)");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_persmisos_default);

	if(query.exec())
	{
		//state OK
		//w!
        //qDebug()<<query.lastQuery()<<endl;

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<query.lastQuery()<<endl;
        qDebug()<<query.lastError().databaseText()<<endl;
		return false;
	}
}

bool object_e_tipo_usuario::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_tipo_usuario SET descripcion = ?, persmisos_default = ? WHERE pk_tipo_usuario = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_persmisos_default);
	query.bindValue(2, md_o_pk_tipo_usuario);

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

bool object_e_tipo_usuario::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_tipo_usuario FROM pk_tipo_usuario = ?");
	query.bindValue(0, md_o_pk_tipo_usuario);

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

