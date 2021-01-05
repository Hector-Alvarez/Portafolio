#include <stdio.h>
#include <stdlib.h>

/*Instrucciones:
Crear un programa para calcular las áreas y perímetros de algunas figuras geométricas.
Se programará un menú principal que contenga las siguientes opciones:

1. Áreas
2. Perímetros
3. Salir

3. En la primera opción tendrá un submenú con las opciones: 1. Cuadrilátero 2. Trapecio 3. Esfera 4. salir
4. En la segunda opción tendrá un submenú con las opciones: 1. Rectángulo 2. Triangulo 3. Circulo 4. Salir
5. Realizar el cálculo para cada área y perímetro en una función, cada función preguntará al usuario los datos 
de entrada necesarios para calcular las áreas o perímetros correspondientes.
6. Todas las opciones de salir deberán preguntar primero si realmente desea salir del programa o no, 
mientras el usuario diga que no regresar al menú.*/

int option,menu;
float a,b,c,res;
char out;

void cuadrilatero(){
	printf ("ingrese la base:");
	scanf ("%f", &b);
	printf ("ingrese la altura:");
	scanf ("%f", &a);
	res = (a * b);
	printf ("El area del cuadrilatero es %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void trapecio(){
	printf ("ingrese la base mayor:");
	scanf ("%f", &b);
	printf ("ingrese la base menor:");
	scanf ("%f", &c);
	printf ("ingrese la altura:");
	scanf ("%f", &a);
	res = ((b+c)/2 * a);
	printf ("El area del trapecio es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void esfera(){
	printf ("Ingrese el radio de la esfera:");
	scanf ("%f", &a);
	res = (4 * 3.1416 * (a * 2));
	printf ("El area de la esfera es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void rectangulo(){
	printf ("Ingrese la base:");
	scanf ("%f", &b);
	printf ("Ingrese la altura:");
	scanf ("%f", &a);
	res = (2 * (a+b));
	printf ("El perimetro del rectangulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void triangulo (){
	printf ("Ingrese lado 1:");
	scanf ("%f", &a);
	printf ("Ingrese lado 2:");
	scanf ("%f", &b);
	printf ("Ingrese lado 3:");
	scanf ("%f", &c);
	res = (a+b+c);
	printf ("El perimetro del triangulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");	
}
void circulo (){
	printf ("Ingrese el radio del circulo:");
	scanf ("%f", &c);
	res = (2 * 3.1416 * c);
	printf ("El perimetro del circulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void salir (){	
	fflush (stdin);
			system ("cls");
			printf ("Esta seguro que desea Salir (s/n):");
				scanf ("%c", &out);
				switch (out){
					case 's':
						break;
					case 'n':
						system ("cls");
						main();
						break;
					default:
						printf ("Opcion Incorrecta!!!\n");
						system ("pause");
						system ("cls");
						main ();
						break;					
				}	
}
int main (){	
	printf ("Actividad 2: Modularidad\nProgramacion Estructurada\n\n");
	
do {printf ("Programa para calcular areas y perimetros\n\nMenu Principal\n\n1.Areas\n2.Perimetros\n3.Salir\n\nDigite su opcion:");
	scanf ("%i", &option);
	
	switch (option){
		case 1:
			system ("cls");
			printf ("\nMenu Areas\n\n1.Cuadrilatero\n2.Trapecio\n3.Esfera.\n4.salir\n\nDigite que area desea calcular:");
			fflush (stdin);
			scanf ("%i", &menu);
				switch (menu){
					case 1:
						cuadrilatero ();
						break;
					case 2:
						trapecio ();
						break;
					case 3:
						esfera ();
						break;
					case 4:
						salir ();
						break;	
					default:
						printf("\nOpcion Incorrecta!!!\n");
						system ("pause");
						system ("cls");
						break;			
				}
			
			break;
		case 2:
			system ("cls");
			printf ("\nMenu Perimetros\n\n1.Rectangulo\n2.Triangulo\n3.Circulo\n4.Salir\n\nDigite que perimetro desea calcular:");
			fflush (stdin);
			scanf ("%i", &menu);
				switch (menu){
					case 1:
						rectangulo ();
						break;
					case 2:
						triangulo ();
						break;
					case 3:
						circulo ();
						break;
					case 4:
						salir ();
						break;	
					default:
						printf("\nOpcion Incorrecta!!!");
						system ("pause");
						system ("cls");
						break;	
				}
				break;
		case 3:
			salir ();
			break;
		default:
			printf("\nOpcion Incorrecta!!!");
			system ("pause");
			break;
		
	}
	
}
	while (option !=3);

	printf ("\nFin del programa\n");		
	system ("pause");

	
	
	return 0;
}
