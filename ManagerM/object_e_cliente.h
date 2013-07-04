#ifndef OBJECT_E_CLIENTE_H
#define OBJECT_E_CLIENTE_H

#include "share_include.h"

#define TABLE_NAME_E_CLIENTE "e_cliente"
class object_e_cliente:public object_general
{

private:
	_QSTR md_o_pk_ruc;

public:
	object_e_cliente();
	object_e_cliente(_QSTR pk_ruc);
	void mf_set_pk_ruc(_QSTR pk_ruc);

	_QSTR mf_get_pk_ruc();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_cliente();
};
#endif // OBJECT_E_CLIENTE_H
	/*
	object_e_cliente obj_e_cliente;
	obj_e_cliente.mf_set_pk_ruc();

	obj_e_cliente.mf_get_pk_ruc();
	*/
