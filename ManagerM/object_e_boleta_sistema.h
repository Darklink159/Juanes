#ifndef OBJECT_E_BOLETA_SISTEMA_H
#define OBJECT_E_BOLETA_SISTEMA_H

#include "share_include.h"

#define TABLE_NAME_E_BOLETA_SISTEMA "e_boleta_sistema"
class object_e_boleta_sistema:public object_general
{

private:
	_QSTR md_o_pk_boleta_s;
	_QSTR md_o_serie;
	_QSTR md_o_numero_inicio;
	_QSTR md_o_numero_fin;
	_QSTR md_o_numero_actual;

public:
	object_e_boleta_sistema();
	object_e_boleta_sistema(_QSTR pk_boleta_s, _QSTR serie, _QSTR numero_inicio, _QSTR numero_fin, _QSTR numero_actual);
	object_e_boleta_sistema(_QSTR serie, _QSTR numero_inicio, _QSTR numero_fin, _QSTR numero_actual);

	void mf_set_pk_boleta_s(_QSTR pk_boleta_s);
	void mf_set_serie(_QSTR serie);
	void mf_set_numero_inicio(_QSTR numero_inicio);
	void mf_set_numero_fin(_QSTR numero_fin);
	void mf_set_numero_actual(_QSTR numero_actual);

	_QSTR mf_get_pk_boleta_s();
	_QSTR mf_get_serie();
	_QSTR mf_get_numero_inicio();
	_QSTR mf_get_numero_fin();
	_QSTR mf_get_numero_actual();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_boleta_sistema();
};
#endif // OBJECT_E_BOLETA_SISTEMA_H
	/*
	object_e_boleta_sistema obj_e_boleta_sistema;
	obj_e_boleta_sistema.mf_set_pk_boleta_s();
	obj_e_boleta_sistema.mf_set_serie();
	obj_e_boleta_sistema.mf_set_numero_inicio();
	obj_e_boleta_sistema.mf_set_numero_fin();
	obj_e_boleta_sistema.mf_set_numero_actual();

	obj_e_boleta_sistema.mf_get_pk_boleta_s();
	obj_e_boleta_sistema.mf_get_serie();
	obj_e_boleta_sistema.mf_get_numero_inicio();
	obj_e_boleta_sistema.mf_get_numero_fin();
	obj_e_boleta_sistema.mf_get_numero_actual();
	*/
