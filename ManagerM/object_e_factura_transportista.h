#ifndef OBJECT_E_FACTURA_TRANSPORTISTA_H
#define OBJECT_E_FACTURA_TRANSPORTISTA_H

#include "share_include.h"

#define TABLE_NAME_E_FACTURA_TRANSPORTISTA "e_factura_transportista"
class object_e_factura_transportista:public object_general
{

private:
	_QSTR md_o_fk_comprobante;
	_QSTR md_o_fk_transportista;
	_QSTR md_o_total;
	_QSTR md_o_igv;

public:
	object_e_factura_transportista();
	object_e_factura_transportista(_QSTR fk_comprobante, _QSTR fk_transportista, _QSTR total, _QSTR igv);
	object_e_factura_transportista(_QSTR fk_transportista, _QSTR total, _QSTR igv);

	void mf_set_fk_comprobante(_QSTR fk_comprobante);
	void mf_set_fk_transportista(_QSTR fk_transportista);
	void mf_set_total(_QSTR total);
	void mf_set_igv(_QSTR igv);

	_QSTR mf_get_fk_comprobante();
	_QSTR mf_get_fk_transportista();
	_QSTR mf_get_total();
	_QSTR mf_get_igv();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_factura_transportista();
};
#endif // OBJECT_E_FACTURA_TRANSPORTISTA_H
	/*
	object_e_factura_transportista obj_e_factura_transportista;
	obj_e_factura_transportista.mf_set_fk_comprobante();
	obj_e_factura_transportista.mf_set_fk_transportista();
	obj_e_factura_transportista.mf_set_total();
	obj_e_factura_transportista.mf_set_igv();

	obj_e_factura_transportista.mf_get_fk_comprobante();
	obj_e_factura_transportista.mf_get_fk_transportista();
	obj_e_factura_transportista.mf_get_total();
	obj_e_factura_transportista.mf_get_igv();
	*/
