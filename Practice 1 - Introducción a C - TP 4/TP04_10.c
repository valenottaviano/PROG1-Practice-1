// 10. Resolver un sistema de dos ecuaciones lineales con dos incógnitas.

#include <stdio.h>

int main(void){
	float A,B,C,D,E,F;
	float x,y;

	printf("Se resolverá el siguiente sistema de ecuaciones:\n");
	printf("Ax+By=C\n");
	printf("Dx+Ey=F\n");
	
	printf("Ingresa el valor del coeficiente A: ");
	scanf("%f", &A);
	printf("Ingresa el valor del coeficiente B: ");
	scanf("%f", &B);
	printf("Ingresa el valor del coeficiente C: ");
	scanf("%f", &C);
	printf("Ingresa el valor del coeficiente D: ");
	scanf("%f", &D);
	printf("Ingresa el valor del coeficiente E: ");
	scanf("%f", &E);
	printf("Ingresa el valor del coeficiente F: ");
	scanf("%f", &F);


	y = (((F/D)-(C/A))/((E/D)-(B/A)));
	x = (((F/E)-(C/B))/((D/E)-(A/B)));

	printf("x = %f", x);
	printf("y = %f", y);
}
