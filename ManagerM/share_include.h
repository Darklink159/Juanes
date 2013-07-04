#ifndef SHARE_INCLUDE_H
#define SHARE_INCLUDE_H

//LANGUAGE INCLUDES - NAMESPACE

//INCLUDES

//#include <ostream>

#include <stdio.h>
#include <time.h>
#include <ostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include <map>

//NAMESPACES

using namespace std;

//IDE INCLUDES - NAMESPACE

//INCLUDES

#include <QMessageBox>

#include <QDebug>

#include <QtGui>
#include <QSystemTrayIcon>
#include <QMenu>

#include <QMainWindow>
#include <QtGui/QApplication>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QVariant>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QModelIndex>
#include <QSqlRelationalTableModel>
//NAMESPACES

//PROYECT INCLUDES - NAMESPACE

//INCLUDES

#include "ui_main.h"
#include "share_typedef.h"

#include "searcher_articulos.h"
#include "singleton.h"
#include "system_log.h"
#include "database_connection.h"
#include "session.h"
#include "freequery.h"
#include "sistema.h"

#include "object_general.h"


#include "object_e_usuario.h"
#include "object_e_grupo.h"
#include "object_e_marca.h"
#include "object_e_medida.h"
#include "object_e_banco.h"
#include "object_e_proveedor.h"
#include "object_e_persona_juridica.h"
#include "object_e_tienda.h"
#include "object_e_tipo_usuario.h"
#include "object_e_colaborador.h"
#include "object_e_orden_compra.h"
#include "object_e_factura_compra.h"
#include "object_e_comprobante.h"
#include "object_e_guia_rr_compra.h"
#include "object_e_transportista.h"
#include "object_e_cliente.h"
#include "object_e_region.h"

#include "object_e_comprobante_funciones.h"
#include "object_e_factura_compra_funciones.h"
#include "object_e_guia_rr_compra_funciones.h"
#include "object_e_orden_compra_funciones.h"
#include "object_e_persona_juridica_funciones.h"
#include "object_e_proveedor_funciones.h"
#include "object_e_transportista_funciones.h"
#include "object_r_proveedor_articulo.h"

#include "object_e_sistema.h"
#include "object_e_factura_sistema.h"
#include "object_e_boleta_sistema.h"
#include "object_e_igv_sistema.h"
#include "object_e_cambio_dolar_sistema.h"

#include "object_e_boleta_venta.h"
#include "object_e_factura_venta.h"
#include "object_e_cotizacion_venta.h"
#include "object_e_proforma_venta.h"

#include "object_r_comprobante_articulo.h"




#include "ui_tool_bar.h"

#include "ui_login.h"

#include "ui_edit_proveedor.h"
#include "ui_edit_transportista.h"

#include "ui_new_marca.h"
#include "ui_new_medida.h"



#include "ui_opciones_tienda.h"
#include "ui_opciones_base_datos.h"
#include "ui_opciones_articulo.h"
#include "ui_opciones_banco.h"
#include "ui_opciones_proveedor.h"
#include "ui_opciones_comprobante.h"
#include "ui_opciones_general.h"
#include "ui_opciones.h"

#include "ui_articulo.h"

#include "ui_module_ventas.h"
#include "ui_module_colaboradores.h"
#include "ui_newedit_colaborador.h"
#include "ui_module_home.h"
#include "ui_module_articulos.h"
#include "ui_module_compras.h"
#include "ui_module_clientes.h"
#include "ui_newedit_cliente.h"


#include "ui_new_proveedor.h"
#include "ui_new_transportista.h"
#include "ui_new_venta_boleta.h"
#include "ui_new_venta_cotizacion.h"
#include "ui_new_venta_factura.h"
#include "ui_new_venta_proforma.h"

#include "ui_search_proveedor.h"
#include "ui_search_transportista.h"

#include "ui_edit_personalinformation.h"
#include "ui_search_cliente.h"


#include "ui_new_boleta_sistema.h"
#include "ui_new_factura_sistema.h"

#include "ui_tipo_cambio_dolar.h"

#include "ui_global_manager_articulos.h"
//NAMESPACES

//NAMESPACES
using namespace module_log;
using namespace module_dbconnection;
using namespace module_session;



#endif // SHARE_INCLUDE_H
