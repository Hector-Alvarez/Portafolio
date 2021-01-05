#include <stdio.h>
#include <stdlib.h>


/*Doble: Calcular el monto de pago que consiste en la inscripción más la primera mensualidad, 
de una persona que se inscribe a la alberca olímpica de la Universidad de Guadalajara.  
Si la persona es empleado de la universidad se le hará un descuento del 50% de lo contrario 
se cobrara el pago completo.  Para calcular el pago se debe tomar en cuenta que la inscripción 
es de $100.00 y la mensualidad es de $150.00.*/


	int ins = 100;
	int men = 150;
	float desc = .5;
	float subtot;
	char nom [30];
	char emp;
	int nomina;
	float pago_desc; 
	float men_total;
	float pag_desc;

int main (){
	
	subtot = ins + men;
	pag_desc = subtot * desc;
	
	printf ("Ingrese su nombre completo: ");
		gets(nom);
	
	printf ("Es usted empleado de la Universidad de Guadalajara?(s/n): ");
	scanf ("%c", &emp);
	
	if (emp == 's'){
		
		printf ("Por favor ingrese su numero de nomina: ");
		scanf ("%i", &nomina);
		
		men_total = subtot - pag_desc;
		
		printf ("Bienvenido! %s El pago de su incripcion y mensualidad con descuento de 50%% por ser empleado de la universidad con numero de nomina N%i es de: $%.2f \n", nom, nomina, men_total);
	}
	
	else		
	
		
	printf ("Bienvenido! %s El pago de su incripcion y mensualidad es de: $%.2f \n", nom, subtot);	
		
	system("PAUSE");	
	return 0;
}
