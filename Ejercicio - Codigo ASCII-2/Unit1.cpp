#include <conio.h> 
#include <stdio.h> 
#include <iostream>
int main(){
	char c;
	int n=0,x=0;
	
			printf("Presione la tecla para obtener su codigo ASCII");
			system("PAUSE");
			system("cls");
		do{
			c=getch();
			printf("\nHas pulsado la tecla %c Correspondiente al caracter ASCII %i", c, int(c));
		}while(n=1 ); //condicion de salida con la tecla de escape
}

