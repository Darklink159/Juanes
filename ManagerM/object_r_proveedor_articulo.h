#ifndef OBJECT_R_PROVEEDOR_ARTICULO_H
#define OBJECT_R_PROVEEDOR_ARTICULO_H

#include "share_include.h"

#define TABLE_NAME_R_PROVEEDOR_ARTICULO "r_proveedor_articulo"
class object_r_proveedor_articulo:public object_general
{

private:
	_QSTR md_o_pk_proveedor;
	_QSTR md_o_pk_articulo;

public:
	object_r_proveedor_articulo();
	object_r_proveedor_articulo(_QSTR pk_proveedor, _QSTR pk_articulo);
	object_r_proveedor_articulo(_QSTR pk_articulo);

	void mf_set_pk_proveedor(_QSTR pk_proveedor);
	void mf_set_pk_articulo(_QSTR pk_articulo);

	_QSTR mf_get_pk_proveedor();
	_QSTR mf_get_pk_articulo();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_r_proveedor_articulo();
};
#endif // OBJECT_R_PROVEEDOR_ARTICULO_H
	/*
	object_r_proveedor_articulo obj_r_proveedor_articulo;
	obj_r_proveedor_articulo.mf_set_pk_proveedor();
	obj_r_proveedor_articulo.mf_set_pk_articulo();

	obj_r_proveedor_articulo.mf_get_pk_proveedor();
	obj_r_proveedor_articulo.mf_get_pk_articulo();
	*/
