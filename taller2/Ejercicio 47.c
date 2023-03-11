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
        printf("La suma de los factoriales comprendidos entre 1 y %d es: %d", num, a);
    return 0;
}
