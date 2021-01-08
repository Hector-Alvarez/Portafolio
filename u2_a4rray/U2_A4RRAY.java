package u2_a4rray;

import java.util.Scanner;

public class U2_A4RRAY {

    public static void main(String[] args) {
        
        int option;
        
        Scanner in = new Scanner (System.in);
        
        Alumno alumno = new Alumno(null,null,null,null,null, 0, 0);        
        do{
        System.out.println("-------------------Programa para imprimir promedio de alumno"
                + "-------------------\n\nIngrese la opcion deseada: \n\n"
                + "1.Ingresar datos del alumno\n"
                + "2.Ingresar promedio de materias\n"
                + "3.Imprimir reporte completo\n"
                + "4.Salir");
        
        option = in.nextInt();
                        
        switch (option){
            case 1:
                alumno.ingresarDatos();                
                break;
            
            case 2:
                alumno.ingresarMaterias();
                alumno.calcularPromedio();
                break;
                
            case 3:
                alumno.imprimirReporte();
                break;
                
            case 4:
                System.out.println("Programa terminado");
                break;
                
            default:
                System.out.println("Opcion incorrecta!!!");
                 
            }        
        }while (option != 4);
    }
       
    }
    

