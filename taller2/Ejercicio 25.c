#include <stdio.h>

int main() 
{
    int num, a, b, c,suma,res;

    printf("ingrese un numero de 3 digitos o menos: ");
    scanf("%d", &num);

    a = num/100;
    b = (num%100)/10;
    c = num%10;
    
    suma=a+b+c;
    if(b ==0 && c==0){
        res=a;
    }else if(num<99){
        res=(a+b)/2;
    }else{
        res=suma/3;
    }
    printf("el promedio entero de los digitos es: %d",res);
    return 0;
}
