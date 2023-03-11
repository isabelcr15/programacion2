#include <stdio.h>

int main()
{
    int num, i, resultado=1, a, promedio;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
        
        resultado=resultado*i;
        printf("El factorial de %d es: %d\n",i,resultado);
        a=a+resultado;
    }
        promedio=a/num;
        printf("El promedio de los factoriales es: %d", promedio);
    return 0;
}
