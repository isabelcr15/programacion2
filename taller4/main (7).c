#include <stdio.h>

#define numeros 100

int main() {
    int vector[numeros];
    int i;
    for (i = 0; i < numeros; i++) {
        vector[i] = i + 1;
    }

    printf("Los numeros en orden descendente son:\n");
    for (i = numeros - 1; i >= 0; i--) {
        printf("%d ", vector[i]);
    }

    return 0;
}
