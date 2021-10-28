/*
9. Dado un vector V de orden N con V[i] = 0 para todo i, se desea hacer el siguiente trabajo :
	a) Se introduce un número natural x.
	b) Si x está comprendido entre 0 y N-1 y V[x] = 0, ingresar un valor z y hacer V[x] = z. Si x no
	está entre 0 y N-1 o V[x] <> 0, volver a ingresar otro valor de x.
	c) Repetir el proceso hasta que se haya cargado todo el vector.
*/

#include <stdio.h>
int main(void){
	int N, X, status=0;
	printf("Por favor ingrese la cantidad de elementos del arreglo: ");
	scanf("%i", &N);

	int arr[N];
	for (int i=0; i<N; i++){
		arr[i] = 0;
	}

	while (status == 0){
		printf("Por favor, ingrese el valor de x: ");
		scanf("%i", &X);

		if (X>=0 && X<N){
			printf("Todo ok!!!\n");
			status = 1;
		}else{
			printf("Todo mal\n");
		}


	}



	return 0;
}
