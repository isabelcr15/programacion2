#include <stdio.h>

int main()
{
   int i, number;

   for(i = 1; i <= 20; i++) {
        number+= i*3;
    }
    printf("La suma de los primeros 20 multiplos de 3 es: %d", number);

   return 0;
}