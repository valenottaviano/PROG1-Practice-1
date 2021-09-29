/*

11.- Ingresar una palabra en minúsculas o mayúsculas (contemplar ambos casos) y 
reemplazar cada consonante por dos signos +. Presentar ambas palabras.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word[30];
	char modifWord[40];
	char vowels[] = {'a', 'e', 'i','o','u'};
	int positionOfVowels[30];
	
	printf("Por favor, ingresar una palabra: ");
	fgets(word, sizeof(word), stdin);
	
	int k = 0;
	// Loops over each character of the string
	for (int i = 0; i < strlen(word);i++){
		// Checks out if it is a vowel
		int isVowel = 0;
		for (int j = 0; j < sizeof(vowels);j++){
			if (word[i] == vowels[j]){
				modifWord[k] = word[i];
				k++;
				isVowel = 1;
			}
		}
		if (isVowel == 0){
			modifWord[k] = '+';
			modifWord[k+1] = '+';
			k = k+2;
		}

	} 

	// Prints out the modified string
	for (int i = 0; i < (strlen(modifWord)-2); i++){
		printf("%c",modifWord[i]);
	}
	printf("\n");

	return 0;
}
