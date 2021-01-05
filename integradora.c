#include <stdio.h>
#include <stdlib.h>
#define tam 50
/*Imprime en pantalla un menú con las siguientes opciones:

Capturar datos de la empresa
Imprimir datos de la empresa
Capturar las edades de los empleados
Salir
2. Para la opción 1 deberás definir  qué datos se van a pedir para la empresa y pedirlos al usuario.

3. Para la opción 2 deberás imprimir en pantalla los datos de la empresa capturados en la primera opción.

4. Para la opción 3 deberás leer las edades de los empleados de la empresa, mientras la edad leída sea distinta de cero calcular lo siguiente: 
cuántos empleados son jóvenes menores de 22 años, cuantos son maduros entre 22 y 50 años y cuantos son mayores  con más de 50 años. 
Mostrando el resultado en pantalla. En aquellos casos en los que se lea una edad no correcta (negativa o fuera del intervalo de 18 a 65 años) 
se escribirá un mensaje de error en pantalla y se leerá otra edad.

5. Para la opción 4 deberá preguntar si realmente desea salir del programa o no, antes de salir.*/

	int emp, age, i, option, cont1 =0, cont2=0, cont3=0;
	char out;
	char direccion[tam];
	char telefono[tam];
	char nombre[tam]; 
	char correo[tam];
	
	
int main (){
	
	printf ("ACTIVIDAD INTEGRADORA:\nImplementacion de las diferentes estructuras \nde control al lenguaje de C. \nUnidad 2. \nProgramacion Estructurada.\n");
	
	do  {		
	
	printf ("\n1.Capturar los datos de la Empresa \n");
	printf ("2.Imprimir los datos de la Empresa \n");
	printf ("3.Capturar edades de los Empleados \n");
	printf ("4.Salir \n\n"),
	
	printf ("Digite su opcion: ");
	scanf ("%i", &option);
	
	switch (option){
		
		case 1: 
		fflush(stdin);		
			printf ("Ingrese el nombre de la Empresa: ");
			gets (nombre);
			printf ("Ingrese el domicilio de la Empresa: ");
			gets (direccion);
			printf ("Ingrese el telefono de la Empresa: ");
			gets (telefono);
			printf ("Ingrese el correo de la Empresa:");
			gets (correo);
			break;
		
		case 2:
			printf ("\nLos datos de la empresa son: \n");
			printf ("NOMBRE: %s \n", nombre);
			printf ("DIRECCION: %s \n", direccion);
			printf ("TELEFONO: %s \n", telefono);
			printf ("COREO: %s \n\n", correo);
			break;
			
		case 3:
			printf("Digite el numero de empleados que desea capturar sus edades: ");
			scanf ("%i", &emp);
			for(i=1;i<=emp;i++){
								
				printf ("capture la edad del empleado: ");
				scanf ("%i", &age);
			
			
				if (age <=21 && age >=1){
						cont1++;
				  }
				if (age >=22 && age <=50){
						cont2++; 
					}	
				if (age >=51 && age <=65){
						cont3++;
					}
				if (age<=0 || age >= 66){
					printf ("ERROR EN RANGO DE EDAD \n");
					i--;
					}	
			}	
				printf ("\n%i empleados son jovenes menores de 22  \n",cont1 );
				printf ("%i empleados son maduros de 22 a 50\n",cont2 );					
				printf ("%i empleados son mayores de 50 \n",cont3 );
				
				cont1=0;
				cont2=0;
				cont3=0;				
				
				break; 
				
		case 4:
			break;
			
		default:
			printf ("Seleccione una opcion del 1 al 4!!! \n\n");
				break;		
	}	
	
} while (option != 4);
		fflush(stdin);
		printf ("esta seguro que desea salir? (s/n):");
			scanf ("%c", &out);
			
			switch (out){
		
			case 's':			
				printf ("\n Gracias por utilizar nuestro programa \n\n");
				break;
			
			case 'n':
				printf ("\n");
				main();
				break;
				
			default:
				printf ("Opcion incorrecta!!! \n\n");
				main();
					break;
			
			}	
	
	system ("pause");
	return 0;
}
