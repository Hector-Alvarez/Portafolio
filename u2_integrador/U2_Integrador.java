package u2_integrador;

import java.util.Scanner;

public class U2_Integrador {

    public static void main(String[] args) {        
      Scanner in = new Scanner (System.in);
      
      Empleado employe = new Empleado(null,null,null,0,null);
      
        int i = 0,e=0,j=0,m=0,v=0,cant,option = 0;
        String nombre=null;
        String direccion=null;
        String telefono=null;
        int edad=0;
        String genero=null;
        boolean res = false;
                
        System.out.print("**************************************Menu Principal**************************************\n"
                + "\nIngrese el numero de empleados que desea capturar(no mas de 10): ");
               cant = in.nextInt();
               Empleado employeList [] = new Empleado[cant];
                    if (cant > 10 || cant < 0){
                        System.out.println("Error en la cantidad de empleado");
                    }
        else{
               do{
               System.out.print("\n1.-Capturar datos de los empleados\n"
                + "2.-Imprimir datos de los empleados\n"
                + "3.-Capturar edades de loe empleados\n"
                + "4.-Salir"
                + "\n\nIngrese su opcion: ");
        
        option = in.nextInt();
        switch (option){
            case 1:
                   in.nextLine();
                for (i=0;i<employeList.length;i++){
                System.out.println("\nIngrese los datos del empleado "+(i+1)+":\n");
                System.out.print("Ingrese nombre completo: ");
                nombre=in.nextLine();
                System.out.print("Ingrese la direccion: ");
                direccion=in.nextLine();
                System.out.print("Ingrese numero telefonico: ");
                telefono=in.nextLine();
                System.out.print("Ingrese genero (Masculino/Femenino): ");
                genero=in.nextLine();   
                
                employeList [i]=new Empleado(nombre,direccion,telefono,0,genero);
                }
                break;
            case 2:
                System.out.println("\nLista de empleados: \n");
                for (i=0;i<employeList.length;i++){
                    System.out.println("\nEmpleado "+(i+1)+":\n");
                System.out.print(employeList[i].mostrarDatos());
                }
                break;
            case 3:          
                for (i=0;i<employeList.length;i++){
                    do{
                        System.out.print("Capture la edad del empleado "+(i+1)+": ");
                        e=in.nextInt();
                        if(e<18||e>=66){
                            System.out.print("Error en la edad, ingrese nuevamente la edad del empleado\n");
                        }
                    }while(e<18||e>=66);                        
                    if(e>=18&&e<22){
                        j++;
                    }else
                        if(e>=22&&e<=50){
                        m++;
                        }else
                            if (e>50&&e<=65){
                            v++;
                            }
                }
                System.out.println("\nLista de empleados: \n\n");
                    System.out.println("Empleados jovenes: "+j+"\n"
                            + "Empleados maduros: "+m+"\n"
                                    + "Empleados mayores: "+v+"\n");
                               
                break;
            case 4:
                System.out.print("Seguro que desea salir?\nDigite 1 para SI\nDigite 2 para NO\nDigite su opcion: ");
                i=in.nextInt();
                if(i==1){    
                res=true;
                }
                break;       
        }    
    }while(res == false);
    }               
 }
    
}
