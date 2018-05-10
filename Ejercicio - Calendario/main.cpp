#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 31
#define C 7
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y);

int main(){
		int d,sem,i,j,cont;
		int V_1[N];
		int a=6;
		char V[8]={'a','L','M','M','J','V','S','D'};
		
		gotoxy(2,2);printf("--Generar Calendario--");
		gotoxy(2,4);printf("Ingrese la cantidad de dias: ");
		scanf("%d",&d);
		gotoxy(2,5);printf("Ingrese el dia que desea empezar el mes 1-7: ");
		scanf("%d",&sem);
		cont=d;
		d=d-cont;
		system("cls");
			gotoxy(5,2);
			for(i=1;i<=7;i++){
				printf("%3c",V[i]);
			}
			printf("\n");printf("\n");printf("\n");

		gotoxy(5,3);
       for(i=1;i<=cont;i++){
			V_1[i]=i;
			if(V_1[i]%7!=0){
				printf("%3d",V_1[i]); 
			}
			if(V_1[i]%7==0){
				printf("%3d",V_1[i]); 
				printf("\n     ");
			}
			
       }
		

	return 0;
}
void gotoxy(int x,int y){  

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X= x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
    
}
