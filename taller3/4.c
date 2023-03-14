#include <stdio.h>

int ASCII(char caracter){
	
	if(caracter < 256){
		printf("\n%c corresponde a: %d\n", caracter, caracter);
	}
}

int main(){
	
	char caracter;
	
	printf("Ingrese un caracter: ");
	scanf("%c", &caracter);
	
	int a = ASCII(caracter);
	
	return 0;
}
