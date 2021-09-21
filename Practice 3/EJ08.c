/*

8.- Ingresar una palabra en mayúsculas y presentarla en minúsculas. 

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word[30];
	
	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);

	for (int i = 0; i < strlen(word); i++){
		printf("%c", toupper(word[i]));
	}
	printf("\n");

	return 0;
}
