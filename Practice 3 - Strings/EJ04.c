/*

4.- Ingresar una palabra que posea por lo menos 5 caracteres  (no permitir que ingrese una palabra más corta), convertir sus caracteres a mayúsculas y con esta palabra generar una nueva palabra constituida por los dos primeros y los dos últimos caracteres de la misma. 

*/

#include <string.h>
#include <ctype.h>
#include <stdio.h>



int main(void){
	char word[30];
	char newWord[5];
	int status = 0;

	while (status == 0){
		printf("Por favor, ingrese una palabra de por lo menos 5 caracteres: ");
		fgets(word, sizeof(word), stdin);

		if(strlen(word) > 5){
			status = 1;
		}else{
			printf("La palabra posee menos de 5 caracteres, ingresela nuevamente");
		}
	
	}
	
	newWord[0] = toupper(word[0]);
	newWord[1] = toupper(word[1]);
	newWord[2] = toupper(word[strlen(word)-2]);
	newWord[3] = toupper(word[strlen(word)-3]);

	for (int i = 0; i < strlen(newWord); i++){
		printf("%c", newWord[i]);
	}
	printf("\n");
	return 0;
}
