#include <stdio.h>

int
main ()
{
  int a, b, z, x = 1, n, cont;

    a = 0;
    b = 1;

    printf ("0\n1\n");

    for (cont = 3; z <= 100; cont = cont + 1){
         z = a + b;
        if (z > 100){
        }
        else{
	    x = x + z;
	    printf ("%d\n", z);
	}
        n = n + 1;
        a = b;
        b = z;
    }
    n = n + 1;
    
    printf("\nLa suma de los elementos de la serie de fibonacci del 1 al 100 es: %d", x);

  return 0;
}
