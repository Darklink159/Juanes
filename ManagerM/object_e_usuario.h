#ifndef OBJECT_E_USUARIO_H
#define OBJECT_E_USUARIO_H

#include "object_general.h"

class object_e_usuario:public object_general
{

private:
	_QSTR md_o_pk_dni;
	_QSTR md_o_fk_tipo_usuario;
	_QSTR md_o_nick;
	_QSTR md_o_clave;
	_QSTR md_o_habilitado;

public:
	object_e_usuario();
	object_e_usuario(_QSTR pk_dni, _QSTR fk_tipo_usuario, _QSTR nick, _QSTR clave, _QSTR habilitado);
	object_e_usuario(_QSTR fk_tipo_usuario, _QSTR nick, _QSTR clave, _QSTR habilitado);

	void mf_set_pk_dni(_QSTR pk_dni);
	void mf_set_fk_tipo_usuario(_QSTR fk_tipo_usuario);
	void mf_set_nick(_QSTR nick);
	void mf_set_clave(_QSTR clave);
	void mf_set_habilitado(_QSTR habilitado);

	_QSTR mf_get_pk_dni();
	_QSTR mf_get_fk_tipo_usuario();
	_QSTR mf_get_nick();
	_QSTR mf_get_clave();
	_QSTR mf_get_habilitado();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_usuario();
};
#endif // OBJECT_E_USUARIO_H
