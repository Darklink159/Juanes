#ifndef OBJECT_E_TIPO_COMPROBANTE_H
#define OBJECT_E_TIPO_COMPROBANTE_H

#include "share_include.h"

#define TABLE_NAME_E_TIPO_COMPROBANTE "e_tipo_comprobante"
class object_e_tipo_comprobante:public object_general
{

private:
	_QSTR md_o_pk_tipo_comprobante;
	_QSTR md_o_descripcion;

public:
	object_e_tipo_comprobante();
	object_e_tipo_comprobante(_QSTR pk_tipo_comprobante, _QSTR descripcion);
	object_e_tipo_comprobante(_QSTR descripcion);

	void mf_set_pk_tipo_comprobante(_QSTR pk_tipo_comprobante);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_tipo_comprobante();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_tipo_comprobante();
};
#endif // OBJECT_E_TIPO_COMPROBANTE_H
	/*
	object_e_tipo_comprobante obj_e_tipo_comprobante;
	obj_e_tipo_comprobante.mf_set_pk_tipo_comprobante();
	obj_e_tipo_comprobante.mf_set_descripcion();

	obj_e_tipo_comprobante.mf_get_pk_tipo_comprobante();
	obj_e_tipo_comprobante.mf_get_descripcion();
	*/
