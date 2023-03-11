#include <stdio.h>

int main()
{
  int a,b,z,x,cont;

  a=0;
  b=1;
  
  printf("Digite un numero de dos digitos: ");
  scanf("%d", &x);
  printf("0\n1\n");
 
  for (cont=3;cont<=x;cont=cont+1)
  {
      z=a+b;
      printf("%d\n",z);
      a=b;
      b=z;
  }
 
      
  return 0;
}
