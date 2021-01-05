/*Crea un arreglo de tipo entero, pregunta al usuario cuántos valores enteros  va a capturar, esa cantidad será la longitud del arreglo.  
Tener un menú con las siguientes opciones:

1. Capturar valores
2. Ordenar valores
3. imprimir valores originales
4. imprimir valores ordenados
5. Salir

Cuando se oprima la opción de salir deberá preguntar al usuario si desea salir o no antes de salir del programa, 
mientras el usuario no desee salir regresar al menú.*/

#include <stdio.h>
#include <stdlib.h>

main() {	

	int n, option,i,j,temp;
	int a [n];
	int b [n];
	char res;
	printf ("\nPrograma para ordenar numeros enteros \nProgramacion Estructurada\nUnidad 3 \nactividad 1 \n ");


do {printf ("\n 1.Capturar numeros \n 2.Ordenar numeros \n 3.Imprimir numeros originales \n 4.Imprimir numeros ordenados \n 5.Salir\n\n");

printf ("Digite una opcion del 1 al 5:");
scanf ("%i", &option);

switch (option){
	
	case 1: 
				
		printf ("Digite cuantos numeros que desea capturar?: ");
		scanf (" %i", &n);
		
			for (i=0;i<n;i++){
	
			printf ("Capture el numero: ");
				scanf ("%i", &a[i]);
				
				}	
	break;
	
	case 2:
	
	printf ("\nNumeros Ordenados!!!\n");
		
		for (i=0;i<n;i++){
			b[i]=a[i];	
		}
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (b[j]>b[j+1]){			
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			
			}
			
		}
		
			
	break;	
		
	case 3:
		
		for (i=0;i<n;i++){
			printf ("Los numeros sin ordenar son: %i \n", a[i]);
		}
	
	break;
		
	case 4:
		for (i=0;i<n;i++){
		
		printf ("Los numeros ordenados son: %i \n", b[i]);
	}
	
	break;
		
	case 5:
		fflush (stdin);
		printf ("Esta seguro de desea salir? S/N: ");
			scanf ("%c", &res);
				switch (res){
								
					case 's':
						break;
					case 'n':
						system("cls");
						main();
						break;
					default:
						printf ("\nOPCION INCORRECTA!!!\n");
						system("pause");
						system("cls");
						main();
						break;
					}
		
	
	break;
		
	default:
		
		printf ("OPCION INCORRECTA!!!\n\n");
		system ("pause");
		system("cls");
		main();
		
		break;
		
}
}while (option !=5);


return 0;

}
