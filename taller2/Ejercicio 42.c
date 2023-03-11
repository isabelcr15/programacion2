#include <stdio.h>

int
main ()
{
    int a, b, z, x = 1, n,k, cont;
    a = 0;
    b = 1;

    printf ("0\n1\n");

    for (cont = 3; z <= 1000; cont = cont + 1){
         z = a + b;
        if (z > 1000){
        }
        else{
	    x = x + z;
	    k = x/cont;
	    printf ("%d\n", z);
	}
        n = n + 1;
        a = b;
        b = z;
    }
    n = n + 1;
    
    printf("\nEl promedio de los elementos de la serie de fibonacci del 1 al 1000 es: %d", k);

  return 0;
}
