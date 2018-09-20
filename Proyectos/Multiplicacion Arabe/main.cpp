#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct{
	int val1=0;
	int val2=0;
}tam;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y);
void Separar(int V1[4],int V2[4],int i,int num1,int num2);
void multip(int MAT[4][4],int V1[4],int V2[4],int i,int j,int num1,int num2);
void separarM(int MAT[4][4],int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8],int VFFaux[8]);
void resultadofinal(int VF[8],int VFF[8],int VFFaux[8]);
void imprimir(int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8]);
void maveccero(int MAT[4][4],int V1[4],int V2[4],int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8],int VFF[8],int VFFaux[8]);
int main(int argc, char** argv) {
	
	int a,b,c;
	int num1,num2;
	int i,j;
	int MAT[4][4],V1[4],V2[4];
	int MATauxX[4][4];
	int MATauxY[4][4];
	int VauxX[7]={0},VauxY[7]={0};
	int VF[8]={0};
	int VFF[8]={0};
	int VFFaux[8]={0};
	char tecla,band;
	
	do{
		gotoxy(10,1);printf("-Bienvenido-");
		gotoxy(5,2);printf("Metodo de Multiplicacion Arabe!");
		gotoxy(5,4);printf("A) Multiplicar Cifra: ");
		gotoxy(5,5);printf("B) Creditos.");
		gotoxy(5,6);printf("C) Salir.");
		tecla=getch();
		switch(tecla){
			case 'a':
				system("cls");	
				do{
					gotoxy(2,2);printf("Ingrese la Primera Cifra: ");
					scanf("%d",&num1);
					gotoxy(2,3);printf("Ingrese la Segunda Cifra: ");
					scanf("%d",&num2);
				}while(num1<001 || num1>9999 || num2<001 || num2>9999);
				maveccero(MAT,V1,V2,MATauxX,MATauxY,VauxX,VauxY,VF,VFF,VFFaux);
				Separar(V1,V2,i,num1,num2);
				multip(MAT,V1,V2,i,j,num1,num2);
				separarM(MAT,MATauxX,MATauxY,VauxX,VauxY,VF,VFFaux);
				resultadofinal(VF,VFF,VFFaux);
				imprimir(MATauxX,MATauxY,VauxX,VauxY,VF);
			gotoxy(2,20);system("pause");
			system("cls");
			break;
			case 'b':
				system("cls");
				gotoxy(2,2);printf("Nombre: Jesus Antonio");
				gotoxy(2,3);printf("Apellido: Chacon Rodriguez");
				gotoxy(2,4);printf("CI: 24148477");
				gotoxy(2,5);printf("Materia: Computacion 1");
				gotoxy(2,6);printf("Seccion: ");
				gotoxy(2,7);printf("Proyecto-II Parcial");
				gotoxy(2,9);system("pause");
				system("cls");
				break;
			case 'c':
					system("cls");
					band=true;
					break;
			default:
				system("cls");
				gotoxy(5,2);printf(" OPCION INVALIDA ");
				gotoxy(5,4);system("pause");
				system("cls");
				break;
		}
	}while(band!=true);
	
	return 0;
}
void maveccero(int MAT[4][4],int V1[4],int V2[4],int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8],int VFF[8],int VFFaux[8]){
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			MAT[i][j]=0;
			MATauxX[i][j]=0;
			MATauxY[i][j]=0;
		}
	}
	for(i=0;i<4;i++){
		V1[i]=0;
		V2[i]=0;
	}
	for(i=0;i<7;i++){
		VauxX[i]=0;
		VauxY[i]=0;
	}
	for(i=0;i<8;i++){
		VF[i]=0;
		VFF[i]=0;
		VFFaux[i]=0;
	}
}
void Separar(int V1[4],int V2[4],int i,int num1,int num2){
		int a=7;
		if(num1>=001 && num1<=999){
			for(i=0;i<3;i++){
				if(i==0){
					V1[i]=(num1%100)%10;
				}
				if(i==1){
					V1[i]=(num1%100)/10;
				}
				if(i==2){
					V1[i]=num1/100;
				}
			}
			for(i=0;i<3;i++){
				gotoxy(2,a++);printf("%2d",V1[i]);
			}
			tam.val1=3;
		}		
		if(num2>=001 && num2<=999){
			for(i=0;i<3;i++){
				if(i==0){
					V2[i]=num2/100;
				}
				if(i==1){
					V2[i]=(num2%100)/10;
				}
				if(i==2){
					V2[i]=(num2%100)%10;
				}
			}
			gotoxy(5,5);
			for(i=0;i<3;i++){
				printf("%3d",V2[i]);
			}
			tam.val2=3;
		}
		a=7;
		if(num1>=0001 && num1<=9999){
			for(i=0;i<4;i++){
				if(i==0){
					V1[i]=((num1%1000)%100)%10;
				}
				if(i==1){
					V1[i]=(num1%1000)%100/10;
				}
				if(i==2){
					V1[i]=(num1%1000)/100;
				}
				if(i==3){
					V1[i]=num1/1000;
				}
			}
			for(i=0;i<4;i++){
				gotoxy(2,a++);printf("%2d",V1[i]);
			}
			tam.val1=4;
		}
		if(num2>=0001 && num2<=9999){
			for(i=0;i<4;i++){
				if(i==0){
					V2[i]=num2/1000;
				}
				if(i==1){
					V2[i]=(num2%1000)/100;
				}
				if(i==2){
					V2[i]=(num2%1000)%100/10;
				}
				if(i==3){
					V2[i]=((num2%1000)%100)%10;
				}
			}
			gotoxy(5,5);
			for(i=0;i<4;i++){
				printf("%3d",V2[i]);
			}
			tam.val2=4;
		}
}

