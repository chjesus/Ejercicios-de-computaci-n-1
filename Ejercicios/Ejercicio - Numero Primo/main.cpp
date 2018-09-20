#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char resp;
	int num,i,a=0;
	
	printf("\n Desea saber si el numero es primo? s/n: ");
	scanf("%s",&resp);
		while(resp=='s' || resp=='S'){
			printf("\n Ingrese el numero que deaseas saber si es primo: ");
			scanf("%d",&num);
				for(i=1;i<=num;i++){
					if(num%i==0){
						a++;
					}
				}
					if(a==2){
						printf("\n El numero es Primo");
					}else{
						printf("\n El numero no es Primo");
					}
			printf("\n Desea saber si otro numero es primo? s/n: ");
			scanf("%s",&resp);
			system("cls");
		}
	return 0;
}
