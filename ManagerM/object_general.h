#ifndef OBJECT_GENERAL_H
#define OBJECT_GENERAL_H

#include "share_include.h"

class object_general
{
public:
	object_general(){ }
private:
	virtual bool mf_load(_QSTR pk) = 0;
	virtual bool mf_update() = 0;
	virtual bool mf_add() = 0;
	virtual bool mf_remove() = 0;

	//virtual bool mf_load(_QSTR pk) = 0;
	//virtual bool mf_load(_QSTR pk) = 0;
};

#endif // OBJECT_GENERAL
/*
#include "object_e_articulo.h"
#include "object_e_banco.h"
#include "object_e_boleta_venta.h"
#include "object_e_cliente.h"
#include "object_e_colaborador.h"
#include "object_e_comprobante.h"
#include "object_e_factura_compra.h"
#include "object_e_factura_transportista.h"
#include "object_e_factura_venta.h"
#include "object_e_grupo.h"
#include "object_e_guia_rr_compra.h"
#include "object_e_marca.h"
#include "object_e_medida.h"
#include "object_e_nota_credito.h"
#include "object_e_nota_pedido_venta.h"
#include "object_e_orden_compra.h"
#include "object_e_persona_juridicos.h"
#include "object_e_proveedor.h"
#include "object_e_ticket.h"
#include "object_e_tienda.h"
#include "object_e_tipo_comprobante.h"
#include "object_e_tipo_moneda.h"
#include "object_e_tipo_pago.h"
#include "object_e_tipo_usuario.h"
#include "object_e_transportista.h"
#include "object_e_usuario.h"
#include "object_e_venta_libre.h"
#include "object_r_comprobante_articulo.h"
#include "object_r_cuentas.h"
#include "object_r_proveedor_articulo.h"

#include "object_e_articulo_funciones.h"
#include "object_e_banco_funciones.h"
#include "object_e_boleta_venta_funciones.h"
#include "object_e_cliente_funciones.h"
#include "object_e_colaborador_funciones.h"
#include "object_e_comprobante_funciones.h"
#include "object_e_factura_compra_funciones.h"
#include "object_e_factura_transportista_funciones.h"
#include "object_e_factura_venta_funciones.h"
#include "object_e_grupo_funciones.h"
#include "object_e_guia_rr_compra_funciones.h"
#include "object_e_marca_funciones.h"
#include "object_e_medida_funciones.h"
#include "object_e_nota_credito_funciones.h"
#include "object_e_nota_pedido_venta_funciones.h"
#include "object_e_orden_compra_funciones.h"
#include "object_e_persona_juridicos_funciones.h"
#include "object_e_proveedor_funciones.h"
#include "object_e_ticket_funciones.h"
#include "object_e_tienda_funciones.h"
#include "object_e_tipo_comprobante_funciones.h"
#include "object_e_tipo_moneda_funciones.h"
#include "object_e_tipo_pago_funciones.h"
#include "object_e_tipo_usuario_funciones.h"
#include "object_e_transportista_funciones.h"
#include "object_e_usuario_funciones.h"
#include "object_e_venta_libre_funciones.h"
#include "object_r_comprobante_articulo_funciones.h"
#include "object_r_cuentas_funciones.h"
#include "object_r_proveedor_articulo_funciones.h"
*/
