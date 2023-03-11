#include <stdlib.h>
#include <stdio.h>

int main()
{
    float g, n;
    int d, c=10273, e=19000,;
    printf("Digite la cantidad en galones que consume su automovil en 100 km: ");
    scanf("%f", &g);
    
    printf("Digite la distancia que desea recorrer: ");
    scanf("%d", &d);
    
    n=(g*d)/100;
    c=n*c;
    e=n*e;
    
    printf("\nLa cantidad de galones que necesita es: %f", n);
    printf("\n\nEl precio en gasolina corriente es: %d",c);
    printf("\n\nEl precio en gasolina extra es: %d",e);
    
    return 0;
}
    



