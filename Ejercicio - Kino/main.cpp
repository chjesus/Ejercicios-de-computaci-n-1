#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#define N 5
#define M 3
#define P 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y);
void cargar_kino(int MAT_1[N][M]);
void imprimir(int MAT_1[N][M]);
void sorteo(int MAT_1[N][M],int V[P],int cont);

int main(){
	int MAT_1[N][M],V[P],cont=0;
	int i,j,cant;
	char resp;
	
	do{
		gotoxy(2,2);printf("Cuantos Kinos deseas Cagar?: ");
		scanf("%d",&cant);
		system("cls");
			for(i=0;i<cant;i++){
				gotoxy(3,2);printf(" Kino %d",i+1);
				cargar_kino(MAT_1);
				imprimir(MAT_1);
				sorteo(MAT_1,V,cont);
				system("cls");
			}
			gotoxy(2,2);printf("Desea participar en un nuevo sorteo s/n?: ");
			scanf("%s",&resp);
			system("cls");
	}while(resp=='s' || resp=='S');
	return 0;
}
void cargar_kino(int MAT_1[N][M]){
	int repetido,num,cont,menor=0;
	int i,j,a,b,x,y;
	
	srand(time(NULL));
		for(i=0;i<5;i++)
			for(j=0;j<3;j++){
				repetido=1;		
				while(repetido==1){
					num=rand()%25+1;
					cont=0;	
					for(a=0;a<5;a++)
						for(b=0;b<3;b++)
							if(num==MAT_1[a][b])
								cont++;
		
							if(cont==0){
							MAT_1[i][j]=num;
							repetido=0;
							}
				}
			}		
		for(i=0;i<5;i++){
			for(j=0;j<3;j++){
				for(x=0;x<5;x++){
					for(y=0;y<3;y++){
						if(MAT_1[i][j]<MAT_1[x][y]){
                        menor=MAT_1[i][j];
                        MAT_1[i][j]=MAT_1[x][y];
                        MAT_1[x][y]=menor;
                   		 }
					}
				}
			}	
		}
	
}
void imprimir(int MAT_1[N][M]){
	int i,j,a;
	a=3;	
			for(i=0;i<5;i++){
				gotoxy(2,a++);
				for(j=0;j<3;j++){
					printf("%3d",MAT_1[i][j]);
				}
				printf("\n");
			}	
}
void sorteo(int MAT_1[N][M],int V[P],int cont){
	int k,l,x,i,j;
	
	srand(time(NULL));
	gotoxy(15,5);printf("Numeros del sorteo a comparar con el kino");
	gotoxy(15,7);
			for(k=0;k<15;k++){
				x=1+rand()%15;
					if(k>0){
						for(l=0;l<k;l++){
							if(x==V[l]){ 
             					x=1+rand()%15; 
             					l=-1;                          
         					 } 
						}
					}
					V[k]=x;
					printf("%3d",V[k]);
			}

		for(i=0;i<5;i++){
			for(j=0;j<3;j++){
				if(MAT_1[i][j]==V[k]);
			}
		}
		
		for(i=0;i<5;i++){
			for(j=0;j<3;j++){
				for(k=0;k<15;k++){
					if(MAT_1[i][j]==V[k]){
						cont++;
					}
				}
			}
		}
	
			if(cont==12){
				gotoxy(15,10);printf("Acertaste 12 veces Eres ganador de 1000 bs");
				gotoxy(15,12);system("PAUSE");
			}else
				if(cont==13){
					gotoxy(15,10);printf("Acertaste 13 veces Eres ganador de 2000 bs");
					gotoxy(15,12);system("PAUSE");
				}else
					if(cont==14){
						gotoxy(15,10);printf("Acertaste 14 veces Eres ganador de 3000 bs");
						gotoxy(15,12);system("PAUSE");
					}else
						if(cont==15){
							gotoxy(15,10);printf("Acertaste 15 veces Eres ganador de 5000 bs");
							gotoxy(15,12);system("PAUSE");
						}else
							if(cont<12){
								gotoxy(15,10);printf("Perdiste");
								gotoxy(15,12);system("PAUSE");
							}
}
void gotoxy(int x,int y){  

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X= x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
    
}
