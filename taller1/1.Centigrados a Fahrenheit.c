#include <stdlib.h>
#include <stdio.h>

int main()
{
    float c,f;
    
    printf("Ingrese la temperatura en grados Centigrados: ");
    scanf("%f", & c);
    
    printf("La conversion a grados Fahrenheit es: %f ", (c*9/5)+32);
    

    return 0;
}
