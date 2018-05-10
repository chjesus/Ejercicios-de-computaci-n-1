#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "Windows.h"
#include <time.h>

using namespace std;
void imprimir(int mat[10][10]);
void color(int X);


int main(int argc, char *argv[])
{
    int tablero[10][10]={0};
    int x=0,y=0;
    int x1=5,y1=5;
    
    char pos='a';
    srand(time(NULL));
    //imprimir(tablero);
    //x=rand()%10;
    //y=rand()%10;
    tablero[x][y]=1;
    printf("\n");                                         
    imprimir(tablero);
    while(pos!='q')
    {
                //Sleep(700);

        if (kbhit())
        {
            pos = getch();    
                   //tablero[x][y]=0;
                   if(pos=='w')
                               {
                               x--;
                               }
                   if(pos=='s')
                               {
                               x++;
                               }
                   if(pos=='a')
                               {
                               y--;
                               }
                   if(pos=='d')
                               {
                               y++;
                               }
                   tablero[x][y]=1;
                            }
                   //Sleep(500);
                   x1=rand()%10;
                   y1=rand()%10;
                   
                   tablero[x1][y1]=2;
                   
                   system("cls");
                   imprimir(tablero);
  
                               
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
void imprimir(int mat[10][10])
{
int i,j;
for(i=0;i<10;i++)
                 {
                 for(j=0;j<10;j++)
                                  {
                                  if(mat[i][j]==1)
                                  color(4);
                                  if(mat[i][j]==2)
                                  color(5);
                                  if(mat[i][j]==0)
                                  
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

