/*
2. Leer un vector de orden M. Acumule los elementos negativos en la variable entera N y los
positivos en la variable P.
*/

#include <stdio.h>

int main(void){
	int M;
	double positives = 0, negatives = 0;

	printf("Cuántos elementos tendrá el arreglo? ");
	scanf("%i", &M);

	double arr[M];
	for (int i=0; i<M; i++){
		printf("Por favor, ingrese el elemento %i: ", (i+1));
		scanf("%lf", &arr[i]);
	}
	for (int i=0; i<M; i++){
		if(arr[i]<0){
			negatives += arr[i];
		}else{
			positives += arr[i];
		}
	}

	printf("Se han acumulado %.2lf positivos.\n", positives);
	printf("Se han acumulado %.2lf negativos.\n", negatives);
	return 0;
}
