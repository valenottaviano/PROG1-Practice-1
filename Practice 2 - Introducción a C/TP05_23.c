/*

23. Ingresar las coordenadas de N puntos en el plano, las mismas forman con el origen de
coordenadas un triángulo rectángulo. Presentar por pantalla la suma de las superficies
negativas y la suma de las positivas, indicar además la cantidad de triángulos en cada
cuadrante.

*/

#include <stdio.h>

int main(void){
	double coor[2];
	int status = 1;
	double area;
	double positiveTotalArea;
	double negativeTotalArea;
		
	while (status == 1){
		printf("Por favor, ingrese la coordenada x de un punto en el plano: ");
		scanf("%lf", &coor[0]);

		printf("Por favor, ingrese la coordenada y de un punto en el plano: ");
		scanf("%lf", &coor[1]);

		area = coor[0] * coor[1];

		if (area > 0){
			positiveTotalArea += area;
		}else{
			negativeTotalArea += area;
		}

		printf("Desea ingresar otra coordenada? (si=1, no=0): ");
		scanf("%i",&status);
	}

	printf("El total del area positiva es: %.2lf. El total del area negativa es: %.2lf\n", positiveTotalArea, negativeTotalArea);

	return 0;
}
