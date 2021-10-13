//3. Ingresar dos números enteros y presentar por pantalla la media geométrica. 

#include <math.h>
#include <stdio.h>

int main(void){
	int a,b;
	int media_geo;
	
	printf("Ingrese un numero positivo: ");
	scanf("%i", &a);

	printf("Ingrese un numero positivo: ");
	scanf("%i", &b);
	
	media_geo = sqrt(a*b);
	printf("La media geometrica es: %i", media_geo);
	return 0;

}
