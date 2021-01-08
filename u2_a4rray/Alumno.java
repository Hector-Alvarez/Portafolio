package u2_a4rray;

import java.util.Scanner;

class Alumno {
    private String code;
    private String name;
    private String paterno;
    private String materno;
    private String carrera;
    private int cant;
    private float promedio;
    private float mayor;
    private float menor;
    private float total;
    private float [] calificacion = new float [cant];
    private String [] materiaName = new String [cant];

    public Alumno(String code, String name, String paterno, String materno, String carrera, int cant, float promedio) {
        this.code = code;
        this.name = name;
        this.paterno = paterno;
        this.materno = materno;
        this.carrera = carrera;
        this.cant = cant;
        this.promedio = promedio;
    }
                   
    Scanner in = new Scanner (System.in);
                       
  public void ingresarDatos(){
      System.out.print("Ingrese el codigo del alumno: ");  
        code = in.next();
      System.out.print("Ingrese el nombre del alumno: ");
      name = in.next();
      System.out.print("Ingrese el apellido paterno del alumno: ");
        paterno = in.next();
      System.out.print("Ingrese el apellido materno del alumno: "); 
        materno = in.next();
      System.out.print("Ingrese la carrera: ");
        carrera = in.next();      
  }  
  
  public void ingresarMaterias(){
      System.out.println("Cuantas materias curso el alumno: ");
        cant = in.nextInt();        
        calificacion = new float [cant];
        materiaName = new String [cant];
     for (int i=0; i<cant; i++){
            System.out.print("Ingrese el nombre de la materia "+(i+1)+": ");
               materiaName [i]= in.next();
            System.out.print("Ingrese la calificacion de la materia " +materiaName [i]+": ");
               calificacion [i]= in.nextFloat();
        }   
}
  
  public void calcularPromedio(){
      mayor=menor=calificacion [0];
      for(int i=0;i<calificacion.length;i++){
          if (calificacion [i]>mayor){
              mayor= calificacion [i];                            
         }if (calificacion [i]<menor){
             menor = calificacion [i];
         }total = total + calificacion [i];             
      } 
      promedio = total/cant;
       
  }
  
  public void imprimirReporte(){
      System.out.println("----------Reporte de promedio de alumno----------\n\n"
              + "Codigo de alumno: "+code+"\nNombre del alumno: "+name+"\nApellido paterno: "
              +paterno+"\nApellido materno: "+materno+"\nCarrera: "+carrera+"\n\n/////Materias Cursadas/////\n");
              for (int i=0;i<cant;i++){
                  System.out.println("Materia: "+materiaName[i]+"---Calificacion: "+calificacion[i]); 
              }System.out.println("\n\nla calificacion mas alta es: "+mayor+
              "\nla calificacion mas baja es: "+menor+"\n\nEl promedio es: "+promedio); 
              
            
  
  }
}

