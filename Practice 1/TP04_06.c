// 6. Ingresar los lados de un rectángulo, presentar por pantalla su perímetro y su superficie.

#include <stdio.h>

int main(void){
	int b,h,A,P;

	printf("Por favor introduzca la base del rectangulo en centimetros: ");
	scanf("%i",&b);

	printf("Por favor introduzca la altura del rectangulo: ");
	scanf("%i",&h);

	printf("Perimetro del rectangulo: %i cm \n", (b*2+ h*2));
	printf("Superficie del rectangulo: %i cm2 \n", (b*h));

	return 0;
}
