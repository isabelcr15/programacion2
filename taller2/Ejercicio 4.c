#include <stdio.h>

int main()
{
    int minimo, maximo,i;
    printf("Digite el minimo: ");
    scanf("%d", &minimo);
    
    printf("Digite el maximo: ");
    scanf("%d", &maximo);
    
    for(i=minimo;i<=maximo;i++){
        printf("%d\n",i);
    }
    

    return 0;
}
