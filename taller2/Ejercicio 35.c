#include <stdio.h>

int main()
{
    int i, a, b, res, n, z;
    printf("Ingrese un numero de 2 digitos: ");
    scanf("%d",&a);
    printf("Ingrese otro numero: ");
    scanf("%d",&b);
    if(a<100){
        n=a/10;
    }else if(a>99){
        n=a/100;
    }
    if(a>99){
        z=b/100;
    }else if(b<100){
        z=b/10;
    }
    res=n*z;
    printf("El producto del primer digito de %d y %d es: %d", a, b, res);
    return 0;
}
