#ifndef OBJECT_E_ARTICULO_H
#define OBJECT_E_ARTICULO_H

#include "share_include.h"

#define TABLE_NAME_E_ARTICULO "e_articulo"
class object_e_articulo:public object_general
{

private:
	_QSTR md_o_pk_articulo;
	_QSTR md_o_fk_grupo;
	_QSTR md_o_fk_marca;
	_QSTR md_o_fk_medida;
	_QSTR md_o_descripcion;
	_QSTR md_o_precio_lista;
	_QSTR md_o_stock;
	_QSTR md_o_habilitado;

public:
	object_e_articulo();
	object_e_articulo(_QSTR pk_articulo, _QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock, _QSTR habilitado);
	object_e_articulo(_QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock, _QSTR habilitado);

	void mf_set_pk_articulo(_QSTR pk_articulo);
	void mf_set_fk_grupo(_QSTR fk_grupo);
	void mf_set_fk_marca(_QSTR fk_marca);
	void mf_set_fk_medida(_QSTR fk_medida);
	void mf_set_descripcion(_QSTR descripcion);
	void mf_set_precio_lista(_QSTR precio_lista);
	void mf_set_stock(_QSTR stock);
	void mf_set_habilitado(_QSTR habilitado);

	_QSTR mf_get_pk_articulo();
	_QSTR mf_get_fk_grupo();
	_QSTR mf_get_fk_marca();
	_QSTR mf_get_fk_medida();
	_QSTR mf_get_descripcion();
	_QSTR mf_get_precio_lista();
	_QSTR mf_get_stock();
	_QSTR mf_get_habilitado();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_articulo();
};
#endif // OBJECT_E_ARTICULO_H
