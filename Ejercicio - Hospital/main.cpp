#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int i,edad,n_per,j,cont_tip_a=0,cont_tip_b=0,cont_tip_o=0,cont_tip_ab=0,menor=9999,peso_tot=0,cont_per_1,cont_per_2;
	char nombre[15],sexo,tipo[2];
	float peso,prom,peso_tot_1,peso_tot_2;
	
		for(i=1;i<=5;i++){
			printf("\nCuantas persona se atenderan el dia %d: ",i);
			scanf("%d",&n_per);
				for(j=1;j<=n_per;j++){
					printf("\n Ingrese su Nombre: ");
					scanf("%s",&nombre);
					printf("\n Ingrese el Sexo F/M: ");
					scanf("%s",&sexo);
					printf("\n Ingrese su Edad: ");
					scanf("%d",&edad);
					printf("\n Ingrese su Peso: ");
					scanf("%f",&peso);
					printf("\n Ingrese Tipo de Sangre: ");
					scanf("%s",&tipo);
						if(edad>=18 && edad<=60 && peso>=50){
							printf("\n La persona si es apta para donar!");
						}
							if(strcmp(tipo,"A")==0 || strcmp(tipo,"a")==0){
									printf("Funciona!");
								cont_tip_a++;
							}else
								if(strcmp(tipo,"B")==0 || strcmp(tipo,"b")==0){
									cont_tip_b++;
								}else
									if(strcmp(tipo,"O")==0 || strcmp(tipo,"o")==0){
										cont_tip_o++;
									}else
										if((strcmp(tipo,"AB")==0 || strcmp(tipo,"ab")==0) && (sexo=='F' || sexo=='f')){
											cont_tip_ab++;
											menor>peso;
											menor=peso;	
										}
								if(i==2){
									peso_tot_1=peso_tot_1+peso;
									cont_per_1++;
								}
								if(i==4){
									peso_tot_2=peso_tot_2+peso;
									cont_per_2;
								}
				}	
			prom=(peso_tot_1+peso_tot_2)/(cont_per_1+cont_per_2);
			printf("\n La cantidad Total de litros de sangre Tipo A es:%d ",cont_tip_a);
			printf("\n La cantidad Total de litros de sangre Tipo B es:%d ",cont_tip_b);
			printf("\n La cantidad Total de litros de sangre Tipo O es:%d ",cont_tip_o);
			printf("\n La cantidad Total de litros de sangre Tipo AB es:%d ",cont_tip_ab);

					
		}
	return 0;
}
