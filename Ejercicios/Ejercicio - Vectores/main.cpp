#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#define N 20
#define M 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y);
void color(int x);

void vector(int V[]);
void ordenar(int V[N],int cont);
void matriz(int mat[][M]);
void vector_imp(int V[]);
int main(){
	int V[N],mat[M][M];
	int resp,i,cont;
	bool band=false;
		srand(time(NULL));	
	do{
		system("cls");
		gotoxy(10,5);printf("A.-Cargar y Mostrar 2 Vectores y su suma.");
		gotoxy(10,6);printf("B.-Cargar y Mostrar Matriz de 15x15");
		gotoxy(10,7);printf("C.-Cargar Vector con numeros impares");
		gotoxy(10,8);printf("D.-Ordenar el Vector");
		gotoxy(10,9);printf("E.-Ordenar La matriz");
		gotoxy(10,10);printf("F.-Salir");

		resp=getch();
		system("cls");
		switch(resp){	
				case 'a':{
					vector(V);	
					gotoxy(5,24);system("pause");
					break;
				}
				case 'b':{
					matriz(mat);
					gotoxy(5,24);system("pause");
					break;
				}
				case 'c':{
					vector_imp(V);
					gotoxy(5,24);system("pause");
					break;
				}
				case 'd':{
					gotoxy(10,5);printf("A.-Llenar Vector.");
					gotoxy(10,6);printf("B.-Menor a Mayor.");
					gotoxy(10,7);printf("C.-Mayor a Menor.");
					gotoxy(10,8);printf("D.-Regresar al Menu Anterior.");
						resp=getch();
						system("cls");
						switch(resp){
							case 'a':{
								cont=2;
								ordenar(V,cont);
								gotoxy(5,5);printf("Vector Cargado");
								gotoxy(5,7);system("pause");
								break;
							}
							case 'b':{
								cont=1;
								ordenar(V,cont);
								gotoxy(5,24);system("pause");
								break;
							}
							case 'c':{
								cont=0;
								ordenar(V,cont);
								gotoxy(5,24);system("pause");
								break;
							}
							case 'd':{
								break;
							}
							default:{
								system("cls");
								gotoxy(5,2);printf(" OPCION INVALIDA ");
								gotoxy(5,4);system("pause");
								system("cls");
								break;
							}
						
						}
					break;
				}
				case 'e':{
					break;
				}
				case 'f':{
					system("cls");
					band=true;
					break;
				}
				default:{
					system("cls");
					gotoxy(5,2);printf(" OPCION INVALIDA ");
					gotoxy(5,4);system("pause");
					system("cls");
					break;
				}
		}
	
	}while(band!=true);

	return 0;
}//main
void vector_imp(int V[N]){
	int i;
	for(i=0;i<N;i++){
		V[i]=rand()%1000;
			while(V[i]%2!=1){
				V[i]=rand()%1000;
			}
		printf("\t%d",V[i]);
		printf("\n");
	}
	
}
void vector(int V[N]){
	int i;
	int V_1[52],V_2[52],V_final[52];
	gotoxy(5,1);printf("Vector A");
	gotoxy(15,1);printf("Vector B");
	gotoxy(25,1);printf("Vector C");
			for(i=0;i<N;i++){
				V[i]=500+rand()%500;
				V_1[i]=V[i];
				printf("\n\t%d",V[i]);
				printf("  +");
				V[i]=500+rand()%500;
				V_2[i]=V[i];
				printf("  %d",V[i]);
				printf("    =");
				V_final[i]=V_1[i]+V_2[i];
				printf("  %d",V_final[i]);
			}
}
void ordenar(int V[N],int cont){
	int i,j,menor=0,mayor=999;
	if(cont==2){
		for(i=0;i<N;i++){
			V[i]=500+rand()%500;
		}
	}
	if(cont==1){
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(V[i]<V[j]){
					menor=V[i];
					V[i]=V[j];
					V[j]=menor;
				}	
			}	
		}
		printf("\n");
		for(i=0;i<N;i++){
			printf("\t%d",V[i]);
			printf("\n");
		}
	}
	
	if(cont==0){
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(V[i]>V[j]){
					mayor=V[i];
					V[i]=V[j];
					V[j]=mayor;
				}	
			}	
		}
		printf("\n");
		for(i=0;i<N;i++){
			printf("\t%d",V[i]);
			printf("\n");
		}
	}
}
void matriz(int mat[][M]){
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			mat[i][j]=100+rand()%200;
		}
	}
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("%4d",mat[i][j]);
		
		}	
			printf("\n");
	}
}

void color(int x){
	
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle,x);
	
}

void gotoxy(int x,int y){  

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X= x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
    
}
