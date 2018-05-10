#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Desarolle un algoritmo que permita convertir una calificacion numerica a una literal, segun la siguiente conversion:
	A equivale a: 18,19 y 20
	B equivale a: 14,15,16 y 17
	C equivale a: 10,11,12 y 13
	D equivale a: de 1 hasta el 9*/
	
int main(){
	int nota;
	char resp;
do{
	system("cls");
	printf("\n Ingrese la nota que desea convertir a literal: ");
	scanf("%d",&nota);
	
		if(nota>=18 && nota<=20){
			printf("\n Su calificacion es: A");
		}
			if(nota>=14 && nota<=17){
				printf("\n Su calificacion es: B");
			}
				if(nota>=10 && nota<=13){
					printf("\n Su calificacion es: C");
				}
					if(nota>=1 && nota<=9){
						printf("\n Su calificacion es: D");
				}
	printf("\n\n Desea convertir otra nota? s/n: ");
	scanf("%s",&resp);
						
}while(resp=='s' || resp=='S');
			
	return 0;
}
