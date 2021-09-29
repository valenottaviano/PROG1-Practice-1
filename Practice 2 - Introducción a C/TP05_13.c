/*

13. Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al
sistema binario. Presentar por pantalla el número en decimal y en binario.

*/

#include <stdio.h>

int countBinaryDigits(int decimal);
void decimalToBinary(int x, int binary_arr[], int binary_digits);

int main(void){
	int num_decimal;
	int binary_digits = 0;
	

	// User enters the integer that will be converted into decimal.
	printf("Por favor ingrese un numero entero: ");
	scanf("%i", &num_decimal);
	
	binary_digits = countBinaryDigits(num_decimal);
	int binary_arr[binary_digits];
	decimalToBinary(num_decimal, binary_arr, binary_digits);
	
	for (int i=0; i < binary_digits; i++){
		printf("%i", binary_arr[i]);
	}

	printf("\n");

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
