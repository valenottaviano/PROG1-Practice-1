/*

17. Ingresar un número natural N. Sin dividir ni multiplicar determinar si ese valor es o no
par. Presentar por pantalla el resultado.

*/

#include <stdio.h>

int main(void){
	int num;

	printf("Por favor, ingresa un número entero: ");
	scanf("%i", &num);

	int temp = num;
	while (temp >= 1){
		temp -= 2;
	}
	if (temp == 0){
		printf("El número %i es par.\n", num);

	}else{
		printf("El número %i es impar.\n", num);
	}

	return 0;
}
