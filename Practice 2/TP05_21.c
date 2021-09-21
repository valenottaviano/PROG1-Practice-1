/* 

21. Si se ingresa un número natural presentar por pantalla el desarrollo del factorial de
dicho número, como así también el valor del factorial.
	Ejemplo: 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1

*/

#include <stdio.h>

int main (void){
	int num;
	int factorial = 1;
	
	printf("Por favor ingrese un número entero. Se calculará el factorial del mismo. ");
	scanf("%i",&num);

	int i = 1;
	while (i <= num){
		factorial *= i;
		i++;
	}

	printf("El factorial de %i es %i. \n", num, factorial);

	return 0;
}
