#include <stdio.h>
#include <string.h>

char encriptar(char palabra[100]){
    
    char res;
    int i;
    
    printf("\nLa palabra encriptada es: ");
    
    for(i = 0; i < strlen(palabra); i++){
        
        char actual = palabra[i];
        res = palabra[i] + 1;
        printf("%c",res);
    }
}
int main()
{
    char palabra[100];
    
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    
    char a = encriptar(palabra);

    return 0;
}
