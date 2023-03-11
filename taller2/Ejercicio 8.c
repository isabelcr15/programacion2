#include <stdio.h>

int main()
{
	int n = 200, i;

	for (i = 20; i <= n; i= i+ 2){
		if ( n % 2 == 0){
			printf("%d\n" , i);
		}	
	}
	return 0;
}