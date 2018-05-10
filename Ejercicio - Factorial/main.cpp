#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int n,i,nF;
	char resp;
	do{
		nF=1;
		printf("\n Ingrese el numero para aplicar su operacion factorial: ");
		scanf("%d",&n);
			for(i=1;i<=n;i++){
				nF=i*nF;
			}
			printf("\n El resultado es: %d",nF);
			printf("\n Desea aplicar operacion factorial s/n?: ");
			scanf("%s",&resp);
	}while(resp=='s' || resp=='S');
	return 0;
}
