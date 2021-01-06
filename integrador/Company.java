package integrador;

public class Company {
   ///////ATRIBUTOS////////
    String nombre;
    private String direccion;
    private String telefono;
    private String companyRFC;
       
     ///////CONSTRUCTOR////////
    public Company(String nombre, String direccion, String telefono, String companyRFC) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.telefono = telefono;
        this.companyRFC = companyRFC;        
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public String getTelefono() {
        return telefono;
    }

    public void setTelefono(String telefono) {
        this.telefono = telefono;
    }

    public String getCompanyRFC() {
        return companyRFC;
    }

    public void setCompanyRFC(String companyRFC) {
        this.companyRFC = companyRFC;
    }
   
}   

