#include <stdio.h>
#include <stdlib.h>

/*Selectiva anidada: Imprimir en pantalla el tipo de calificaci�n en letra de un alumno seg�n la calificaci�n dada en n�mero del 0 al 100.  
La clasificaci�n ser� la siguiente: Se imprime en pantalla �Excelente� si la calificaci�n dada est� en el rango de 100 a 90. 
Se imprime en pantalla �Muy bien� si la calificaci�n dada est� en el rango de 89 a 80. Se imprime e pantalla �Bien� si la calificaci�n dada 
est� en el rango de 79 a 70. Se imprime en pantalla �Regular� si la calificaci�n dada est� en el rango de 69 a 60. Se imprime en pantalla �Malo� 
si la calificaci�n dada es menor o igual a 59. Si la calificaci�n est� fuera del rango del 0 al 100 imprimir un mensaje de error en pantalla.*/

int main (){

int cal;

printf ("Programa para evaluar tu promedio. \n\n");
printf ("Por favor ingresa tu promedio (0-100): ");
scanf ("%i", &cal);

if (cal >= 101){
	
	printf ("ERROR calificacion incorrecta");
} else
if (cal <= 100 && cal >=90){
	
	printf ("Tu calificacion es: excelente");
} else

if (cal <= 89 && cal >=80){
	
	printf ("Tu calificacion es: muy bien");
} else
	if (cal <= 79 && cal >= 70){
	
	printf ("Tu calificacion es: bien");
} else 
	if (cal <= 69 && cal >= 60){
	
	printf ("Tu calificacion es: regular");
	
} else	
	if (cal <= 59){
	
	printf ("Tu calificacion es: malo");
} 

printf ("\n\n Gracias por usar nuestro programa. \n\n");

system("PAUSE");
return 0;
}

