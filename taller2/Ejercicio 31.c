#include <stdio.h>

int main()
{
    int num, i, suma, prom, a, b;
    do{
    printf("Ingrese un numero de 3 digitos (ingrese 0 para terminar)");
    scanf("%d", &num);
    a=num%100;
    b=a%10;
    if (num != 0 && b==5){
        suma+=num;
        i++;
    }
    }while(num!=0);
    prom=suma/i;
    printf("El promedio de los numeros terminados en 5 es: %d",prom);
    return 0;
}
