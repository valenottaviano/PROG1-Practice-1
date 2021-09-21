/*

10.- Ingresar  una  palabra  en  mayúsculas  y  convertir  las  vocales  en  minúsculas.  Presentar 
ambas palabras. 

*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
        int vowels[] = {'a', 'e', 'i', 'o', 'u'};
        char word[30];
        
        printf("Por favor, ingrese una palabra: ");
        fgets(word, sizeof(word), stdin);
        
	// Turnos vowels into lowercase
	for (int i = 0; i < sizeof(vowels); i++){
                for (int j = 0; j < (strlen(word)-1); j++){
                        if (vowels[i] == tolower(word[j])){
                                word[j] = tolower(word[j]);
                        }
                }

        }

        // Prints out the complete string
        for (int i = 0; i < (strlen(word)-1); i++){
                printf("%c",word[i]);
        }
        printf("\n");

        return 0;
}

