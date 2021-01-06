package integrador;

import java.util.Date;

public class Producto {
    ///////ATRIBUTOS////////
    private int code;
    private String nombre;
    private String numSerieEquipo;
    private String fechaCompra;
    private boolean diagnosticado;
    private boolean aplicaGarantia;
    private boolean reparacion;
    private boolean dispStock;
    private int cantidad;
    
     ///////CONSTRUCTOR////////
    public Producto(int code, String nombre, String numSerieEquipo, String fechaCompra, boolean diagnosticado, boolean aplicaGarantia, boolean reparacion, boolean dispStock, int cantidad) {
        this.code=code;
        this.nombre = nombre;
        this.numSerieEquipo = numSerieEquipo;
        this.fechaCompra = fechaCompra;
        this.diagnosticado = diagnosticado;
        this.aplicaGarantia = aplicaGarantia;
        this.reparacion = reparacion;
        this.dispStock = dispStock;
        this.cantidad = cantidad;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getNumSerieEquipo() {
        return numSerieEquipo;
    }

    public void setNumSerieEquipo(String numSerieEquipo) {
        this.numSerieEquipo = numSerieEquipo;
    }

    public String getFechaCompra() {
        return fechaCompra;
    }

    public void setFechaCompra(String fechaCompra) {
        this.fechaCompra = fechaCompra;
    }

    public boolean isDiagnosticado() {
        return diagnosticado;
    }

    public void setDiagnosticado(boolean diagnosticado) {
        this.diagnosticado = diagnosticado;
    }

    public boolean isAplicaGarantia() {
        return aplicaGarantia;
    }

    public void setAplicaGarantia(boolean aplicaGarantia) {
        this.aplicaGarantia = aplicaGarantia;
    }

    public boolean isReparacion() {
        return reparacion;
    }

    public void setReparacion(boolean reparacion) {
        this.reparacion = reparacion;
    }

    public boolean isDispStock() {
        return dispStock;
    }

    public void setDispStock(boolean dispStock) {
        this.dispStock = dispStock;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }    
}
