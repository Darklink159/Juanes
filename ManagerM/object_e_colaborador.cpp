#include "share_include.h"
#include <QSqlError>
object_e_colaborador::object_e_colaborador()
{
	//file e_colaborador
	//function construct_0
	//w!
}

object_e_colaborador::object_e_colaborador(_QSTR pk_dni, _QSTR fk_tienda, _QSTR nombres, _QSTR apellido_paterno, _QSTR apellido_materno, _QSTR direccion, _QSTR fecha_nacimiento, _QSTR sexo, _QSTR estado_civil, _QSTR telefono_celular, _QSTR telefono_fijo, _QSTR email, _QSTR comentario,_QSTR habilitado)
{
	//file e_colaborador
	//function construct_1
	//w!

	md_o_pk_dni = pk_dni;
	md_o_fk_tienda = fk_tienda;
	md_o_nombres = nombres;
	md_o_apellido_paterno = apellido_paterno;
	md_o_apellido_materno = apellido_materno;
	md_o_direccion = direccion;
	md_o_fecha_nacimiento = fecha_nacimiento;
	md_o_sexo = sexo;
	md_o_estado_civil = estado_civil;
	md_o_telefono_celular = telefono_celular;
	md_o_telefono_fijo = telefono_fijo;
	md_o_email = email;
	md_o_comentario = comentario;
    md_o_habilitado = habilitado;
}
object_e_colaborador::object_e_colaborador(_QSTR fk_tienda, _QSTR nombres, _QSTR apellido_paterno, _QSTR apellido_materno, _QSTR direccion, _QSTR fecha_nacimiento, _QSTR sexo, _QSTR estado_civil, _QSTR telefono_celular, _QSTR telefono_fijo, _QSTR email, _QSTR comentario, _QSTR habilitado)
{
	//file e_colaborador
	//function construct_2
	//w!

	md_o_fk_tienda = fk_tienda;
	md_o_nombres = nombres;
	md_o_apellido_paterno = apellido_paterno;
	md_o_apellido_materno = apellido_materno;
	md_o_direccion = direccion;
	md_o_fecha_nacimiento = fecha_nacimiento;
	md_o_sexo = sexo;
	md_o_estado_civil = estado_civil;
	md_o_telefono_celular = telefono_celular;
	md_o_telefono_fijo = telefono_fijo;
	md_o_email = email;
	md_o_comentario = comentario;
    md_o_habilitado = habilitado;
}
object_e_colaborador::~object_e_colaborador()
{

}


void object_e_colaborador::mf_set_pk_dni(_QSTR pk_dni)
{
	//function mf_set_pk_dni
	//w!

	md_o_pk_dni = pk_dni;
}
void object_e_colaborador::mf_set_fk_tienda(_QSTR fk_tienda)
{
	//function mf_set_fk_tienda
	//w!

	md_o_fk_tienda = fk_tienda;
}
void object_e_colaborador::mf_set_nombres(_QSTR nombres)
{
	//function mf_set_nombres
	//w!

	md_o_nombres = nombres;
}
void object_e_colaborador::mf_set_apellido_paterno(_QSTR apellido_paterno)
{
	//function mf_set_apellido_paterno
	//w!

	md_o_apellido_paterno = apellido_paterno;
}
void object_e_colaborador::mf_set_apellido_materno(_QSTR apellido_materno)
{
	//function mf_set_apellido_materno
	//w!

	md_o_apellido_materno = apellido_materno;
}
void object_e_colaborador::mf_set_direccion(_QSTR direccion)
{
	//function mf_set_direccion
	//w!

	md_o_direccion = direccion;
}
void object_e_colaborador::mf_set_fecha_nacimiento(_QSTR fecha_nacimiento)
{
	//function mf_set_fecha_nacimiento
	//w!

	md_o_fecha_nacimiento = fecha_nacimiento;
}
void object_e_colaborador::mf_set_sexo(_QSTR sexo)
{
	//function mf_set_sexo
	//w!

	md_o_sexo = sexo;
}
void object_e_colaborador::mf_set_estado_civil(_QSTR estado_civil)
{
	//function mf_set_estado_civil
	//w!

	md_o_estado_civil = estado_civil;
}
void object_e_colaborador::mf_set_telefono_celular(_QSTR telefono_celular)
{
	//function mf_set_telefono_celular
	//w!

	md_o_telefono_celular = telefono_celular;
}
void object_e_colaborador::mf_set_telefono_fijo(_QSTR telefono_fijo)
{
	//function mf_set_telefono_fijo
	//w!

	md_o_telefono_fijo = telefono_fijo;
}
void object_e_colaborador::mf_set_email(_QSTR email)
{
	//function mf_set_email
	//w!

	md_o_email = email;
}
void object_e_colaborador::mf_set_comentario(_QSTR comentario)
{
	//function mf_set_comentario
	//w!

	md_o_comentario = comentario;
}

void object_e_colaborador::mf_set_habilitado(_QSTR habilitado)
{
    //function mf_set_habilitado
    //w!

    md_o_habilitado= habilitado;
}

