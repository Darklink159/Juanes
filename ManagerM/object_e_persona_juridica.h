#ifndef OBJECT_E_PERSONA_JURIDICA_H
#define OBJECT_E_PERSONA_JURIDICA_H

#include "share_include.h"

#define TABLE_NAME_E_PERSONA_JURIDICA "e_persona_juridica"
class object_e_persona_juridica:public object_general
{

private:
	_QSTR md_o_pk_ruc;
	_QSTR md_o_fk_region;
	_QSTR md_o_razon_social;
	_QSTR md_o_direccion;
	_QSTR md_o_telefono_fijo;
	_QSTR md_o_fax;
	_QSTR md_o_representante;
	_QSTR md_o_email;
	_QSTR md_o_pagina_web;
	_QSTR md_o_comentario;
	_QSTR md_o_habilitado;

public:
	object_e_persona_juridica();
	object_e_persona_juridica(_QSTR pk_ruc, _QSTR fk_region, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario, _QSTR habilitado);
	object_e_persona_juridica(_QSTR fk_region, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario, _QSTR habilitado);

	void mf_set_pk_ruc(_QSTR pk_ruc);
	void mf_set_fk_region(_QSTR fk_region);
	void mf_set_razon_social(_QSTR razon_social);
	void mf_set_direccion(_QSTR direccion);
	void mf_set_telefono_fijo(_QSTR telefono_fijo);
	void mf_set_fax(_QSTR fax);
	void mf_set_representante(_QSTR representante);
	void mf_set_email(_QSTR email);
	void mf_set_pagina_web(_QSTR pagina_web);
	void mf_set_comentario(_QSTR comentario);
	void mf_set_habilitado(_QSTR habilitado);

	_QSTR mf_get_pk_ruc();
	_QSTR mf_get_fk_region();
	_QSTR mf_get_razon_social();
	_QSTR mf_get_direccion();
	_QSTR mf_get_telefono_fijo();
	_QSTR mf_get_fax();
	_QSTR mf_get_representante();
	_QSTR mf_get_email();
	_QSTR mf_get_pagina_web();
	_QSTR mf_get_comentario();
	_QSTR mf_get_habilitado();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_persona_juridica();
};
#endif // OBJECT_E_PERSONA_JURIDICA_H
	/*
	object_e_persona_juridica obj_e_persona_juridica;
	obj_e_persona_juridica.mf_set_pk_ruc();
	obj_e_persona_juridica.mf_set_fk_region();
	obj_e_persona_juridica.mf_set_razon_social();
	obj_e_persona_juridica.mf_set_direccion();
	obj_e_persona_juridica.mf_set_telefono_fijo();
	obj_e_persona_juridica.mf_set_fax();
	obj_e_persona_juridica.mf_set_representante();
	obj_e_persona_juridica.mf_set_email();
	obj_e_persona_juridica.mf_set_pagina_web();
	obj_e_persona_juridica.mf_set_comentario();
	obj_e_persona_juridica.mf_set_habilitado();

	obj_e_persona_juridica.mf_get_pk_ruc();
	obj_e_persona_juridica.mf_get_fk_region();
	obj_e_persona_juridica.mf_get_razon_social();
	obj_e_persona_juridica.mf_get_direccion();
	obj_e_persona_juridica.mf_get_telefono_fijo();
	obj_e_persona_juridica.mf_get_fax();
	obj_e_persona_juridica.mf_get_representante();
	obj_e_persona_juridica.mf_get_email();
	obj_e_persona_juridica.mf_get_pagina_web();
	obj_e_persona_juridica.mf_get_comentario();
	obj_e_persona_juridica.mf_get_habilitado();
	*/
