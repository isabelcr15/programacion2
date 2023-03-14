#include <stdio.h>
#include <math.h>

int aproximacion(float num){
	
	int aprox;
	float a;
	
	printf("\nDigite el tipo de aproximacion deseada 1 abajo 2 arriba: ");
	scanf("%d", &aprox);
	
	if(aprox == 1){
		a = floor(num);
		printf("\n%f redondeado hacia abajo es: %f", num, a);
	}else if(aprox == 2){
		a = ceil(num);
		printf("\n%f redondeado hacia arriba es: %f\n", num, a);
	}else{
		printf("\nLa opcion ingresada no es valida");
	}
}

int main(){
	
	float num;
	int aprox;
	
	printf("Digite el decimal que desea aproximar: ");
	scanf("%f", &num);
	
	float res = aproximacion(num);
	
	
	
	return 0;
}
