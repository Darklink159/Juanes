#ifndef OBJECT_E_IGV_SISTEMA_H
#define OBJECT_E_IGV_SISTEMA_H

#include "share_include.h"

#define TABLE_NAME_E_IGV_SISTEMA "e_igv_sistema"
class object_e_igv_sistema:public object_general
{

private:
	_QSTR md_o_pk_igv_s;
	_QSTR md_o_valor;
	_QSTR md_o_fecha;

public:
	object_e_igv_sistema();
	object_e_igv_sistema(_QSTR pk_igv_s, _QSTR valor, _QSTR fecha);
	object_e_igv_sistema(_QSTR valor, _QSTR fecha);

	void mf_set_pk_igv_s(_QSTR pk_igv_s);
	void mf_set_valor(_QSTR valor);
	void mf_set_fecha(_QSTR fecha);

	_QSTR mf_get_pk_igv_s();
	_QSTR mf_get_valor();
	_QSTR mf_get_fecha();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_igv_sistema();
};
#endif // OBJECT_E_IGV_SISTEMA_H
	/*
	object_e_igv_sistema obj_e_igv_sistema;
	obj_e_igv_sistema.mf_set_pk_igv_s();
	obj_e_igv_sistema.mf_set_valor();
	obj_e_igv_sistema.mf_set_fecha();

	obj_e_igv_sistema.mf_get_pk_igv_s();
	obj_e_igv_sistema.mf_get_valor();
	obj_e_igv_sistema.mf_get_fecha();
	*/
