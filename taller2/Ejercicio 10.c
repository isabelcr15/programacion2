#include <stdio.h>

int main()
{
    int num, suma,i,a;

    printf( "ingrese un numero: " );
    scanf( "%d", &num);
    
    for(i=1;i<=num;i++){
        suma+=i;
    }
    printf( "La suma es: %d", suma );
    
    return 0;
}