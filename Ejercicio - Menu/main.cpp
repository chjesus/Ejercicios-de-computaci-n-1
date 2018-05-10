#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int option;
	char resp;
		do{	
	//	system("cls");
			printf("\n\t\t\t\tMenu");
			printf("\n\t\t---------------------------------");
			printf("\n\t\t1-Saber que tipo de triangulo es?\n");
			printf("\t\t2-Mostrar 1 mes del año?\n");
			printf("\t\t3-Mostrar un rombo con asterisco?\n");
			printf("\t\t---------------------------------");
			printf("\n\n\n Tecle la opcion que quieres realizar (1-3): ");
			scanf("%d",&option);
			system("cls");
				if(option==1){
					printf("Prueba-1");
				}else
					if(option==2){
						printf("Prueba-2");
					}else
						if(option==3){
							printf("prueba-3");
						}else
							printf("\nOpcion no valida");
			printf("\n\n\n Deasea regresar al menu? s/n-S/N: ");
			scanf("%s",&resp);
		}while(resp=='s' || resp=='S');
	
	return 0;
	
}
