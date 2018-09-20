#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,k,l;
		
		printf("Ingrese la cantida de numeros: ");
		scanf("%d",&n);
			
			for(i=0;i<=n;i++){
				printf("\t\t");
				for(j=1;j<=n-i;j++){
					printf("   ");
				}
					for(k=1;k<i;k++){
						printf("%3d",k);
					}
						for(l=i;l>=1;l--){
							printf("%3d",l);
						}
				printf("\n");
			}
			
	return 0;
}
