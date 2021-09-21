// Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores ingresados.

#include <stdio.h>

int main(void){
	int status = 1;
	int max = 0;
	int min = 1000;

        while (status == 1){
                int num;

                // Ask if user wants a number. If not, exit the loop.
                printf("Desea ingresar un número? [Si=1/No=0]: ");
                scanf("%i", &status);

                if (status == 0){
                        break;
                }

                // num takes the value of the selected number
                printf("Ingresar un número: ");
                scanf("%i", &num);
                

                // Classifies the number and updates max an min number.
		if (num > max){
			max = num;
		}

		if (num < min){
			min = num;
		}
        }

	printf("El máximo número ingresado es %i, el menor es %i.\n", max, min);
	return 0;
}
