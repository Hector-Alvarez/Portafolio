package u2_polimorfismo;

import java.util.Scanner;

public class Contribuyente {
    protected String name;
    protected String address;
    protected String phone;
    protected String rfc;
    
    Scanner in = new Scanner(System.in);

    public Contribuyente(String name, String address, String phone, String rfc) {
        this.name = name;
        this.address = address;
        this.phone = phone;
        this.rfc = rfc;
    }
 
 
    public void IngresarDatos(){
        System.out.print("Ingrese el nombre del contribuyente: ");
            name = in.nextLine();
        System.out.print("Ingrese la direccion del contribuyente: ");
            address = in.nextLine();
        System.out.print("Ingrese el numero telefonico del contribuyebte: ");
            phone = in.nextLine();
        System.out.print("Ingrese el RFC del contribuyente: ");
            rfc = in.nextLine();
    }   
    
    public void calculoImpuesto(){
    }
    public String MostrarDatos(){
        System.out.println("\n/////////DATOS DEL CONTRIBUYENTE/////////");
    return "\nNombre: " +  name + "\nDireccion: " +  address + "\nTelefono: " +  phone + "\nRFC: " + rfc;    
    }    
}
