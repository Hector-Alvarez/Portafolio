/*Proyecto Integradorbk
 
 *Carrera: Licenciatura en Tecnologías e Información.

 *Materia: Programación orientada a objetos.

 *Asesor: Carlos Alejandro Mendoza Alvarez.

 * @author 
 * Héctor Moctezuma Álvarez Moreno.
 * Janette Ramos Guerrero.
 * Denniss Gabriel Flores Martínez.
 * Josué Getsemaní Sandoval Villareal.
 */

package integrador;                                                                     
import java.util.ArrayList;
import javax.swing.JOptionPane;
import java.util.Scanner;

public class Integrador {
    static ArrayList <Company> companies = new ArrayList<>();
    static ArrayList <Cliente> clientes = new ArrayList <>();
    static ArrayList <Producto> productos = new ArrayList<>();
    static ArrayList <TicketRMA> tickets = new ArrayList<>();
                   
    public static void main(String[] args){
     IngresarClientes(clientes); 
     IngresarEmpresas(companies);
     IngresarProductos(productos);
     IngresarTickets(tickets);
     Menu(); 
     
       //relacion entre objetos
clientes.get(0).setEmpresa(4);
clientes.get(1).setEmpresa(3);
clientes.get(2).setEmpresa(2);
clientes.get(3).setEmpresa(1);
clientes.get(4).setEmpresa(0);

tickets.get(0).setProducto(4);
tickets.get(1).setProducto(3);
tickets.get(2).setProducto(2);
tickets.get(3).setProducto(1);
tickets.get(4).setProducto(0);
       
    }    
    public static void Menu(){
        int option = 0, valor;
        int i = 0;
        boolean out=false;                       
        Scanner sn = new Scanner (System.in);
        while(!out){
            option=Integer.parseInt(JOptionPane.showInputDialog(null,"*****Sistema de control RMA*****"
                + "\n\nMenu Principal\n"
                + "\n1.Alta Contacto Cliente"
                + "\n2.Consulta Clientes"
                + "\n3.Imprimir Listado de Clientes"
                + "\n4.Alta tickets"
                + "\n5.Consultar Ticket"
                + "\n6.Imprimir Listado de Ticket"
                + "\n7.Salir"
                + "\n\nSeleccione una opcion del menu:"));
            switch (option){
                case 1:   
                    AltaCliente();
                    break;
                case 2:
                    buscarCliente();
                    break;
                case 3:
                System.out.println(".....:::::Clientes:::::.....");
            for (i=0;i<clientes.size();i++) {
                System.out.println("");                
                System.out.println("Codigo cliente: "+clientes.get(i).getCodeCliente());
                System.out.println("RFC: "+clientes.get(i).getRFC());
                System.out.println("Nombre:"+clientes.get(i).getNombre());
                System.out.println("Apellido Paterno: "+clientes.get(i).getApellidoPatern());
                System.out.println("Apellido Materno: "+clientes.get(i).getApellidoMatern());
                System.out.println("Numero Celular: "+clientes.get(i).getCelular());
                System.out.println("Correo electronico: "+clientes.get(i).getCorreo());
                
            }
                    break;
                case 4:
                    AltaTicket();      
                    break;
                case 5:
                    buscarTicket();
                    break;
                case 6:
                System.out.println(".....:::::TicketsRMA:::::.....");
            for (i=0;i<tickets.size();i++) {
                System.out.println("");                
                System.out.println("Folio Ticket: "+tickets.get(i).getFolio());
                System.out.println("Descripcion: "+tickets.get(i).getDescripcion());
                System.out.println("Fecha de compra:"+tickets.get(i).getFechaInicio());
                System.out.println("Fecha de recepcion: "+tickets.get(i).getFechaRecepcion());
                System.out.println("Fecha de entrega "+tickets.get(i).getFechaEntrega());
                System.out.println("Documento adjunto: "+tickets.get(i).getTypeDocAdjuntado());
                System.out.println("Producto: "+tickets.get(i).getProducto());
                System.out.println("Costo: "+tickets.get(i).getCosto());
            }
                    break;
                case 7:                                          
                 valor=JOptionPane.showConfirmDialog(null, "Realmente desea salir?", "Confirmar salida", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
                        if(valor<1){
                            JOptionPane.showMessageDialog(null, "Gracias por su visita.");
                            JOptionPane.showMessageDialog(null, ".....:::::PROGRAMA TERMINADO:::::....."
                                    + "\n\n*****Programacion Orientada a Objetos*****"
                                    + "\n\nProfesor: Carlos Alejandro Mendoza Alvarez"
                                    + "\n\nLicenciatura en Tecnologias e Informacion"
                                    + "\n\n¨Programa Realizado por:"
                                    + "\n\nHéctor Moctezuma Álvarez Moreno.\n"
                                         +"Janette Ramos Guerrero.\n" 
                                         +"Denniss Gabriel Flores Martínez.\n" 
                                         +"Josué Getsemaní Sandoval Villareal."
                                    + "\n\nUDG Virtual"
                                    + "\nMayo de 2020");
                            out= true;
                        }                                  
                        break;
                 default:
                    JOptionPane.showMessageDialog(null, "Eliga una opcion valida\n","Error en la opcion",JOptionPane.WARNING_MESSAGE);
                 break;
        }   
    }
 }
public static void IngresarClientes(ArrayList<Cliente> clientes){

    Cliente c1=new Cliente(6547,"AAMH810711RT9","HECTOR","ALVAREZ","MORENO","3318880811","hector4d@gmail.com",4);
    Cliente c2=new Cliente(8724,"XXXX959813TT9","DENNISS GABRIEL","FLORES","MARTINEZ","3311223344","denniss_lti@gmail.com",3);        
    Cliente c3=new Cliente(5578,"RAGJ8612161H0","JANETTE MARGARITA","RAMOS","GUERRERO","3316113350","janetteramos.online@gmail.com",2); 
    Cliente c4=new Cliente(3874,"PEDI500214AI9","PEDRO","PICA","PIEDRA","3378345576","pedro.picapiedra@gmail.com",1);
    Cliente c5=new Cliente(3781,"VADA950314FTI","ARTURO","VALDEZ","FERNANDEZ","3338257634","arturovald@gmail.com",0);
    
    clientes.add(c1);
    clientes.add(c2);
    clientes.add(c3);
    clientes.add(c4);
    clientes.add(c5);
      
	}
public static void AltaCliente(){
   Cliente c = new Cliente(0,null,null,null,null,null,null);
   
   c.setCodeCliente(Integer.parseInt(JOptionPane.showInputDialog("Ingresa el codigo de cliente")));
   c.setRFC(JOptionPane.showInputDialog("Ingresa el RFC del cliente"));
   c.setNombre(JOptionPane.showInputDialog("Escribe el nombre del cliente"));
   c.setApellidoPatern(JOptionPane.showInputDialog("Escribe el apellido paterno del cliente"));
   c.setApellidoMatern(JOptionPane.showInputDialog("Escribe el apellido materno del cliente"));
   c.setCelular(JOptionPane.showInputDialog("Ingresa el numero de celular"));
   c.setCorreo(JOptionPane.showInputDialog("Escribe el correo:"));
        
   clientes.add(c);
   }    
    public static void IngresarEmpresas(ArrayList <Company> companies){
    Company e1=new Company("ITESM","AV. RAMON CORONA","3336693000","ITE700412XXX");
    Company e2=new Company("ESPACIO 80","AV. ARCOS","3312019672","EPO120713FV1");
    Company e3=new Company("FLEXTRONICS","AV.AVIACION","12312334555","FLEX801212TY8");
    Company e4=new Company("INTEL","AV.PERIFERICO","3386747932","INTE700305OD7");
    Company e5=new Company("IMSS","AV.AVILA CAMACHO","3338254720","IMSS701022JG4");
    
    companies.add(e1);
    companies.add(e2);
    companies.add(e3);
    companies.add(e4);
    companies.add(e5);
    }
    
    public static void buscarCliente(){
    int i = 0,search;
    boolean find = false;
    
    search = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el codigo de cliente a encontrar"));
    int j = 0;
    while((!find)&&i<clientes.size()){
        if (search == clientes.get(i).getCodeCliente() && i < clientes.size()){
            find = true;
            Cliente found = clientes.get(i);       
            JOptionPane.showMessageDialog(null, "Cliente Encontrado\nRFC: "
            +found.getRFC()+"\nNombre: "+found.getNombre()+"\nApellido paterno: "+found.getApellidoPatern()+"\nApellido materno"
            +found.getApellidoMatern()+"\nNumero celular: "+found.getCelular()+"\nCorreo electronico: "+found.getCorreo()
            +"\n\nEmpresa: "+found.getEmpresa()+"\nNombre: "+companies.get(clientes.get(i).getEmpresa()).getNombre()
            +"\nDireccion: "+companies.get(clientes.get(i).getEmpresa()).getDireccion()+"\nTelefono: "+companies.get(clientes.get(i).getEmpresa()).getTelefono()
            +"\nRFC: "+companies.get(clientes.get(i).getEmpresa()).getCompanyRFC());              
        }        
           i++;   
    }
    if (find == false){
        JOptionPane.showMessageDialog(null, "Cliente no encontrado");
        }    
    }
    
    public static void IngresarProductos(ArrayList <Producto> Producto){
    Producto p1=new Producto(1,"EQUIPO DE RESONANCIA MAGNETICA","LFMDTBI20012430M","12/09/2018",true,false,false,true,5);
    Producto p2=new Producto(2,"RESPIRADOR ARTIFICIAL","LFMDTBI20001643M","10/10/2019",true,true,false,true,3);
    Producto p3=new Producto(3,"RESPIRADOR PARA CANCER","LFMDTBI20001449M","16/12/2019",true,true,false,true,8);
    Producto p4=new Producto(4,"MEDIDOR DE GLUCOSA","QSYS1970106FT","03/06/2019",true,false,true,true,2);
    Producto p5=new Producto(5,"BOMBA DE INSULINA","LFARIASY0172614FA","20/01/2020",true,true,true,true,10);
   
    productos.add(p1);
    productos.add(p2);
    productos.add(p3);
    productos.add(p4);
    productos.add(p5);    
    }
    
    public static void IngresarTickets(ArrayList <TicketRMA> tickets){
    TicketRMA t1=new TicketRMA(3462,"cambio de parte","01/03/2019","05/12/2019","06/03/2020","Factura",2,4798);
    TicketRMA t2=new TicketRMA(4652,"no enciende","04/12/2019","04/12/2020","06/03/2020","remision",4,9632);
    TicketRMA t3=new TicketRMA(1974,"cambio fuente","07/11/2019","05/02/2020","07/01/2020","Remision",5,2843);
    TicketRMA t4=new TicketRMA(3951,"reparacion panel","10/10/2019","05/01/2020","07/05/2020","Factura",1,2950);
    TicketRMA t5=new TicketRMA(3271,"cambio relevador","01/03/2020","03/05/2020","06/04/2020","Factura",3,6787);
    
    tickets.add(t1);
    tickets.add(t2);
    tickets.add(t3);
    tickets.add(t4);
    tickets.add(t5);
    }
    
    public static void AltaTicket(){
    TicketRMA t = new TicketRMA(0,null,null,null,null,null,0,0);
    
    t.setFolio(Integer.parseInt(JOptionPane.showInputDialog("Ingrese el folio del Ticket")));
    t.setDescripcion(JOptionPane.showInputDialog("Ingrese la descripcion"));
    t.setFechaInicio(JOptionPane.showInputDialog("Ingrese la fecha de compra in dd/MM/YYYY"));
    t.setFechaRecepcion(JOptionPane.showInputDialog("Ingrese la fecha de recepcion in dd/MM/YYYY"));
    t.setFechaEntrega(JOptionPane.showInputDialog("Ingrese la fecha de entrega in dd/MM/YYYY"));
    t.setTypeDocAdjuntado(JOptionPane.showInputDialog("Ingrese Tipo de documento"));
    t.setProducto(Integer.parseInt(JOptionPane.showInputDialog("Ingrese el producto"
           +"\n1. Equipo de resonancia magnetica."
           +"\n2. Respirador artificial."
           +"\n3. Respirador para cancer."
           +"\n4. Medidor de glucosa."
           +"\n5. Bomba de insulina.")));
    t.setCosto(Float.parseFloat(JOptionPane.showInputDialog("Ingrese el costo")));
    
    tickets.add(t);
    }
    
    public static void buscarTicket(){
   int i = 0,search;
    boolean find = false;
    
    search = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el folio del Ticket a encontrar"));
    
    while((!find)&&i<tickets.size()){
        if (search ==tickets.get(i).getFolio() && i < tickets.size()){
            find = true;
            String nom_prod="";
            if(tickets.get(i).getProducto()==1){  
                nom_prod="Equipo de renonancia magnetica.";
                        }
                 if(tickets.get(i).getProducto()==2){
                nom_prod="Respirador artificial.";
                        }
                 if(tickets.get(i).getProducto()==3){
                nom_prod="Respirador para cancer.";
                        }
                 if(tickets.get(i).getProducto()==4){
                nom_prod="Medidor de glucosa.";
                        }
                if(tickets.get(i).getProducto()==5){
                System.out.println("Bomba de insulina.");
                        }
            TicketRMA found = tickets.get(i);       
            JOptionPane.showMessageDialog(null, "Ticket Encontrado\nDescripcion: "
            +found.getDescripcion()+"\nFecha de compra: "+found.getFechaInicio()+"\nFecha en la que se recibe: "+found.getFechaEntrega()+"\nTipo de documento adjuntado "
            +found.getTypeDocAdjuntado()+"\n\nProducto: "+nom_prod+"\nCosto: "+found.getCosto()+"\nProducto: "+found.getProducto()+"\nNumero de Serie: "
            +productos.get(tickets.get(i).getProducto()).getNumSerieEquipo());           
        }        
           i++;   
    }
    if (find == false){
        JOptionPane.showMessageDialog(null, "Ticket no encontrado");
        }    
} 
    
  
    
    
}

