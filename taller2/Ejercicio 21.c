#include <stdio.h>

int main() {
    int num, suma, a;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

   
    while (num > 0){
        a = num % 10;  
        suma += a;  
        num /= 10;  
    }

  
    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}
