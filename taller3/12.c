#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char descriptar(char palabra[100]){
    
    char res;
    int i;
    
    printf("\nLa palabra descriptada es: ");
    
    for(i = 0; i < strlen(palabra); i++){
        
        char actual = palabra[i];
        res = palabra[i] - 1;
        printf("%c",res);
    }
}

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
    int opcion;
    
    printf("                                             Bienvenido\n");
    printf("Que desea hacer?\n\nOpcion 1: Encriptar una palabra\nOpcion 2: Descriptar una palabra");
    printf("\n\nDigite una de las 2 opciones: ");
    scanf("%d", &opcion);
    
    if(opcion < 1 || opcion > 2){
        printf("Opcion invalida");
        return 0;
    }else if(opcion == 1){
        
        printf("\nIngrese la palabra que desea encriptar: ");
        scanf("%s", palabra);
        char a = encriptar(palabra);
    }else{
        printf("\nIngrese la palabra que desea descriptar: ");
        scanf("%s", palabra);
        char a = descriptar(palabra);
    }

    return 0;
}
