#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
int N=3;
int aux3;
int aux4;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(char tecla,int mat[9][9],int mat2[9][9],int mat3[9][9]);
void matriz(int mat[9][9]);
void ordenar(int mat[9][9]);
void jugar(int mat2[9][9]);
void movimiento(char tecla,int mat[9][9],int mat2[9][9],int mat3[9][9]);
void guardar(int mat2[9][9],int mat3[9][9]);
void impr(int mat2[9][9],int mat3[9][9]);
void gotoxy(int x,int y);
void color(int x);

int main(int argc, char** argv) {
	char tecla;
	int mat[9][9]={0};
	int mat2[9][9]={0};
	int mat3[9][9]={0};
	int mr=0,ms=0;

	menu(tecla,mat,mat2,mat3);
	return 0;
}

void menu(char tecla,int mat[9][9], int mat2[9][9],int mat3[9][9]){
	bool bandera=false;
	int i;
	int x=15,y,z=4;
	do{
		x=15;
		gotoxy(22,2);printf("Bienvenido");
		for(y=0;y<24;y++){
			system("color f");gotoxy(x++,4);printf("%c",15);
		}
		z=4;
		for(y=0;y<6;y++){
			gotoxy(15,z++);printf("%c",15);
		}
		gotoxy(17,5);printf("A. Nueva partida");
		gotoxy(17,6);printf("B. Continuar partida");
		gotoxy(17,7);printf("C. Creditos");
		gotoxy(17,8);printf("D. Como Jugar?");
		gotoxy(17,9);printf("E. Salir");
		z=4;
		for(y=0;y<6;y++){
			gotoxy(39,z++);printf("%c",15);
		}
		x=15;
		for(y=0;y<25;y++){
			gotoxy(x++,10);printf("%c",15);
		}
		tecla=getch();
			switch(tolower(tecla)){
				case 'a':
					system("cls");
					matriz(mat);
					ordenar(mat);
					jugar(mat2);
					movimiento(tecla,mat,mat2,mat3);
					gotoxy(6,12);
					system("cls");
					break;
				case 'b':
					system("cls");
					impr(mat2,mat3);
					system("cls");
					jugar(mat2);
					movimiento(tecla,mat,mat2,mat3);
					gotoxy(6,12);
					system("cls");
					break;
				case 'c':
					system("cls");
					gotoxy(5,2);printf("Desarrollado por:");
						x=8;
						for(y=0;y<30;y++){
							gotoxy(x++,3);printf("%c",196);
						}
					gotoxy(8,4);printf("Jesus Antonio Chacon Rodriguez");
					gotoxy(8,5);printf("C.I. 24.148.477");
					gotoxy(8,6);printf("Seccion 17");
						x=8;
						for(y=0;y<30;y++){
							gotoxy(x++,7);printf("%c",196);
						}
					gotoxy(8,9);
					system("pause");
					system("cls");
					break;
				case 'd':
					system("cls");
					gotoxy(5,2);printf("1- Use las %c %c %c %c de Direccion del teclado!",24,25,26,27);
					gotoxy(5,3);printf("2- Use W A S D para moverse!");
					gotoxy(5,4);printf("3- La Tecla 'T' para Comprobar si Ganastes!");
					gotoxy(5,5);printf("4- La Tecka 'F' para Guardar la Partida!");
					gotoxy(5,6);printf("5- Usar los numeros del 1-9 para llenar la Matriz!");
					gotoxy(8,9);system("pause");
					system("cls");
					break;	
				case 'e':
					system("cls");
					bandera=true;
					break;
				default:
					system("cls");
					gotoxy(5,2);printf(" OPCION INVALIDA ");
					gotoxy(5,4);system("pause");
					system("cls");
					break;
			}
	}while(bandera!=true);
}
void matriz(int mat[9][9]){
	int i,j;
	int cont1=0;
	int a=15;
		//gotoxy(10,13);printf("Matriz Resultante");
		for(i=0;i<N;i++){
			gotoxy(10,a++);
			cont1=i;
				for(j=0;j<N;j++){
					cont1++;
					if(i!=0 && cont1>N){
						cont1=1;
					}
					mat[i][j]=cont1;
					
				}
			printf("\n");
		}
}
void ordenar(int mat[9][9]){
	int a,b,i,j;
	int V[9];
		srand(time(NULL));
		a=rand()%N;
		b=rand()%N;
		
			for(j=0;j<N;j++){
				V[j]=mat[a][j];
				mat[a][j]=mat[b][j];
				mat[b][j]=V[j];
			}
			for(i=0;i<N;i++){
				V[i]=mat[i][a];
				mat[i][a]=mat[i][b];
				mat[i][b]=V[i];
			}
			
}
void jugar(int mat2[9][9]){
	int i,j;
	int a=6;

		gotoxy(12,3);printf("Ken-Ken");
		for(i=0;i<N;i++){
			gotoxy(10,a++);
			for(j=0;j<N;j++){
				if(mat2[i][j]==0){
				printf("%3d",mat2[i][j]);
				}
				if(mat2[i][j]>0 && mat2[i][j]<=N){
					printf("%3d",mat2[i][j]);
				}
				if(mat2[i][j]==9){
					printf("%3c",95);
				}
			}
			printf("\n");
		}
}

