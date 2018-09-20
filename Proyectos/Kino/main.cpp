#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sort(int Sorteo[5][3]);
void llenar(int KINO[5][3],int Sorteo[5][3]);
void imprimir(int KINO[5][3],int Sorteo[5][3]);
void ganar(int KINO[5][3],int Sorteo[5][3],int cod);
int main(int argc, char** argv) {
	
	int KINO[5][3];
	int Sorteo[5][3];
	int n,i,j;
	int cod;
	char resp;
	int MAT[10][16]={0};	


	
	srand(time(NULL));
	cod=rand()%1000+8999;
	do{
	
		do{	
		system("cls");
			printf("Cuantos Kinos deseas usar para participar!: ");
			scanf("%d",&n);
			if(n<2){
				printf("\n\n Minimo de Cartones a sortear 2");
				printf("\n\n");
				system("pause");
			}
			if(n>10){
				printf("\n\n Maximo de Cartones a sortear 10");
				printf("\n\n");
				system("pause");
			}
		}while(n<2 || n>10);

			sort(Sorteo);
			for(i=0;i<n;i++){
				printf("\n--------------------------------------------------");
				printf("\n\nCarton Nr %d\n\n",i+1);
				llenar(KINO,Sorteo);
				imprimir(KINO,Sorteo);
				ganar(KINO,Sorteo,cod);
				cod=cod+1;
			}
		printf("\n\nDesea Participar en otro Sorteo? s/n: ");
		scanf("%s",&resp);
	}while(resp=='s' || resp=='S');
	return 0;
}
void llenar(int KINO[5][3],int Sorteo[5][3]){
	int i,j;
	int x,y;
	int repetido=0;
	int cont=0;
	int num;
	int menor;
	
	srand(time(NULL));
	for(i=0;i<5;i++)
		for(j=0;j<3;j++){
			repetido=1;
			while(repetido==1){
				num=rand()%25+1;
				cont=0;
				for(x=0;x<5;x++)
					for(y=0;y<3;y++)
						if(num==KINO[x][y])
							cont++;
						
						if(cont==0){
							KINO[i][j]=num;
							repetido=0;
						}
			}
		}
		
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			for(x=0;x<5;x++){
				for(y=0;y<3;y++){
					if(KINO[i][j]<KINO[x][y]){
						menor=KINO[i][j];
						KINO[i][j]=KINO[x][y];
						KINO[x][y]=menor;
					}
				}
			}
		}
	}
}

void sort(int Sorteo[5][3]){
	int i,j,x,y;
	int cont;
	int repetido;
	int num;
	srand(time(NULL));
	for(i=0;i<5;i++)
		for(j=0;j<3;j++){
			repetido=1;
			while(repetido==1){
				num=rand()%25+1;
				cont=0;
				for(x=0;x<5;x++)
					for(y=0;y<3;y++)
						if(num==Sorteo[x][y])
							cont++;
						
						if(cont==0){
							Sorteo[i][j]=num;
							repetido=0;
						}
			}
		}
}
void imprimir(int KINO[5][3],int Sorteo[5][3]){
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%3d",KINO[i][j]);
		}
		printf("\n");
	}
	printf("\nNumeros a Comparar con El Carton:\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%3d",Sorteo[i][j]);
		}
	}
}
void ganar(int KINO[5][3],int Sorteo[5][3],int cod){
	int i,j;
	int x,y;
	int cont=0;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			for(x=0;x<5;x++){
				for(y=0;y<3;y++){		
					if(KINO[i][j]==Sorteo[x][y]){
						cont=cont+1;
					}		
				}
			}
		}
	}
	if(cont>=13){
		printf("\n\n Codigo: %d \n Ganaste",cod);
	}
	if(cont<13){
		printf("\n\n Codigo: %d \n Perdistes",cod);
	}	
}
