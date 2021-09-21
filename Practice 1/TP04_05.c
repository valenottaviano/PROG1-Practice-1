// 5. Convertir temperatura en grados Fahrenheit a grados centígrados. Presentar por pantalla ambos valores con sus unidades.

#include <stdio.h>

int main(void){
	
	float tf, tc;

	printf("Por favor introdusca una temperatura en fahrenheit: ");
	scanf("%f", &tf);
	tc = ((tf - 32)*0.55);

	printf("Celsius: %f C\n", tc);
	printf("Fahrenhei: %f F\n", tf);

	return 0;
}
