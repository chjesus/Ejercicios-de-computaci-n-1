#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include "Windows.h"


using namespace std;
void imprimir(int mat[10][10]);
void color(int X);


int main(int argc, char *argv[])
{
    int tablero[10][10]={0};
    int x=0,y=0;
    char pos='a';
    srand(time(NULL));
    x=rand()%10;
    y=rand()%10;
    tablero[x][y]=1;
    printf("\n");                                         
    imprimir(tablero);
    while(pos!='q'){
        pos=getche();
            if(pos=='w'){
            	x--;
            }
            if(pos=='s'){
                x++;
           	}
            if(pos=='a'){
               	y--;
            }
            if(pos=='d'){
                y++;
            }
            tablero[x][y]=1;
            system("cls");
			printf("\n"); 
            imprimir(tablero);                        
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
void imprimir(int mat[10][10]){
int i,j;
	for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(mat[i][j]==1)
            color(4);
            else
            color(7);
            printf(" %d ",mat[i][j]);
        }   
        printf("\n");                                         
    }
}
void color(int X)
{
HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hConsoleHandle,X);
} 

