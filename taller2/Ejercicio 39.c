#include <stdio.h>

int main()
{
  int a,b,z,i;

  a=0;
  b=1;
  
  printf("0\n1\n");
 
  for (i=3;i<=39;i+=1)
  {
      z=a+b;
      printf("%d\n",z);
      a=b;
      b=z;
  }
 
      
  return 0;
}
