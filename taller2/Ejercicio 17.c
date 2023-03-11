#include <stdio.h>

int main() 
{
    int x, y, a, b, i;
    float prom, prom5;

    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    
    for (i = 1; i <= x; i++) {
        a+= 2*i;
    }
    prom = a/x;
    
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    
    for (i = 1; i <= y; i++) {
        b += 5*i;
    }
    prom5 =b/y;

    if (prom > prom5){
        printf("El promedio de los primeros %d multiplos de 2 es mayor que el promedio de los primeros %d multiplos de 5\n", x, y);
    }else if(prom == prom5){
        printf("El promedio de los primeros %d multiplos de 2 es igual que el promedio de los primeros %d multiplos de 5\n", x, y);
    }else{
        printf("El promedio de los primeros %d multiplos de 2 es menor que el promedio de los primeros %d multiplos de 5\n", x, y);
    }

    return 0;
}
