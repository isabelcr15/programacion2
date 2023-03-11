#include <stdio.h>

int main()
{
    int divisores, num,i;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
        if(num%i==0){
            divisores=i;
            printf("%d es divisible por: %d\n",num, divisores);
        }
    }

    return 0;
}
