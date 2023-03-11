#include <stdio.h>

int main()
{
    int n1, n2, s, r, m;
    float d;
    
    printf("Digite el primer numero: ");
    scanf("%d", &n1);
    
    printf("Digite el segundo numero: ");
    scanf("%d", &n2);
    
    s=n1+n2;
    r=n1-n2;
    m=n1*n2;
    d=n1/n2;
    
    printf("\nLa suma de los numeros es: %d", s);
    printf("\nLa resta de los numeros es: %d", r);
    printf("\nLa multiplicacion de los numeros es: %d", m);
    printf("\nLa division de los numero es: %f", d);
    
    
    return 0;
}