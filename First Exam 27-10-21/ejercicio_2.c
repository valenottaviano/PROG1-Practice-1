/*
	Escriba un programa que dado un vector de elementos enteros lo muestre ordenado de mayor a menor.
*/

#include <stdio.h>

int main(void){
	int N;

	printf("Por favor, ingrese el orden del vector: ");
	scanf("%i", &N);

	int arr[N];

	// User populates the array
	for (int i=0; i<N; i++){
		printf("Ingrese el elemento %i del arreglo: ", (i+1));
		scanf("%i", &arr[i]);
	}

	for(int i=0; i<N; i++){
		
		int mayor = arr[i];
		int pos_mayor = i;

		for (int j=i; j<N; j++){
			if(arr[j] >= mayor){
				mayor = arr[j];
				pos_mayor = j;
			}
		}

		int temp = arr[i];
		arr[i] = mayor;
		arr[pos_mayor] = temp;
	}

	// Prints out the sorted array (descending)
	printf("Arreglo ordenado de forma descendente: ");
	for (int i=0; i<N; i++){
		printf("%i, ", arr[i]);
	}
	printf("\n");

	return 0;
}
