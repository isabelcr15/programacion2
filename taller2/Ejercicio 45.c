#include <stdio.h>

int main()
{
    int num,i,resultado=1;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
        
        resultado=resultado*i;
        printf("El factorial de %d es: %d\n",i,resultado);
    }
    
    return 0;
}
