/*
	Escribir un programa que se pida el ingreso de un caracter y haga el llamado a una función que reciba ese caracter y devuelva 1 si el carácter es alfabético mayúscula, -1 si el carácter es alfabético minúscula y 0 si en cualquier otro caso.
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

double evaluateChar(char c);

int main (void){
	char c;
	double result;
	
	// User enters a charater
	printf("Por favor, ingrese un caracter: ");
	scanf("%c", &c);
	
	// The character nature is evaluated, and saved in result variable
	result = evaluateChar(c);

	// Prints out the result
	printf("El resultado es: %.0lf\n", result);
	return 0;
}

double evaluateChar(char c){
	// Checks if the character is in uppercase
	if(isupper(c)){
		return 1;
	}
	// Checks if the character is in lowercase
	if (islower(c)){
		return -1;
	}

	// In any other case, return default value (0)
	return 0;
}
