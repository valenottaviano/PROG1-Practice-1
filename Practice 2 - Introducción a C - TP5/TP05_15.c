/*

15. Ingresar dos números enteros positivos N1y N2, con N1 < N2 y un número x cualquiera,
presentar por pantalla los múltiplos de x comprendidos entre N1 y N2.

*/

#include <stdio.h>

int main(void){

	int num1, num2;
	int x;

	printf("Ingrese un número entero positivo: ");
	scanf("%i", &num1);
	printf("Ingrese un número entero positivo menor que %i: ", num1);
	scanf("%i", &num2);
	printf("Ingrese un número x comprendido tal que %i<x<%i: ", num2, num1);
	scanf("%i", &x);


	printf("Los múltiplos de %i tales que %i<x<%i son: ", x, num2, num1);
	
	for (int i = 0; x*i < num1; i++){
		if (x*i <= num2){
			continue;
		}
		printf("%i ", (x*i));
	}

	printf("\n");


	return 0;
}
