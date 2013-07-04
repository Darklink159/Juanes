#ifndef OBJECT_E_TIPO_USUARIO_H
#define OBJECT_E_TIPO_USUARIO_H

#include "share_include.h"

class object_e_tipo_usuario:public object_general
{

private:
	_QSTR md_o_pk_tipo_usuario;
	_QSTR md_o_descripcion;
	_QSTR md_o_persmisos_default;

public:
	object_e_tipo_usuario();
	object_e_tipo_usuario(_QSTR pk_tipo_usuario, _QSTR descripcion, _QSTR persmisos_default);
	object_e_tipo_usuario(_QSTR descripcion, _QSTR persmisos_default);

	void mf_set_pk_tipo_usuario(_QSTR pk_tipo_usuario);
	void mf_set_descripcion(_QSTR descripcion);
	void mf_set_persmisos_default(_QSTR persmisos_default);

	_QSTR mf_get_pk_tipo_usuario();
	_QSTR mf_get_descripcion();
	_QSTR mf_get_persmisos_default();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_tipo_usuario();
};
#endif // OBJECT_E_TIPO_USUARIO_H