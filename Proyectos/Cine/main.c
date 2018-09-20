#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void comprarentradas(int sala[][16],int fil,int col, int cantidad);
void mostrarsala(int sala[][16]);

void main() {
	
	int sala[10][16]={2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,
					  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					  };
					  
	int fil=0,col=0,i=0;
	int cantidad=0,swiGen=0;
	int columnas[10]={0};
	int filas[16]={0};
	char resp;
	
	mostrarsala(sala);
	printf("\n");
	
	printf("Desea comprar entradas? S/N: ");
	scanf("%c",&resp);
	
	while (resp=='S'||resp=='s'){
		
	printf("Ingrese cantidad de entradas: ");
	scanf("%d",&cantidad);
	
	here:
		
	system("cls");
	mostrarsala(sala);
	
	printf("\n");

	printf("Ingrese fila: ");
	scanf("%d",&fil);
	
	printf("Ingrese butaca: ");
	scanf("%d",&col);
	
	if (sala[fil-1][col-1]==2){
		
		printf("Error! Butaca No Existe!");
		getch();
		goto here;
		
	}
	
	swiGen=comprobacion(sala,fil,col,cantidad);
	
	if(swiGen==0){
		comprarentradas(sala,fil,col,cantidad);	
		mostrarsala(sala);	
	}else{
		printf("No se puede colocar esa cantidad de entradas!");
		getch();
		goto here;
	}
		
	i++;
	
	printf("\n");
	printf("Desea comprar nuevas entradas?: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	}	
	
	printf("Gracias por su compra!");
	
	printf("\n");
	
	getch();
}


void mostrarsala(int sala[][16]){
	
	int i,j;
	int x=0,y=15;
	int a=0,b=0;
	
	system("cls");
	
	for (i=9;i>=0;i--){
		
		for (j=0;j<16;j++){
			
			if(sala[i][j]==2){
			
			printf("  ");	
							
			} else{
					
			printf("%2d",sala[i][j]);	
			
			}
			
		}
		
		printf("\n");
	}
	
}

int comprobacion(int sala[][10],int fil,int col,int cantidad){
	
	int i,j;
	int swi;
	
	
	
	
	return swi;
	
}

void comprarentradas(int sala[][16],int fil,int col, int cantidad){
	
	int aux=1;
	int i,j;
	
	sala[fil-1][col-1]=1;
	
	while(aux<cantidad){
		
		sala[fil-1][col++]=1;
		aux++;	
			
	}
	
}





