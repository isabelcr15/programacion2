#include <stdio.h>

int main(){
	
	int num;
	printf("ingrese un numero: ");
	scanf("%d", &num);
	
	printf("los componentes numericos de %d son: ", num);
	
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			printf("\n%d", i);
		}
	}
	return 0;
}
