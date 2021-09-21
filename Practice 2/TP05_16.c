/*

16. Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores.

*/

#include <stdio.h>

int main(void){
	int num;

	printf("Por favor ingrese un número entero positivo de 4 dígitos: ");
	scanf("%i", &num);
	
	if (num / 1000 == 0){
		return 0;
	}
	
	printf("Los divisores de %i son: ", num);
	for (int i = 1; i <= num; i++ ){
		if (num % i == 0){
			printf("%i ", i);
		}
	
	}

	printf("\n");
	return 0;
}
