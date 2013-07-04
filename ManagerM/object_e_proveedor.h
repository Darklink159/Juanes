#ifndef OBJECT_E_PROVEEDOR_H
#define OBJECT_E_PROVEEDOR_H

#include "share_include.h"

#define TABLE_NAME_E_PROVEEDOR "e_proveedor"
class object_e_proveedor:public object_general
{

private:
	_QSTR md_o_pk_ruc;
	_QSTR md_o_nombre_vendedor;
	_QSTR md_o_celular_vendedor;

public:
	object_e_proveedor();
	object_e_proveedor(_QSTR pk_ruc, _QSTR nombre_vendedor, _QSTR celular_vendedor);
	object_e_proveedor(_QSTR nombre_vendedor, _QSTR celular_vendedor);

	void mf_set_pk_ruc(_QSTR pk_ruc);
	void mf_set_nombre_vendedor(_QSTR nombre_vendedor);
	void mf_set_celular_vendedor(_QSTR celular_vendedor);

	_QSTR mf_get_pk_ruc();
	_QSTR mf_get_nombre_vendedor();
	_QSTR mf_get_celular_vendedor();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_proveedor();
};
#endif // OBJECT_E_PROVEEDOR_H
	/*
	object_e_proveedor obj_e_proveedor;
	obj_e_proveedor.mf_set_pk_ruc();
	obj_e_proveedor.mf_set_nombre_vendedor();
	obj_e_proveedor.mf_set_celular_vendedor();

	obj_e_proveedor.mf_get_pk_ruc();
	obj_e_proveedor.mf_get_nombre_vendedor();
	obj_e_proveedor.mf_get_celular_vendedor();
	*/
