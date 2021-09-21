/*

5.- Ingresar  una  palabra  en  mayúsculas  (controlar)  y  eliminar  de  la  misma  la  cadena  "CA" 
cada vez que la encuentre. 

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
	char word[30];
	int counter = 0;
	printf("Por favor, ingrese una palabra: ");
	fgets(word, sizeof(word), stdin);


	printf("Se ingresó ");
	for (int i = 0; i < strlen(word); i++){
		printf("%c", word[i]);
	}
	printf("\n");

	printf("Analizando presencia de 'CA' ");
	for (int i = 0; i < strlen(word); i++){
		if ((toupper(word[i]) == 'C' && toupper(word[i+1]) == 'A') || (toupper(word[i]) == 'A' && toupper(word[i-1]) == 'C')){
			printf("%c", toupper(word[i]));
			counter ++;
		}else{
			printf("%c", tolower(word[i]));
		}
	}
	printf("\n");
	printf("Se ha encontrado la secuencia CA %i veces. \n", (counter/2));
	return 0;
}
