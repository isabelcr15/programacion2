#include <stdio.h>

int main() 
{
	int num, i;

    printf("ingrese un numero: ");
    scanf("%d",&num);

    printf("los multiplos de 5 que hay entre 1 y %d son:\n",num);

    for(i=1;i<=num;i++){
        if(i%5==0){
            printf("%d\n",i);
        }
    }
	return 0;
}