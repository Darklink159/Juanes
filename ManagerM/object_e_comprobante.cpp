#include "object_e_comprobante.h"
#include <QSqlError>

object_e_comprobante::object_e_comprobante()
{
	//file e_comprobante
	//function construct_0
	//w!
}

object_e_comprobante::object_e_comprobante(_QSTR pk_comprobante, _QSTR pk_tienda, _QSTR tipo, _QSTR numero, _QSTR serie, _QSTR fecha_sistema, _QSTR fecha_emision, _QSTR emitido, _QSTR anulado)
{
	//file e_comprobante
	//function construct_1
	//w!

	md_o_pk_comprobante = pk_comprobante;
	md_o_pk_tienda = pk_tienda;
	md_o_tipo = tipo;
	md_o_numero = numero;
	md_o_serie = serie;
	md_o_fecha_sistema = fecha_sistema;
	md_o_fecha_emision = fecha_emision;
	md_o_emitido = emitido;
    md_o_anulado = anulado;
}
object_e_comprobante::object_e_comprobante(_QSTR pk_tienda, _QSTR tipo, _QSTR numero, _QSTR serie, _QSTR fecha_sistema, _QSTR fecha_emision, _QSTR emitido, _QSTR anulado)
{
	//file e_comprobante
	//function construct_2
	//w!

	md_o_pk_tienda = pk_tienda;
	md_o_tipo = tipo;
	md_o_numero = numero;
	md_o_serie = serie;
	md_o_fecha_sistema = fecha_sistema;
	md_o_fecha_emision = fecha_emision;
	md_o_emitido = emitido;
    md_o_anulado = anulado;
}
object_e_comprobante::~object_e_comprobante()
{

}


void object_e_comprobante::mf_set_pk_comprobante(_QSTR pk_comprobante)
{
	//function mf_set_pk_comprobante
	//w!

	md_o_pk_comprobante = pk_comprobante;
}
void object_e_comprobante::mf_set_pk_tienda(_QSTR pk_tienda)
{
	//function mf_set_pk_tienda
	//w!

	md_o_pk_tienda = pk_tienda;
}
void object_e_comprobante::mf_set_tipo(_QSTR tipo)
{
	//function mf_set_tipo
	//w!

	md_o_tipo = tipo;
}
void object_e_comprobante::mf_set_numero(_QSTR numero)
{
	//function mf_set_numero
	//w!

	md_o_numero = numero;
}
void object_e_comprobante::mf_set_serie(_QSTR serie)
{
	//function mf_set_serie
	//w!

	md_o_serie = serie;
}
void object_e_comprobante::mf_set_fecha_sistema(_QSTR fecha_sistema)
{
	//function mf_set_fecha_sistema
	//w!

	md_o_fecha_sistema = fecha_sistema;
}
void object_e_comprobante::mf_set_fecha_emision(_QSTR fecha_emision)
{
	//function mf_set_fecha_emision
	//w!

	md_o_fecha_emision = fecha_emision;
}
void object_e_comprobante::mf_set_emitido(_QSTR emitido)
{
	//function mf_set_emitido
	//w!

	md_o_emitido = emitido;
}
void object_e_comprobante::mf_set_anulado(_QSTR anulado)
{
    //function mf_set_anulado
	//w!

    md_o_anulado = anulado;
}

_QSTR object_e_comprobante::mf_get_pk_comprobante()
{
	//function mf_get_pk_comprobante
	//w!

	return md_o_pk_comprobante;
}
_QSTR object_e_comprobante::mf_get_pk_tienda()
{
	//function mf_get_pk_tienda
	//w!

	return md_o_pk_tienda;
}
_QSTR object_e_comprobante::mf_get_tipo()
{
	//function mf_get_tipo
	//w!

	return md_o_tipo;
}
_QSTR object_e_comprobante::mf_get_numero()
{
	//function mf_get_numero
	//w!

	return md_o_numero;
}
_QSTR object_e_comprobante::mf_get_serie()
{
	//function mf_get_serie
	//w!

	return md_o_serie;
}
_QSTR object_e_comprobante::mf_get_fecha_sistema()
{
	//function mf_get_fecha_sistema
	//w!

	return md_o_fecha_sistema;
}
_QSTR object_e_comprobante::mf_get_fecha_emision()
{
	//function mf_get_fecha_emision
	//w!

	return md_o_fecha_emision;
}
_QSTR object_e_comprobante::mf_get_emitido()
{
	//function mf_get_emitido
	//w!

	return md_o_emitido;
}
_QSTR object_e_comprobante::mf_get_anulado()
{
    //function mf_get_anulado
	//w!

    return md_o_anulado;
}

bool object_e_comprobante::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_comprobante WHERE pk_comprobante = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_comprobante = query.value(0).toString();
		md_o_pk_tienda = query.value(1).toString();
		md_o_tipo = query.value(2).toString();
		md_o_numero = query.value(3).toString();
		md_o_serie = query.value(4).toString();
		md_o_fecha_sistema = query.value(5).toString();
		md_o_fecha_emision = query.value(6).toString();
		md_o_emitido = query.value(7).toString();
        md_o_anulado = query.value(8).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_comprobante::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_comprobante(";
	if (md_o_pk_comprobante != "")
		str_query += "pk_comprobante, ";
	str_query += "pk_tienda, ";
	str_query += "tipo, ";
	str_query += "numero, ";
	str_query += "serie, ";
	str_query += "fecha_sistema, ";
	str_query += "fecha_emision, ";
	str_query += "emitido, ";
    str_query += "anulado";
	str_query += ") VALUES(";
	if (md_o_pk_comprobante!= "")
	{
		str_query += "?, ";
	}
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?, ";
	str_query += "?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_comprobante != "")
	{
		query.bindValue(0, md_o_pk_comprobante);
		integer++;
	}
	query.bindValue(integer++, md_o_pk_tienda);
	query.bindValue(integer++, md_o_tipo);
	query.bindValue(integer++, md_o_numero);
	query.bindValue(integer++, md_o_serie);
	query.bindValue(integer++, md_o_fecha_sistema);
	query.bindValue(integer++, md_o_fecha_emision);
	query.bindValue(integer++, md_o_emitido);
    query.bindValue(integer++, md_o_anulado);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<query.lastError().databaseText()<<endl;
        qDebug()<<query.lastQuery()<<endl;
		return false;
	}
}

bool object_e_comprobante::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

    query.prepare("UPDATE e_comprobante SET pk_tienda = ?, tipo = ?, numero = ?, serie = ?, fecha_sistema = ?, fecha_emision = ?, emitido = ?, anulado = ? WHERE pk_comprobante = ?");
	query.bindValue(0, md_o_pk_tienda);
	query.bindValue(1, md_o_tipo);
	query.bindValue(2, md_o_numero);
	query.bindValue(3, md_o_serie);
	query.bindValue(4, md_o_fecha_sistema);
	query.bindValue(5, md_o_fecha_emision);
	query.bindValue(6, md_o_emitido);
    query.bindValue(7, md_o_anulado);
	query.bindValue(8, md_o_pk_comprobante);

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

bool object_e_comprobante::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_comprobante FROM pk_comprobante = ?");
	query.bindValue(0, md_o_pk_comprobante);

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

