#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
void gotoxy (int x, int y){
	
	HANDLE hCon;
	COORD dwPos;
		
	dwPos.X =x;
	dwPos.Y =y;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}
struct{
char tecla=0;
	int cuerpo[200][2];
	int w=10;
	int y=12;
	int n=1,h=1;
	int tam=11,dir=2,xc=30,yc=15;
	int velocidad=100;
	int score=0;

}boo;
	
void pintar(){
	
	for(int i=2;i<78;i++){
		gotoxy(i,3);
		printf("%c",205);
		gotoxy(i,23);
		printf("%c",205);
	}
	for(int i=4;i<23;i++){
		gotoxy(2,i);
		printf("%c",186);
		gotoxy(77,i);
		printf("%c",186);
	}
		gotoxy(2,3);
		printf("%c",201);
		gotoxy(2,23);
		printf("%c",200);
		gotoxy(77,3);
		printf("%c",187);
		gotoxy(77,23);
		printf("%c",188);	
		
			
	
}
void guardar_posicion(){
	boo.cuerpo[boo.n][0]= boo.w;
	boo.cuerpo[boo.n][1]= boo.y;
	boo.n++;
		if(boo.n == boo.tam)
			boo.n=1;
	}
void pintar_cuerpo(){
	for(int i=1 ;i<boo.tam;i++){
		gotoxy(boo.cuerpo[i][0],boo.cuerpo[i][1]);
		printf("%c",254);
	}
	
}
void borrar_cuerpo(){
	for(int i=1 ;i<boo.tam;i++){
		gotoxy(boo.cuerpo[boo.n][0],boo.cuerpo[boo.n][1]);
		printf(" ");
	}
	
}

void movimiento() {
if(kbhit()){
	boo.tecla=getch();
	switch(boo.tecla){
		
	case 'H'://72ARRIBA
		boo.dir=1;	
		if(boo.dir!=2)
		break;
	case 'P'://80ABAjo
		if(boo.dir!=1)
		boo.dir=2;	
		break;
	case 'M'://77derecha
		if(boo.dir!=4)
		boo.dir=3;
	case 'K'://75 izquierda
		if(boo.dir!=3)
		boo.dir=4;			
		break;
		
	}
	}
	}

void jugar(){
	borrar_cuerpo();
	guardar_posicion();
	pintar_cuerpo();
	movimiento();
	//movimiento();
//	movimiento();

}	
void speed(){
	
	if (boo.score==boo.h*10){
		boo.velocidad-=0;
		boo.h++;
		
	}
}
void puntos(){
		gotoxy(3,1);
		printf("Puntos %i",boo.score);
		
}
void comida(){
	
	if(boo.w==boo.xc && boo.y== boo.yc)
	{
		srand(time(NULL));
		boo.xc=(rand()%73)+4;
		boo.yc=(rand()%19)+4;
		boo.tam++;
		boo.score+=1;
		gotoxy(boo.xc,boo.yc);
		printf("%c",15);
			
	}
	speed();
	puntos();
}



bool failgame(){

	
	if(  boo.y== 3|| boo.y == 23|| boo.w==2 || boo.w == 77 )
			return false;
	for	(int j=boo.tam-1;j>0;j--){
		if(boo.cuerpo[j][0] == boo.w && boo.cuerpo[j][1] ==boo. y);
		
	}
		return true;
	
		
}
int main(){
	gotoxy(boo.xc,boo.yc);
	printf("%c",15);
	
	pintar();
	
	while(boo.tecla != 27 && failgame()){
	
	jugar();
	comida();
	failgame();
	
	if(boo.dir==1)
	boo.y--;
	if(boo.dir==2)
	boo.y++;
	if(boo.dir==3)
	boo.w++;
	if(boo.dir==4)
	boo.w--;
	Sleep(boo.velocidad);
	
	}
		
	system("pause>null");
	return 0;
	
}            
