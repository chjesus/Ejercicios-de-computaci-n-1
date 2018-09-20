#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//numero factorial
int main(){
	int i,edad,n_per,j,cont_tip_a,cont_tip_b=0,menor=9999,peso_tot,cont_per_1,cont_per_2;
	int cont_tip_o=0,cont_tip_ab=0;
	char nombre[15],sexo,tipo[2];
	float peso,prom,peso_tot_1,peso_tot_2,peso_menor;
		for(i=1;i<=5;i++){
			printf("\n Cuantas persona se atenderan el dia %d: ",i);
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
							printf("\n La persona si es apta para donar!\n");
						}else{
							printf("\n No es apta para donar\n");
						}
							if(strcmp(tipo,"a")==0){
								cont_tip_a++;
							}
								if(strcmp(tipo,"b")==0){
									cont_tip_b++;
								}
									if(strcmp(tipo,"o")==0){
										cont_tip_o++;
									}
										if(strcmp(tipo,"ab")==0){ 
											cont_tip_ab++;
										}
								if(i==2){
									peso_tot_1=peso_tot_1+peso;
									cont_per_1++;
								}
								if(i==4){
									peso_tot_2=peso_tot_2+peso;
									cont_per_2;
								}
								
									if(sexo=='f' || sexo=='F' && strcmp(tipo,"ab")==0){
										if(peso<menor){
											menor=peso;
											
										}
									}
				}	
			
			
			printf("\n La cantidad Total de litros de sangre Tipo A es:%d ",cont_tip_a);
			printf("\n La cantidad Total de litros de sangre Tipo B es:%d ",cont_tip_b);
			printf("\n La cantidad Total de litros de sangre Tipo O es:%d ",cont_tip_o);
			printf("\n La cantidad Total de litros de sangre Tipo AB es:%d \n\n",cont_tip_ab);
			
			system("pause");
			system("cls");
					
		}
			prom=(peso_tot_1+peso_tot_2)/(cont_per_1+cont_per_2);
			printf("\n El peso promedio de los hombres es: %f",prom);
			printf("\n El menor peso: %d de la mujer de la semana fue: %d",menor);
	return 0;
}
