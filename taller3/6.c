#include <stdio.h>

int rango(int num){
	
	if(num <= 255 && num >= 0){
		return 0;

	}else{
		return 1;
	}
}

int main(){
	
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);

	int a = rango(num);
	
	if(rango(num)){
		printf("\n%d no esta en rango\n", num);
	}else{
		printf("\n%d esta en rango\n", num);
	}
	
	return 0;
}
