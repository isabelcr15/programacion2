#include <stdlib.h>
#include <stdio.h>

int main()
{
    float m, f, p, a=3.281, b=39.37;
    
    printf("Digite el valor en metros que desea convertir: ");
    scanf("%f", &m);
    
    f=m*a;
    p=m*b;
    
    printf("\nLa conversion a pies es: %f",f);
    printf("\n\nLa conversion a pulgadas es: %f",p);
    
    return 0;
}