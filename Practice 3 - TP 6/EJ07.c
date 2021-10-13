/*

7. Dados dos números A y B, generar un vector de orden N que cumpla con las siguientes con-
diciones:
	a) V[0] = A y V[1] = B.
	b) El valor de V[2] será igual V[0] + V[1].
	c) El valor de V[3] será igual V[0] - V[1].
	d) El valor de V[4] será igual V[2] + V[3].
	e) El valor de V[5] será igual V[2] - V[3].
Continuar con la serie hasta agotar el vector.

*/

#include <stdio.h>
int main(void){
	int A, B, N;

	printf("Por favor ingresa el valor de A: ");
	scanf("%i", &A);
	printf("Por favor ingresa el valor de B: ");
	scanf("%i", &B);
	printf("Por favor ingresa la cantidad de elementos del arreglo: ");
	scanf("%i", &N);

	int arr[N];
	arr[0] = A;
	arr[1] = B;

	for (int i=2; i<N; i++){
		if (i%2 == 0){
			// Si la iteración es par:
			arr[i] = arr[i-2] + arr[i-1];
		}else{
			// Si la iteración es impar
			arr[i] = arr[i-2] - arr[i-1];
		}
	}

	printf("(");
	for (int i=0; i<N; i++){
		printf("%i, ", arr[i]);
	}
	printf(")\n");

	return 0;
}
