#include <stdio.h>

int main(){

   int a, b, n, i, z;
  
   printf("Ingrese un numero: ");
   scanf("%d",&a);
   printf("Ingrese otro numero: ");
   scanf("%d",&b);
   
   while (a != 0){
        a /= 10;
        for(i=1;i<=a;i++){
            if(a%i==0){
            n++;
            }
        }
   }
   while (b != 0){
        b /= 10;
        for(i=1;i<=b;i++){
            if(b%i==0){
            z++;
            }
        } 
   }
    if(n>z){
       printf("El primer numero tiene mas digitos primos%d\n",n);
    }else if(n<z){
       printf("El segundo numero tiene mas digitos primos%d",z);
    }
return 0; 
}
   