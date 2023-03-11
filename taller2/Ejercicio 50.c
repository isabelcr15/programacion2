#include <stdio.h>

int main()
{
    int primera, segunda;
    
    for(primera = 0; primera < 8; primera++){
        for(segunda = 0; segunda < 2; segunda++){
            if(segunda == 0){
                printf("%d ", primera);
            }
            else{
                printf("%d ", (primera/4) + 1);
            }
        }
        printf("\n");
    }
    return 0;
}