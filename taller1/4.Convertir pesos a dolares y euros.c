#include <stdlib.h>
#include <stdio.h>

int
main ()
{
    int o;
    float p, d, e;
     printf ("Digite la cantidad de pesos que desea convertir: ");
     scanf ("%f", &p);

     printf("A que moneda desea convertir, digite 1 para dolares y 2 para euros: ");
    scanf ("%d", &o);

     if (o == 1)  
     {
         d = p / 4719;
         printf ("La conversion da: %f", d);
     }
     if (o == 2)
     {
         e = p / 5075;
         printf ("La conversion da: %f", e);
     }
  return 0;
}