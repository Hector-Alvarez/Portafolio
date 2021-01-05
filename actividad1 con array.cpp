#include <stdio.h>
#include <conio.h>


/*La empresa Rama, C. A. se encarga de elaborar y diseñar juguetes de excelente calidad para la Región Centro Occidental del País. 
El pago semanal a los empleados se realiza acorde al sueldo total semanal que se calcula del sueldo básico más las horas extra trabajadas 
menos los impuestos Sobre la Renta e IMSS. A fin de poder realizar el pago semanal del empleado se deberá obtener el código del empleado, 
el nombre del empleado, el número de horas extras que trabajo por día. Los datos que se deberán tomar en cuenta para la solución del 
sueldo total semanal del empleado son: el sueldo base del empleado por hora será de $125.50, se presume que el empleado trabaja 8 horas al día, 
el pago de hora extra es el doble de la hora pagada en el sueldo base por hora, el impuesto sobre la renta será del 3% de su sueldo base a la semana 
y el impuesto del IMSS será del 4.7% de su sueldo base a la semana.*/


float dia = 125.5 * 8;          //aqui se supone que el empleado trabaja 8 horas por dia con base 125.5 por hora
float extra = 125.5 * 2;        //aqui calculamos que la hora extra se paga al doble.
float isr = 0.03;               //iSR es el 3% de salario total bruto
float imss = 0.047;             //imss es del 4.7% des salario total bruto
int dias;
char res;
float extras, extrasx, semana, semanab, impuestos, subtotal, total, subisr, subimss;
int i=0;
char empleado[5][10]={"Juan","Jose","Saul","Daniel","Hector"};

int main (){
	
	printf ("Digite el numero del empleado (1-5): ");
	scanf ("%i", &i);
	
	printf ("El empleado es: %s \n", empleado[i]);
			
	printf ("Cuantos dias trabajo el empleado: ");
	scanf ("%i", &dias);

	printf ("El empleado trabajo horas extras?(s/n): ");
	scanf(" %c", &res) ;
	
	switch (res){
	
		case 's': printf ("Cuantas horas extras trabajo?: ");
		scanf ("%f", &extras);
		break;			
		case 'n':	printf ("Sin horas extras que registrar\n");
		break;
		default: printf ("seleccion incorrecta\n");
	}
	
	extrasx = extras * extra;
	
	printf("Total Horas Extras: %.1f\n", extrasx);
	
semanab = dia * dias + extrasx;

semana = dia * dias;

printf  ("El subtotal de la semana es: $%.1f\n", semana);

printf ("El subtotal de la semana mas horas extras es: $%.1f\n", semanab);

subisr = semanab * isr;

printf ("ISR: $%.1f\n", subisr);

subimss = semanab * imss;

printf ("IMSS: $%.1f\n", subimss);

impuestos = isr + imss;

subtotal = semanab * impuestos;

printf("Total impuestos(ISR,IMSS): $%.1f\n", subtotal);

total = semanab - subtotal;

printf("El sueldo total semanal, menos impuestos es de : $%.1f\n\n", total);

printf("Gracias por utilizar nuestro programa.\n");


getch (); 
return 0;		
	
	
}

