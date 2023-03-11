#include <stdio.h>

int main()
{
    int primera, segunda, fin,a; 

    for(primera=0;primera<=9;primera++){
        for(segunda=1;fin<=4;segunda++){
            fin=fin+ 1;
            a=primera+ 1;
            printf("%d   %d\n",primera,segunda);
            printf("%d   %d\n",a, segunda);
            primera=primera+ 2;
        }
    }
        
    return 0;
}
