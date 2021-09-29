// 11. Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo. Presentar por pantalla el mensaje correspondiente.

#include <stdio.h>
#include <math.h>


int main(void){
	int a,b,c,h;

	printf("Por favor indicar tres lados de un posible triangulo: \n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	


	// Analizo si el lado C es la hipotenusa de a y b
	h = sqrt((pow(a,2)+pow(b,2)));
	if (c == h){
		printf("Es un triangulo rectangulo!\n");
		return 0;
	}
	
	// Analizo si el lado B es la hipotenusa de c y a
	h = sqrt((pow(a,2)+pow(c,2)));
	if (b == h){
		printf("Es un triangulo rectangulo!\n");
		return 0;
	}

	// Analizo si el lado A es la hipotenusa de c y b
	h = sqrt((pow(c,2)+pow(b,2)));
	if (c == h){
		printf("Es un triangulo rectangulo!\n");
		return 0;
	}

	printf("No es un triangulo rectangulo.\n");
	return 0;
}

