#include <stdio.h>

intmain ()
{
  
 
int numero[20];
  
int n;
  
 
for (int j = 0; j < 20; j++){
      
printf ("Ingrese el %d numero: ", j + 1);
scanf ("%d", &numero[j]);
    
} 
 
printf ("Digite el numero que quiere encontrar:");
  
scanf ("%d\n", &n);
  
 
for (int h = 0; h < 20; h++){
      
    if (numero == n){
    printf ("El numero esta en: %d", n, h + 1);
	  
    return 0;
	
    }
}
return 0;
}