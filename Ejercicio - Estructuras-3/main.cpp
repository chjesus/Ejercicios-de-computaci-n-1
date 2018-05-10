#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct monitor{
	char marca[20];
	char color[20];
	int tam;
}mon;

int main(){
	int x,i;
	mon M[2];
	for(i=0;i<2;i++){
		printf("Ingrese el color: ");
		scanf("%s",&M[i].color);
		printf("Ingrese el Tamaño: ");
		scanf("%d",&M[i].tam);
	}
		
		for(i=0;i<2;i++){
			printf("\n Color: %s\n Tamaño: %d",M[i].color,M[i].tam);
		}
		
	return 0;
}
