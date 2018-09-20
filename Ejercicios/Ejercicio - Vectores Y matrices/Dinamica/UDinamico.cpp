#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *vector,**matriz;
    int t,fil,col,x,y;
    printf("\n\tCuantos elementos tiene el vector? ");
    scanf("%d",&t);
    vector=new int [t]; //asignacion de memoria al puntero
    //uso del vector
    for(x=0;x<t;x++){
      vector[x]=x+1;  
    }
    system("CLS");
    for(x=0;x<t;x++){
      printf("\n%d", vector[x]);  
    }
    delete(vector);
    //ahora la matriz
    printf("\n\tCuantas Filas? ");
    scanf("%d",&fil);
    printf("\n\tCuantos Columnas? ");
    scanf("%d",&col);
    
    matriz=new int *[fil];  
    for(x=0;x<fil;x++){
      matriz[x]=new int [col];  
    }  
   //----uso matriz
   t=100;
   for(x=0;x<fil;x++){
    for(y=0;y<col;y++){
      matriz[x][y]=t;
      t++;
      }   
   }
  for(x=0;x<fil;x++){
    printf("\n");
    for(y=0;y<col;y++){
      printf(" %d ",matriz[x][y]);
 
      }   
   }
  delete(matriz);
    printf("\n\n\n\t");
    system("PAUSE");
    return EXIT_SUCCESS;
}
