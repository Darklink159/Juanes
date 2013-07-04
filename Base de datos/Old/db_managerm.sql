SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`e_tienda`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_tienda` (
  `pk_ruc` VARCHAR(11) NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `telefono_fijo` VARCHAR(45) NULL ,
  `fax` VARCHAR(45) NULL ,
  `email` VARCHAR(45) NULL ,
  `pagina_web` VARCHAR(45) NULL ,
  `comentario` VARCHAR(150) NULL ,
  UNIQUE INDEX `ruc_UNIQUE` (`pk_ruc` ASC) ,
  PRIMARY KEY (`pk_ruc`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_colaborador`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_colaborador` (
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
  PRIMARY KEY (`pk_dni`) ,
  UNIQUE INDEX `pk_dni_UNIQUE` (`pk_dni` ASC) ,
  INDEX `fk_e_colaborador_e_tienda1_idx` (`fk_tienda` ASC) ,
  CONSTRAINT `fk_e_colaborador_e_tienda1`
    FOREIGN KEY (`fk_tienda` )
    REFERENCES `mydb`.`e_tienda` (`pk_ruc` )
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_tipo_usuario`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_tipo_usuario` (
  `pk_tipo_usuario` INT NOT NULL AUTO_INCREMENT ,
  `descripcion` VARCHAR(45) NULL ,
  `persmisos_default` VARCHAR(200) NULL ,
  PRIMARY KEY (`pk_tipo_usuario`) ,
  UNIQUE INDEX `pk_tipo_usuario_UNIQUE` (`pk_tipo_usuario` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_usuario`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_usuario` (
  `pk_dni` VARCHAR(8) NOT NULL ,
  `fk_tipo_usuario` INT NULL ,
  `nick` VARCHAR(45) NULL ,
  `clave` VARCHAR(45) NULL ,
  `habilitado` TINYINT(1) NULL ,
  `e_usuariocol` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_dni`) ,
  UNIQUE INDEX `pk_dni_UNIQUE` (`pk_dni` ASC) ,
  INDEX `fk_e_usuario_e_tipo_usuario1_idx` (`fk_tipo_usuario` ASC) ,
  CONSTRAINT `fk_e_usuario_e_trabajador`
    FOREIGN KEY (`pk_dni` )
    REFERENCES `mydb`.`e_colaborador` (`pk_dni` )
    ON DELETE CASCADE
    ON UPDATE CASCADE,
  CONSTRAINT `fk_e_usuario_e_tipo_usuario1`
    FOREIGN KEY (`fk_tipo_usuario` )
    REFERENCES `mydb`.`e_tipo_usuario` (`pk_tipo_usuario` )
    ON DELETE SET NULL
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_persona_juridicos`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_persona_juridicos` (
  `pk_ruc` INT NOT NULL ,
  `razon_social` VARCHAR(45) NOT NULL ,
  `direccion` VARCHAR(45) NOT NULL ,
  `telefono_fijo` VARCHAR(45) NULL ,
  `telefono_celular` VARCHAR(45) NULL ,
  `fax` VARCHAR(45) NULL ,
  `representante` VARCHAR(45) NOT NULL ,
  `email` VARCHAR(45) NULL ,
  `pagina_web` VARCHAR(45) NULL ,
  `comentario` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_ruc`) ,
  UNIQUE INDEX `pk_ruc_UNIQUE` (`pk_ruc` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_grupo`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_grupo` (
  `pk_grupo` INT NOT NULL AUTO_INCREMENT ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_grupo`) ,
  UNIQUE INDEX `pk_grupo_UNIQUE` (`pk_grupo` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_marca`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_marca` (
  `pk_marca` INT NOT NULL ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_marca`) ,
  UNIQUE INDEX `pk_marca_UNIQUE` (`pk_marca` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_medida`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_medida` (
  `pk_medida` INT NOT NULL ,
  `descripcion` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_medida`) ,
  UNIQUE INDEX `pk_medida_UNIQUE` (`pk_medida` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_articulo`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_articulo` (
  `pk_articulo` INT NOT NULL AUTO_INCREMENT ,
  `fk_grupo` INT NULL ,
  `fk_marca` INT NULL ,
  `fk_medida` INT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  `precio_lista` DOUBLE NULL ,
  `stock` INT NULL ,
  `e_articulocol` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_articulo`) ,
  UNIQUE INDEX `pk_articulo_UNIQUE` (`pk_articulo` ASC) ,
  INDEX `fk_e_articulo_e_grupo1_idx` (`fk_grupo` ASC) ,
  INDEX `fk_e_articulo_e_marca1_idx` (`fk_marca` ASC) ,
  INDEX `fk_e_articulo_e_medida1_idx` (`fk_medida` ASC) ,
  CONSTRAINT `fk_e_articulo_e_grupo1`
    FOREIGN KEY (`fk_grupo` )
    REFERENCES `mydb`.`e_grupo` (`pk_grupo` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_articulo_e_marca1`
    FOREIGN KEY (`fk_marca` )
    REFERENCES `mydb`.`e_marca` (`pk_marca` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_articulo_e_medida1`
    FOREIGN KEY (`fk_medida` )
    REFERENCES `mydb`.`e_medida` (`pk_medida` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_banco`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_banco` (
  `pk_ruc` INT NOT NULL ,
  `nombre` VARCHAR(45) NOT NULL ,
  `nombre_corto` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_ruc`) ,
  UNIQUE INDEX `pk_banco_UNIQUE` (`pk_ruc` ASC) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`r_cuentas`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`r_cuentas` (
  `pk_persona_juridica` INT NOT NULL ,
  `pk_banco` INT NOT NULL ,
  `cuenta_soles` VARCHAR(45) NULL ,
  `cuenta_dolares` VARCHAR(45) NULL ,
  `r_cuentascol` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_persona_juridica`, `pk_banco`) ,
  INDEX `fk_e_banco_has_e_persona_juridicos_e_persona_juridicos1_idx` (`pk_banco` ASC) ,
  INDEX `fk_e_banco_has_e_persona_juridicos_e_banco1_idx` (`pk_persona_juridica` ASC) ,
  CONSTRAINT `fk_e_banco_has_e_persona_juridicos_e_banco1`
    FOREIGN KEY (`pk_persona_juridica` )
    REFERENCES `mydb`.`e_banco` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE,
  CONSTRAINT `fk_e_banco_has_e_persona_juridicos_e_persona_juridicos1`
    FOREIGN KEY (`pk_banco` )
    REFERENCES `mydb`.`e_persona_juridicos` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_proveedor`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_proveedor` (
  `pk_ruc` INT NOT NULL ,
  `nombre_vendedor` VARCHAR(45) NOT NULL ,
  `celular_vendedor` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`pk_ruc`) ,
  CONSTRAINT `fk_e_proveedor_e_persona_juridicos1`
    FOREIGN KEY (`pk_ruc` )
    REFERENCES `mydb`.`e_persona_juridicos` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_cliente`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_cliente` (
  `pk_ruc` INT NOT NULL ,
  PRIMARY KEY (`pk_ruc`) ,
  CONSTRAINT `fk_e_cliente_e_persona_juridicos1`
    FOREIGN KEY (`pk_ruc` )
    REFERENCES `mydb`.`e_persona_juridicos` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`r_proveedor_articulo`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`r_proveedor_articulo` (
  `pk_proveedor` INT NOT NULL ,
  `pk_articulo` INT NOT NULL ,
  PRIMARY KEY (`pk_proveedor`, `pk_articulo`) ,
  INDEX `fk_e_proveedor_has_e_articulo_e_articulo1_idx` (`pk_articulo` ASC) ,
  INDEX `fk_e_proveedor_has_e_articulo_e_proveedor1_idx` (`pk_proveedor` ASC) ,
  CONSTRAINT `fk_e_proveedor_has_e_articulo_e_proveedor1`
    FOREIGN KEY (`pk_proveedor` )
    REFERENCES `mydb`.`e_proveedor` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_proveedor_has_e_articulo_e_articulo1`
    FOREIGN KEY (`pk_articulo` )
    REFERENCES `mydb`.`e_articulo` (`pk_articulo` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_tipo_moneda`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_tipo_moneda` (
  `pk_tipo_moneda` INT NOT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_tipo_moneda`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_tipo_pago`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_tipo_pago` (
  `pk_tipo_pago` INT NOT NULL ,
  `fk_tipo_moneda` INT NULL ,
  `descripcion` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_tipo_pago`) ,
  UNIQUE INDEX `pk_tipo_pago_UNIQUE` (`pk_tipo_pago` ASC) ,
  INDEX `fk_e_tipo_pago_e_tipo_moneda1_idx` (`fk_tipo_moneda` ASC) ,
  CONSTRAINT `fk_e_tipo_pago_e_tipo_moneda1`
    FOREIGN KEY (`fk_tipo_moneda` )
    REFERENCES `mydb`.`e_tipo_moneda` (`pk_tipo_moneda` )
    ON DELETE SET NULL
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_transportista`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_transportista` (
  `pk_ruc` INT NOT NULL ,
  PRIMARY KEY (`pk_ruc`) ,
  CONSTRAINT `fk_e_transportista_e_persona_juridicos1`
    FOREIGN KEY (`pk_ruc` )
    REFERENCES `mydb`.`e_persona_juridicos` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_comprobante`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_comprobante` (
  `pk_comprobante` INT NOT NULL AUTO_INCREMENT ,
  `pk_tienda` VARCHAR(11) NOT NULL ,
  `tipo` VARCHAR(45) NULL ,
  `numero` INT NULL ,
  `serie` INT NULL ,
  `fecha_sistema` DATE NULL ,
  `fecha_emision` DATE NULL ,
  `sub_total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_comprobante_e_tienda1_idx` (`pk_tienda` ASC) ,
  CONSTRAINT `fk_e_comprobante_e_tienda1`
    FOREIGN KEY (`pk_tienda` )
    REFERENCES `mydb`.`e_tienda` (`pk_ruc` )
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`r_comprobante_articulo`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`r_comprobante_articulo` (
  `pk_comprobante` INT NOT NULL ,
  `pk_articulo` INT NOT NULL ,
  `cantidad` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`, `pk_articulo`) ,
  INDEX `fk_e_comprobante_has_e_articulo_e_articulo1_idx` (`pk_articulo` ASC) ,
  INDEX `fk_e_comprobante_has_e_articulo_e_comprobante1_idx` (`pk_comprobante` ASC) ,
  CONSTRAINT `fk_e_comprobante_has_e_articulo_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_comprobante_has_e_articulo_e_articulo1`
    FOREIGN KEY (`pk_articulo` )
    REFERENCES `mydb`.`e_articulo` (`pk_articulo` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_boleta_venta`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_boleta_venta` (
  `pk_comprobante` INT NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `dni` VARCHAR(8) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  CONSTRAINT `fk_e_boleta_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_factura_venta`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_factura_venta` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` INT NOT NULL ,
  `total` FLOAT NULL ,
  `igv` FLOAT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_factura_venta_e_cliente1_idx` (`fk_cliente` ASC) ,
  CONSTRAINT `fk_e_factura_venta_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_factura_venta_e_cliente1`
    FOREIGN KEY (`fk_cliente` )
    REFERENCES `mydb`.`e_cliente` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_guia_rr`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_guia_rr` (
  `pk_comprobante` INT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_guia_rr_e_comprobante1_idx` (`pk_comprobante` ASC) ,
  CONSTRAINT `fk_e_guia_rr_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_factura_transportista`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_factura_transportista` (
  `pk_comprobante` INT NOT NULL ,
  `fk_transportista` INT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_factura_transportista_e_transportista1_idx` (`fk_transportista` ASC) ,
  CONSTRAINT `fk_e_factura_transportista_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_factura_transportista_e_transportista1`
    FOREIGN KEY (`fk_transportista` )
    REFERENCES `mydb`.`e_transportista` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_factura_compra`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_factura_compra` (
  `pk_comprobante` INT NOT NULL ,
  `fk_tipo_pago` INT NULL ,
  `fk_proveedor` INT NOT NULL ,
  `fk_guia_rr` INT NULL ,
  `fk_factura_transportista` INT NULL ,
  `total` FLOAT NULL ,
  `igv` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_factura_compra_e_proveedor1_idx` (`fk_proveedor` ASC) ,
  INDEX `fk_e_factura_compra_e_tipo_pago1_idx` (`fk_tipo_pago` ASC) ,
  INDEX `fk_e_factura_compra_e_guia_rr1_idx` (`fk_guia_rr` ASC) ,
  INDEX `fk_e_factura_compra_e_factura_transportista1_idx` (`fk_factura_transportista` ASC) ,
  CONSTRAINT `fk_e_factura_compra_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_factura_compra_e_proveedor1`
    FOREIGN KEY (`fk_proveedor` )
    REFERENCES `mydb`.`e_proveedor` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE,
  CONSTRAINT `fk_e_factura_compra_e_tipo_pago1`
    FOREIGN KEY (`fk_tipo_pago` )
    REFERENCES `mydb`.`e_tipo_pago` (`pk_tipo_pago` )
    ON DELETE SET NULL
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_factura_compra_e_guia_rr1`
    FOREIGN KEY (`fk_guia_rr` )
    REFERENCES `mydb`.`e_guia_rr` (`pk_comprobante` )
    ON DELETE SET NULL
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_factura_compra_e_factura_transportista1`
    FOREIGN KEY (`fk_factura_transportista` )
    REFERENCES `mydb`.`e_factura_transportista` (`pk_comprobante` )
    ON DELETE SET NULL
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_nota_credito`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_nota_credito` (
  `pk_comprobante` INT NOT NULL ,
  `total` VARCHAR(45) NULL ,
  `igv` FLOAT NULL ,
  `fk_factura` INT NOT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_nota_credito_e_factura_compra1_idx` (`fk_factura` ASC) ,
  CONSTRAINT `fk_e_nota_credito_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_nota_credito_e_factura_compra1`
    FOREIGN KEY (`fk_factura` )
    REFERENCES `mydb`.`e_factura_compra` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_ticket`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_ticket` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` INT NOT NULL ,
  `fk_factura_venta` INT NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_ticket_e_cliente1_idx` (`fk_cliente` ASC) ,
  INDEX `fk_e_ticket_e_factura_venta1_idx` (`fk_factura_venta` ASC) ,
  CONSTRAINT `fk_e_ticket_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_ticket_e_cliente1`
    FOREIGN KEY (`fk_cliente` )
    REFERENCES `mydb`.`e_cliente` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE,
  CONSTRAINT `fk_e_ticket_e_factura_venta1`
    FOREIGN KEY (`fk_factura_venta` )
    REFERENCES `mydb`.`e_factura_venta` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_nota_pedido_venta`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_nota_pedido_venta` (
  `pk_comprobante` INT NOT NULL ,
  `fk_cliente` INT NOT NULL ,
  `fk_factura_venta` INT NULL ,
  `total` FLOAT NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_nota_pedido_venta_e_factura_venta1_idx` (`fk_factura_venta` ASC) ,
  INDEX `fk_e_nota_pedido_venta_e_cliente1_idx` (`fk_cliente` ASC) ,
  CONSTRAINT `fk_e_nota_pedido_venta_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_nota_pedido_venta_e_factura_venta1`
    FOREIGN KEY (`fk_factura_venta` )
    REFERENCES `mydb`.`e_factura_venta` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_nota_pedido_venta_e_cliente1`
    FOREIGN KEY (`fk_cliente` )
    REFERENCES `mydb`.`e_cliente` (`pk_ruc` )
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`e_venta_libre`
-- -----------------------------------------------------
CREATE  TABLE IF NOT EXISTS `mydb`.`e_venta_libre` (
  `pk_comprobante` INT NOT NULL ,
  `fk_comprobante` INT NULL ,
  `total` VARCHAR(45) NULL ,
  PRIMARY KEY (`pk_comprobante`) ,
  INDEX `fk_e_venta_libre_e_comprobante1_idx` (`pk_comprobante` ASC) ,
  INDEX `fk_e_venta_libre_e_comprobante2_idx` (`fk_comprobante` ASC) ,
  CONSTRAINT `fk_e_venta_libre_e_comprobante1`
    FOREIGN KEY (`pk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_e_venta_libre_e_comprobante2`
    FOREIGN KEY (`fk_comprobante` )
    REFERENCES `mydb`.`e_comprobante` (`pk_comprobante` )
    ON DELETE CASCADE
    ON UPDATE NO ACTION)
ENGINE = InnoDB;



SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
