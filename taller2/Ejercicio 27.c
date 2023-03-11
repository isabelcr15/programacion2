#include <stdio.h>

int main(){

   int a, b;
   
   printf("Ingrese un numero: ");
   scanf("%d",&a);
   
   printf("Ingrese otro numero: ");
   scanf("%d",&b);
   
   if(a/1000>=b/1000){
       printf("El primer numero tiene mas digitos que el segundo");
   }else if(a/1000<=b/1000){
       printf("El segundo numero tiene mas digitos que el primero");
   }
return 0; 
}
   