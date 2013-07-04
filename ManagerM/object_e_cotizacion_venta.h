#ifndef OBJECT_E_COTIZACION_VENTA_H
#define OBJECT_E_COTIZACION_VENTA_H

#include "share_include.h"

#define TABLE_NAME_E_COTIZACION_VENTA "e_cotizacion_venta"
class object_e_cotizacion_venta:public object_general
{

private:
	_QSTR md_o_pk_comprobante;
	_QSTR md_o_fk_cliente;
	_QSTR md_o_nombre;
	_QSTR md_o_dni;
	_QSTR md_o_direccion;
	_QSTR md_o_total;
	_QSTR md_o_igv;

public:
	object_e_cotizacion_venta();
	object_e_cotizacion_venta(_QSTR pk_comprobante, _QSTR fk_cliente, _QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total, _QSTR igv);
	object_e_cotizacion_venta(_QSTR fk_cliente, _QSTR nombre, _QSTR dni, _QSTR direccion, _QSTR total, _QSTR igv);

	void mf_set_pk_comprobante(_QSTR pk_comprobante);
	void mf_set_fk_cliente(_QSTR fk_cliente);
	void mf_set_nombre(_QSTR nombre);
	void mf_set_dni(_QSTR dni);
	void mf_set_direccion(_QSTR direccion);
	void mf_set_total(_QSTR total);
	void mf_set_igv(_QSTR igv);

	_QSTR mf_get_pk_comprobante();
	_QSTR mf_get_fk_cliente();
	_QSTR mf_get_nombre();
	_QSTR mf_get_dni();
	_QSTR mf_get_direccion();
	_QSTR mf_get_total();
	_QSTR mf_get_igv();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_cotizacion_venta();
};
#endif // OBJECT_E_COTIZACION_VENTA_H
	/*
	object_e_cotizacion_venta obj_e_cotizacion_venta;
	obj_e_cotizacion_venta.mf_set_pk_comprobante();
	obj_e_cotizacion_venta.mf_set_fk_cliente();
	obj_e_cotizacion_venta.mf_set_nombre();
	obj_e_cotizacion_venta.mf_set_dni();
	obj_e_cotizacion_venta.mf_set_direccion();
	obj_e_cotizacion_venta.mf_set_total();
	obj_e_cotizacion_venta.mf_set_igv();

	obj_e_cotizacion_venta.mf_get_pk_comprobante();
	obj_e_cotizacion_venta.mf_get_fk_cliente();
	obj_e_cotizacion_venta.mf_get_nombre();
	obj_e_cotizacion_venta.mf_get_dni();
	obj_e_cotizacion_venta.mf_get_direccion();
	obj_e_cotizacion_venta.mf_get_total();
	obj_e_cotizacion_venta.mf_get_igv();
	*/
