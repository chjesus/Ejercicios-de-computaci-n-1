#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct jug{
	char nom[10];
	int edad;
}jug;

typedef struct equipo{
	char nombre[30];
	int gol[2];
	int faltas[2];
	int tot;
	jug jg[11];
	}equip;
int main(){
	int i,j,k;
	equip eq[2];
		
		for(i=0;i<2;i++){
			printf("Ingrese el Nombre del Equipo: ");
			scanf("%s",&eq[i].nombre);
				for(j=1;j<=2;j++){
					for(k=0;k<11;k++){
						printf("ingrese nombre: ");
						scanf("%s",&eq[i].jg[k].nom);
					}
					printf("Ingrese Cantidad de goles del %d Tiempo: ",j);
					scanf("%d",&eq[i].gol[j]);
				}
			eq[i].tot=eq[i].gol[0]+eq[i].gol[1];
		}
			if(eq[0].tot<eq[1].tot){
				printf("El Ganador es el Equipo 2");
			}else
				if(eq[0].tot>eq[1].tot){
				printf("El Ganador es el Equipo 1");
			}				

	return 0;
}
