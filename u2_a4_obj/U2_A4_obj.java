
package u2_a4_obj;

import java.util.Scanner;

public class U2_A4_obj {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        Producto produ = new Producto(0,null,0,0);
               
        int code = 0,comp;
        String description;
        float price;
        int cant;
        int option;
        int inv;
        int i;
        float precio;
        int indice = 0;
   
        System.out.println("-----------------Programa inventario de productos-----------------\n\n"
                + "///////////Alta de productos///////////\n\n");
        
        System.out.print("Cuantos productos desea dar de alta?: ");
            inv = in.nextInt();
            
            //Creacion de arreglo de objetos
            Producto inventario [] = new Producto [inv];            
            
            for (i=0;i<inventario.length;i++){
                System.out.print("\n\nIngrese el codigo del producto "+(i+1)+": ");
                 code=in.nextInt();
                System.out.print("Ingrese la descripcion del producto "+(i+1)+": ");
                 description=in.next();
                System.out.print("Ingrese el precio del producto "+description+": ");
                 price=in.nextFloat();
                System.out.print("Ingrese la cantidad de "+description+" que desea agregar al inventario: ");
                 cant=in.nextInt();
                 
                 inventario [i]= new Producto(code, description, price, cant);
            }   
            
            
            do{
        System.out.print("\n\nMENU PRINCIPAL\n\n1.Consultar producto\n2.Producto mayor precio\n3.Producto menor precio\n4.Imprimir reporte\n5.Salir\n");
            option = in.nextInt();
            
            switch (option){
                case 1:
                    System.out.print("Ingrese el codigo del producto que desea consultar: ");
                        comp=in.nextInt();
                            for(i=0;i<inventario.length;i++){
                                if (inventario[i].getCode() == comp){
                                comp = inventario[i].getCode();
                                indice=i;
                            }
                            }
                        System.out.println("Producto es: \n"+inventario[indice].imprimirInventario());
                    break;
                case 2:                       
                     precio=inventario[0].getPrice();
                        for (i=1;i<inventario.length;i++){
                            if (inventario[i].getPrice() > precio){
                                precio = inventario[i].getPrice();
                                indice=i;
                            }
                            }
                        System.out.println("Producto com mayor precio es: \n"+inventario[indice].imprimirInventario());
                    break;
                case 3:
                    precio=inventario[0].getPrice();
                        for (i=1;i<inventario.length;i++){
                            if (inventario[i].getPrice() < precio){
                                precio = inventario[i].getPrice();
                                indice=i;
                            }
                            }
                        System.out.println("Producto com menor precio es: \n"+inventario[indice].imprimirInventario());
                    break;
                case 4:
                    System.out.println("--------------Invetario de productos--------------\n\n");
                    System.out.println("Productos\n\n");                    
                   for (i=0;i<inventario.length;i++){
                       System.out.println("Producto: "+(i+1));   
                    System.out.println(inventario[i].imprimirInventario());
                   }
                    break;
                case 5:
                    System.out.println("Programa Terminado");
                    break;                               
            }    
            }while(option != 5);
            
    }    
}
