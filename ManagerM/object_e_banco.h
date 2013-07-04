#ifndef OBJECT_E_BANCO_H
#define OBJECT_E_BANCO_H

#include "share_include.h"

class object_e_banco:public object_general
{

private:
	_QSTR md_o_pk_ruc;
	_QSTR md_o_nombre;
	_QSTR md_o_nombre_corto;

public:
	object_e_banco();
	object_e_banco(_QSTR pk_ruc, _QSTR nombre, _QSTR nombre_corto);
	object_e_banco(_QSTR nombre, _QSTR nombre_corto);

	void mf_set_pk_ruc(_QSTR pk_ruc);
	void mf_set_nombre(_QSTR nombre);
	void mf_set_nombre_corto(_QSTR nombre_corto);

	_QSTR mf_get_pk_ruc();
	_QSTR mf_get_nombre();
	_QSTR mf_get_nombre_corto();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_banco();
};
#endif // OBJECT_E_BANCO_H