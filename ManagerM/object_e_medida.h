#ifndef OBJECT_E_MEDIDA_H
#define OBJECT_E_MEDIDA_H

#include "share_include.h"

#define TABLE_NAME_E_MEDIDA "e_medida"
class object_e_medida:public object_general
{

private:
	_QSTR md_o_pk_medida;
	_QSTR md_o_descripcion;

public:
	object_e_medida();
	object_e_medida(_QSTR pk_medida, _QSTR descripcion);
	object_e_medida(_QSTR descripcion);

	void mf_set_pk_medida(_QSTR pk_medida);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_medida();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_medida();
};
#endif // OBJECT_E_MEDIDA_H
