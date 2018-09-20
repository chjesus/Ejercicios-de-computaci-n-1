#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int c_num,n,i,menor=9999,mayor=-9999;

		printf("\n Ingrese la cantidad de numeros: ");
		scanf("%d",&c_num);
			for(i=0;i<c_num;i++){
				printf("\n Ingrese un numero: ");
				scanf("%d",&n);
					if(mayor<n){
						mayor=n;
					}	
						if(menor>n){
							menor=n;
						}
			}
				printf("\n El Numero Mayor es: %d",mayor);
				printf("\n El Numero Menor es: %d",menor);
	return 0;
}