_QSTR object_e_colaborador::mf_get_pk_dni()
{
	//function mf_get_pk_dni
	//w!

	return md_o_pk_dni;
}
_QSTR object_e_colaborador::mf_get_fk_tienda()
{
	//function mf_get_fk_tienda
	//w!

	return md_o_fk_tienda;
}
_QSTR object_e_colaborador::mf_get_nombres()
{
	//function mf_get_nombres
	//w!

	return md_o_nombres;
}
_QSTR object_e_colaborador::mf_get_apellido_paterno()
{
	//function mf_get_apellido_paterno
	//w!

	return md_o_apellido_paterno;
}
_QSTR object_e_colaborador::mf_get_apellido_materno()
{
	//function mf_get_apellido_materno
	//w!

	return md_o_apellido_materno;
}
_QSTR object_e_colaborador::mf_get_direccion()
{
	//function mf_get_direccion
	//w!

	return md_o_direccion;
}
_QSTR object_e_colaborador::mf_get_fecha_nacimiento()
{
	//function mf_get_fecha_nacimiento
	//w!

	return md_o_fecha_nacimiento;
}
_QSTR object_e_colaborador::mf_get_sexo()
{
	//function mf_get_sexo
	//w!

	return md_o_sexo;
}
_QSTR object_e_colaborador::mf_get_estado_civil()
{
	//function mf_get_estado_civil
	//w!

	return md_o_estado_civil;
}
_QSTR object_e_colaborador::mf_get_telefono_celular()
{
	//function mf_get_telefono_celular
	//w!

	return md_o_telefono_celular;
}
_QSTR object_e_colaborador::mf_get_telefono_fijo()
{
	//function mf_get_telefono_fijo
	//w!

	return md_o_telefono_fijo;
}
_QSTR object_e_colaborador::mf_get_email()
{
	//function mf_get_email
	//w!

	return md_o_email;
}
_QSTR object_e_colaborador::mf_get_comentario()
{
	//function mf_get_comentario
	//w!

	return md_o_comentario;
}
_QSTR object_e_colaborador::mf_get_habilitado()
{
    //function mf_get_habilitado
    //w!

    return md_o_habilitado;
}
bool object_e_colaborador::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_colaborador WHERE pk_dni = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_dni = query.value(0).toString();
		md_o_fk_tienda = query.value(1).toString();
		md_o_nombres = query.value(2).toString();
		md_o_apellido_paterno = query.value(3).toString();
		md_o_apellido_materno = query.value(4).toString();
		md_o_direccion = query.value(5).toString();
		md_o_fecha_nacimiento = query.value(6).toString();
		md_o_sexo = query.value(7).toString();
		md_o_estado_civil = query.value(8).toString();
		md_o_telefono_celular = query.value(9).toString();
		md_o_telefono_fijo = query.value(10).toString();
		md_o_email = query.value(11).toString();
		md_o_comentario = query.value(12).toString();
        md_o_habilitado = query.value(13).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}



bool object_e_colaborador::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

    query.prepare("INSERT INTO e_colaborador(pk_dni ,fk_tienda, nombres, apellido_paterno, apellido_materno, direccion, fecha_nacimiento, sexo, estado_civil, telefono_celular, telefono_fijo, email, comentario, habilitado) VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query.bindValue(0, md_o_pk_dni);
    query.bindValue(1, md_o_fk_tienda);
    query.bindValue(2, md_o_nombres);
    query.bindValue(3, md_o_apellido_paterno);
    query.bindValue(4, md_o_apellido_materno);
    query.bindValue(5, md_o_direccion);
    query.bindValue(6, md_o_fecha_nacimiento);
    query.bindValue(7, md_o_sexo);
    query.bindValue(8, md_o_estado_civil);
    query.bindValue(9, md_o_telefono_celular);
    query.bindValue(10, md_o_telefono_fijo);
    query.bindValue(11, md_o_email);
    query.bindValue(12, md_o_comentario);
    query.bindValue(13, md_o_habilitado);

	if(query.exec())
	{
		//state OK
		//w!
        //qDebug()<<query.lastQuery()<<endl;

		return true;

	}else{
		//state FAILED
		//w!
        //qDebug()<<query.lastQuery()<<endl;
        qDebug()<<query.lastError().databaseText()<<endl;

		return false;
	}
}

bool object_e_colaborador::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

    query.prepare("UPDATE e_colaborador SET fk_tienda = ?, nombres = ?, apellido_paterno = ?, apellido_materno = ?, direccion = ?, fecha_nacimiento = ?, sexo = ?, estado_civil = ?, telefono_celular = ?, telefono_fijo = ?, email = ?, comentario = ?, habilitado = ? WHERE pk_dni = ?");
	query.bindValue(0, md_o_fk_tienda);
	query.bindValue(1, md_o_nombres);
	query.bindValue(2, md_o_apellido_paterno);
	query.bindValue(3, md_o_apellido_materno);
	query.bindValue(4, md_o_direccion);
	query.bindValue(5, md_o_fecha_nacimiento);
	query.bindValue(6, md_o_sexo);
	query.bindValue(7, md_o_estado_civil);
	query.bindValue(8, md_o_telefono_celular);
	query.bindValue(9, md_o_telefono_fijo);
	query.bindValue(10, md_o_email);
	query.bindValue(11, md_o_comentario);
    query.bindValue(12, md_o_habilitado);
    query.bindValue(13, md_o_pk_dni);


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

bool object_e_colaborador::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_colaborador FROM pk_dni = ?");
	query.bindValue(0, md_o_pk_dni);

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

