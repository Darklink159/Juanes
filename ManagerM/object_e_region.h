#ifndef OBJECT_E_REGION_H
#define OBJECT_E_REGION_H

#include "share_include.h"

#define TABLE_NAME_E_REGION "e_region"
class object_e_region:public object_general
{

private:
	_QSTR md_o_pk_codigo_region;
	_QSTR md_o_nombre_region;

public:
	object_e_region();
	object_e_region(_QSTR pk_codigo_region, _QSTR nombre_region);
	object_e_region(_QSTR nombre_region);

	void mf_set_pk_codigo_region(_QSTR pk_codigo_region);
	void mf_set_nombre_region(_QSTR nombre_region);

	_QSTR mf_get_pk_codigo_region();
	_QSTR mf_get_nombre_region();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_region();
};
#endif // OBJECT_E_REGION_H
	/*
	object_e_region obj_e_region;
	obj_e_region.mf_set_pk_codigo_region();
	obj_e_region.mf_set_nombre_region();

	obj_e_region.mf_get_pk_codigo_region();
	obj_e_region.mf_get_nombre_region();
	*/
