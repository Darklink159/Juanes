#ifndef OBJECT_E_COMPROBANTE_H
#define OBJECT_E_COMPROBANTE_H

#include "share_include.h"

#define TABLE_NAME_E_COMPROBANTE "e_comprobante"
class object_e_comprobante:public object_general
{

private:
	_QSTR md_o_pk_comprobante;
	_QSTR md_o_pk_tienda;
	_QSTR md_o_tipo;
	_QSTR md_o_numero;
	_QSTR md_o_serie;
	_QSTR md_o_fecha_sistema;
	_QSTR md_o_fecha_emision;
	_QSTR md_o_emitido;
    _QSTR md_o_anulado;

public:
	object_e_comprobante();
    object_e_comprobante(_QSTR pk_comprobante, _QSTR pk_tienda, _QSTR tipo, _QSTR numero, _QSTR serie, _QSTR fecha_sistema, _QSTR fecha_emision, _QSTR emitido, _QSTR anulado);
    object_e_comprobante(_QSTR pk_tienda, _QSTR tipo, _QSTR numero, _QSTR serie, _QSTR fecha_sistema, _QSTR fecha_emision, _QSTR emitido, _QSTR anulado);

	void mf_set_pk_comprobante(_QSTR pk_comprobante);
	void mf_set_pk_tienda(_QSTR pk_tienda);
	void mf_set_tipo(_QSTR tipo);
	void mf_set_numero(_QSTR numero);
	void mf_set_serie(_QSTR serie);
	void mf_set_fecha_sistema(_QSTR fecha_sistema);
	void mf_set_fecha_emision(_QSTR fecha_emision);
	void mf_set_emitido(_QSTR emitido);
    void mf_set_anulado(_QSTR anulado);

	_QSTR mf_get_pk_comprobante();
	_QSTR mf_get_pk_tienda();
	_QSTR mf_get_tipo();
	_QSTR mf_get_numero();
	_QSTR mf_get_serie();
	_QSTR mf_get_fecha_sistema();
	_QSTR mf_get_fecha_emision();
	_QSTR mf_get_emitido();
    _QSTR mf_get_anulado();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_comprobante();
};
#endif // OBJECT_E_COMPROBANTE_H
	/*
	object_e_comprobante obj_e_comprobante;
	obj_e_comprobante.mf_set_pk_comprobante();
	obj_e_comprobante.mf_set_pk_tienda();
	obj_e_comprobante.mf_set_tipo();
	obj_e_comprobante.mf_set_numero();
	obj_e_comprobante.mf_set_serie();
	obj_e_comprobante.mf_set_fecha_sistema();
	obj_e_comprobante.mf_set_fecha_emision();
	obj_e_comprobante.mf_set_emitido();
    obj_e_comprobante.mf_set_anulado();

	obj_e_comprobante.mf_get_pk_comprobante();
	obj_e_comprobante.mf_get_pk_tienda();
	obj_e_comprobante.mf_get_tipo();
	obj_e_comprobante.mf_get_numero();
	obj_e_comprobante.mf_get_serie();
	obj_e_comprobante.mf_get_fecha_sistema();
	obj_e_comprobante.mf_get_fecha_emision();
	obj_e_comprobante.mf_get_emitido();
    obj_e_comprobante.mf_get_anulado();
	*/
