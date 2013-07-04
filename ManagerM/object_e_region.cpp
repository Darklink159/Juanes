#include "object_e_region.h"

object_e_region::object_e_region()
{
	//file e_region
	//function construct_0
	//w!
}

object_e_region::object_e_region(_QSTR pk_codigo_region, _QSTR nombre_region)
{
	//file e_region
	//function construct_1
	//w!

	md_o_pk_codigo_region = pk_codigo_region;
	md_o_nombre_region = nombre_region;
}
object_e_region::object_e_region(_QSTR nombre_region)
{
	//file e_region
	//function construct_2
	//w!

	md_o_nombre_region = nombre_region;
}
object_e_region::~object_e_region()
{

}


void object_e_region::mf_set_pk_codigo_region(_QSTR pk_codigo_region)
{
	//function mf_set_pk_codigo_region
	//w!

	md_o_pk_codigo_region = pk_codigo_region;
}
void object_e_region::mf_set_nombre_region(_QSTR nombre_region)
{
	//function mf_set_nombre_region
	//w!

	md_o_nombre_region = nombre_region;
}

_QSTR object_e_region::mf_get_pk_codigo_region()
{
	//function mf_get_pk_codigo_region
	//w!

	return md_o_pk_codigo_region;
}
_QSTR object_e_region::mf_get_nombre_region()
{
	//function mf_get_nombre_region
	//w!

	return md_o_nombre_region;
}

bool object_e_region::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_region WHERE pk_codigo_region = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_codigo_region = query.value(0).toString();
		md_o_nombre_region = query.value(1).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_region::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_region(";
	if (md_o_pk_codigo_region != "")
		str_query += "pk_codigo_region, ";
	str_query += ") VALUES(";
	if (md_o_pk_codigo_region!= "")
	{
		str_query += "?, ";
	}
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_codigo_region != "")
	{
		query.bindValue(0, md_o_pk_codigo_region);
		integer++;
	}
	query.bindValue(integer++, md_o_nombre_region);

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

bool object_e_region::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_region SET nombre_region = ? WHERE pk_codigo_region = ?");
	query.bindValue(0, md_o_nombre_region);
	query.bindValue(1, md_o_pk_codigo_region);

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

bool object_e_region::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_region FROM pk_codigo_region = ?");
	query.bindValue(0, md_o_pk_codigo_region);

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

