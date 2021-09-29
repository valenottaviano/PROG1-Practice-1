/*

1.- Ingresar una palabra, en minúsculas, y presentarla en mayúsculas e invertida.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word[30];
	
	// user enters an string
	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);
	
	for(int i = 0; i < strlen(word)/2; i++){
		// Inverts the string
		char temp = word[i];
		word[i] = toupper(word[strlen(word)-i-1]);
		word[strlen(word)-i-1] = toupper(temp);
	}


	printf("La palabra invertida y en mayusculas es: %s \n", word);

	return 0;
}
