/*

4. Cargar un vector X de N elementos y un valor entero C, calcule el valor NUMERO que se forma:
	NUMERO = (X[0]-C) * (X[1]-C) * (X[2]-C) * ... * (X[N-1]-C).

*/


#include <stdio.h>
int main(void){
	int N;
	double C, num = 1;
        
	printf("Ingrese un número entero C: ");
        scanf("%lf",&C);

        printf("Cuántos elementos tendrá el arreglo? ");
        scanf("%i",&N);
        
        double arr[N];
        for (int i=0; i<N; i++){
                printf("Ingrese el elemento %i del arreglo: ", (i+1));
                scanf("%lf", &arr[i]);
        }

	for (int i=0; i<N; i++){
		double calc = arr[i] - C; 
		num = num*calc;
	}
	printf("Num %.2lf\n", num);
	
	return 0;
}
