#include <stdio.h>
#include <stdlib.h>

/*Multiple: Imprimir en pantalla un menú que tenga siguientes opciones: 1. Área de un triangulo, 2. Área de un rectángulo, 
3. Área de un circulo, 4. Área de un cubo, 5. Área de una esfera, 6. Salir.
Calcula las áreas de cada opción e imprime sus resultados en pantalla.*/

int main (){
	
	int option;
	int base;
	int altura;
	float area;
	int radio;
	int arista;
	
	printf ("Programa para calcular AREAS\n\n");
		
	printf ("1. Area de un triangulo\n");
	printf ("2. Area de un rectangulo\n");
	printf ("3. Area de un circulo\n");
	printf ("4. Area de un cubo\n");
	printf ("5. Area de una esfera\n");
	printf ("6. salir \n\n");
	
	printf ("Seleccione que area desea calcular: ");
	scanf ("%i", &option);
	
	switch (option){
		
		case 1: 
		printf ("Ingresa la base: ");
		scanf ("%i", &base);
		printf ("Ingresa la altura: ");
		scanf ("%i", &altura);
		
		area = base * altura / 2;
		
		printf ("\nEl area del triangulo es: %.2f \n\n", area );
		break;
		
		case 2: 
		
		printf ("Ingresa la base: ");
		scanf ("%i", &base);
		printf ("Ingresa la altura: ");
		scanf ("%i", &altura);
		
		area = base * altura;
		
		printf ("\nEl area del rectangulo es: %.2f \n\n", area );
		break;
		
		case 3: 
		
		printf ("Ingresa el radio del circulo: ");
		scanf ("%i", &radio);
			
		area = 3.1416 * radio * 2;
		
		printf ("\nEl area del circulo es: %.2f \n\n", area );
		break;
		
		case 4: 
		
		printf ("Ingresa el arista del cubo: ");
		scanf ("%i", &arista);
			
		area = 6 * arista * arista;
		
		printf ("\nEl area del cubo es: %.2f \n\n", area );
		break;
		
		case 5: 
		
		printf ("Ingresa el radio de la esfera: ");
		scanf ("%i", &radio);
			
		area = 4 * 3.1416 * radio * radio;
		
		printf ("\nEl area dela esfera es: %.2f \n\n", area );
		break;
		
		case 6: 
				
		break;
	}
	
	printf ("Gracias por utilizar nuestro programa!!! \n" );
	
	system("PAUSE");
	return 0;
}
