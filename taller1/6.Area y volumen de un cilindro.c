#include <stdio.h>

int main()
{
    float p=3.14159265358, r, h, a, v, n, z, b;
    
    printf("Digite el radio del cilindro: ");
    scanf("%f", &r);
    
    printf("Digite la altura del cilindro: ");
    scanf("%f", &h);
    
    b=r*r;
    z=2*p;
    n=r+h;
    a=(z*r)*n;
    
    v=(p*b)*h;
    
    printf("El area del cilindro es: %f", a);
    printf("\nEl volumen del cilindro es: %f", v);
    
    return 0;
}