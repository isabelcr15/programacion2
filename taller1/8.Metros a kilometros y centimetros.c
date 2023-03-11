#include <stdlib.h>
#include <stdio.h>

int main()
{
    int m,b;
    float k, c, a=1000;
    
    printf("Digite la distancia en metros: ");
    scanf("%d",&m);
    
    k=m/a;
    b=m*100;
    printf("La distancia en kilometros es: %f", k);
    printf("\nLa distancia en centimetros es: %d",b);
    
    
    return 0;
}