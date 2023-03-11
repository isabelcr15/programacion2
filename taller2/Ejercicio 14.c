#include <stdio.h>

int main()
{
    int i,res;
    
    printf ("los multiplos de 3 hasta 20 son: \n");
    
    for(i = 1; i <= 20; i++){
        res=3*i;
        printf("%d\n",res);
    }
    return 0;
}