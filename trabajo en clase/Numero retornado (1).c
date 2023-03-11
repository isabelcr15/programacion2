#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, p, u, a, b, c;
    
    printf("Digite un numero de tres digitos: ");
    scanf("%d", &n);
    
    p=n/100;
    u=n%100;
    a=n/100;
    b=u/10;
    c=u%10;
    
    printf("Los primeros digitos son: %d%d",p,b);
    printf("\nLos dos ultimos digitos son: %d",u);
    printf("\nEl primer digito es: %d",a);
    printf("\nEl segundo digito es: %d",b);
    printf("\nEl tercer digito es: %d",c);
    
    return 0;
}
