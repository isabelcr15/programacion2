#include <stdio.h>

int potencia(int base, int exponente){
	
	int i, x = base;
	
	for(i = 1; i < exponente; i++){
		x *= base;
	}
	printf("El resultado es: %d", x);
}

int main(){
	
	int base, exponente;
	
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);
	
	int a = potencia(base, exponente);
	
	return 0;
}
