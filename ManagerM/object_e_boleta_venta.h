#ifndef OBJECT_E_BOLETA_VENTA_H
#define OBJECT_E_BOLETA_VENTA_H

#include "share_include.h"

#define TABLE_NAME_E_BOLETA_VENTA "e_boleta_venta"
class object_e_boleta_venta:public object_general
{

private:
	_QSTR md_o_pk_comprobante;
	_QSTR md_o_nombre;
	_QSTR md_o_dni;
	_QSTR md_o_direccion;
	_QSTR md_o_total;

public:
	object_e_boleta_venta();
	object_e_boleta_venta(_QSTR pk_comprobante, _QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total);
	object_e_boleta_venta(_QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total);

	void mf_set_pk_comprobante(_QSTR pk_comprobante);
	void mf_set_nombre(_QSTR nombre);
	void mf_set_dni(_QSTR dni);
	void mf_set_direccion(_QSTR direccion);
	void mf_set_total(_QSTR total);

	_QSTR mf_get_pk_comprobante();
	_QSTR mf_get_nombre();
	_QSTR mf_get_dni();
	_QSTR mf_get_direccion();
	_QSTR mf_get_total();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_boleta_venta();
};
#endif // OBJECT_E_BOLETA_VENTA_H
	/*
	object_e_boleta_venta obj_e_boleta_venta;
	obj_e_boleta_venta.mf_set_pk_comprobante();
	obj_e_boleta_venta.mf_set_nombre();
	obj_e_boleta_venta.mf_set_dni();
	obj_e_boleta_venta.mf_set_direccion();
	obj_e_boleta_venta.mf_set_total();

	obj_e_boleta_venta.mf_get_pk_comprobante();
	obj_e_boleta_venta.mf_get_nombre();
	obj_e_boleta_venta.mf_get_dni();
	obj_e_boleta_venta.mf_get_direccion();
	obj_e_boleta_venta.mf_get_total();
	*/
