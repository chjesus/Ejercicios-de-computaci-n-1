#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
void gotoxy(int x,int y);

int main(){
	int hip,Cat_o,Cat_a,med_tot,medl;
	char resp;
do{
		gotoxy(5,1);printf("Saber que tipo de Triangulo es");
		gotoxy(2,3);printf("Ingrese la Medida del Triangulo/la Hipotenusa: ");
		scanf("%d",&hip);
		gotoxy(2,4);printf("Ingrese la Medida del Triangulo/Cateto Opuesto: ");
		scanf("%d",&Cat_o);
		gotoxy(2,5);printf("Ingrese la Medida del Triangulo/Cateto Adyacente: ");
		scanf("%d",&Cat_a);
				
			if(hip==Cat_o && hip==Cat_a && Cat_o==Cat_a){
				system("cls");
				gotoxy(2,2);printf("El Triangulo es Equilatero");	
			}else
			if(hip==Cat_o || hip==Cat_a || Cat_o==Cat_a){
				system("cls");
				gotoxy(2,2);printf("\n\t El Triangulo es Isosceles");	
			}else
			if(hip!=Cat_o && hip!=Cat_a && Cat_o!=Cat_a){
				system("cls");
				gotoxy(2,2);printf("El Triangulo es Escaleno");
			}else{
				system("cls");
				gotoxy(2,2);printf("El Triangulo no es ninguno de los anteriores");
			}
						   	 		
		gotoxy(6,6);printf("Desea ingresar Otras medidas?s/n: ");
		scanf("%s",&resp);	
		system("cls");
}while(resp=='s');				
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
