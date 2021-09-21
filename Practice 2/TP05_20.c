/*
 *
 * 20. Ingresar un valor L encuentre el valor de N de manera tal que se cumpla que:
 * 1 + 2 + 3 + 4 +. . .+ N <= L
 *
 */

#include <stdio.h>

int main(void){
	int L;
	int acumulador = 0;
	int N;
	
	printf("Por favor, ingrese un núemero entero positivo: ");
	scanf("%i", &L);
	
	int i = 1;
	while (acumulador <= L){
		if (i == 1){
			printf("%i ",i);
			acumulador += i;
			i++;
		}else{
			if ( (acumulador+i) > L){
				N = i-1;
				break;
			}else{
				printf("+ %i ", i);
				acumulador += i;
				i++;
			}
		}
	}

	printf("<= %i", L);
	printf("\nN = %i\n", N);

	return 0;
}
