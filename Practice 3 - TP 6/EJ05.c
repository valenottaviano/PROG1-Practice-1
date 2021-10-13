/*

   5. Generar un vector de orden N que cumpla con las siguientes condiciones:
	a) El último elemento del vector valdrá N: V[N-1] = N.
	b) El penúltimo elemento valdrá: V[N-2] = V[N-1] + 1.
	c) El elemento V[N-3] valdrá: V[N-3] = V[N-1] + 2.
	d) Se debe continuar la serie hasta completar el vector.

*/

#include <stdio.h>

int main(void){
	int N;

	printf("Cuántos elementos tendrá el arreglo? ");
	scanf("%i", &N);

	int arr[N];
	arr[N-1] = N;
	for (int i=1; i<N; i++){
		arr[N-i-1] = arr[N-1] + i;
	}
	
	printf("(");
	for (int i=0; i<N; i++){
		printf("%i, ", arr[i]);
	}
	printf(")\n");

	return 0;
}
