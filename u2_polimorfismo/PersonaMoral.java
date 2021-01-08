package u2_polimorfismo;
public class PersonaMoral extends Contribuyente{
    
   private String SociedadMercantil;
   private float Ingresos;
   private float gastos;
   private float total;

    public PersonaMoral(String SociedadMercantil, float Ingresos, float gastos, String name, String address, String phone, String rfc) {
        super(name, address, phone, rfc);
        this.SociedadMercantil = SociedadMercantil;
        this.Ingresos = Ingresos;
        this.gastos = gastos;
    }

    public String getSociedadMercantil() {
        return SociedadMercantil;
    }

    public float getIngresos() {
        return Ingresos;
    }

    public float getGastos() {
        return gastos;
    }
    
   @Override
       public void IngresarDatos(){
           
           super.IngresarDatos();        
        System.out.print("Ingrese la sociedad mercantil: ");
            SociedadMercantil = in.nextLine();
        System.out.print("Ingrese la cantidad de ingreso anual: ");
            Ingresos = in.nextFloat();
        System.out.print("Ingrese la cantidad de gasto anual: ");
            gastos = in.nextFloat();
    }

   @Override
   public String MostrarDatos(){
       System.out.println("\n/////////DATOS DEL CONTRIBUYENTE/////////");
    return super.MostrarDatos() + rfc + "\nSociedad Mercantil: " + SociedadMercantil + "\nIngresos: " + Ingresos + "\nGastos: " + gastos;
  }
   
   @Override
   public void calculoImpuesto(){
     
       total = Ingresos - gastos;
       
       System.out.println("\n///////PAGO DE IMPUESTO///////\n");
            
       System.out.println("El total de ingreso anual es: "+Ingresos);
       System.out.println("El total del gasto anual es: "+gastos);
       System.out.println("Ingreso anual menos gasto es de: "+total);
        total = (float) (total - (total*.16));
       System.out.println("Ingreso anual menos impuesto es de: "+total+"\n\n");     
  }   
}
