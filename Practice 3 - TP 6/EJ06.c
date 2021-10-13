/*

   6. Dado un número entero K, generar y presentar por pantalla un vector de orden N, de tal manera
que sus elementos se conformarán de la siguiente manera :
	a) V[0] = K.
	b) V[1] = 2*K.
	c) Los siguientes elementos seguirán valiendo V[i] = i*K. Esto hasta alcanzar el
	límite máximo de K al cuadrado. Cuando tal cosa ocurra, a partir del siguiente
	elemento dividir el valor en K.
		
			Ejemplo: N = 6 , K = 3 , V = (3 , 6 , 9 , 4 , 5 , 6)

*/

#include <stdio.h>
int main(void){
	int N;
	double k;

	printf("Por favor ingrese el valor de k: ");
	scanf("%lf", &k);
	
	printf("Por favor ingrese el valor de N: ");
	scanf("%i", &N);

	double arr[N];

	for (int i=0; i<N; i++){
		if (i<=k){
			arr[i] = i*k;
		}else{
			arr[i] = i/k;
		}
		printf("%.2lf, ", arr[i]);
	}
	printf("\n");

	return 0;
}
