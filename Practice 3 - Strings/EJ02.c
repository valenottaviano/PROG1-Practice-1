/*

 2.- Ingresar  una  palabra  y  generar  una  nueva  palabra  que  contenga  las  mismas  letras,  en 
mayúsculas, que la ingresada pero separadas por un espacio. Mostrar ambas palabras

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word[30];
	
	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);

	char newWord[sizeof(word)*2];
	
	int k = 0;
	for (int i = 0; i < strlen(word)*2; i++){
		
		if (i%2==0){
			newWord[i] = toupper(word[k]);
			k++;

		}else{
			newWord[i] = ' ';
		}

	}

	for (int i = 0; i < strlen(word)*2; i++){
		printf("%c", newWord[i]);
	}


	return 0;
}
