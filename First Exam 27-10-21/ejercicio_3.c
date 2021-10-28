/*
Escriba un programa que pida el ingreso de su nombre y apellido y luego lo muestre por pantalla con la primera letra del nombre y la primera del apellido en mayúsculas

Code compiled with gcc (11.1.0)
*/

#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void){
	char name[60];
	printf("Por favor, ingrese su nombre/s y apellido/s: ");
	fgets(name, sizeof(name), stdin);
	
	// Always first character will be uppercase
	name[0] = toupper(name[0]);

	for (int i=0; i<strlen(name); i++){
		// If there is an space character, the next one will be in uppercase
		if(name[i] == ' '){
			char c = name[i+1];
			name[i+1] = toupper(c);
		}
	}

	printf("%s", name);
	return 0;
}
