
package u2_a4_obj;



public class Producto {
    private int code;
    private String description;
    private float price;
    private int cant;

    public Producto(int code, String description, float price, int cant) {
        this.code = code;
        this.description = description;
        this.price = price;
        this.cant = cant;
    }
    
    public int getCode() {
        return code;
    }

    public float getPrice() {
        return price;
    }
    
     
    public String buscarProducto(){
        
        return "\nProducto: "+code+"\nDescripcion: "+description+"\nPrecio: "+price+"\nCantidad: "+cant+"\n";     
   }
   
    public String productomayor(){
              
        return "\nProducto: "+code+"\nDescripcion: "+description+"\nPrecio: "+price+"\nCantidad: "+cant+"\n"; 
    }
    
    public String productoMenor(){
        return "\nProducto: "+code+"\nDescripcion: "+description+"\nPrecio: "+price+"\nCantidad: "+cant+"\n"; 
    }
           
    public String imprimirInventario(){
        
         return "\nCodigo: "+code+"\nDescripcion: "+description+"\nPrecio: "+price+"\nCantidad: "+cant+"\n";
    }    
    
}
