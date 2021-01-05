/*Crear un programa para calcular las áreas y perímetros de algunas figuras geométricas

""Los datos para el cálculo de las área y los perímetros (datos de entrada) se pedirán al usuario antes de entrar al menú principal""

Se programará un menú principal que contenga las siguientes opciones:

1. Áreas
2. Perímetros
3. Salir

 En la primera opción tendrá un submenú con las opciones: 1. Cuadrilátero 2. Trapecio 3. Esfera 4. salir
 En la segunda opción tendrá un submenú con las opciones: 1. Rectángulo 2. Triangulo 3. Circulo 4. Salir
 Realizar el cálculo de cada área y perímetro en una función ""con paso de parámetros""
 Todas las opciones de salir deberán preguntar primero si realmente desea salir del programa o no. 
 Mientras el usuario no eliga salir del programa regresar al menú.*/
 
 #include <stdio.h>
 #include <stdlib.h>

 void cuadrilatero(float *a1,float *b1){
	float res;
	res = (*a1 * *b1);
	printf ("El area del cuadrilatero es %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void trapecio(float *a2,float *b2, float *c2){
	float res;
	res = ((*b2 + *c2)/2 * *a2);
	printf ("El area del trapecio es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void esfera(float *r3){
	float res;
	res = (4 * 3.1416 * (*r3 * 2));
	printf ("El area de la esfera es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void rectangulo(float *a4,float *b4){
	float res;
	res = (2 * (*a4+*b4));
	printf ("El perimetro del rectangulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void triangulo (float *a5,float *b5,float *c5){
	float res;
	res = (*a5 + *b5+ *c5);
	printf ("El perimetro del triangulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");	
}
void circulo (float *r6){
	float res;
	res = (2 * 3.1416 * *r6);
	printf ("El perimetro del circulo es: %2.f\n\n", res);
	system ("pause");
	system ("cls");
}
void salir (){
char out;	
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

float a1,b1,a2,b2,c2,r3,a4,b4,a5,b5,c5,r6,res;
int option,menu;
char out;

printf ("Actividad 3: Parametros.\nProgramacion Estructurada.\nLicenciatura en Tecnologias e Informacion.\n\nEstudiante: Hector Moctezuma Alvarez Moreno.\nAsesor: Francisco Javier Camacho Aceves.\nAbril de 2019.\n\nAntes de comenzar, por favor presione Enter para ingresar los datos de la actividad:\n");getch ();system ("cls");
 	
 	do {
	printf ("Area Cuadrilatero:\n\ningrese la base: ");scanf ("%f",&b1);printf ("ingrese la altura: ");scanf ("%f",&a1);system ("cls");
 	printf ("Area trapecio:\n\ningrese la base mayor: ");scanf ("%f",&b2);printf ("ingrese la base menor: ");scanf ("%f",&c2);printf ("intrese la altura: ");scanf ("%f",&a2);system ("cls");
	printf ("Area esfera:\n\ningrese el radio: ");scanf ("%f", &r3);system ("cls");
	printf ("Perimetro rectangulo:\n\ningrese la base: ");scanf ("%f", &b4);printf("ingrese la altura: ");scanf("%f",&a4);system ("cls");
	printf ("Perimetro triangulo:\n\ningrese lado 1: ");scanf("%f",&a5);printf ("ingrese lado 2: ");scanf("%f",&b5);printf("ingrese lado 3: ");scanf ("%f",&c5);system ("cls");
	printf ("Perimetro circulo:\n\ningrese el radio del circulo: ");scanf ("%f",&r6);system("cls");
	printf ("Si los datos son correctos presione '1'\nsi quiere volver a ingresar los datos presione '2': ");fflush(stdin);scanf("%i", &option);system("cls");
	
}while (option ==2);

	
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
						cuadrilatero (&b1,&a1);
						break;
					case 2:
						trapecio (&a2,&b2,&c2);
						break;
					case 3:
						esfera (&r3);
						break;
					case 4:
						salir ();
						break;
						system ("cls");	
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
						rectangulo (&a4,&b5);
						break;
					case 2:
						triangulo (&a5,&b5,&c5);
						break;
					case 3:
						circulo (&r6);
						break;
					case 4:
						salir ();
						break;
						system ("cls");	
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
			system ("cls");
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
 

