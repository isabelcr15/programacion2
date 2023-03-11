#include <stdio.h>

int main() 
{
    int num, a, b, c;

    printf("ingrese un numero entero de 3 digitos: ");
    scanf("%d", &num);

    a = num/100;
    b = (num%100)/10;
    c = numero%10;
    
    if (a == 1 || b == 1 || c == 1){
        printf("%d contiene el digito 1", num);
    }else{
        printf("%d no contiene el digito 1", num);
    }

    return 0;
}