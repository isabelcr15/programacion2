#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a=1000000, c=1000, b;
    float k, g;
    
    printf("Digite la cantidad de kilobytes que desea convertir: ");
    scanf("%f",&k);
    
    g=k/a;
    b=k*c;
    
    printf("El resultado de la conversion a Gigabytes es: %f", g);
    printf("\nEl resultado de la conversion a Bytes es: %d", b);
    
    return 0;
}