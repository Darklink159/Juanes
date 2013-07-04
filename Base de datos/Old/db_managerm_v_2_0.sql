SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

DROP SCHEMA IF EXISTS `db_managerm` ;
CREATE SCHEMA IF NOT EXISTS `db_managerm` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci ;
SHOW WARNINGS;
USE `db_managerm` ;

-- -----------------------------------------------------
-- Table `e_tienda`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_tienda` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_tienda` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `telefono_fijo` VARCHAR(45) NULL ,
  `fax` VARCHAR(45) NULL ,
  `email` VARCHAR(45) NULL ,
  `pagina_web` VARCHAR(45) NULL ,
  `comentario` VARCHAR(150) NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `ruc_UNIQUE` ON `e_tienda` (`pk_ruc` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_colaborador`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_colaborador` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_colaborador` (
  `pk_dni` VARCHAR(8) NOT NULL ,
  `fk_tienda` VARCHAR(11) NOT NULL ,
  `nombres` VARCHAR(45) NULL ,
  `apellido_paterno` VARCHAR(45) NULL ,
  `apellido_materno` VARCHAR(45) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `fecha_nacimiento` DATE NULL ,
  `sexo` VARCHAR(1) NULL ,
  `estado_civil` VARCHAR(1) NULL ,
  `telefono_celular` VARCHAR(45) NULL ,
  `telefono_fijo` VARCHAR(45) NULL ,
  `email` VARCHAR(45) NULL ,
  `comentario` VARCHAR(150) NULL ,
  PRIMARY KEY (`pk_dni`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_dni_UNIQUE` ON `e_colaborador` (`pk_dni` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_tipo_usuario`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_tipo_usuario` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_tipo_usuario` (
  `pk_tipo_usuario` INT NOT NULL AUTO_INCREMENT ,
  `descripcion` VARCHAR(45) NULL ,
  `persmisos_default` VARCHAR(200) NULL ,
  PRIMARY KEY (`pk_tipo_usuario`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_tipo_usuario_UNIQUE` ON `e_tipo_usuario` (`pk_tipo_usuario` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_usuario`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_usuario` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_usuario` (
  `pk_dni` VARCHAR(8) NOT NULL ,
  `fk_tipo_usuario` INT NULL ,
  `nick` VARCHAR(45) NULL ,
  `clave` VARCHAR(45) NULL ,
  `habilitado` TINYINT(1) NULL ,
  PRIMARY KEY (`pk_dni`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_dni_UNIQUE` ON `e_usuario` (`pk_dni` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_persona_juridicos`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_persona_juridicos` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_persona_juridicos` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `razon_social` VARCHAR(45) NOT NULL ,
  `direccion` VARCHAR(45) NOT NULL ,
  `telefono_fijo` VARCHAR(45) NULL ,
  `telefono_celular` VARCHAR(45) NULL ,
  `fax` VARCHAR(45) NULL ,
  `representante` VARCHAR(45) NOT NULL ,
  `email` VARCHAR(45) NULL ,
  `pagina_web` VARCHAR(45) NULL ,
  `comentario` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_ruc_UNIQUE` ON `e_persona_juridicos` (`pk_ruc` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_grupo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_grupo` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_grupo` (
  `pk_grupo` INT NOT NULL AUTO_INCREMENT ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_grupo`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_grupo_UNIQUE` ON `e_grupo` (`pk_grupo` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_marca`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_marca` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_marca` (
  `pk_marca` INT NOT NULL ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_marca`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_marca_UNIQUE` ON `e_marca` (`pk_marca` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_medida`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_medida` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_medida` (
  `pk_medida` INT NOT NULL ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_medida`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_medida_UNIQUE` ON `e_medida` (`pk_medida` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_articulo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_articulo` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_articulo` (
  `pk_articulo` INT NOT NULL AUTO_INCREMENT ,
  `fk_grupo` INT NULL ,
  `fk_marca` INT NULL ,
  `fk_medida` INT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  `precio_lista` DOUBLE NULL ,
  `stock` INT NULL ,
  `habilitado` TINYINT(1) NULL ,
  PRIMARY KEY (`pk_articulo`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_articulo_UNIQUE` ON `e_articulo` (`pk_articulo` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_banco`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_banco` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_banco` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `nombre` VARCHAR(45) NOT NULL ,
  `nombre_corto` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_banco_UNIQUE` ON `e_banco` (`pk_ruc` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `r_cuentas`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `r_cuentas` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `r_cuentas` (
  `fk_banco` VARCHAR(11) NOT NULL ,
  `fk_persona_juridica` VARCHAR(11) NOT NULL ,
  `cuenta_soles` VARCHAR(45) NULL ,
  `cuenta_dolares` VARCHAR(45) NULL ,
  `r_cuentascol` VARCHAR(45) NULL ,
  PRIMARY KEY (`fk_banco`, `fk_persona_juridica`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_proveedor`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_proveedor` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_proveedor` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `nombre_vendedor` VARCHAR(45) NOT NULL ,
  `celular_vendedor` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_cliente`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_cliente` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_cliente` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `e_clientecol` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `r_proveedor_articulo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `r_proveedor_articulo` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `r_proveedor_articulo` (
  `pk_proveedor` VARCHAR(11) NOT NULL ,
  `pk_articulo` INT NOT NULL ,
  PRIMARY KEY (`pk_proveedor`, `pk_articulo`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_tipo_moneda`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_tipo_moneda` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_tipo_moneda` (
  `pk_tipo_moneda` INT NOT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_tipo_moneda`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_tipo_pago`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_tipo_pago` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_tipo_pago` (
  `pk_tipo_pago` INT NOT NULL ,
  `fk_tipo_moneda` INT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_tipo_pago`) )
ENGINE = InnoDB;

SHOW WARNINGS;
CREATE UNIQUE INDEX `pk_tipo_pago_UNIQUE` ON `e_tipo_pago` (`pk_tipo_pago` ASC) ;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_transportista`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_transportista` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_transportista` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_comprobante`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_comprobante` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_comprobante` (
  `pk_comprobante` INT NOT NULL AUTO_INCREMENT ,
  `pk_tienda` VARCHAR(11) NOT NULL ,
  `tipo` VARCHAR(45) NULL ,
  `numero` INT NULL ,
  `serie` INT NULL ,
  `fecha_sistema` DATE NULL ,
  `fecha_emision` DATE NULL ,
  `sub_total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `r_comprobante_articulo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `r_comprobante_articulo` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `r_comprobante_articulo` (
  `pk_comprobante` INT NOT NULL ,
  `pk_articulo` INT NOT NULL ,
  `cantidad` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`, `pk_articulo`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_boleta_venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_boleta_venta` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_boleta_venta` (
  `pk_comprobante` INT NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `dni` VARCHAR(8) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_factura_venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_factura_venta` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_factura_venta` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` VARCHAR(11) NOT NULL ,
  `total` FLOAT NULL ,
  `igv` FLOAT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_guia_rr`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_guia_rr` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_guia_rr` (
  `pk_comprobante` INT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_factura_transportista`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_factura_transportista` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_factura_transportista` (
  `pk_comprobante` INT NOT NULL ,
  `fk_transportista` VARCHAR(11) NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_factura_compra`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_factura_compra` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_factura_compra` (
  `pk_comprobante` INT NOT NULL ,
  `fk_tipo_pago` INT NULL ,
  `fk_proveedor` VARCHAR(11) NOT NULL ,
  `fk_guia_rr` INT NULL ,
  `fk_factura_transportista` INT NULL ,
  `total` FLOAT NULL ,
  `igv` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_nota_credito`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_nota_credito` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_nota_credito` (
  `pk_comprobante` INT NOT NULL ,
  `total` VARCHAR(45) NULL ,
  `igv` FLOAT NULL ,
  `fk_factura` INT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_ticket`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_ticket` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_ticket` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` VARCHAR(11) NOT NULL ,
  `fk_factura_venta` INT NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_nota_pedido_venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_nota_pedido_venta` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_nota_pedido_venta` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` VARCHAR(11) NOT NULL ,
  `fk_factura_venta` INT NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;

-- -----------------------------------------------------
-- Table `e_venta_libre`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `e_venta_libre` ;

SHOW WARNINGS;
CREATE  TABLE IF NOT EXISTS `e_venta_libre` (
  `pk_comprobante` INT NOT NULL ,
  `fk_comprobante` INT NULL ,
  `total` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_comprobante`) )
ENGINE = InnoDB;

SHOW WARNINGS;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
