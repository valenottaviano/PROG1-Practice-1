/*
14. Ingresar dos números de cuatro dígitos expresados en el sistema binario, presentar por
pantalla ambos números y su suma.
*/

#include <stdio.h>

int countBinaryDigits(int decimal);
void decimalToBinary(int x, int binary_arr[], int binary_digits);

int main(void){
	int decimal_1, decimal_2;
	int binary_digits_1, binary_digits_2, binary_digits_sum;

	// User enters those integers that will be converted into decimal.
        printf("Por favor ingrese un numero entero: ");
        scanf("%i", &decimal_1);

        printf("Por favor ingrese un numero entero: ");
        scanf("%i", &decimal_2);

	binary_digits_1 = countBinaryDigits(decimal_1);
	binary_digits_2 = countBinaryDigits(decimal_2);
	binary_digits_sum = countBinaryDigits((decimal_1 + decimal_2));

       	int binary_arr_1[binary_digits_1];
	int binary_arr_2[binary_digits_2];
	int binary_arr_sum[binary_digits_sum];

        decimalToBinary(decimal_1, binary_arr_1, binary_digits_1);
        decimalToBinary(decimal_2, binary_arr_2, binary_digits_2);
        decimalToBinary((decimal_1 + decimal_2), binary_arr_sum, binary_digits_sum);
        

	printf("Primer entero en binario: ");
        for (int i=0; i < binary_digits_1; i++){
                printf("%i", binary_arr_1[i]);
        }
	printf("\n");

	printf("Segundo entero en binario: ");
        for (int i=0; i < binary_digits_2; i++){
                printf("%i", binary_arr_2[i]);
        }
	printf("\n");

	printf("La suma de los enteros en binario: ");
        for (int i=0; i < binary_digits_sum; i++){
                printf("%i", binary_arr_sum[i]);
        }
	printf("\n");
	

	//printf("num1: ", &binary_digits_1);
	//printf("num2: ", &binary_digits_2);




	return 0;
}

int countBinaryDigits(int decimal){
        // Finds out the amount of divisions that will be needed for the conversion. aka the number of digits of the binary

        int counter = 2;
        while (decimal / 2 > 0){
                decimal /= 2;
                counter++;
        }
        return counter;

}

void decimalToBinary(int decimal, int binary_arr[], int binary_digits){
        // Defines a vector with the correct number of elements
        
        int decimal_div = decimal;
        for (int i = 0; i < binary_digits; i++){
                binary_arr[binary_digits-i-1] = decimal_div % 2;
                decimal_div /= 2;
        }
        
}

