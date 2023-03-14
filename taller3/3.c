#include <stdio.h>

int ASCII(int num){
	
	if(num < 256){
		printf("%d corresponde a: %c", num, num);
	}
}

int main(){
	
	int num;
	
	printf("Ingrese un numero menor a 256: ");
	scanf("%d", &num);
	
	int a = ASCII(num);
	
	return 0;
}
