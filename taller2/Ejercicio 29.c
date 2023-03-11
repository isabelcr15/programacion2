#include <stdio.h>
#include <string.h>

int main(){
	
	int num, primero;
	
	printf("ingrese un numero de 4 digitos o menos: ");
	scanf("%d", &num);
	
	if(num<100){
        primero=num/10;
	}else if(num<1000){
	    primero=num/100;
	}else if(num>999){
	    primero=num/1000;
	}
	printf("el primer digito de %d es %d", num, primero);
	
	return 0;
}
