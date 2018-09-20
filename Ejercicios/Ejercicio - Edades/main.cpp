#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int edad[5],i,acum=0,menor=-9999,pos,cont=0,mayor=9999,mayor_s=0;
	float prom;
		for(i=0;i<5;i++){
			printf("\n Ingrese la edad %d: ",i+1);
			scanf("%d",&edad[i]);
		}
			for(i=0;i<5;i++){
				printf("\n %d\n",edad[i]);
			}
				for(i=0;i<5;i++){
					acum=acum+edad[i];
				}
					prom=(float)(acum)/(float)(5);
					printf("\nEl Promedio es: %.2f",prom);
					printf("\n");
						for(i=0;i<5;i++){
							if(edad[i]>prom){
								printf("\nLa edad q supera el promedio es: %d",edad[i]);
							}
						}	printf("\n");
							for(i=0;i<5;i++){
								if(i%2==0){
									printf("\n");
									printf("La posicion: %d es par",i);
								}
							}
								for(i=0;i<5;i++){
									if(edad[i]>menor){
										menor=edad[i];
										pos=i;								
									}
								}	
									for(i=0;i<5;i++){
									
										if(menor==edad[i]){
											cont++;
										}
									}
									
									for(i=0;i<5;i++){
										if(edad[i]>mayor_s && edad[i]!=menor){
											mayor_s=edad[i];
										}
										
									}
									printf("\n");
									printf("\nEl mayor es: %d en la posicion: %d",menor,pos);
									printf("\nEl mayor esta repetido: %d",cont);
									printf("\nEl Segundo mayor es: %d",mayor_s);
	return 0;
}