void movimiento(char tecla,int mat[9][9],int mat2[9][9],int mat3[9][9]){
	int x,y,i,j,q;
	int m,s,mr,sr;
	int aux,aux2;
	int cont=0;
	int p=N*60;
	int br,br2;
	x=0;
	y=0;
	time_t assed_time,start_time,current_time,passed_time;
	
	time(&start_time);
	q=tecla;
	while(tecla!='z' || tecla!='Z'){
		if(q=='a' || q=='b'){
			time(&current_time);
			passed_time=current_time-start_time;
			m=(p-passed_time)/60;
			s=(p-passed_time)%60;
			gotoxy(2,5); printf(" %02d:%02d ",m,s);
			}
		/*if(tecla=='b'){
			time(&current_time);
			assed_time=current_time-start_time-aux3;
			passed_time=current_time-start_time-aux4;
			m=(p-assed_time)/60;
			s=(p-passed_time)%60;
			gotoxy(3,5); printf(" %02d:%02d ",m,s);
		}*/
		if(m==0 && s==0){
			gotoxy(6,9);printf("Se agoto el tiempo");
			N=3;
			break;
		}
		if(kbhit()){
		tecla=getch();
		mat2[x][y]=0;
			if((tecla==72 || tecla==119 || tecla==87)&& x!=0){
				aux=mat2[x-1][y];
				x-=1;
				mat2[x+1][y]=aux2;
				mat2[x][y]=9;
				system("cls");
				jugar(mat2);
				aux2=aux;
			}
			if((tecla==80 || tecla==115 || tecla==83) && x!=N-1){
				aux=mat2[x+1][y];
				x+=1;
				mat2[x-1][y]=aux2;
				mat2[x][y]=9;
				system("cls");
				jugar(mat2);
				aux2=aux;
			}
			if((tecla==77 || tecla==100 || tecla==68) && y!=N-1){
				aux=mat2[x][y+1];
				y+=1;
				mat2[x][y-1]=aux2;
				mat2[x][y]=9;
				system("cls");
				jugar(mat2);
				aux2=aux;
			}
			if((tecla==75 || tecla==97 || tecla==65) && y!=0){
				aux=mat2[x][y-1];
				y-=1;
				mat2[x][y+1]=aux2;
				mat2[x][y]=9;
				system("cls");  
				jugar(mat2);
				aux2=aux;
			}
			if(tecla>48 && tecla <=48+N){
				aux2=tecla-48;
				mat2[x][y]=aux2;
				system("cls");
				jugar(mat2);
			}
			if(tecla==84 || tecla==116){
				aux3=m;
				aux4=s;
				guardar(mat2,mat3);
				gotoxy(10,9);printf("Partida Guardada %c",33);
				gotoxy(10,10);system("PAUSE");
				break;
			}
			if(tecla==102 || tecla==70){
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(mat2[i][j]==mat[i][j]){
							cont++;
						}
					}
				}
				printf("%d",cont);
				if(cont==(N*N)-1){
					gotoxy(10,9+4);printf("%c Gano %c",173,33);
					N+=1;
					gotoxy(10,9+5);system("PAUSE");
					system("cls");
					break;
				}if(N==9){
					gotoxy(10,9+4);printf("%c Ganador Absoluto %c",173,33);
					break;
				}
				else{
					gotoxy(10,9+4);printf("%c Siga intentando %c",173,33);
					cont=0;
				}
			}
		}
	}

}
void guardar(int mat2[9][9],int mat3[9][9]){
	int i,j;

		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				mat3[i][j]=mat2[i][j];
			}
		
	
	}
}
void impr(int mat2[9][9],int mat3[9][9]){
	int i,j;
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				mat2[i][j]=mat3[i][j];
				printf("%2d",mat2[i][j]);
			}
			printf("\n");
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
void color(int X){
HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hConsoleHandle,X);
} 
