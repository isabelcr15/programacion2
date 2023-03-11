#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, n, d;
    
    printf("Digite el valor de x1: ");
    scanf("%d", &x1);
    
    printf("Digite el valor de y1: ");
    scanf("%d", &y1);
    
    printf("Digite el valor de x2: ");
    scanf("%d", &x2);
    
    printf("Digite el valor de y2: ");
    scanf("%d", &y2);
    
    n=y2-y1;
    d=x2-x1;
    
    printf("El numerador de la pendiente es: %d", n);
    printf("\nEl denominador de la pendiente es: %d", d);
    
    
    return 0;
}