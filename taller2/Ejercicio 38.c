#include <stdio.h>

int main()
{
    int i, res, num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    printf("La tabla de multiplicar de %d es:\n",num);
    for(i=1;i<=10;i++){
        res=num*i;
        printf("%d\n",res);
    }
    return 0;
}
