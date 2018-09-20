//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <iostream>
int main()
{
  int nsec, ccopias,numsec,s,totalD,prom,mayorP,totalcopias,total,totalhojas;
  float gasto;
  char nombre[20],nomaux[20],depa[30],depamayor[30],resp;

  mayorP=-1; //esta variable servira para encontrar el mayor promedio
  totalcopias=0;
  total=0;
  do{//el enunciado dice AL MENOS UN profesor
    printf("\t\t* CENTRO DE COPIADO UNET *\n\n");
    printf("Su nombre Profesor: ");
    fflush(stdin);//limpia el buffer del teclado
    gets(nombre);
    printf("\nSu departamento: ");
    gets(depa);
    printf("\nNumero de secciones: ");
    scanf("%d",&nsec);
    printf("\n%d Secciones: ",nsec);
    totalD=0;
    for(s=0;s<nsec;s++){ // un for que pedira dato por cada seccion
      printf("\n\n\tNumero de la Seccion: ");
      scanf("%d",&numsec);
      printf("\n\n\tCantidad de Copias de la Seccion %d: ",numsec);
      scanf("%d",&ccopias);
      printf("\n\n\tSe le entregaran %d hojas en blanco por la seccion %d.",ccopias*3,numsec);
      totalhojas+=ccopias*3;//total de hojas blancas 
      totalD+=ccopias;
    }//for
    totalcopias+=totalD;//acumula todas las copias
    printf("\n\n\tProfesor %s Se le han entregado %d copias.",nombre,totalD);
    prom=totalD/nsec;//promedio de copias por seccion
    //Encontrar el departamento al que pertence el profesor que saco mas copias en promedio
    if(prom>mayorP){
      mayorP=prom;
      strcpy(depamayor,depa);//esta funcion copia una cadena en otra, aqui se guarda el nombre del departamento
      strcpy(nomaux,nombre);
    }//if
    //Al terminar el ciclo y gracias a esta condicion, depamayor tendrá almacenado el departamento del profesor
    //-------------------------------------------------------------------------------------
  printf("\n\n\n\t\tSe encuentra algun otro profesor en espera S/N.");
  resp=tolower(getch());//la funcion tolower convierte el caracter a minuscula si esta en mayuscula
  system("cls");
  }while(resp=='s');
  printf("\n\n\t\tEstadisticas Finales. ");
  printf("\n\nEl Profesor %s del Departamento de %s saco mas copias en promedio por seccion.",nomaux,depamayor);
  gasto=totalcopias*0.150+totalhojas*0.070;
  printf("\n\nLa universidad gasto %.2f Bs.",gasto);
  printf("\n\n\n\tPresione una tecla para finalizar...");
  getch();
}//main
//---------------------------------------------------------------------------
