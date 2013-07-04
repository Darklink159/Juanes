#ifndef OBJECT_E_PROVEEDOR_FUNCIONES_H
#define OBJECT_E_PROVEEDOR_FUNCIONES_H

#include "share_include.h"

class object_e_proveedor_funciones
{

private:

public:
	object_e_proveedor_funciones();

	~object_e_proveedor_funciones();

    QSqlQueryModel* mf_model_e_proveedor();
    // Aun no usado
    QStringList* mf_stringList();

    QSqlQueryModel* mf_model_search_e_proveedor();

};
#endif // OBJECT_E_PROVEEDOR_H
