#ifndef OBJECT_E_TIPO_MONEDA_H
#define OBJECT_E_TIPO_MONEDA_H

#include "share_include.h"

#define TABLE_NAME_E_TIPO_MONEDA "e_tipo_moneda"
class object_e_tipo_moneda:public object_general
{

private:
	_QSTR md_o_pk_tipo_moneda;
	_QSTR md_o_descripcion;

public:
	object_e_tipo_moneda();
	object_e_tipo_moneda(_QSTR pk_tipo_moneda, _QSTR descripcion);
	object_e_tipo_moneda(_QSTR descripcion);

	void mf_set_pk_tipo_moneda(_QSTR pk_tipo_moneda);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_tipo_moneda();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_tipo_moneda();
};
#endif // OBJECT_E_TIPO_MONEDA_H
	/*
	object_e_tipo_moneda obj_e_tipo_moneda;
	obj_e_tipo_moneda.mf_set_pk_tipo_moneda();
	obj_e_tipo_moneda.mf_set_descripcion();

	obj_e_tipo_moneda.mf_get_pk_tipo_moneda();
	obj_e_tipo_moneda.mf_get_descripcion();
	*/
