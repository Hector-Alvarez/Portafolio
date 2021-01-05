#include <stdio.h>
#include <stdlib.h>

/*Simple: Calcular el promedio de un alumno que llevó cuatro materias en el semestre anterior, 
(es necesario pedir al usuario el código del alumno, el nombre del alumno y las calificaciones de cada materia).  
Si su promedio es mayor o igual a 95 se le va asignar al promedio 100. Imprimir en pantalla el código del alumno, 
el nombre del alumno y el promedio del alumno.*/

int main (){

int mat1;
int mat2;
int mat3;
int mat4;
int prom;
int sprom;
int cod;
char alum[30];

printf ("Digite el codigo del aumno (1-100): ");
scanf (" %i", &cod);

printf ( "Ingrese el nombre completo del alumno: ");
fflush(stdin);
gets(alum);

printf ( "Ingrese la calificacion de la materia 1: ");
scanf (" %i", &mat1);

printf ( "Ingrese la calificacion de la materia 2: ");
scanf (" %i", &mat2);

printf ( "Ingrese la calificacion de la materia 3: ");
scanf (" %i", &mat3);

printf ("Ingrese la calificacion de la materia 4: ");
scanf (" %i", &mat4);

sprom = mat1 + mat2 + mat3 +mat4;

prom = sprom / 4;

if (prom >= 95){
	
	printf ("El promedio del alumno %s con codigo A%i es 100 \n", alum, cod);
}
	system("PAUSE"); 
	return 0;
}
