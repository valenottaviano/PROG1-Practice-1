// 4. Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos negativos y cuantos iguales a cero.

#include <stdio.h>

int main(){
	int counter_positive = 0;
	int counter_negative = 0;
	int counter_zero = 0;
	int status = 1;

	while (status == 1){
		double num;

		// Ask if user wants a number. If not, exit the loop.
		printf("Desea ingresar un número? [Si=1/No=0]: ");
		scanf("%i", &status);

		if (status == 0){
			break;
		}

		// num takes the value of the selected number
		printf("Ingresar un número: ");
		scanf("%lf", &num);
		

		// Classifies the number and increase the correct counter.
		if(num == 0){
			counter_zero ++;
		}else{
			if(num > 0){
				counter_positive++;
			}else{
				counter_negative++;
			}
		}

	}

	// Prints out all the counters.

	printf("Se han contado %i números positivos. \n", counter_positive);
	printf("Se han contado %i números negativos. \n", counter_negative);
	printf("Se han contado %i ceros. \n", counter_zero);
	
	return 0;
}
