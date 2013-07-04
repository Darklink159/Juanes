#include "share_include.h"
#include <QSqlError>
object_e_articulo::object_e_articulo()
{
	//file e_articulo
	//function construct_0
	//w!
}

object_e_articulo::object_e_articulo(_QSTR pk_articulo, _QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock, _QSTR habilitado)
{
	//file e_articulo
	//function construct_1
	//w!

	md_o_pk_articulo = pk_articulo;
	md_o_fk_grupo = fk_grupo;
	md_o_fk_marca = fk_marca;
	md_o_fk_medida = fk_medida;
	md_o_descripcion = descripcion;
	md_o_precio_lista = precio_lista;
	md_o_stock = stock;
	md_o_habilitado = habilitado;
}
object_e_articulo::object_e_articulo(_QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock, _QSTR habilitado)
{
	//file e_articulo
	//function construct_2
	//w!

	md_o_fk_grupo = fk_grupo;
	md_o_fk_marca = fk_marca;
	md_o_fk_medida = fk_medida;
	md_o_descripcion = descripcion;
	md_o_precio_lista = precio_lista;
	md_o_stock = stock;
	md_o_habilitado = habilitado;
}
object_e_articulo::~object_e_articulo()
{

}


void object_e_articulo::mf_set_pk_articulo(_QSTR pk_articulo)
{
	//function mf_set_pk_articulo
	//w!

	md_o_pk_articulo = pk_articulo;
}
void object_e_articulo::mf_set_fk_grupo(_QSTR fk_grupo)
{
	//function mf_set_fk_grupo
	//w!

	md_o_fk_grupo = fk_grupo;
}
void object_e_articulo::mf_set_fk_marca(_QSTR fk_marca)
{
	//function mf_set_fk_marca
	//w!

	md_o_fk_marca = fk_marca;
}
void object_e_articulo::mf_set_fk_medida(_QSTR fk_medida)
{
	//function mf_set_fk_medida
	//w!

	md_o_fk_medida = fk_medida;
}
void object_e_articulo::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}
void object_e_articulo::mf_set_precio_lista(_QSTR precio_lista)
{
	//function mf_set_precio_lista
	//w!

	md_o_precio_lista = precio_lista;
}
void object_e_articulo::mf_set_stock(_QSTR stock)
{
	//function mf_set_stock
	//w!

	md_o_stock = stock;
}
void object_e_articulo::mf_set_habilitado(_QSTR habilitado)
{
	//function mf_set_habilitado
	//w!

	md_o_habilitado = habilitado;
}

_QSTR object_e_articulo::mf_get_pk_articulo()
{
	//function mf_get_pk_articulo
	//w!

	return md_o_pk_articulo;
}
_QSTR object_e_articulo::mf_get_fk_grupo()
{
	//function mf_get_fk_grupo
	//w!

	return md_o_fk_grupo;
}
_QSTR object_e_articulo::mf_get_fk_marca()
{
	//function mf_get_fk_marca
	//w!

	return md_o_fk_marca;
}
_QSTR object_e_articulo::mf_get_fk_medida()
{
	//function mf_get_fk_medida
	//w!

	return md_o_fk_medida;
}
_QSTR object_e_articulo::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}
_QSTR object_e_articulo::mf_get_precio_lista()
{
	//function mf_get_precio_lista
	//w!

	return md_o_precio_lista;
}
_QSTR object_e_articulo::mf_get_stock()
{
	//function mf_get_stock
	//w!

	return md_o_stock;
}
_QSTR object_e_articulo::mf_get_habilitado()
{
	//function mf_get_habilitado
	//w!

	return md_o_habilitado;
}

bool object_e_articulo::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_articulo WHERE pk_articulo = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_articulo = query.value(0).toString();
        if(query.value(1).isNull())
            md_o_fk_grupo="";
        else
            md_o_fk_grupo = query.value(1).toString();


        if(query.value(2).isNull())
            md_o_fk_marca="";
        else
            md_o_fk_marca = query.value(2).toString();

        if(query.value(3).isNull())
            md_o_fk_medida="";
        else
            md_o_fk_medida = query.value(3).toString();

		md_o_descripcion = query.value(4).toString();
		md_o_precio_lista = query.value(5).toString();
		md_o_stock = query.value(6).toString();
		md_o_habilitado = query.value(7).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_articulo::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_articulo(";
	if (md_o_pk_articulo != "")
        str_query += "pk_articulo,";
    str_query += " fk_grupo";
	str_query += ", fk_marca";
	str_query += ", fk_medida";
	str_query += ", descripcion";
	str_query += ", precio_lista";
	str_query += ", stock";
	str_query += ", habilitado";
	str_query += ") VALUES(?";
	if (md_o_pk_articulo!= "")
	{
		str_query += ", ?";
	}
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ", ?";
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_articulo != "")
	{
		query.bindValue(0, md_o_pk_articulo);
		integer++;
	}


         if(md_o_fk_grupo=="")
           query.bindValue(integer++,QVariant());
       else
           query.bindValue(integer++, md_o_fk_grupo);
       if(md_o_fk_marca=="")
               query.bindValue(integer++,QVariant());
       else
           query.bindValue(integer++, md_o_fk_marca);

       if(md_o_fk_medida=="")
               query.bindValue(integer++,QVariant());
       else
           query.bindValue(integer++, md_o_fk_medida);


	query.bindValue(integer++, md_o_descripcion);
	query.bindValue(integer++, md_o_precio_lista);
	query.bindValue(integer++, md_o_stock);
	query.bindValue(integer++, md_o_habilitado);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<str_query.c_str()<<endl;
    qDebug()<<query.lastError().databaseText()<<endl;
		return false;
	}
}

bool object_e_articulo::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_articulo SET fk_grupo = ?, fk_marca = ?, fk_medida = ?, descripcion = ?, precio_lista = ?, stock = ?, habilitado = ? WHERE pk_articulo = ?");
    if(md_o_fk_grupo=="")
    {
        qDebug()<<"Grupo NUll";
      query.bindValue(0,QVariant());
    }
  else
    {
        qDebug()<<"Grupo"<<md_o_fk_grupo;
      query.bindValue(0, md_o_fk_grupo);
    }
  if(md_o_fk_marca=="")
          query.bindValue(1,QVariant());
  else
      query.bindValue(1, md_o_fk_marca);

  if(md_o_fk_medida=="")
          query.bindValue(2,QVariant());
  else
      query.bindValue(2, md_o_fk_medida);

	query.bindValue(3, md_o_descripcion);
	query.bindValue(4, md_o_precio_lista);
	query.bindValue(5, md_o_stock);
	query.bindValue(6, md_o_habilitado);
	query.bindValue(7, md_o_pk_articulo);

	if(query.exec())
	{
		//state OK
		//w!

		return true;

	}else{
		//state FAILED
		//w!
        qDebug()<<query.lastQuery();
        qDebug()<<query.lastError().databaseText()<<endl;
		return false;
	}
}

bool object_e_articulo::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_articulo FROM pk_articulo = ?");
	query.bindValue(0, md_o_pk_articulo);

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

