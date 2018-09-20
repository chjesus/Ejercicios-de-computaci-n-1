#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char V[20],resp;
	int contar;
	printf("\nSaber si una palabra es palindromo o no\n\n");
	do{
		printf("\n Ingrese una palabra: ");
		scanf("%s",&V);
			if(V[0]==V[2] && V[1]==V[1] && V[2]==V[0]){
				printf("\n La Palabra es palindromo");
				printf("\n %s",V);
			}else{
				printf("\n La palabra no es palindromo");
			}
		printf("\n\n Desea Comprobrar otra Palabra s/n: ");
		scanf("%s",&resp);
		system("cls");
	}while(resp=='s');
		
	return 0;
}
