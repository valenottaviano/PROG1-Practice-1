/*

18. Ingresar N números naturales y presentar por pantalla cuantas series de números estrictamente crecientes aparecen.

*/

#include <stdio.h>

int main(void){
	int digits;
	int count_series = 0;

	printf("Cuántos dígitos tendrá el número? ");
	scanf("%i",&digits);
	
	int number_arr[digits];
	for (int i = 0; i< digits; i++){
		printf("Por favor ingrese el dígito número %i: ", (i+1));
		scanf("%i", &number_arr[i]);
	}


	int is_serie = 0;
	for (int i = 1; i < digits; i++){
		
		if (number_arr[i-1] < number_arr[i]){
			is_serie = 1;
			if (number_arr[i] < number_arr[i+1]){
				is_serie = 1;
				continue;
			}else{
				if (is_serie == 1){
					count_series++;
				}
			}

		}else{
			is_serie = 0;
		}

	}

	printf("Existen %i series extrictamente creciente. \n", count_series);
	

	return 0;
}
