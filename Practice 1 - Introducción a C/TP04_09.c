//9. Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respectivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar el perímetro y la superficie del rectángulo.

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x1,x2,y1,y2;
	int b,h;
	

	printf("Por favor ingresa x1: ");
	scanf("%i", &x1);
	printf("Por favor ingresa y1: ");
	scanf("%i", &y1);
	printf("Por favor ingresa x2: ");
	scanf("%i", &x2);
	printf("Por favor ingresa y2: ");
	scanf("%i", &y2);

	printf("\n ------------- \n");
	
	b = abs(x2 - x1);
	h = abs(y2 - y1);
	
	printf("Perímetro del rectángulo: %i \n", (2*b+2*h));
	printf("Superficie del rectángulo: %i \n", (b*h));
}
