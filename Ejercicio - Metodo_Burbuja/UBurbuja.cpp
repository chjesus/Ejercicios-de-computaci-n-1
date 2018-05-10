//---------------------------------------------------------------------------
#pragma hdrstop
//---------------------------------------------------------------------------
#pragma argsused
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <time.h>
#define TAM 15
int main()
{
   int V[TAM],O[TAM];
   int i,j,temp;
   srand(time(NULL));
   for (i=0; i<TAM; i++){
    V[i]=(rand()%300)+100;
    O[i]=V[i]; //obtengo una copia del vector
   }//i

   //uso del metodo de la burbuja para ordenar el vector
   for(i=0; i<TAM; i++){
    for(j=0 ; j<TAM - 1; j++){
      if (V[j] > V[j+1]){
        temp = V[j];
        V[j] = V[j+1];
        V[j+1] = temp;
      }
    }//j
   }//i

   system("cls");
   printf("\n\tVector Original\t\tVector Ordenado\n\n");
   for (i=0; i<TAM; i++){
    printf("\n\t\t%d\t\t\t%d",O[i],V[i]);
   }//i

   printf("\n\n\t\tPresiona una tecla para salir.");
   getch();
}//main
//---------------------------------------------------------------------------
 
