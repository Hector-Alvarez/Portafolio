package u2_integrador;

import java.util.Scanner;

public class Empleado {
    
    protected String fullname;
    protected String address;
    protected String phone;
    protected int age;
    protected String gender;
    
    public Empleado(String fullname, String address, String phone, int age, String gender){
        this.fullname=fullname;
        this.address=address;
        this.phone=phone;
        this.age=age;
        this.gender=gender;    
    }  
    public String getFullname() {
        return fullname;
    }
    public String getAddress() {
        return address;
    }
    public String getPhone() {
        return phone;
    }
    public int getAge() {
        return age;
    }
    public String getGender() {
        return gender;
    }
   
    public String mostrarDatos(){
        return "Nombre: "+fullname+"\nDireccion: "+address+"\nTelefono: "+phone+"\nGenero: "+gender+"\n";
    }        
   public String calcularEdades(){
    return "Nombre: "+fullname+"\nDireccion: "+address+"\nTelefono: "+phone+"\nEdad: "+age+"\nGenero: "+gender+"\n";  
   }    
}
