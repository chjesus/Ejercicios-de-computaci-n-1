#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
    /*
    Dada una cadena de caracteres indicar si es una dirección de email. Para ser una dirección de email 
    debe contar con las siguientes características:
    a. Debe contener un solo @.
    b. El lado izquierdo debe contener solo letras o digitos. Del lado derecho solo letras o dígitos y hasta dos puntos, 
    los cuales no pueden estar consecutivos. 
    Ejemplo: ocho0808@unet.edu.ve sería una dirección válida.
    */
    /*El ejercicio no valida ciertas cosas, por ejemplo no valida @. ni tampoco por ejemplo casa@unet. 
      Como tarea validar esos criterios, que luego del @ no exista un punto inmediatamente, o que luego de un punto deben existir caracteres   
    */
    char email[30],r;
    int band,band2;
    int i,carroba,cptos;
    int ccar;
    do{
     system("CLS"); 
     printf("Introduzca una direccion de email: ");  
     gets(email);
    //validar que la cadena contenga un solo @ y solo digitos o letras con excepción del @ y los .
    //la variable band indicara si consigue algo diferente a @, . o letras o digitos, ademas cuenta cuantos puntos y @
     band=0; band2=0;
     carroba=0; cptos=0;
     for(i=0;i<strlen(email);i++){
       if(email[i]!='@' && email[i]!='.'){
         if(isalpha(email[i])==0 && isdigit(email[i])==0){ //investigar isalpha y isdigit
           band=1;
         }//if  
       }//if
       if(email[i]=='@'){ carroba++;}                                         
       if(email[i]=='.'){ cptos++;}
       if(email[i]=='.' && cptos==1 && email[i+1]=='.'){band2=1;}//valida que no existan puntos consecutivos
     }//for
     if(band==0 && band2==0 && carroba==1 && (cptos>0 && cptos<3)){//sabiendo que solo tiene letras digitos un @ y hasta 2 ptos validar la otra condicion
       band=0; 
       cptos=0;
       for(i=0;i<strlen(email);i++){
         if(email[i]=='.'){cptos++;}
         if(email[i]=='@' && i>0 && cptos==0){//validar que antes del arroba exista solo letras y digitos
            band=1;
         }      
       }//for  
       if(band==1){
         printf("\n\n\tDireccion de email valida\n\n");  
       }
       else{ printf("\n\n\tDireccion de email invalida\n\n");  }
     }//if
     else{ printf("\n\n\tDireccion de email invalida\n\n");  }
     system("PAUSE");
     printf("\n\n\n\tDesea validar otra direccion? s/n");
     r=tolower(getch());
  }while(r=='s'); 
     return EXIT_SUCCESS;
}//main
