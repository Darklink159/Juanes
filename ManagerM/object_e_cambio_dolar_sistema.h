#ifndef OBJECT_E_CAMBIO_DOLAR_SISTEMA_H
#define OBJECT_E_CAMBIO_DOLAR_SISTEMA_H

#include "share_include.h"

#define TABLE_NAME_E_CAMBIO_DOLAR_SISTEMA "e_cambio_dolar_sistema"
class object_e_cambio_dolar_sistema:public object_general
{

private:
	_QSTR md_o_pk_cambio_dolar_s;
	_QSTR md_o_valor_dolar_soles;
	_QSTR md_o_valor_soler_dolar;
	_QSTR md_o_fecha;

public:
	object_e_cambio_dolar_sistema();
	object_e_cambio_dolar_sistema(_QSTR pk_cambio_dolar_s, _QSTR valor_dolar_soles, _QSTR valor_soler_dolar, _QSTR fecha);
	object_e_cambio_dolar_sistema(_QSTR valor_dolar_soles, _QSTR valor_soler_dolar, _QSTR fecha);

	void mf_set_pk_cambio_dolar_s(_QSTR pk_cambio_dolar_s);
	void mf_set_valor_dolar_soles(_QSTR valor_dolar_soles);
	void mf_set_valor_soler_dolar(_QSTR valor_soler_dolar);
	void mf_set_fecha(_QSTR fecha);

	_QSTR mf_get_pk_cambio_dolar_s();
	_QSTR mf_get_valor_dolar_soles();
	_QSTR mf_get_valor_soler_dolar();
	_QSTR mf_get_fecha();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_cambio_dolar_sistema();
};
#endif // OBJECT_E_CAMBIO_DOLAR_SISTEMA_H
	/*
	object_e_cambio_dolar_sistema obj_e_cambio_dolar_sistema;
	obj_e_cambio_dolar_sistema.mf_set_pk_cambio_dolar_s();
	obj_e_cambio_dolar_sistema.mf_set_valor_dolar_soles();
	obj_e_cambio_dolar_sistema.mf_set_valor_soler_dolar();
	obj_e_cambio_dolar_sistema.mf_set_fecha();

	obj_e_cambio_dolar_sistema.mf_get_pk_cambio_dolar_s();
	obj_e_cambio_dolar_sistema.mf_get_valor_dolar_soles();
	obj_e_cambio_dolar_sistema.mf_get_valor_soler_dolar();
	obj_e_cambio_dolar_sistema.mf_get_fecha();
	*/
