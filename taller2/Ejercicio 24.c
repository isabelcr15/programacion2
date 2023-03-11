#include <stdio.h>

int main() 
{
    int num, a, b, c,suma=0;

    printf("ingrese un numero de 3 digitos o menos: ");
    scanf("%d", &num);

    a = num/100;
    b = (num%100)/10;
    c = num%10;
    
    if(a%2 == 0){
        suma+=a;
    }
    if(b%2 == 0){
        suma+=b;
    }
    if(c%2 == 0){
        suma+=c;
    }
    if(a%2 !=0 && b%2 !=0 && c%2 != 0){
        suma=0;
        printf("%d no tiene digitos pares",num);
    }
    if(suma != 0){
        printf("La suma de los digitos pares de %d es: %d",num, suma);
    }
    return 0;
}
