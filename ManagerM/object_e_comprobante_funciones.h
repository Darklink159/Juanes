#ifndef OBJECT_E_COMPROBANTE_FUNCIONES_H
#define OBJECT_E_COMPROBANTE_FUNCIONES_H

#include "share_include.h"

class object_e_comprobante_funciones
{

private:

public:
	object_e_comprobante_funciones();

	~object_e_comprobante_funciones();

    int mf_pk_comprobante_max()
        {
            QSqlQuery query;
            query.prepare("SELECT max(pk_comprobante) FROM e_comprobante");

            if(query.exec())
            {
                return query.value(0).toInt();
            }
            return -1;
        }
	/*
	QSqlQueryModel* mf_model_e_comprobante();
	*/
};
#endif // OBJECT_E_COMPROBANTE_H
