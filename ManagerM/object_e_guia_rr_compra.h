#ifndef OBJECT_E_GUIA_RR_COMPRA_H
#define OBJECT_E_GUIA_RR_COMPRA_H

#include "share_include.h"

#define TABLE_NAME_E_GUIA_RR_COMPRA "e_guia_rr_compra"
class object_e_guia_rr_compra:public object_general
{

private:
	_QSTR md_o_pk_guiarr;
	_QSTR md_o_fk_comprobante;
	_QSTR md_o_fk_factura_compra;
	_QSTR md_o_fk_proveedor;
	_QSTR md_o_fk_orden_compra;

public:
	object_e_guia_rr_compra();
	object_e_guia_rr_compra(_QSTR pk_guiarr, _QSTR fk_comprobante, _QSTR fk_factura_compra, _QSTR fk_proveedor, _QSTR fk_orden_compra);
	object_e_guia_rr_compra(_QSTR fk_comprobante, _QSTR fk_factura_compra, _QSTR fk_proveedor, _QSTR fk_orden_compra);

	void mf_set_pk_guiarr(_QSTR pk_guiarr);
	void mf_set_fk_comprobante(_QSTR fk_comprobante);
	void mf_set_fk_factura_compra(_QSTR fk_factura_compra);
	void mf_set_fk_proveedor(_QSTR fk_proveedor);
	void mf_set_fk_orden_compra(_QSTR fk_orden_compra);

	_QSTR mf_get_pk_guiarr();
	_QSTR mf_get_fk_comprobante();
	_QSTR mf_get_fk_factura_compra();
	_QSTR mf_get_fk_proveedor();
	_QSTR mf_get_fk_orden_compra();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_guia_rr_compra();
};
#endif // OBJECT_E_GUIA_RR_COMPRA_H
	/*
	object_e_guia_rr_compra obj_e_guia_rr_compra;
	obj_e_guia_rr_compra.mf_set_pk_guiarr();
	obj_e_guia_rr_compra.mf_set_fk_comprobante();
	obj_e_guia_rr_compra.mf_set_fk_factura_compra();
	obj_e_guia_rr_compra.mf_set_fk_proveedor();
	obj_e_guia_rr_compra.mf_set_fk_orden_compra();

	obj_e_guia_rr_compra.mf_get_pk_guiarr();
	obj_e_guia_rr_compra.mf_get_fk_comprobante();
	obj_e_guia_rr_compra.mf_get_fk_factura_compra();
	obj_e_guia_rr_compra.mf_get_fk_proveedor();
	obj_e_guia_rr_compra.mf_get_fk_orden_compra();
	*/
