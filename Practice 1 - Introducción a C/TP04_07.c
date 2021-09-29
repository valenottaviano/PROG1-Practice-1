// 7. Ingresar el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del círculo.

#include <stdio.h>
#include <math.h>

int main(void){
	float radio, diametro, perimetro, superficie;
	float pi;

	pi = 3.1415;

	printf("Por favor ingresa un radio: ");
	scanf("%f", &radio);

	diametro = radio*2;
	perimetro = 2*pi*radio;
	superficie = pi*pow(radio,2);

	printf("Radio de la circunf: %f \n", radio);
	printf("Diametro de la circunf: %f \n", diametro);
	printf("Perimetro de la circunf: %f \n", perimetro);
	printf("Area de la circunf: %f \n", superficie);

	return 0;

}
