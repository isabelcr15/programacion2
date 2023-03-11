#include <stdio.h>

int main()
{
    int number;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &number);
    
    for(int i = 1;i <= number; i++){
        printf("Numero: %d\n",i);
    }
    
    
    return 0;
}
