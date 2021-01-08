package u2_polimorfismo;

import java.util.Scanner;

public class U2_Polimorfismo {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        
        int option = 0;
              
        Contribuyente fisica = new PersonaFisica(0,null,null,null,null);
        Contribuyente moral = new PersonaMoral(null, 0, 0, null, null, null, null);
        
        do{
            System.out.print("Programa para el calculo de impuestos para personas Fisicas y Morales"
                    + "\n\nMenu Principal\n\n1.-Persona Fisica.\n2.-Persona Moral\n3.-Salir\n\nSelecciones si la persona "
                    + "es fisica o moral o si desea salir: ");
                        option = in.nextInt();
                        switch (option){
                            case 1:
                                fisica.IngresarDatos();
                                System.out.println(fisica.MostrarDatos()+"\n\n");
                                fisica.calculoImpuesto();
                                break;                               
                            case 2:
                                moral.IngresarDatos();
                                System.out.println(moral.MostrarDatos());
                                moral.calculoImpuesto();
                                break;
                            case 3:
                                System.out.println("Programa terminado");
                                break;
                            default:
                                System.out.print("Opcion incorrecta, intente de nuevo\n ");
                        }        
        }while (option != 3);
        
    }
    
}
