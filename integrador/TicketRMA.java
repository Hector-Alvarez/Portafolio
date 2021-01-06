package integrador;

import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.util.Date; 

public class TicketRMA {
    ///////ATRIBUTOS////////
    private int folio;
    private String descripcion;
    private String fechaInicio;
    private String fechaRecepcion;
    private String fechaEntrega;
    private String typeDocAdjuntado;
    //private Producto productos 
    private int producto;
    private float costo; 
    ///////CONSTRUCTOR////////
    public TicketRMA(int folio, String descripcion, String fechaInicio, String fechaRecepcion, String fechaEntrega, String typeDocAdjuntado, int producto, float costo) {
        this.folio = folio;
        this.descripcion = descripcion;
        this.fechaInicio = fechaInicio;
        this.fechaRecepcion = fechaRecepcion;
        this.fechaEntrega = fechaEntrega;
        this.typeDocAdjuntado = typeDocAdjuntado;
        this.producto = producto;
        this.costo = costo;
    }

    public int getFolio() {
        return folio;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public String getFechaInicio() {
        return fechaInicio;
    }
    
    public String getFechaRecepcion() {
        return fechaRecepcion;
    }

    public String getFechaEntrega() {
        return fechaEntrega;
    }

    public String getTypeDocAdjuntado() {
        return typeDocAdjuntado;
    }

    public int getProducto() {
        return producto;
    }

    public float getCosto() {
        return costo;
    }

    public void setFolio(int folio) {
        this.folio = folio;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public void setFechaInicio(String fechaInicio) {
        this.fechaInicio = fechaInicio;
    }
    
    public void setFechaRecepcion(String fechaRecepcion) {
        this.fechaRecepcion = fechaRecepcion;
    }

    public void setFechaEntrega(String fechaEntrega) {
        this.fechaEntrega = fechaEntrega;
    }

    public void setTypeDocAdjuntado(String typeDocAdjuntado) {
        this.typeDocAdjuntado = typeDocAdjuntado;
    }

    public void setProducto(int producto) {
        this.producto = producto;
    }

    public void setCosto(float costo) {
        this.costo = costo;
    }
        
}