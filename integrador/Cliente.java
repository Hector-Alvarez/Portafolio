package integrador;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class Cliente {
    Scanner sn = new Scanner (System.in);
    
    ///////ATRIBUTOS////////
    private int codeCliente;
    private String RFC;
    private String Nombre;
    private String apellidoPatern;
    private String apellidoMatern;
    private String celular;
    private String correo;
    private Company company;
    private int empresa;
    private TicketRMA tikets[];
          
    ///////CONSTRUCTOR////////

    public Cliente(int codeCliente, String RFC, String Nombre, String apellidoPatern, String apellidoMatern, String celular, String correo) {
        this.codeCliente = codeCliente;
        this.RFC = RFC;
        this.Nombre = Nombre;
        this.apellidoPatern = apellidoPatern;
        this.apellidoMatern = apellidoMatern;
        this.celular = celular;
        this.correo = correo;
    }

    public Cliente(int codeCliente, String RFC, String Nombre, String apellidoPatern, String apellidoMatern, String celular, String correo, int empresa) {
        this.codeCliente = codeCliente;
        this.RFC = RFC;
        this.Nombre = Nombre;
        this.apellidoPatern = apellidoPatern;
        this.apellidoMatern = apellidoMatern;
        this.celular = celular;
        this.correo = correo;
        this.empresa = empresa;
    }
   
    public int getCodeCliente() {
        return codeCliente;
    }

    public String getRFC() {
        return RFC;
    }

    public String getNombre() {
        return Nombre;
    }

    public String getApellidoPatern() {
        return apellidoPatern;
    }

    public String getApellidoMatern() {
        return apellidoMatern;
    }

    public String getCelular() {
        return celular;
    }

    public String getCorreo() {
        return correo;
    }

    public void setCodeCliente(int codeCliente) {
        this.codeCliente = codeCliente;
    }

    public void setRFC(String RFC) {
        this.RFC = RFC;
    }

    public void setNombre(String Nombre) {
        this.Nombre = Nombre;
    }

    public void setApellidoPatern(String apellidoPatern) {
        this.apellidoPatern = apellidoPatern;
    }

    public void setApellidoMatern(String apellidoMatern) {
        this.apellidoMatern = apellidoMatern;
    }

    public void setCelular(String celular) {
        this.celular = celular;
    }

    public void setCorreo(String correo) {
        this.correo = correo;
    }

    public int getEmpresa() {
        return empresa;
    }

    public void setEmpresa(int empresa) {
        this.empresa = empresa;
    }

    public Company getCompany() {
        return company;
    }

    public void setCompany(Company company) {
        this.company = company;
    }
        
}
