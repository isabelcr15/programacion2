#include <stdio.h>

int main() 
{
    int num, a;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    for(a=0;num != 0;a++){
        num /= 10;
    }
    printf("El numero tiene %d digitos\n", a);
    return 0;
}
