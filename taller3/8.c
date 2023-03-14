#include <stdio.h>

int mayuscula(char letra){
    
    if(letra >= 65 && letra <= 90){
        letra += 32;
    }
}
    
int main()
{
    char letra, a;
    
    printf("Ingrese una letra mayuscula: ");
    scanf("%c", &letra);
    
    a = letra;
    
    if(a >= 65 && a <= 90){
    	char minuscula = mayuscula(letra);
    	printf(" '%c' convertido a minuscula es: '%c'\n\n", a, minuscula);
	}else{
		printf("La letra ingresada no es mayuscula\n");
	}

    return 0;
}
