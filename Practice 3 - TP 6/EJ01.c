/*

1. Ingresar un vector de orden N y un valor entero x. Contar cuántos elementos iguales x hay en
el vector.

*/


#include <stdio.h>

int main(void){
	int N, x;
	int counter = 0;
	
	printf("Cuántos valores se ingresarán en el arreglo? ");
	scanf("%i", &N);

	printf("Ingrese un entero X: ");
	scanf("%i", &x);

	int arr[N];
	for (int i=0; i<N; i++){
		printf("Por favor ingrese el valor %i: ", (i+1));
		scanf("%i", &arr[i]);

		if(arr[i] == x){
			counter++;
		}
	}

	printf("Se han encontrado %i coincidencias.\n", counter);
	return 0;
}
