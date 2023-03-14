#include <stdio.h>

int minuscula(char letra){
    
    if(letra >= 97 && letra <= 122){
        letra -= 32;
    }
}
    
int main()
{
    char letra, a;
    
    printf("Ingrese una letra minuscula: ");
    scanf("%c", &letra);
    
    a = letra;
    
    if(a >= 97 && a <= 122){
    	char mayuscula = minuscula(letra);
    	printf("\n '%c' convertido a mayuscula es: '%c'\n\n", a, mayuscula);
	}else{
		printf("\nLa letra ingresada no es minuscula\n");
	}

    return 0;
}
