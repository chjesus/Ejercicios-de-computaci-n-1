#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mapa(char V[10]);
void ganar(char V[10],int cont,int i,int j);
void jugador_1(char V[10]);
void jugador_2(char V[10],char resp);
void jugar(char V[10],char resp,int cont,int i,int j);
int main(){
	
	char V[10]={'0','1','2','3','4','5','6','7','8','9'};
	char resp;
	int cont=0,i,j;
	printf("\n\n Desea jugar contra la computadora? S/N: ");
	scanf("%c",&resp);
	do{
		mapa(V);	
		jugador_1(V);
			if(V[1]==V[2] && V[2]==V[3] && V[1]==V[3]){	
					cont=1;
					i=1;
					break;
			}
			if(V[4]==V[5] && V[5]==V[6] && V[4]==V[6]){		
					cont=1;
					i=1;
					break;
			}
			if(V[7]==V[8] && V[8]==V[9] && V[7]==V[9]){		
					cont=1;
					i=1;
					break;
			}
			if(V[1]==V[4] && V[4]==V[7] && V[1]==V[7]){		
					cont=1;
					i=1;
					break;
			}	
			if(V[2]==V[5] && V[5]==V[8] && V[2]==V[8]){		
					cont=1;
					i=1;
					break;
			}
			if(V[3]==V[6] && V[6]==V[9] && V[3]==V[9]){		
					cont=1;
					i=1;
					break;
			}
			if(V[1]==V[5] && V[5]==V[9] && V[1]==V[9]){		
					cont=1;
					i=1;
					break;
			}
			if(V[3]==V[5] && V[5]==V[7] && V[3]==V[7]){		
					cont=1;
					i=1;
					break;
			}
			if(V[1]!='1' && V[2]!='2' && V[3]!='3' && V[4]!='4' && V[5]!='5' && V[6]!='6' && V[7]!='7' && V[8]!='8' && V[9]!='9'){
				cont=0;
				break;
			}else{
				cont=-1;
			}
		mapa(V);
		jugador_2(V,resp);
			if(V[1]==V[2] && V[2]==V[3] && V[1]==V[3]){	
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[4]==V[5] && V[5]==V[6] && V[4]==V[6]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[7]==V[8] && V[8]==V[9] && V[7]==V[9]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[1]==V[4] && V[4]==V[7] && V[1]==V[7]){		
					cont=1;
					j=1;
					i=0;
					break;
			}	
			if(V[2]==V[5] && V[5]==V[8] && V[2]==V[8]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[3]==V[6] && V[6]==V[9] && V[3]==V[9]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[1]==V[5] && V[5]==V[9] && V[1]==V[9]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[3]==V[5] && V[5]==V[7] && V[3]==V[7]){		
					cont=1;
					j=1;
					i=0;
					break;
			}
			if(V[1]!='1' && V[2]!='2' && V[3]!='3' && V[4]!='4' && V[5]!='5' && V[6]!='6' && V[7]!='7' && V[8]!='8' && V[9]!='9'){
				cont=0;
				break;
			}else{
				cont=-1;
			}
	}while(cont==-1);
	ganar(V,cont,i,j);
	return 0;
}
void ganar(char V[10],int cont,int i,int j){
		
		if(cont==1 && i==1){
			printf("\n\n Player 1 Win");
		}else
		if(cont==1 && j==1){
			printf("\n\n Player 2 Win");
		}else{
			printf("\n\n Empate");
		}
}
void jugador_1(char V[10]){
	int pos_1,i;
	
	printf("\n\n Jugador 1 Eliga tu posicion: ");
	scanf("%d",&pos_1);
			if(V[pos_1]=='X' || V[pos_1]=='O'){
				printf("\n\n Cazilla Usada");
				jugador_1(V);
			}
		V[pos_1]='X';
		mapa(V);
}
void jugador_2(char V[10],char resp){
	int pos_2;
	srand(time(NULL));
	
	if(resp=='N' || resp=='n'){	
		printf("\n\n Jugador 2 Eliga tu posicion: ");
		scanf("%d",&pos_2);
	}else{	
	/*CUANDO SE ESTA JUGANDO CON LA "COMPUTADORA" NUMERO RANDOM DE TANTO ITENTO AVECES LLEGA AL PUNTO DE SOBREESCRIBIR SOBRE UNA CASILLA
	  USADA*/
		printf("\n\n Turno de la Computadore Eliga posicion: ");
		pos_2=1+rand()%9;
	}
			if(V[pos_2]=='X' || V[pos_2]=='O'){
				printf("\n\n Cazilla Usada");
				jugador_2(V,resp);
			}
		V[pos_2]='O';
		mapa(V);
}
void mapa(char V[10]){
	system("cls");
	printf("\n\tTic Tac Toe \n");
	printf("\tPlayer 1: X || Player 2: O \n\n");	
	printf("\t %c | %c | %c",V[1],V[2],V[3]);
	printf("\n");
	printf("\t ----------");
	printf("\n");
	printf("\t %c | %c | %c",V[4],V[5],V[6]);
	printf("\n");
	printf("\t ----------");
	printf("\n");
	printf("\t %c | %c | %c",V[7],V[8],V[9]);
}
