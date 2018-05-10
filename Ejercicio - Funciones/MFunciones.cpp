#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
//prototipos de funciones
int suma(int a,int b);
void resta(int a,int b);
int main()
{
    int x,y,resul;   
    char r;
    printf("\n\t\t** SUMAR DOS NUMEROS **\n\n"); 
    printf("\tValor de A: ");
    scanf("%d",&x);
    printf("\n\tValor de B: ");
    scanf("%d",&y);
    //varias formas de llamar la funcion
    resul=suma(x,y);
    printf("\n\n\tForma 1. Resultado = %d",resul);
    printf("\n\n\tForma 2. Resultado = %d",suma(x,y));
    printf("\n\n\tForma 3. Usando constantes como parametros. Resultado = %d",suma(100,50));    
    printf("\n\n\t\t\t");
    system("PAUSE");
    
    printf("\n\t\t** RESTAR DOS NUMEROS **\n\n"); 
    printf("\tValor de A: ");
    scanf("%d",&x);
    printf("\n\tValor de B: ");
    scanf("%d",&y);
    //varias formas de llamar la funcion
    resta(x,y);
    printf("\n\n\tUsando Constantes...\n\n");
    resta(500,300);
    printf("\n\n\t\t\t");
    system("PAUSE");
    return EXIT_SUCCESS;
}

int suma(int a,int b){
  return(a+b);  
}//suma
void resta(int a,int b){

    int r;
    r=a-b;
    printf("\n\tResultado Resta = %d",r);
    
}//resta
