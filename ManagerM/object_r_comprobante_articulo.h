#ifndef OBJECT_R_COMPROBANTE_ARTICULO_H
#define OBJECT_R_COMPROBANTE_ARTICULO_H

#include "share_include.h"

#define TABLE_NAME_R_COMPROBANTE_ARTICULO "r_comprobante_articulo"
class object_r_comprobante_articulo:public object_general
{

private:
	_QSTR md_o_pk_comprobante;
	_QSTR md_o_pk_articulo;
	_QSTR md_o_cantidad;
	_QSTR md_o_precio_compra;

public:
	object_r_comprobante_articulo();
	object_r_comprobante_articulo(_QSTR pk_comprobante, _QSTR pk_articulo, _QSTR cantidad, _QSTR precio_compra);
	object_r_comprobante_articulo(_QSTR pk_articulo, _QSTR cantidad, _QSTR precio_compra);

	void mf_set_pk_comprobante(_QSTR pk_comprobante);
	void mf_set_pk_articulo(_QSTR pk_articulo);
	void mf_set_cantidad(_QSTR cantidad);
	void mf_set_precio_compra(_QSTR precio_compra);

	_QSTR mf_get_pk_comprobante();
	_QSTR mf_get_pk_articulo();
	_QSTR mf_get_cantidad();
	_QSTR mf_get_precio_compra();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_r_comprobante_articulo();
};
#endif // OBJECT_R_COMPROBANTE_ARTICULO_H
	/*
	object_r_comprobante_articulo obj_r_comprobante_articulo;
	obj_r_comprobante_articulo.mf_set_pk_comprobante();
	obj_r_comprobante_articulo.mf_set_pk_articulo();
	obj_r_comprobante_articulo.mf_set_cantidad();
	obj_r_comprobante_articulo.mf_set_precio_compra();

	obj_r_comprobante_articulo.mf_get_pk_comprobante();
	obj_r_comprobante_articulo.mf_get_pk_articulo();
	obj_r_comprobante_articulo.mf_get_cantidad();
	obj_r_comprobante_articulo.mf_get_precio_compra();
	*/
