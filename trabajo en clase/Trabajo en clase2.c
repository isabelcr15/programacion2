#include <stdio.h>
#include <string.h>
#define MAX_LONG_STRING 50

int main()
{
    float salario, salarionuevo, a;
    char name[MAX_LONG_STRING];
    printf("Ingrese el nombre del colaborador: ");
    fgets(name, 50, stdin);
   
    if((strlen(name) > 0) && (name[strlen(name) - 1] == '\n')){
        name[strlen(name) - 1] = '\0';
       
    }
   
    printf("Ingrese el salario del colaborador: ");
    scanf("%f", &salario);
   
    if(salario<1000000){
        a=(salario*7)/100;
        salarionuevo=salario+a;
        printf("El aumento fue del 7%%, que equivale a $ %f\n",a);
    }else if(salario<=1500000){
        a=(salario*10)/100;
        salarionuevo=salario+a;
        printf("El aumento fue del 10%%, que equivale a $ %f\n",a);
    }else{
        a=(salario*12)/100;
        salarionuevo=salario+a;
        printf("\nEl aumento fue del 12%%, que equivale a $ %f\n",a);
    }
        printf("El nuevo salario de %s es de: $ %f", name, salarionuevo);
    return 0;
}