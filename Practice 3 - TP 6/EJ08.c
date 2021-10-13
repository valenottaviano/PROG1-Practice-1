/*
8. Dado un vector de N elementos, se desea invertir sus elementos y mostrar el vector dado y el invertido.
	Ejemplo:
		Vector dado:
			V = (2 , 4 , 7 , 9 , 5 , 6)
		Vector invertido:
			V = (6 , 5 , 9 , 7 , 4 , 2)

*/

#include <stdio.h>

int main(void){
	int N;

	printf("Por favor ingrese la cantidad de elementos que tendrá el arreglo: ");
	scanf("%i", &N);

	int arr[N];
	for (int i=0; i<N; i++){
		printf("Ingrese el elemento número %i: ", i+1);
		scanf("%i", &arr[i]);
	}
	// Invertir arreglo sin arreglo auxiliar
	
	for (int i=0; i<(N/2); i++){
		int temp = arr[i];
		arr[i] = arr[N-1-i];
		arr[N-1-i] = temp;
	}

	printf("(");
	for (int i=0;  i<N; i++){
		printf("%i, ", arr[i]);
	}
	printf(")");


	return 0;
}
