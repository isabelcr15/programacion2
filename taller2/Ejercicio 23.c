#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num){
    if (num < 2){
        return false;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n, suma;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    while (n > 0){
        suma += n % 10;
        n /= 10;
    }
    if (es_primo(suma)){
        printf("La suma de los digitos es un numero primo.\n");
    } else {
        printf("La suma de los digitos no es un numero primo.\n");
    }
    return 0;
}
