/*

24. Dados 4 círculos concéntricos simulando un blanco para tiro, con centro en (0,0) y
cuyos radios y puntajes son los siguientes:

a) círculo 1 radio = 1 para r<=1 : 4 puntos
b) círculo 2 radio = 2 para r>1 y r<=2 : 3 puntos
c) círculo 3 radio = 3 para r>2 y r<=3: 2 puntos
d) círculo 4 radio=4 para r>3 y r<=4: 1 punto

Si se ingresan las coordenadas de N puntos en el plano, presentar por pantalla el puntaje
total obtenido por la posición de los puntos y su promedio.

*/

#include <stdio.h>
#include <math.h>

int calculateScore(double radius);

int main(void){
	int status = 1;
	double coor[2];
	int score = 0;


	while (status == 1){
		printf("Por favor, ingrese la coordenada x de un punto en el plano: ");
                scanf("%lf", &coor[0]);

                printf("Por favor, ingrese la coordenada y de un punto en el plano: ");
                scanf("%lf", &coor[1]);
		
		double radius_sqr = pow(coor[0],2) + pow(coor[1],2);
		double radius = sqrt(radius_sqr);

		score += calculateScore(radius);

		printf("Desea realizar otro tiro? (si=1, no=0)");
		scanf("%i", &status);
	}

	printf("El puntaje total obtenido es de: %i\n", score);

	return 0;
}

int calculateScore(double radius){
	if (radius > 4){
		return 0;
	}
	if (radius > 3){
		return 1;
	}
	if (radius > 2){
		return 2;
	}
	if (radius > 1){
		return 3;
	}
	if (radius > 0){
		return 4;
	}
}
