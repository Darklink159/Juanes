#ifndef OBJECT_E_GRUPO_H
#define OBJECT_E_GRUPO_H

#include "share_include.h"

class object_e_grupo:public object_general
{

private:
	_QSTR md_o_pk_grupo;
	_QSTR md_o_descripcion;

public:
	object_e_grupo();
	object_e_grupo(_QSTR pk_grupo, _QSTR descripcion);
	object_e_grupo(_QSTR descripcion);

	void mf_set_pk_grupo(_QSTR pk_grupo);
	void mf_set_descripcion(_QSTR descripcion);

	_QSTR mf_get_pk_grupo();
	_QSTR mf_get_descripcion();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_grupo();
};
#endif // OBJECT_E_GRUPO_H
