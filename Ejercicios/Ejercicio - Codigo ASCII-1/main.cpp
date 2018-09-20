#include <iostream>
#include<stdio.h> 
#include <windows.h>
void gotoxy(int x,int y);
int main() { 
	int cont,c,a; 

	c=0; 
		gotoxy(5,2);printf("Bienvenido a la Tabla ASCII"); 
		gotoxy(5,4);printf("Presione Enter para Iniciar"); 
		getchar(); 
		gotoxy(7,6);printf("Caracter");
		gotoxy(20,6);printf("Decimal");
		printf("\n\n");
	do{ 
		a=7;
		printf("\t%c\t\t%d\n",char(c),c); 
		c=c+1;
		if(c==8 || c==9 || c==10 || c==13){
			c=c+1;
		} 
			if (c%20==0)getchar(); 
	}while(c<256); 
	getchar(); 
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
