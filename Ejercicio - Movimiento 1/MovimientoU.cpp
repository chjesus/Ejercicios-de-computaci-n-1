#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
void imprimir(int m[15][15]);
void jugar(int m[15][15]);
void intro();
int main()
{
    //inicializando la matriz, los 1 representan una pared los 0 un camino
    //puedes modificar el mapa
    int mapa[15][15]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                      {1,0,0,1,0,0,0,0,0,0,1,0,0,0,1}, 
                      {1,0,0,1,0,0,0,0,0,0,1,0,0,0,1},
                      {1,0,0,1,1,1,0,0,0,0,1,0,0,0,1},                      
                      {1,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
                      {1,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
                      {1,0,0,0,0,1,0,0,0,0,1,0,0,0,1},
                      {1,0,0,0,0,1,1,1,1,0,1,0,0,0,1},
                      {1,0,0,0,0,0,0,0,1,0,1,0,0,0,1},
                      {1,0,0,0,0,0,0,0,1,0,1,0,0,0,1},
                      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                      {1,0,0,0,0,0,0,0,1,1,1,1,1,0,1},
                      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},                                                                                                                                                                                                      
                      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},                      
                      };
    intro();    
    jugar(mapa);
    printf("\n\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}//main

void imprimir(int m[15][15]){
  int x,y;
  int f,c;
  system("CLS");
  for(x=0;x<15;x++){
    printf("\n");
    for(y=0;y<15;y++){
      if(m[x][y]==0){
        printf(" ");  
      }//imprime camino  
      if(m[x][y]==1){
        printf("\25");//imprime codigo ASCII
      }//imprime pared
      if(m[x][y]==5){
        f=x; c=y;
        printf("\1");  
      }//imprime personaje
    }//y  
  }//x  
  printf("\n\n\nFila = %d Columna = %d ",f,c);
}//funcion imprimir

void jugar(int m[15][15]){
  int fil,col;
  char tecla;
  int cambio;
  //coloco el personaje en una posicion inicial
  fil=2; col=1;
  m[fil][col]=5;
  imprimir(m);    
  do{
    cambio=0;
    tecla=0;//limpio la tecla
    tecla=getch();
    //se genera el movimiento del personaje que esta en las coordenadas fil,col
    //solo puede moverse si hay un 0 en la casilla
    //el personaje esta representado por un 5
    m[fil][col]=0; // elimino el personaje de su posicion actual
    if(tecla==77){ //derecha
      if(m[fil][col+1]==0){
        col++;
        cambio=1;    
      }
    }//77
    if(tecla==75){ //izquierda
      if(m[fil][col-1]==0){
        col--;
        cambio=1;    
      }      
    }//75
    if(tecla==72){ //arriba
      if(m[fil-1][col]==0){
        fil--;
        cambio=1;    
      }      
    }//72
    if(tecla==80){ //abajo
      if(m[fil+1][col]==0){
        fil++;
        cambio=1;    
      }      
    }//77
    m[fil][col]=5;//coloco el personaje en su nueva posicion
    if(cambio==1){
      imprimir(m);
    }//if cambio de posicion imprimo
  }while(tecla!='x' && tecla!='X');
}//funcion jugar

void intro(){
  system("CLS");
  printf("\n\n\n\t\t\t*** INSTRUCCIONES ***\n");
  printf("\n\t\t1. Utiliza las teclas direccionales para mover al personaje.");
  printf("\n\t\t2. Presiona x para salir.\n");
  printf("\n\n\t\t");
  system("PAUSE");
  
}//intro
