#ifndef OBJECT_E_ORDEN_COMPRA_FUNCIONES_H
#define OBJECT_E_ORDEN_COMPRA_FUNCIONES_H

#include "share_include.h"

class object_e_orden_compra_funciones
{

private:

public:
	object_e_orden_compra_funciones();

	~object_e_orden_compra_funciones();

    int mf_pk_orden_compra_max()
        {
            QSqlQuery query;
            query.prepare("SELECT max(pk_orden_compra) FROM e_orden_compra");

            if(query.exec())
            {
                return query.value(0).toInt();
            }
            return -1;
        }
	/*
	QSqlQueryModel* mf_model_e_orden_compra();
	*/
};
#endif // OBJECT_E_ORDEN_COMPRA_H
