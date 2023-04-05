#include <stdio.h>

int main() {

const int limite = 50;

    int n,i;

    int V1[limite], V2[limite], resultadoV3[limite];
    
     printf("Ingrese el tamano de los vectores, no mayor a 50 : ");
    scanf("%d", &n);

    printf("Ingrese los elementos del vector uno :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &V1[i]);
    }

    printf("Ingrese los elementos del vector dos :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &V2[i]);
    }

    
    for (i = 0; i < n; i++) {
        resultadoV3[i] = V1[i] + V2[i];
    }

 
    printf("La suma es :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", resultadoV3[i]);
    }

    return 0;
}
    