void multip(int MAT[4][4],int V1[4],int V2[4],int i,int j,int num1,int num2){
	int x=0,a=7;
	int vaux[16]={0};


		for(i=0;i<tam.val1;i++){
			for(j=0;j<tam.val2;j++){
				vaux[x]=V1[i]*V2[j];
				x++;
			}
		}

		x=0;
		for(i=0;i<tam.val1;i++){
			gotoxy(5,a++);
			for(j=0;j<tam.val2;j++){
				MAT[i][j]=vaux[x];
				x++;
				printf("%3d",MAT[i][j]);
			}
			printf("\n");
		}
		
}
void separarM(int MAT[4][4],int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8],int VFFaux[8]){

	int i,j,x,y;

	int a=0,b,q=7;
	
		for(i=0;i<tam.val1;i++){
			for(j=0;j<tam.val2;j++){
				if(MAT[i][j]>=0 && MAT[i][j]<=99){
					MATauxX[i][j]=MAT[i][j]/10;
				}
				if(MAT[i][j]>=0 && MAT[i][j]<=99){
					MATauxY[i][j]=MAT[i][j]%10;	
				}
			}
		}

	for(i=0;i<tam.val1;i++){
		for(j=0;j<tam.val2;j++){
			if(tam.val1==3 && tam.val2>=3){
				if(i==2 && j==0){
					VauxX[0]=VauxX[0]+MATauxX[i][j];
					VauxY[0]=VauxY[0]+MATauxY[i][j];
				}
				if((i==1 && j==0) || (i==2 && j==1)){
					VauxX[1]=VauxX[1]+MATauxX[i][j];
					VauxY[1]=VauxY[1]+MATauxY[i][j];
				}
				if(i==j){
					VauxX[2]=VauxX[2]+MATauxX[i][j];
					VauxY[2]=VauxY[2]+MATauxY[i][j];
				}
				if(i==0 && j==1 || i==1 && j==2 || i==2 && j==3){
					VauxX[3]=VauxX[3]+MATauxX[i][j];
					VauxY[3]=VauxY[3]+MATauxY[i][j];
				}
				if(i==0 && j==2 || i==1 && j==3){
					VauxX[4]=VauxX[4]+MATauxX[i][j];
					VauxY[4]=VauxY[4]+MATauxY[i][j];
				}
				if(i==0 && j==3){
					VauxX[5]=VauxX[5]+MATauxX[i][j];
					VauxY[5]=VauxY[5]+MATauxY[i][j];
				}
			}
			if(tam.val1==4 && tam.val2>=3){
				if(i==3 && j==0){
					VauxX[0]=VauxX[0]+MATauxX[i][j];
					VauxY[0]=VauxY[0]+MATauxY[i][j];
				}
				if(i==2 && j==0 || i==3 && j==1){
					VauxX[1]=VauxX[1]+MATauxX[i][j];
					VauxY[1]=VauxY[1]+MATauxY[i][j];
				}
				if(i==1 && j==0 || i==2 && j==1 || i==3 && j==2){
					VauxX[2]=VauxX[2]+MATauxX[i][j];
					VauxY[2]=VauxY[2]+MATauxY[i][j];
				}
				if(i==j){
					VauxX[3]=VauxX[3]+MATauxX[i][j];
					VauxY[3]=VauxY[3]+MATauxY[i][j];
				}
				if(i==0 && j==1 || i==1 && j==2 || i==2 && j==3){
					VauxX[4]=VauxX[4]+MATauxX[i][j];
					VauxY[4]=VauxY[4]+MATauxY[i][j];
				}
				if(i==0 && j==2 || i==1 && j==3){
					VauxX[5]=VauxX[5]+MATauxX[i][j];
					VauxY[5]=VauxY[5]+MATauxY[i][j];
				}
				if(i==0 && j==3){
					VauxX[6]=VauxX[6]+MATauxX[i][j];
					VauxY[6]=VauxY[6]+MATauxY[i][j];
				}
			}
		}
	}
	
	if(tam.val1==3 && tam.val2==3){
		for(i=0;i<6;i++){
			VF[i]=VF[i]+VauxX[i];
		}x=1;
		for(i=0;i<6;i++){
			VF[x]=VF[x]+VauxY[i];
		x=x+1;
		}
	}
	if(tam.val1==3 && tam.val2==4 || tam.val1==4 && tam.val2==3){
		for(i=0;i<7;i++){
			VF[i]=VF[i]+VauxX[i];
		}x=1;
		for(i=0;i<7;i++){
			VF[x]=VF[x]+VauxY[i];
		x=x+1;
		}
	}
	if(tam.val1==4 && tam.val2==4){
		for(i=0;i<8;i++){
			VF[i]=VF[i]+VauxX[i];
		}x=1;
		for(i=0;i<8;i++){
			VF[x]=VF[x]+VauxY[i];
		x=x+1;
		}
	}
}
void resultadofinal(int VF[8],int VFF[8],int VFFaux[8]){
	int i;


	if(tam.val1==3 && tam.val2==3){
		for(i=5;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=5;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
		for(i=5;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=5;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
	}
	if(tam.val1==3 && tam.val2==4 || tam.val1==4 && tam.val2==3){
		for(i=6;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=6;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
		for(i=6;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=6;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
	}
	if(tam.val1==4 && tam.val2==4){
		for(i=7;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=7;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
		for(i=7;i>=0;i--){
			VFFaux[i-1]=VF[i]/10;
			VF[i]=VF[i]%10;
		}
		for(i=7;i>=0;i--){
			VF[i]=VF[i]+VFFaux[i];
		}
	}


}
void imprimir(int MATauxX[4][4],int MATauxY[4][4],int VauxX[7],int VauxY[7],int VF[8]){
	int i,j;
	int b=7,c=20;
	for(i=0;i<tam.val1;i++){
		gotoxy(21,b++);
		for(j=0;j<tam.val2;j++) {
			printf("%2d",MATauxX[i][j]);
		}
		printf("\n");
	}b=7;
	for(i=0;i<tam.val1;i++){
		gotoxy(45,b++);
		for(j=0;j<tam.val2;j++){
			printf("%2d",MATauxY[i][j]);
		}                             
	}
	
	
		if(tam.val1==3 && tam.val2==3){
			gotoxy(c++,12);
			for(i=0;i<5;i++){
				printf("%3d",VauxX[i]);
			}c=44;
			gotoxy(c++,12);
			for(i=0;i<5;i++){
				printf("%3d",VauxY[i]);
			}
		}c=20;
		if(tam.val1==3 && tam.val2==4 || tam.val1==4 && tam.val2==3){
			gotoxy(c++,12);
			for(i=0;i<6;i++){
				printf("%3d",VauxX[i]);
			}c=44;
			gotoxy(c++,12);
			for(i=0;i<6;i++){
				printf("%3d",VauxY[i]);
			}
		}c=20;
		if(tam.val1==4 && tam.val2==4){
			gotoxy(c++,12);
			for(i=0;i<7;i++){
				printf("%3d",VauxX[i]);
			}c=44;
			gotoxy(c++,12);
			for(i=0;i<7;i++){
				printf("%3d",VauxY[i]);
			}
		}

	c=20;
	gotoxy(2,15);printf("Resultado Final!");
	if(tam.val1==3 && tam.val2==3){
		gotoxy(c++,15);
		for(i=0;i<6;i++){
			printf("%3d",VF[i]);
		}	
	}c=20;
	if(tam.val1==3 && tam.val2==4 || tam.val1==4 && tam.val2==3){
		gotoxy(c++,15);
		for(i=0;i<7;i++){
			printf("%3d",VF[i]);
		}
	}c=20;
	if(tam.val1==4 && tam.val2==4){
		gotoxy(c++,15);
		for(i=0;i<8;i++){
			printf("%3d",VF[i]);
		}	
	}
}
void gotoxy(int x,int y){  

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X= x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
    
}
