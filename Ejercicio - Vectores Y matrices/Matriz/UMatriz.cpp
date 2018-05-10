#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define F 10
#define C 10
int main(){
     
    int mat[F][C];
    int i,j,c;
    //cargar la matriz de números aleatorios 
    for(i=0;i<F;i++){
      for(j=0;j<C;j++){
        mat[i][j]=(rand()%100)+100;            
      }//for                 
    }//for
    printf("\nMatriz cargada con numeros aleatorios.\n\n");
    for(i=0;i<F;i++){
      printf("\n");               
      for(j=0;j<C;j++){
        printf(" %d ",mat[i][j]);            
      }//for                 
    }//for
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    //cargar la matriz por filas con números consecutivos
    printf("\nMatriz cargada por filas con numeros consecutivos.\n\n");
    c=100;
    for(i=0;i<F;i++){
      for(j=0;j<C;j++){
        mat[i][j]=c;
        c++;            
      }//for                 
    }//for
    for(i=0;i<F;i++){
      printf("\n");               
      for(j=0;j<C;j++){
        printf(" %d ",mat[i][j]);            
      }//for                 
    }//for
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    //cargar la matriz por columnas con números consecutivos
    printf("\nMatriz cargada por columnas con numeros consecutivos.\n\n");
    c=100;
    for(i=0;i<F;i++){
      for(j=0;j<C;j++){
        mat[j][i]=c;
        c++;            
      }//for                 
    }//for
    for(i=0;i<F;i++){
      printf("\n");               
      for(j=0;j<C;j++){
        printf(" %d ",mat[i][j]);            
      }//for                 
    }//for
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    printf("\n\nDiagonal Principal...\n\n");
    for(i=0;i<F;i++){
      for(j=0;j<C;j++){
        if(i==j)
         mat[j][i]=1;
        else
         mat[j][i]=0;
      }//for                 
    }//for
    for(i=0;i<F;i++){
      printf("\n");               
      for(j=0;j<C;j++){
        printf(" %d ",mat[i][j]);            
      }//for                 
    }//for
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    printf("\n\nOtro ejemplo, Diagonal Principal...\n\n");
    for(i=0;i<F;i++){
      printf("\n");               
      for(j=0;j<C;j++){
        if(mat[i][j]==0)
          printf("   ");
        else
          printf(" * ");          
      }//for                 
    }//for
    printf("\n\n");
    system("PAUSE");

}//main
