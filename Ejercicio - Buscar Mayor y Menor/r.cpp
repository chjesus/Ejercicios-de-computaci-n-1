#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
#define T 100
int main()
{
    int A[T],PMayor[T],PMenor[T];
    int i,mayor,menor,cmen,cmay;
    mayor=-1;
    menor=2000;
    srand (time(NULL)); //funciona como el randomize
    //cargo el vector y de una vez busco el mayor y el menor
    for(i=0;i<T;i++){
      A[i]=rand()%1000;
      if(A[i]>mayor){
        mayor=A[i];}
      if(A[i]<menor){
        menor=A[i];}                                                    
    }
    cmen=0; cmay=0;
    //Almaceno en un vector las posiciones donde se encuentra el mayor y el menor
    for(i=0;i<T;i++){
      if(menor==A[i]){
        PMenor[cmen]=i;
        cmen++;                                
      }                  
      if(mayor==A[i]){
        PMayor[cmay]=i;
        cmay++;                                
      }                  
    }
    printf("\n\nEl numero menor = %d se encuentra en las siguientes posiciones: \n",menor);
    for(i=0;i<cmen;i++){
      printf(" %d ",PMenor[i]);                                                           
    }
    printf("\n\n\nEl numero mayor = %d se encuentra en las siguientes posiciones: \n",mayor);
    for(i=0;i<cmay;i++){
      printf(" %d ",PMayor[i]);                                                           
    }
    printf("\n\n"); 
    system("PAUSE");
}
