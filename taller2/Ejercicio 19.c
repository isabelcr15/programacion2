#include <stdio.h>

int main() 
{
    int num, i, p;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++){
        if(num % i == 0){
            p = 3;
        }else{
            p=2;
        }
    }

    if (p==3){
        printf("%d es un numero primo\n", num);
    }else{
        printf("%d no es un numero primo\n", num);
    }

    return 0;
}
