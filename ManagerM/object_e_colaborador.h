#ifndef OBJECT_E_COLABORADOR_H
#define OBJECT_E_COLABORADOR_H

#include "share_include.h"

class object_e_colaborador:public object_general
{

private:
	_QSTR md_o_pk_dni;
	_QSTR md_o_fk_tienda;
	_QSTR md_o_nombres;
	_QSTR md_o_apellido_paterno;
	_QSTR md_o_apellido_materno;
	_QSTR md_o_direccion;
	_QSTR md_o_fecha_nacimiento;
	_QSTR md_o_sexo;
	_QSTR md_o_estado_civil;
	_QSTR md_o_telefono_celular;
	_QSTR md_o_telefono_fijo;
	_QSTR md_o_email;
	_QSTR md_o_comentario;
    _QSTR md_o_habilitado;

public:
	object_e_colaborador();
    object_e_colaborador(_QSTR pk_dni, _QSTR fk_tienda, _QSTR nombres, _QSTR apellido_paterno, _QSTR apellido_materno, _QSTR direccion, _QSTR fecha_nacimiento, _QSTR sexo, _QSTR estado_civil, _QSTR telefono_celular, _QSTR telefono_fijo, _QSTR email, _QSTR comentario,_QSTR habilitado);
    object_e_colaborador(_QSTR fk_tienda, _QSTR nombres, _QSTR apellido_paterno, _QSTR apellido_materno, _QSTR direccion, _QSTR fecha_nacimiento, _QSTR sexo, _QSTR estado_civil, _QSTR telefono_celular, _QSTR telefono_fijo, _QSTR email, _QSTR comentario, _QSTR habilitado);

	void mf_set_pk_dni(_QSTR pk_dni);
	void mf_set_fk_tienda(_QSTR fk_tienda);
	void mf_set_nombres(_QSTR nombres);
	void mf_set_apellido_paterno(_QSTR apellido_paterno);
	void mf_set_apellido_materno(_QSTR apellido_materno);
	void mf_set_direccion(_QSTR direccion);
	void mf_set_fecha_nacimiento(_QSTR fecha_nacimiento);
	void mf_set_sexo(_QSTR sexo);
	void mf_set_estado_civil(_QSTR estado_civil);
	void mf_set_telefono_celular(_QSTR telefono_celular);
	void mf_set_telefono_fijo(_QSTR telefono_fijo);
	void mf_set_email(_QSTR email);
	void mf_set_comentario(_QSTR comentario);
    void mf_set_habilitado(_QSTR habilitado);

	_QSTR mf_get_pk_dni();
	_QSTR mf_get_fk_tienda();
	_QSTR mf_get_nombres();
	_QSTR mf_get_apellido_paterno();
	_QSTR mf_get_apellido_materno();
	_QSTR mf_get_direccion();
	_QSTR mf_get_fecha_nacimiento();
	_QSTR mf_get_sexo();
	_QSTR mf_get_estado_civil();
	_QSTR mf_get_telefono_celular();
	_QSTR mf_get_telefono_fijo();
	_QSTR mf_get_email();
	_QSTR mf_get_comentario();
    _QSTR mf_get_habilitado();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_colaborador();
};
#endif // OBJECT_E_COLABORADOR_H
