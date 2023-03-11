#include <stdio.h>

int main()
{
    int num, i, suma, a;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        suma+= 3*i;
    }
    a=suma/num; 
    printf("El promedio de los primeros %d multiplos de 3 es: %d\n", num, a);

    return 0;
}