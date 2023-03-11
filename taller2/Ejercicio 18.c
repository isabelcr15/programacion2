#include <stdio.h>

int main() 
{
    int a, b, menor, mayor;

    printf("Introduzca un numero: ");
    scanf("%d", &a);
    printf("Introduzca otro numero: ");
    scanf("%d",&b);
    
    if (a < b){
        menor = a;
        mayor = b;
    }else{
        menor = b;
        mayor = a;
    }

    printf("multiplos de 5 entre %d y %d son : ", menor, mayor);

    
    for (int i = menor; i <= mayor; i++){
        if (i % 5 == 0){
            printf("\n%d ", i);
        }
    }

    return 0;
}
