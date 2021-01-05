/* Este programa es para una tienda para la cual se necesitan los siguientes datos del producto:

!!!código, nombre del producto, número de anaquel, precio unitario con IVA incluido!!!

Estos datos se preguntaran al usuario del programa y se programaran en la función principal con variables locales y/o arreglos locales.

El programa tendrá los siguientes módulos: !!!Inventario, Venta, Cliente!!!

Para el modulo de inventario se tendrá un reporte, para ello tendrás que imprimir en pantalla los datos del producto que están en la función prinicpal 
dentro de variables y/o arreglos locales. 

El módulo de Venta tendrá un submenú con tres opciones: venta menudeo, venta mayoreo e imprimir venta.

Los datos que se necesitan para la venta tanto de mayoreo como de menudeo son: código del producto a comprar, cantidad a comprar  precio unitario del producto 
con IVA incluido. Y estos datos recuerda que están en la función principal dentro de variables y/o arreglos locales.

Primera opción para venta menudeo deberá ser menor o igual a 10 productos, de ser así realizar las operaciones correspondientes para sacar 
la venta de lo contrario desplegar un mensaje de que no se puede hacer la venta y que regrese al menú de venta

Segunda opción para venta mayoreo deberá ser mayor a 10 productos, de ser así realizar las operaciones correspondientes para sacar la venta de lo contrario 
desplegar un mensaje de que no se puede hacer la venta y que regrese al menu de venta

Tercera opción para imprimir en pantalla la venta con los siguientes datos: código, nombre producto, cantidad comprada, precio unitario con IVA, subtotal 
(cantidad por precio sin IVA), IVA, total (subtotal + IVA)

El módulo de cliente, tendrá un submenu con dos opciones alta cliente e imprimir cliente.

Para primera opción de dar de alta al cliente con los datos de código, nombre del cliente, teléfono y algún dato más que quieras agregar para el cliente. 
Puedes usar variables globales y/o arreglos globales.

Para segunda opción deberás imprimir en pantalla los datos del cliente.

Todos los menús y submenús deberan tener la opción salir. La opción salir de los submenús deberá regresar al menú principal.  La opción salir del menú principal 
(inventario, venta, cliente) terminará con el programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inventario_e (int (cod_e)[10],char (nom_prod_e)[10][20],char (stand_e)[10],float (price_e)[10]){
	
	int i;
	printf ("\tInventario Existente\nCodigo\tNombre\tAnaquel\tPrecio\n");		
						for (i=0;i<10;i++){		
						printf ("%i\t%s\t%c\t$%.2f\n", cod_e[i],nom_prod_e[i],stand_e[i],price_e[i]);
						}
							getch ();
							system ("cls");
						}

void inventario_n (int (cod_n)[100],char (nom_prod_n)[100][20],char (stand_n)[100],float (price_n)[100],int *z){
	
	int i;
	
		printf ("Cuantos productos desea agregar: ");
						scanf ("%i", &*z);
						system ("cls");
						printf ("Ingrese los siguientes datos de producto:\n\n");											
						for (i=0;i<*z;i++){
						cod_n[i]=i;
						printf ("Ingrese nombre de producto: ");
						fflush (stdin);
						gets (nom_prod_n[i]);
						printf ("Ingrese el anaquel: ");
						fflush (stdin);
						scanf ("%c", &stand_n[i]);
						printf ("Ingrese el precio del producto: ");
						scanf ("%f",&price_n[i]);
						system ("cls");		
						fflush (stdin);
					}		
	
printf ("\tInventario Nuevo\nCodigo\tNombre\tAnaquel\tPrecio\n");		
						for (i=0;i<*z;i++){		
							;
						}
							getch ();
							system ("cls");						
}
void venta (char(cod_c)[10],char(nom_c)[50],char(tel_c)[20],char(email_c)[20],int (cod_e)[10],char (nom_prod_e)[10][20],char (stand_e)[10],float (price_e)[10],int (cod_n)[100],char (nom_prod_n)[100][20],char (stand_n)[100],float (price_n)[100],int *z){
	
	int option,suma,x,i,j;
	char res;
	int cod_v[100];
	char nom_v[100][20];
	char stand_v[100];
	float price_v[100];
	int uni_v[100];
	float price_t[100];
	float total_v,subt_v,iva;
	
	
	submenu3:
		system ("cls");
			printf ("\tPunto de Venta\nTienda de Abarrotes la Vaquita\n\n");
			printf ("Menu venta:\n\n1.Venta mayoreo\n2.Venta menudeo\n3.Imprimir venta\n4.Salir\n\nDigite su opcion: ");
				scanf ("%i", &option);
				switch (option){
					case 1:
						printf ("\nVenta mayoreo:\nQue inventario desea utilizar:\n1.Inventario Existente\n2.Inventario Nuevo: \n");
						scanf ("%i", &option);
							switch (option){	
								case 1:
									suma=0;
									printf ("\nCodigo\tNombre\tAnaquel\tPrecio\n");		
										for (i=0;i<10;i++){		
											printf ("%i\t%s\t%c\t$%.2f\n", cod_e[i],nom_prod_e[i],stand_e[i],price_e[i]);
											}
											printf("Cuantos Productos desea agregar a su fatura?: ");
											scanf ("%i",&x);
											for (i=0;i<x;i++){
											j=0;
											printf ("Seleccione su producto por codigo: ");
											scanf ("%i", &j);
											printf ("Usted selecciono:\n%i\t%s\t%c\t$%2.f\n",cod_e[j],nom_prod_e[j],stand_e[j],price_e[j]);												
											printf ("Cuantas unidades de %s desea agregar a su cuenta: ",nom_prod_e[j]);
											scanf ("%i", &uni_v[i]);
											cod_v[i]=cod_e[j];
											nom_v[100][i]=nom_prod_e[10][j];
											stand_v[i]=stand_e[j];
											price_v[i]=price_e[j];
											
											price_t[i]=price_v[i]*uni_v[i];
											j++;
										 }
										 for (i=0;i<x;i++){
										 	suma+= uni_v[i];
										  }
										  if (suma <=10){
										  	printf ("ERROR Agregue mas de 10 unidades de productos para venta de mayoreo\n");
										  	system ("pause");
											system ("cls");
											goto submenu3;
										  }else							
										 printf ("\nProductos agregados correctamente a su factura\n\n");
										 	system ("pause");
											system ("cls");
											goto submenu3;																					
									break;
								case 2:
									suma=0;
									printf ("\nCodigo\tNombre\tAnaquel\tPrecio\n");		
										for (i=0;i<*z;i++){		
											printf ("%i\t%s\t%c\t$%.2f\n", cod_n[i],nom_prod_n[i],stand_n[i],price_n[i]);
											}
											printf("Cuantos Productos desea agregar a su fatura?: ");
											scanf ("%i",&x);
											for (i=0;i<x;i++){
											j=0;
											printf ("Seleccione su producto por codigo: ");
											scanf ("%i", &j);
											printf ("Usted selecciono:\n%i\t%s\t%c\t$%.2f\n",cod_n[j],nom_prod_n[j],stand_n[j],price_n[j]);												
											printf ("Cuantas unidades de %s desea agregar a su cuenta: ",nom_prod_n[j]);
											scanf ("%i", &uni_v[i]);
											cod_v[i]=cod_n[j];
											nom_v[100][i]=nom_prod_n[100][j];
											stand_v[i]=stand_n[j];
											price_v[i]=price_n[j];
											
											price_t[i]=price_v[i]*uni_v[i];
										j++;
										 }
										 for (i=0;i<x;i++){
										 	suma+= uni_v[i];
										  }
										  if (suma <=10){
										  	printf ("ERROR Agregue mas de 10 unidades de productos para venta de mayoreo\n");
										  	system ("pause");
											system ("cls");
											goto submenu3;
										  }else							
										 printf ("\nProductos agregados correctamente a su factura\n\n");
										 	system ("pause");
											system ("cls");
											goto submenu3;																					
									break;
							default:
									goto submenu3;																					
									break;
																	
							}
									
						break;
					case 2:
						printf ("\nVenta menudeo:\nQue inventario desea utilizar:\n1.Inventario Existente\n2.Inventario Nuevo: \n");
						scanf ("%i", &option);
							switch (option){	
								case 1:
									suma=0;
									printf ("\nCodigo\tNombre\tAnaquel\tPrecio\n");		
										for (i=0;i<10;i++){		
											printf ("%i\t%s\t%c\t$%.2f\n", cod_e[i],nom_prod_e[i],stand_e[i],price_e[i]);
											}
											printf("Cuantos Productos desea agregar a su fatura?: ");
											scanf ("%i",&x);
											for (i=0;i<x;i++){
											j=0;
											printf ("Seleccione su producto por codigo: ");
											scanf ("%i", &j);
											printf ("Usted selecciono:\n%i\t%s\t%c\t$%2.f\n",cod_e[j],nom_prod_e[j],stand_e[j],price_e[j]);												
											printf ("Cuantas unidades de %s desea agregar a su cuenta: ",nom_prod_e[j]);
											scanf ("%i", &uni_v[i]);
											cod_v[i]=cod_e[j];
											nom_v[100][i]=nom_prod_e[10][j];
											stand_v[i]=stand_e[j];
											price_v[i]=price_e[j];
											
											price_t[i]=price_v[i]*uni_v[i];
											j++;
										 }
										 for (i=0;i<x;i++){
										 	suma+= uni_v[i];
										  }
										  if (suma >10){
										  	printf ("ERROR no exceda mas de 10 unidades de productos para venta de menudeo\n");
										  	system ("pause");
											system ("cls");
											goto submenu3;
										  }else							
										 printf ("\nProductos agregados correctamente a su factura\n\n");
										 	system ("pause");
											system ("cls");
											goto submenu3;																					
									break;
								case 2:
									suma=0;
									printf ("\nCodigo\tNombre\tAnaquel\tPrecio\n");		
										for (i=0;i<*z;i++){		
											printf ("%i\t%s\t%c\t$%.2f\n", cod_n[i],nom_prod_n[i],stand_n[i],price_n[i]);
											}
											printf("Cuantos Productos desea agregar a su fatura?: ");
											scanf ("%i",&x);
											for (i=0;i<x;i++){
											j=0;
											printf ("Seleccione su producto por codigo: ");
											scanf ("%i", &j);
											printf ("Usted selecciono:\n%i\t%s\t%c\t$%.2f\n",cod_n[j],nom_prod_n[j],stand_n[j],price_n[j]);												
											printf ("Cuantas unidades de %s desea agregar a su cuenta: ",nom_prod_n[j]);
											scanf ("%i", &uni_v[i]);
											cod_v[i]=cod_n[j];
											nom_v[100][i]=nom_prod_n[100][j];
											stand_v[i]=stand_n[j];
											price_v[i]=price_n[j];
											
											price_t[i]=price_v[i]*uni_v[i];
										j++;
										 }
										 for (i=0;i<x;i++){
										 	suma+= uni_v[i];
										  }
										  if (suma >10){
										  	printf ("ERROR no exceda mas de 10 unidades de productos para venta de menudeo\n");
										  	system ("pause");
											system ("cls");
											goto submenu3;
										  }else							
										 printf ("\nProductos agregados correctamente a su factura\n\n");
										 	system ("pause");
											system ("cls");
											goto submenu3;																					
									break;
							default:
									goto submenu3;																					
									break;
																	
							}
									
						break;
						
						break;
					case 3:
						printf ("\nImprimir venta\n");
						printf ("\nCliente registrado con los siguientes datos:\n\nCODIGO: %s\tCLIENTE: %s\tTELEFONO: %s\tEMAIL: %s\n\n", cod_c,nom_c,tel_c,email_c);
						printf ("\n\t\tFactura\nCodigo\tNombre\tAnaquel\tPrecio\tCantidad\n");
											
										for (i=0;i<x;i++){															
											printf ("%i\t%s\t%c\t$%2.f\t%i\n",cod_v[i],nom_v[100][i],stand_v[i],price_v[i],uni_v[i]);
										}										 
										  for (i=0;i<x;i++){
										 	subt_v+= price_t[i];
										  }
										  iva=(subt_v*.16);
										  subt_v-= iva;
										  total_v=subt_v+iva;
										  printf ("\nTotal productos %i  Subtotal $%2.f  IVA $%2.f  TOTAL$%2.f", suma,subt_v,iva,total_v);
										getch ();
										system ("cls");
										goto submenu3;
						
						
						break;
					case 4:
						printf ("Esta seguro que desea salir? (s/n): ");
						fflush (stdin);
						scanf ("%c", &res);
							switch (res){
								case 's':
									system ("cls");
									break;
								case 'n':
									system ("cls");
								goto submenu3;
									break;
								default:
									printf ("Opcion incorrecta!!!");
									getch ();
									system ("cls");
									goto submenu3;
									break;
							}
						break;
					default:
						printf ("Opcion incorrecta!!!");
					getch ();
					system ("cls");
					goto submenu3;
						break;
						}
					
	

	
}

void cliente (char(cod_c)[10],char(nom_c)[50],char(tel_c)[20],char(email_c)[20]){

int option;
char res;	
	do{
			system ("cls");
			submenu2:
			printf ("\tPunto de Venta\nTienda de Abarrotes la Vaquita\n\n");
			printf ("Menu cliente:\n1.Alta de cliente\n2.Imprimir cliente\n3.Salir\n\nDigite su opcion: ");
				scanf ("%i",&option);
				
				switch (option){
					case 1:
						system ("cls");
						printf ("\tPunto de Venta\nTienda de Abarrotes la Vaquita\n\n");
						printf ("Ingrese un codigo de cliente: ");
						fflush (stdin);
						gets (cod_c);
						printf ("Ingrese su nombre: ");
						fflush (stdin);
						gets (nom_c);
						printf("Ingrese su numero telefonico: ");
						fflush (stdin);
						gets (tel_c);
						printf ("Ingrese su correo electronico: ");
						fflush (stdin);
						gets (email_c);							
						
						break;
					case 2:
						printf ("Los datos del cliente son:\n\nCodigo: %s\nNombre: %s\nTelefono: %s\nEmail: %s", cod_c,nom_c,tel_c,email_c);
						getch ();
						break;
					case 3:
							printf ("Esta seguro que desea salir? (s/n): ");
						fflush (stdin);
						scanf ("%c", &res);
							switch (res){
								case 's':
									system ("cls");
									break;
								case 'n':
									system ("cls");	
									goto submenu2;							
									break;
								default:
									printf ("Opcion incorrecta!!!");
									getch ();
									system ("cls");
									goto submenu2;
									
									
									break;
								}		
								
								break;
					default:
					printf ("Opcion incorrecta!!!");
					getch ();
					system ("cls");
					goto submenu2;
					break;	
				} 
	
	}while (option !=3);
}

int main (){
	
	int i,z,option;
	char res;
					
	int cod_e[10]={0,1,2,3,4,5,6,7,8,9};
	char nom_prod_e [10][20]={"LECHE","PAN","SODA","AGUA","JABON","AZUCAR","SAL","PAPAS","JAMON","YOGOURT"};
	char stand_e[10]={'A','A','B','B','C','C','D','D','E','E'};
	float price_e[10]={20,45,23,43,24,65,64,22,57,42};
	
	int cod_n[100];
	char nom_prod_n [100][20];
	char stand_n[100];
	float price_n[100];
	
	char cod_c[10];
	char nom_c[50];
	char tel_c[20];
	char email_c [20];
		
	printf ("Actividad Integradora\nUnidad 3\nProgramacion estructurada\n\nEstudiante: Hector Moctezuma Alvarez Moreno\nProfesor: Francisco Javier Camacho Aceves\nAbril de 2019\n\n");
	system ("pause");system ("cls");
	
	do {
		mainmenu:
	printf ("\tPunto de Venta\nTienda de Abarrotes la Vaquita\n\n");
	printf ("Menu principal:\n\n1.Inventario\n2.Venta\n3.Cliente\n4.Salir\n\nDigite su opcion: ");
	
		scanf ("%i", &option);
		
		switch (option){
			
			case 1:
				system ("cls");
				submenu1:
				printf ("\tPunto de Venta\nTienda de Abarrotes la Vaquita\n\n");
				printf ("Menu Inventario:\n\n1.Agregar inventario nuevo\n2.Consultar inventario existente\n3.salir\n\nDigite su opcion: ");
					scanf ("%i", &option);
					
					switch (option){
					
					case 1:				
												
						inventario_n (&cod_n[i],&nom_prod_n[i],&stand_n[i],&price_n[i],&z);
						break;
				
							
					case 2:	
					
						inventario_e (&cod_e[i],&nom_prod_e[i],&stand_e[i],&price_e[i]);
						break;
						
					case 3:
						printf ("Esta seguro que desea salir? (s/n): ");
						fflush (stdin);
						scanf ("%c", &res);
							switch (res){
								case 's':
									system ("cls");
									break;
								case 'n':
									system ("cls");
								goto submenu1;
									break;
								default:
									printf ("Opcion incorrecta!!!");
									getch ();
									system ("cls");
									goto submenu1;
									break;
							}
						break;
					
						default:
							printf ("Opcion Incorreta!!!");
							getch ();
							system ("cls");
							goto submenu1;						
							break;
						}
					break;
			case 2:
					venta (&cod_c[10],&nom_c[50],&tel_c[20],&email_c[20],&cod_e[i],&nom_prod_e[i],&stand_e[i],&price_e[i],&cod_n[i],&nom_prod_n[i],&stand_n[i],&price_n[i],&z);
					break;
				
			case 3:
								
				cliente (&cod_c[10],&nom_c[50],&tel_c[20],&email_c[20]);			
					break;
				
			case 4:
				printf ("Esta seguro que desea salir? (s/n): ");
						fflush (stdin);
						scanf ("%c", &res);
							switch (res){
								case 's':
									system ("cls");
									break;
								case 'n':
									system ("cls");
								goto mainmenu;
									break;
								default:
									printf ("Opcion incorrecta!!!");
									getch ();
									system ("cls");
									goto mainmenu;
									break;
								}
				break;
			
			default:
				printf ("Opcion Incorreta!!!");
						getch ();
						system ("cls");
						goto mainmenu;						
						break;
				
		}
		
		
}while (option != 4);
	

	
	
return 0;	
}


