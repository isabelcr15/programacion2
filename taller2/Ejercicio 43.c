#include <stdio.h>

int
main ()
{
    int a, b, z, x = 1, n,k,minimo,maximo, cont;
    a = 0;
    b = 1;

    //printf ("0\n1\n");

    printf("Digite el valor minimo: ");
    scanf("%d", &minimo);
    printf("Digite el valor maximo: ");
    scanf("%d", &maximo);
    for (cont = 3; z <= maximo; cont = cont + 1){
         z = a + b;
        if (z > minimo && z < maximo){
            
	    k = k+1;
	    printf ("%d\n", z);
        }
	    x = x + z;
        n = n + 1;
        a = b;
        b = z;
    }
    n = n + 1;
    
    printf("\nLa cantidad de elementos de la serie de fibonacci que hay entre %d y %d es: %d", minimo, maximo, k);

  return 0;
}
