#include <stdio.h>

int main()
{
    int num, i, a, b;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    for(i=1;num !=0;i++){
        a=num%10;
        if(a==1){
            b++;
        }
        num/=10;
    }

    printf("El digito 1 aparece %d veces \n", b);

    return 0;
}
