#include "object_r_proveedor_articulo.h"

#include <QSqlError>
object_r_proveedor_articulo::object_r_proveedor_articulo()
{
	//file r_proveedor_articulo
	//function construct_0
	//w!
}

object_r_proveedor_articulo::object_r_proveedor_articulo(_QSTR pk_proveedor, _QSTR pk_articulo)
{
	//file r_proveedor_articulo
	//function construct_1
	//w!

	md_o_pk_proveedor = pk_proveedor;
	md_o_pk_articulo = pk_articulo;
}
object_r_proveedor_articulo::object_r_proveedor_articulo(_QSTR pk_articulo)
{
	//file r_proveedor_articulo
	//function construct_2
	//w!

	md_o_pk_articulo = pk_articulo;
}
object_r_proveedor_articulo::~object_r_proveedor_articulo()
{

}


void object_r_proveedor_articulo::mf_set_pk_proveedor(_QSTR pk_proveedor)
{
	//function mf_set_pk_proveedor
	//w!

	md_o_pk_proveedor = pk_proveedor;
}
void object_r_proveedor_articulo::mf_set_pk_articulo(_QSTR pk_articulo)
{
	//function mf_set_pk_articulo
	//w!

	md_o_pk_articulo = pk_articulo;
}

_QSTR object_r_proveedor_articulo::mf_get_pk_proveedor()
{
	//function mf_get_pk_proveedor
	//w!

	return md_o_pk_proveedor;
}
_QSTR object_r_proveedor_articulo::mf_get_pk_articulo()
{
	//function mf_get_pk_articulo
	//w!

	return md_o_pk_articulo;
}

bool object_r_proveedor_articulo::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM r_proveedor_articulo WHERE pk_proveedor = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_proveedor = query.value(0).toString();
		md_o_pk_articulo = query.value(1).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_r_proveedor_articulo::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

    string str_query = "INSERT INTO r_proveedor_articulo(pk_proveedor,pk_articulo) VALUES (?,?)";


	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_proveedor != "")
	{
        query.bindValue(integer, md_o_pk_proveedor);
		integer++;
	}
	query.bindValue(integer++, md_o_pk_articulo);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!

        qDebug()<<query.lastQuery();
           qDebug()<<query.lastError().text()<<endl;
		return false;
	}
}

bool object_r_proveedor_articulo::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE r_proveedor_articulo SET pk_articulo = ? WHERE pk_proveedor = ?");
	query.bindValue(0, md_o_pk_articulo);
	query.bindValue(1, md_o_pk_proveedor);

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

bool object_r_proveedor_articulo::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE r_proveedor_articulo FROM pk_proveedor = ?");
	query.bindValue(0, md_o_pk_proveedor);

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

