#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define C 23
#define F 32
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
struct{
	int x=14;
	int y=17;
	int puntos=0;
	int vidas=3;
	int N=0;
}pacman;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void pintar_mapa(char M[C][F],char tecla);
void movimiento(char M[C][F],char tecla);
void imprimir_puntaje(char M[C][F]);
void menu(char M[C][F],char tecla);
void puntaje_pacman(char M[C][F]);
void nueva_partida(char M[C][F]);
void borrar_pacman(char M[C][F]);
void comida(char M[C][F]);
void setCColor(int color);
void gotoxy(int x,int y);
void pacma(char M[C][F]);

int backcolor=0;
int color[7]={
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F
     };
// y=11 x=1 posicion x=32
int main(){
	char tecla;
	char M[C][F]={" XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
			   	  " X-------------X-------------X",
		          " X-XXXXX-XXXXX-X-XXXXX-XXXXX-X",
		          " XYXXXXX-XXXXX-X-XXXXX-XXXXXYX",
			  	  " X---------------------------X",
				  " X-XXXXX-X-XXXXXXXXX-X-XXXXX-X",
				  " X-------X-XXXXXXXXX-X-------X",
				  " XXXXXXX-X----XXX----X-XXXXXXX",
			 	  "       X-XXXX XXX XXXX-X      ",
				  " AAAAAAX-X           X-X      ",
				  " XXXXXXX-X XXX   XXX X-XXXXXXX",
				  " --------- X       X  --------",
				  " XXXXXXX-X XXXXXXXXX X-XXXXXXX",
				  "       X-X     Z     X-X      ",
				  " XXXXXXX-X XXXXXXXXX X-XXXXXXX",
				  " X-------------X-------------X",
				  " X-XXXXX-XXXXX-X-XXXXX-XXXXX-X",
				  " XY----X---------------X----YX",
		 		  " XXXXX-X-X-XXXXXXXXX-X-X-XXXXX",
				  " X-------X-----X-----X-------X",
				  " X-XXXXXXXXXXX-X-XXXXXXXXXXX-X",
			 	  " X---------------------------X",
			 	  " XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
				};
		menu(M,tecla);
	return 0;
}
void menu(char M[C][F],char tecla){
	char bandera;
	do{ 
	
	gotoxy(10,3);printf("Pacman");setCColor(color[2]);
	gotoxy(5,5);printf("A) Nueva Partida.");
	gotoxy(5,6);printf("B) Como Jugar?.");
	gotoxy(5,7);printf("C) Salir.");
		tecla=getch();
		switch(tecla){
			case 'a':
				system("cls");
				if(pacman.puntos==1285){
					nueva_partida(M);
				}
				pintar_mapa(M,tecla);
				imprimir_puntaje(M);
				pacma(M);		
				movimiento(M,tecla);
				gotoxy(5,8);system("PAUSE");
				system("cls");
				break;
			case 'b':
				system("cls");setCColor(color[2]);
				gotoxy(10,1);printf("Instruciones");setCColor(color[2]);
				gotoxy(5,3);printf("-Usar las teclas direcionales del teclado");setCColor(color[1]);  gotoxy(45,3);printf(" %c %c %c %c",24,25,26,27);setCColor(color[2]);
				gotoxy(5,4);printf("-Usar las Teclas");setCColor(color[1]); gotoxy(20,4);printf(" W A S D");setCColor(color[2]);
				gotoxy(5,5);printf("-Recoger todos los puntos");setCColor(color[1]); gotoxy(30,5);printf(" %c %c",250,248);setCColor(color[1]);
				gotoxy(5,7);printf("%c",250);printf("= 5 Puntos");setCColor(color[1]);
				gotoxy(5,8);printf("%c",248);printf("= 10 Puntos");setCColor(color[2]);
				gotoxy(5,10);system("PAUSE");
				system("cls");
				break;
			case 'c':
				system("cls");
				bandera=3;
				break;
			default:
				system("cls");
				printf("Opcion Invalida.");
				system("PAUSE");
				system("cls");
				break;
		}
	}while(bandera!=3);
}
void pintar_mapa(char M[C][F],char tecla){
	int i,j;
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				gotoxy(i,j);
				if(M[j][i]== 'X'){
					setCColor(color[0]);
					printf("%c",219);
				}	
				if(M[j][i]== '-'){
					setCColor(color[1]); 
					printf("%c",250);
				}
				if(M[j][i]== 'B'){
					setCColor(color[1]);
					printf("%c",2);
				}
				if(M[j][i]== 'Y'){
					setCColor(color[1]);
					printf("%c",248);
				}
				if(M[j][i]== 'Z'){
					setCColor(color[3]);
					printf("%c",15);
				}
			}
		}
}
void movimiento(char M[C][F],char tecla){
	int p=pacman.N;
	int q,m,s;
	
	time_t assed_time,start_time,current_time,passed_time;
	time(&start_time);
	q=tecla;
	while(pacman.vidas>0 || pacman.puntos<500){
		if(q=='a' || q=='b'){
			time(&current_time);
			passed_time=current_time-start_time;
			m=(p+passed_time)/60;
			s=(p+passed_time)%60;setCColor(color[4]);
			gotoxy(32,8);printf("Tiempo %02d:%02d",m,s);
			}
		if(_kbhit())
			tecla=getch();
			if(tecla==IZQUIERDA || tecla== 'a' || tecla== 'A'){
				if(M[pacman.y][pacman.x-1]!= 'X'){
					borrar_pacman(M);
					pacman.x--;
					pacma(M);
					comida(M);
				}	
			}
			if(tecla==DERECHA || tecla== 'd' || tecla== 'D'){
				if(M[pacman.y][pacman.x+1]!= 'X'){
					borrar_pacman(M);
					pacman.x++;
					pacma(M);
					comida(M);
				}	
			}
			if(tecla==ABAJO || tecla== 's' || tecla== 'S'){
				if(M[pacman.y+1][pacman.x]!= 'X'){
					borrar_pacman(M);
					pacman.y++;
					pacma(M);
					comida(M);
				}
			}
			if(tecla==ARRIBA || tecla== 'w' || tecla== 'W'){
				if(M[pacman.y-1][pacman.x]!= 'X'){
					borrar_pacman(M);
					pacman.y--;
					pacma(M);
					comida(M);
				}
			}
			if(pacman.puntos==1285){
				system("cls");
				gotoxy(5,2);printf("Fin del Juego");
				gotoxy(5,4);printf("Puntacion Total %d ",pacman.puntos);
				gotoxy(5,5);printf("Vidas restantes %d ",pacman.vidas);
				gotoxy(5,6);printf("Tiempo restante %02d:%02d",m,s);
				break;
			}
	    Sleep(100);	
	}
}
void pacma(char M[C][F]){
     setCColor(color[1]);
     gotoxy(pacman.x,pacman.y);printf("%c",2);
}
void comida(char M[C][F]){
	if(M[pacman.y][pacman.x]== '-'){
		pacman.puntos+=5;
		imprimir_puntaje(M);
	}
	if(M[pacman.y][pacman.x]== 'Y'){
		pacman.puntos+=10;
		imprimir_puntaje(M);
	}
	if(M[pacman.y][pacman.x]== 'Z'){
		pacman.puntos+=50;
		imprimir_puntaje(M);
	}
}
void borrar_pacman(char M[C][F]){
     gotoxy(pacman.x,pacman.y);printf(" ");
     if(M[pacman.y][pacman.x]== '-' || M[pacman.y][pacman.x]== 'Z' || M[pacman.y][pacman.x]== 'Y'){ 
	 	M[pacman.y][pacman.x]= ' '; 
	 }
}
void imprimir_puntaje(char M[C][F]){
	setCColor(color[2]);
	gotoxy(32,2);printf("Pacman");setCColor(color[4]);
	gotoxy(32,4);printf("Puntos: %d",pacman.puntos);setCColor(color[4]);
	gotoxy(32,6);printf("Vidas:  %d %c",pacman.vidas,2);setCColor(color[4]);
}
void setCColor(int color){
        static HANDLE hConsole;
        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );
}
void nueva_partida(char M[C][F]){
	if(M[pacman.y][pacman.x]== ' '){
		M[pacman.y][pacman.x]= '-';
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
