#include "object_r_comprobante_articulo.h"
#include <QSqlError>
object_r_comprobante_articulo::object_r_comprobante_articulo()
{
	//file r_comprobante_articulo
	//function construct_0
	//w!
}

object_r_comprobante_articulo::object_r_comprobante_articulo(_QSTR pk_comprobante, _QSTR pk_articulo, _QSTR cantidad, _QSTR precio_compra)
{
	//file r_comprobante_articulo
	//function construct_1
	//w!

	md_o_pk_comprobante = pk_comprobante;
	md_o_pk_articulo = pk_articulo;
	md_o_cantidad = cantidad;
	md_o_precio_compra = precio_compra;
}
object_r_comprobante_articulo::object_r_comprobante_articulo(_QSTR pk_articulo, _QSTR cantidad, _QSTR precio_compra)
{
	//file r_comprobante_articulo
	//function construct_2
	//w!

	md_o_pk_articulo = pk_articulo;
	md_o_cantidad = cantidad;
	md_o_precio_compra = precio_compra;
}
object_r_comprobante_articulo::~object_r_comprobante_articulo()
{

}


void object_r_comprobante_articulo::mf_set_pk_comprobante(_QSTR pk_comprobante)
{
	//function mf_set_pk_comprobante
	//w!

	md_o_pk_comprobante = pk_comprobante;
}
void object_r_comprobante_articulo::mf_set_pk_articulo(_QSTR pk_articulo)
{
	//function mf_set_pk_articulo
	//w!

	md_o_pk_articulo = pk_articulo;
}
void object_r_comprobante_articulo::mf_set_cantidad(_QSTR cantidad)
{
	//function mf_set_cantidad
	//w!

	md_o_cantidad = cantidad;
}
void object_r_comprobante_articulo::mf_set_precio_compra(_QSTR precio_compra)
{
	//function mf_set_precio_compra
	//w!

	md_o_precio_compra = precio_compra;
}

_QSTR object_r_comprobante_articulo::mf_get_pk_comprobante()
{
	//function mf_get_pk_comprobante
	//w!

	return md_o_pk_comprobante;
}
_QSTR object_r_comprobante_articulo::mf_get_pk_articulo()
{
	//function mf_get_pk_articulo
	//w!

	return md_o_pk_articulo;
}
_QSTR object_r_comprobante_articulo::mf_get_cantidad()
{
	//function mf_get_cantidad
	//w!

	return md_o_cantidad;
}
_QSTR object_r_comprobante_articulo::mf_get_precio_compra()
{
	//function mf_get_precio_compra
	//w!

	return md_o_precio_compra;
}

bool object_r_comprobante_articulo::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM r_comprobante_articulo WHERE pk_comprobante = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_comprobante = query.value(0).toString();
		md_o_pk_articulo = query.value(1).toString();
		md_o_cantidad = query.value(2).toString();
		md_o_precio_compra = query.value(3).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_r_comprobante_articulo::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO r_comprobante_articulo(";
	if (md_o_pk_comprobante != "")
		str_query += "pk_comprobante, ";
	str_query += "pk_articulo";
	str_query += ", cantidad";
	str_query += ", precio_compra";
	str_query += ") VALUES(";
	if (md_o_pk_comprobante!= "")
	{
		str_query += "?, ";
	}
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_comprobante != "")
	{
		query.bindValue(integer++, md_o_pk_comprobante);
	}
	query.bindValue(integer++, md_o_pk_articulo);
	query.bindValue(integer++, md_o_cantidad);
	query.bindValue(integer++, md_o_precio_compra);

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

bool object_r_comprobante_articulo::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE r_comprobante_articulo SET pk_articulo = ?, cantidad = ?, precio_compra = ? WHERE pk_comprobante = ?");
	query.bindValue(0, md_o_pk_articulo);
	query.bindValue(1, md_o_cantidad);
	query.bindValue(2, md_o_precio_compra);
	query.bindValue(3, md_o_pk_comprobante);

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

bool object_r_comprobante_articulo::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE r_comprobante_articulo FROM pk_comprobante = ?");
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

