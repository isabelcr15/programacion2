#include <stdlib.h>
#include <stdio.h>

int main()
{
    int s;
    float d;
    double n=2.85714285714;
    printf("Los segundos del auto son: ");
    scanf("%d", & s);
    
    d=n*s;
    printf("La distancia en kilometros recorrida por el auto es de: %f", d);
    
    return 0;
}