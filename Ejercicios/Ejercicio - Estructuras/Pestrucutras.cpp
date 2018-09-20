#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
struct  persona{
  char nombre[50];
  int edad;
  int cedula;
  char carrera[50];
  };

int main()
{
    persona X;
    
    printf("\n\t\t** Listado de Personas **\n\n");
    printf("\tNombre: ");
    fflush(stdin);
    gets(X.nombre);
    printf("\n\tEdad: "); 
    scanf("%d",&X.edad);
    printf("\n\tCedula: "); 
    scanf("%d",&X.cedula);
    printf("\n\tCarrera: ");
    fflush(stdin);
    gets(X.carrera);

    if(X.edad<18){
      printf("\n\tEl estudiante es menor de edad.");        
    }
    else{
      printf("\n\tEl estudiante es mayor de edad.");              
    }
    printf("\n\n\t\t");
    system("PAUSE");
    return EXIT_SUCCESS;
}//main
