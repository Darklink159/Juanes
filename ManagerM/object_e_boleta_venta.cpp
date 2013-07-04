#include "object_e_boleta_venta.h"
#include <QSqlError>
object_e_boleta_venta::object_e_boleta_venta()
{
	//file e_boleta_venta
	//function construct_0
	//w!
}

object_e_boleta_venta::object_e_boleta_venta(_QSTR pk_comprobante, _QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total)
{
	//file e_boleta_venta
	//function construct_1
	//w!

	md_o_pk_comprobante = pk_comprobante;
	md_o_nombre = nombre;
	md_o_dni = dni;
	md_o_direccion = direccion;
	md_o_total = total;
}
object_e_boleta_venta::object_e_boleta_venta(_QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total)
{
	//file e_boleta_venta
	//function construct_2
	//w!

	md_o_nombre = nombre;
	md_o_dni = dni;
	md_o_direccion = direccion;
	md_o_total = total;
}
object_e_boleta_venta::~object_e_boleta_venta()
{

}


void object_e_boleta_venta::mf_set_pk_comprobante(_QSTR pk_comprobante)
{
	//function mf_set_pk_comprobante
	//w!

	md_o_pk_comprobante = pk_comprobante;
}
void object_e_boleta_venta::mf_set_nombre(_QSTR nombre)
{
	//function mf_set_nombre
	//w!

	md_o_nombre = nombre;
}
void object_e_boleta_venta::mf_set_dni(_QSTR dni)
{
	//function mf_set_dni
	//w!

	md_o_dni = dni;
}
void object_e_boleta_venta::mf_set_direccion(_QSTR direccion)
{
	//function mf_set_direccion
	//w!

	md_o_direccion = direccion;
}
void object_e_boleta_venta::mf_set_total(_QSTR total)
{
	//function mf_set_total
	//w!

	md_o_total = total;
}

_QSTR object_e_boleta_venta::mf_get_pk_comprobante()
{
	//function mf_get_pk_comprobante
	//w!

	return md_o_pk_comprobante;
}
_QSTR object_e_boleta_venta::mf_get_nombre()
{
	//function mf_get_nombre
	//w!

	return md_o_nombre;
}
_QSTR object_e_boleta_venta::mf_get_dni()
{
	//function mf_get_dni
	//w!

	return md_o_dni;
}
_QSTR object_e_boleta_venta::mf_get_direccion()
{
	//function mf_get_direccion
	//w!

	return md_o_direccion;
}
_QSTR object_e_boleta_venta::mf_get_total()
{
	//function mf_get_total
	//w!

	return md_o_total;
}

bool object_e_boleta_venta::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_boleta_venta WHERE pk_comprobante = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_comprobante = query.value(0).toString();
		md_o_nombre = query.value(1).toString();
		md_o_dni = query.value(2).toString();
		md_o_direccion = query.value(3).toString();
		md_o_total = query.value(4).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_boleta_venta::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_boleta_venta(";
	str_query += "pk_comprobante";
	str_query += ", nombre";
	str_query += ", dni";
	str_query += ", direccion";
	str_query += ", total";
	str_query += ") VALUES(";
	str_query += "?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_comprobante != "")
	{
		query.bindValue(integer++, md_o_pk_comprobante);
	}
	else
		query.bindValue(integer++, "NULL");
	query.bindValue(integer++, md_o_nombre);
	query.bindValue(integer++, md_o_dni);
	query.bindValue(integer++, md_o_direccion);
	query.bindValue(integer++, md_o_total);

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

bool object_e_boleta_venta::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_boleta_venta SET nombre = ?, dni = ?, direccion = ?, total = ? WHERE pk_comprobante = ?");
	query.bindValue(0, md_o_nombre);
	query.bindValue(1, md_o_dni);
	query.bindValue(2, md_o_direccion);
	query.bindValue(3, md_o_total);
	query.bindValue(4, md_o_pk_comprobante);

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

bool object_e_boleta_venta::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_boleta_venta FROM pk_comprobante = ?");
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

