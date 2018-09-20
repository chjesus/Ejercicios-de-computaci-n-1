#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int i,j,piso,deuda,n_pers,deud_div=0,deud_tot,menor=-9999,piso_t,costo,deud_gastos;
	char resp;
		for(i=1;i<=2;i++){
			printf("\n Cuantos apartamentos ahi en el Piso %d: ",i);
			scanf("%d",&piso);
				for(j=1;j<=piso;j++){
					printf("\n Esta desocupado el %d apartamento s/n?: ",j);
					scanf("%s",&resp);
						while(resp=='n' || resp=='N'){
							printf("\n Cuanto es la deuda del apartamento: ");
							scanf("%d",&deuda);
							printf("\n Cuantas personas habitan en el apartamento: ");
							scanf("%d",&n_pers);
								deud_div=deuda/n_pers;
								printf("\n Cada persona debe aportar %d Bs \n",deud_div);
								system("pause");
								system("cls");
							printf("\n Ir al siguiente apartamento s/n?: ");
							scanf("%s",&resp);
								if(resp=='n' || resp=='N'){
									printf("\n Ya se registro su deuda");
								}
								deud_tot=deud_tot+deuda;
								deud_gastos=deud_tot;
						}
							
				}
			if(deud_tot>menor && i!=2){
				menor=deud_tot;
				piso_t=i;
			}
			
		}
		printf("\n\n El piso que le debe mas al condominio es: %d",piso_t);
		system("cls");
		printf("\n Cuantos es el costo para pintar el edificio?: ");
		scanf("%d",&costo);
			if(deud_gastos>=costo){
				printf("\n Si se podra pintar el edificio");
			}else{
				printf("\n No alcanza para pintar el edefcio");
			}
				
	return 0;
}
