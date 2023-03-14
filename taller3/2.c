#include <stdio.h>
#include <math.h>

int pot(int base, int exponente){
	
	int potencia;
	
	potencia = pow(base, exponente);
}

int main(){
	
	int base, exponente, a;
	
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);
	
	a = pot(base, exponente);
	
	printf("\nEl resultado de la potencia de base %d y exponente %d es: %d", base, exponente, a);
	
	return 0;
}
