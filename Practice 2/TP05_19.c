/*

19. Ingresar dos números enteros positivos N1 y N2, con N1 < N2, sumar los números
enteros comprendidos entre N1 y N2. Presentar por pantalla dicha suma y un mensaje
que indique de donde proviene la suma.

*/

#include <stdio.h>

int main(void){
	int num1, num2;
	int suma = 0;

	printf("Por favor, ingrese un número entero: ");
	scanf("%i", &num1);

	printf("Por favor, ingrese un número entero mayor que %i: ", num1);
	scanf("%i", &num2);

	printf("Se procederá a sumar los números comprendidos entre %i y %i\n", num1, num2);


	printf("\nSuma = ");
	for (int i = num1+1; i < num2; i++){
		if (i == num2-1){
			suma += i;
			printf("%i = ", i);
		}else{
			suma += i;
			printf("%i + ", i);
		}
	}
	printf("%i\n\n", suma);


	return 0;
}
