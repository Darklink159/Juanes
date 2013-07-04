#ifndef OBJECT_E_TRANSPORTISTA_H
#define OBJECT_E_TRANSPORTISTA_H

#include "share_include.h"

#define TABLE_NAME_E_TRANSPORTISTA "e_transportista"
class object_e_transportista:public object_general
{

private:
	_QSTR md_o_pk_ruc;

public:
	object_e_transportista();
	object_e_transportista(_QSTR pk_ruc);
	void mf_set_pk_ruc(_QSTR pk_ruc);

	_QSTR mf_get_pk_ruc();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_transportista();
};
#endif // OBJECT_E_TRANSPORTISTA_H
	/*
	object_e_transportista obj_e_transportista;
	obj_e_transportista.mf_set_pk_ruc();

	obj_e_transportista.mf_get_pk_ruc();
	*/
