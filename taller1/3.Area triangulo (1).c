#include <stdlib.h>
#include <stdio.h>

int
main ()
{
  int b, a, -c;

  printf ("Ingrese la base del triangulo: ");
  scanf ("%d", &b);

  printf ("Ingrese la altura del triangulo: ");
  scanf ("%d", &a);
  
  c=(a*b)/2;
  printf("El area del triangulo es: %d",c);
  return 0;
}