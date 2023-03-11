#include <stdio.h>

int main() 
{
    int num, a, b, c, n;

    printf("Ingrese un numero entero de tres digitos: ");
    scanf("%d", &num);

    a = num / 100; 
    b = (num % 100) / 10; 
    c = num % 10; 

    printf("Los enteros comprendidos entre 1 y %d son: ", a);
    for(n = 1; n <= a; n++){
        printf("%d ", n);
    }

    printf("\n");
    printf("Los enteros comprendidos entre 1 y %d son: ", b);
    
    for(n = 1; n <= b; n++){
        printf("%d ", n);
    }

    printf("\n");
    printf("Los enteros comprendidos entre 1 y %d son: ", c);
    
    for(n = 1; n <= c; n++){
        printf("%d ", n);
    }

    return 0;
}