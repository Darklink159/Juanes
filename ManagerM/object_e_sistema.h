#ifndef OBJECT_E_SISTEMA_H
#define OBJECT_E_SISTEMA_H

#include "share_include.h"

#define TABLE_NAME_E_SISTEMA "e_sistema"
class object_e_sistema:public object_general
{

private:
	_QSTR md_o_pk_code;
	_QSTR md_o_fk_boleta_s;
	_QSTR md_o_fk_factura_s;
	_QSTR md_o_fk_igv_s;
	_QSTR md_o_fk_cambio_dolar_s;

public:
	object_e_sistema();
	object_e_sistema(_QSTR pk_code, _QSTR fk_boleta_s, _QSTR fk_factura_s, _QSTR fk_igv_s, _QSTR fk_cambio_dolar_s);
	object_e_sistema(_QSTR fk_boleta_s, _QSTR fk_factura_s, _QSTR fk_igv_s, _QSTR fk_cambio_dolar_s);

	void mf_set_pk_code(_QSTR pk_code);
	void mf_set_fk_boleta_s(_QSTR fk_boleta_s);
	void mf_set_fk_factura_s(_QSTR fk_factura_s);
	void mf_set_fk_igv_s(_QSTR fk_igv_s);
	void mf_set_fk_cambio_dolar_s(_QSTR fk_cambio_dolar_s);

	_QSTR mf_get_pk_code();
	_QSTR mf_get_fk_boleta_s();
	_QSTR mf_get_fk_factura_s();
	_QSTR mf_get_fk_igv_s();
	_QSTR mf_get_fk_cambio_dolar_s();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_sistema();
};
#endif // OBJECT_E_SISTEMA_H
	/*
	object_e_sistema obj_e_sistema;
	obj_e_sistema.mf_set_pk_code();
	obj_e_sistema.mf_set_fk_boleta_s();
	obj_e_sistema.mf_set_fk_factura_s();
	obj_e_sistema.mf_set_fk_igv_s();
	obj_e_sistema.mf_set_fk_cambio_dolar_s();

	obj_e_sistema.mf_get_pk_code();
	obj_e_sistema.mf_get_fk_boleta_s();
	obj_e_sistema.mf_get_fk_factura_s();
	obj_e_sistema.mf_get_fk_igv_s();
	obj_e_sistema.mf_get_fk_cambio_dolar_s();
	*/
