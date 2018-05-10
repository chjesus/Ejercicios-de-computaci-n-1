#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char nombre_1[20]={""};
	char nombre_2[20]={""};
	int score_1[10]={0},score_2[10]={0};
	int total_1=0,total_2=0,i;
	
		printf("\n Ingrese el nombre del equipo 1: ");
		gets(nombre_1);
		printf("\n Ingrese el nombre del equipo 2: ");
		gets(nombre_2);
			for(i=0;i<9;i++){
				printf("\n Ingrese las carreras del %d innings del equipo 1: ",i+1);
				scanf("%d",&score_1[i]);
				printf("\n Ingrese las carreras del %d innings del equipo 2: ",i+1);
				scanf("%d",&score_2[i]);
				total_1=score_1[i]+total_1;
				total_2=score_2[i]+total_2;
				system("cls");
			}	
				while(total_1==total_2){
					printf("\n Extra inning");
					printf("Ingrese la cantidad de carrera del equipo 1: ");
					scanf("%d",score_1[9]);
					total_1=total_1+score_1[9];
					printf("Ingrese la cantidad de carrera del equipo 2: ");
					scanf("%d",score_2[9]);
					total_2=total_2+score_2[9];
				}
				
			if(total_1>total_2){
				printf("\n El equipo 1 es el ganador");
			}else
				if(total_1<total_2){
					printf("\n El equipo 2 es el ganador");
				}
	return 0;
}
