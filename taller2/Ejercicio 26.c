#include <stdio.h>

int main() 
{
    int num, a, b, c,suma,res;

    printf("ingrese un numero de 3 digitos: ");
    scanf("%d", &num);

    a = num/100;
    b = (num%100)/10;
    c = num%10;
    
    if(a>b && a>c){
        printf("El primer digito es el mayor");
    }else if(b>a && b>c){
        printf("El segundo digito es el mayor");
    }else if(c>a && c>b){
        printf("El tercer digito es el mayor");
    }
    return 0;
}
