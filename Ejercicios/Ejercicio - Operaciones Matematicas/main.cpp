#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y);
void sumar(int &res,int a,int b);
void restar(int &res,int a,int b);
void multiplicar(int &res,int a,int b);
void dividir(float &res1,int a,int b);
int main(){
	int option,a,b,res;
	float res1;
	char resp;
		do{	
		system("cls");
			gotoxy(10,2);printf("Menu");
			gotoxy(8,3);printf("--------------------------------");
			gotoxy(10,4);printf("1-Sumar");
			gotoxy(10,5);printf("2-Restar");
			gotoxy(10,6);printf("3-Multiplicar");
			gotoxy(10,7);printf("4-Dividir");
			gotoxy(10,8);printf("5-Salir");
			gotoxy(8,9);printf("---------------------------------");
			gotoxy(10,10);printf("Elija la opcion que quieres realizar (1-5): ");
			scanf("%d",&option);
			switch(option){
			
					case 1 : 	
						sumar(res,a,b);
						break;	
					case 2 : 
						restar(res,a,b);
						break;
					case 3 : 
						multiplicar(res,a,b);
						break;

					case 4 : 
						dividir(res1,a,b);
						break;
					default:
						break;	
			}
		}while(option!=5);
	
	return 0;
	
}
void sumar(int &res,int a,int b){
	printf("\n Ingrese Valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese Valor de b: ");
	scanf("%d",&b);
	system("cls");
	res=a+b;
	printf("\n Respuesta: %d\n",res);	
	system("pause");
}
void restar(int &res,int a,int b){
	printf("\n Ingrese Valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese Valor de b: ");
	scanf("%d",&b);
	system("cls");
	res=a-b;
	printf("\n Respuesta: %d\n",res);
	system("pause");
}
void multiplicar(int &res,int a,int b){
	printf("\n Ingrese Valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese Valor de b: ");
	scanf("%d",&b);
	system("cls");
	res=a*b;
	printf("\n Respuesta: %d\n",res);
	system("pause");
}
void dividir(float &res1,int a,int b){
	printf("\n Ingrese Valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese Valor de b: ");
	scanf("%d",&b);
		while(b==0){
			printf("\n Error");		
			printf("\n Ingrese Valor de b: ");
			scanf("%d",&b);
		}
	system("cls");
	res1=(float)(a)/(float)(b);
	printf("Respuesta: %.3f\n",res1);
	system("pause");
}

void gotoxy(int x,int y){  

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X= x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
    
}
