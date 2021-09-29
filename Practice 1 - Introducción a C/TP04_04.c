// 4. Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros.
// Presentar por pantalla las tres magnitudes con sus respectivas unidades.

#include <stdio.h>


int main(void){
	
	int medida_m;
	int medida_dm;
	int medida_cm;

	printf("Por favor, ingrese una medida en metros: ");
	scanf("%i", &medida_m);

	printf("Metros: %i m.\n", medida_m);
	printf("Decimetros: %i dcm.\n", medida_m*10);
	printf("Centimetros: %i cm.\n", medida_m*100);
	
	return 0;
}
