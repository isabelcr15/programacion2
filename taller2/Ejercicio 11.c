#include <stdio.h>

int main()
{
	int num, i, a, b;
	
	printf("ingrese un numero de dos digitos: ");
	scanf("%d", &num);
    a=num/10;
    b=num%10;
	printf("los numeros comprendidos entre %d y %d son: ", a, b);

	if (a < b){
        for(i=a; i<b; i++){
            printf("%d ", i);
        }
    }else{
        for (i=a; i>b; i--) {
            printf("%d ", i);
        }
    }
	
	return 0;
}