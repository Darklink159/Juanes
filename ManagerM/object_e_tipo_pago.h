#ifndef OBJECT_E_TIPO_PAGO_H
#define OBJECT_E_TIPO_PAGO_H

#include "share_include.h"

#define TABLE_NAME_E_TIPO_PAGO "e_tipo_pago"
class object_e_tipo_pago:public object_general
{

private:
	_QSTR md_o_pk_tipo_pago;
	_QSTR md_o_descripcion;

public:
	object_e_tipo_pago();
	object_e_tipo_pago(_QSTR pk_tipo_pago, _QSTR descripcion);
	object_e_tipo_pago(_QSTR descripcion);

	void mf_set_pk_tipo_pago(_QSTR pk_tipo_pago);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_tipo_pago();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_tipo_pago();
};
#endif // OBJECT_E_TIPO_PAGO_H
	/*
	object_e_tipo_pago obj_e_tipo_pago;
	obj_e_tipo_pago.mf_set_pk_tipo_pago();
	obj_e_tipo_pago.mf_set_descripcion();

	obj_e_tipo_pago.mf_get_pk_tipo_pago();
	obj_e_tipo_pago.mf_get_descripcion();
	*/
