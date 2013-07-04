#include "object_e_cliente.h"
#include <QSqlError>
object_e_cliente::object_e_cliente()
{
	//file e_cliente
	//function construct_0
	//w!
}

object_e_cliente::object_e_cliente(_QSTR pk_ruc)
{
	//file e_cliente
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
}
object_e_cliente::~object_e_cliente()
{

}


void object_e_cliente::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}

_QSTR object_e_cliente::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}

bool object_e_cliente::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_cliente WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_cliente::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_cliente(";
	if (md_o_pk_ruc != "")
        str_query += "pk_ruc ";
	str_query += ") VALUES(";
	if (md_o_pk_ruc!= "")
	{
        str_query += "? ";
	}
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_ruc != "")
	{
		query.bindValue(0, md_o_pk_ruc);
		integer++;
	}

	if(query.exec())
	{
		//state OK
		//w!
        qDebug()<<query.lastError().databaseText()<<endl;

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<query.lastError().databaseText()<<endl;

		return false;
	}
}

bool object_e_cliente::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_cliente SET nombre = ? WHERE pk_ruc = ?");
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

bool object_e_cliente::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_cliente FROM pk_ruc = ?");
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

