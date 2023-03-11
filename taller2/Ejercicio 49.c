#include <stdio.h>

int main()
{
    int primera, segunda;
    
        for (primera = 1; primera <= 3; primera++){
            for (segunda = 1; segunda <= 3; segunda++){
                printf("%d %d %d\n", (primera - 1) * 3 + segunda, primera, segunda);
            }
        }

    return 0;
}