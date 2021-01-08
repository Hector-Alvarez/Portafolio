package u2_polimorfismo;

public class PersonaFisica extends Contribuyente{

    float salario;
    float impuesto;
    float total;

    public PersonaFisica(float salario, String name, String address, String phone, String rfc) {
        super(name, address, phone, rfc);
    }

    public float getSalario() {
        return salario;
    }
        
    @Override
    public void IngresarDatos(){
        
        super.IngresarDatos();
        System.out.print("Ingrese el salario del contribuyente: ");
            salario = in.nextFloat();        
    }
    
   @Override
  public String MostrarDatos(){
       System.out.println("\n/////////DATOS DEL CONTRIBUYENTE/////////");
    return super.MostrarDatos() + "\nSalario: " + salario;    
    }
  
    @Override
  public void calculoImpuesto(){
     if (salario >= 50000){
         impuesto = (float) (salario * .30);
         total= salario - impuesto;
         System.out.println("///////PAGO DE IMPUESTO///////\n\nSalario anual: "+ salario
         +"\nImpuesto: "+ impuesto+"\nSalario menos impuestos: "+ total+"\n\n");
     } else{
         impuesto = (float) (salario * .16);
         total= salario - impuesto;
         System.out.println("///////PAGO DE IMPUESTO///////\n\nSalario anual: "+ salario
         +"\nImpuesto: "+ impuesto+"\nSalario menos impuestos: "+ total+"\n\n");
     }  
  }
}
