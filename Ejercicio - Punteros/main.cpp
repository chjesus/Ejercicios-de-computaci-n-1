#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void algo(int &x);
int main() {
	int w=7;
	algo(w);
	printf("%d",w);
	return 0;
}
void algo(int &x){
	x=18;
}
