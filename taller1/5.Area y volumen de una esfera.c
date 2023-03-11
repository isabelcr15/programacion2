#include <stdio.h>
#include <math.h>
 
int main(){
	
	float radio_esfera, area_esfera, volumen_esfera;
	
	printf("ingrese el radio de la esfera: ");
	scanf("%f", &radio_esfera);
	
	area_esfera = 4 * M_PI * pow(radio_esfera, 2);
	volumen_esfera = (4/3) * M_PI * pow(radio_esfera, 3);
	
	printf("\nEl area de la esfera es: %.3f", 160, area_esfera);
	printf("\nEl volumen de la esfera es: %.3f", volumen_esfera);
}