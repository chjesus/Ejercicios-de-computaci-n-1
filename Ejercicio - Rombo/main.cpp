#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,k,l,x,y,z,w,v;
	char resp;
do{
	
	printf("\n\t Ingrese la cantida de numeros: ");
	scanf(" %d",&n);		
		for(i=0;i<=n;i++){
			printf("\t\t");
			for(j=1;j<=n-i;j++){	
				printf(" ");
			}
				for(k=1;k<=i;k++){				
					printf("*");
				}
					for(l=i-1;l>=1;l--){
						printf("*");	
					}
				printf("\n");
		}
			for(x=1;x<n;x++){
				printf("\t\t");
				for(y=1;y<=x;y++){	
					printf(" ");
				}
					for(z=y;z<=n;z++){				
						printf("*");
					}
						for(w=x;w<n-1;w++){							
								printf("*");							
						}
						printf("\n");			
			}	
	printf("\n\t Desea Mostrar otro Rombo?s/n: ");
	scanf("%s",&resp);
}while(resp=='s');
	return 0;
}
