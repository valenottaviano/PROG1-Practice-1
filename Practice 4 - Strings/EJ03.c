/*

3.- Ingresar  una  palabra  y  generar  una  nueva  donde  se  han  reemplazado  las  vocales  de  la 
palabra ingresada, por asteriscos (*). Presentar ambas palabras. 

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
	char word[30];
	char vowels[] = {'a','e','i','o','u'};

	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);

	for (int i = 0; i < sizeof(vowels); i++){
		for (int j = 0; j < strlen(word); j++){
			if (tolower(word[j])  == vowels[i]){
				word[j] = '*';
			}
		}
	}

	for (int i =0; i<strlen(word); i++){
		printf("%c", word[i]);
	}


	return 0;
}
