#ifndef OBJECT_E_MARCA_H
#define OBJECT_E_MARCA_H

#include "share_include.h"

#define TABLE_NAME_E_MARCA "e_marca"
class object_e_marca:public object_general
{

private:
	_QSTR md_o_pk_marca;
	_QSTR md_o_descripcion;

public:
	object_e_marca();
	object_e_marca(_QSTR pk_marca, _QSTR descripcion);
	object_e_marca(_QSTR descripcion);

	void mf_set_pk_marca(_QSTR pk_marca);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_marca();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_marca();
};
#endif // OBJECT_E_MARCA_H
