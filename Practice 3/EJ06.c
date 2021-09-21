/*
6.- Ingresar una palabra y contar cuantas vocales posee. Presentar por pantalla el resultado.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	char word[30];
	int vowelsCounter = 0;

	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);

	for (int i = 0; i < sizeof(vowels); i++){
		for (int j = 0; j < strlen(word); j++){
			if(vowels[i] == tolower(word[j])){
				vowelsCounter++;
			}
		}
	}
	
	printf("La palabra posee %i vocales.\n", vowelsCounter);
	return 0;
}
